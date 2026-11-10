// rea decompile_all
// name: _Getloctxt<>
// address: 0x55fe3b
// body: available
// range: 0x55fe3b-0x55ffdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    int __cdecl std::_Getloctxt<unsigned short,class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >(class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > &,class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > &,unsigned int,unsigned short const *)
    int __cdecl std::_Getloctxt<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >(class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,unsigned int,wchar_t const *)
   
   Library: Visual Studio 2015 Release */

void _Getloctxt<>(int param_1,undefined4 param_2,uint param_3,short *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  short sVar4;
  undefined4 ****ppppuVar5;
  int iVar7;
  uint local_3c;
  uint local_38;
  undefined4 ***local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  uint uVar6;
  
  uStack_4 = 0x38;
  local_8 = 0x55fe47;
  iVar7 = 0;
  sVar4 = *param_4;
  while (sVar4 != 0) {
    if (sVar4 == *param_4) {
      param_3 = param_3 + 1;
    }
    iVar7 = iVar7 + 1;
    sVar4 = param_4[iVar7];
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  FUN_00404310(param_3,0);
  local_8 = 0;
  local_38 = 1;
  local_34 = local_2c[0];
  while( true ) {
    iVar7 = 0;
    bVar1 = false;
    local_3c = 0;
    if (param_3 == 0) break;
    do {
      sVar4 = param_4[iVar7];
      if (sVar4 != 0) {
        do {
          if (sVar4 == *param_4) break;
          iVar7 = iVar7 + 1;
          sVar4 = param_4[iVar7];
        } while (sVar4 != 0);
      }
      ppppuVar5 = (undefined4 ****)local_34;
      if (local_18 < 0x10) {
        ppppuVar5 = local_2c;
      }
      if (*(char *)((int)ppppuVar5 + local_3c) == '\0') {
        iVar7 = iVar7 + local_38;
        if ((param_4[iVar7] == *param_4) || (param_4[iVar7] == 0)) {
          uVar6 = local_38;
          if (0x7e < local_38) {
            uVar6 = 0x7f;
          }
          uVar2 = (undefined1)uVar6;
          if (local_18 < 0x10) {
            local_34 = local_2c;
          }
        }
        else {
          cVar3 = equal(param_2);
          if (cVar3 == '\0') {
            if (*(char *)(param_1 + 4) == '\0') {
              Peek();
            }
            if (param_4[iVar7] == *(short *)(param_1 + 6)) {
              bVar1 = true;
              goto LAB_0055ff90;
            }
          }
          uVar6 = local_38;
          if (0x7e < local_38) {
            uVar6 = 0x7f;
          }
          uVar2 = (undefined1)uVar6;
          if (local_18 < 0x10) {
            local_34 = local_2c;
          }
        }
        *(undefined1 *)((int)local_34 + local_3c) = uVar2;
        local_34 = local_2c[0];
      }
      else {
        ppppuVar5 = (undefined4 ****)local_34;
        if (local_18 < 0x10) {
          ppppuVar5 = local_2c;
        }
        iVar7 = iVar7 + *(char *)((int)ppppuVar5 + local_3c);
      }
LAB_0055ff90:
      local_3c = local_3c + 1;
    } while (local_3c < param_3);
    if ((!bVar1) || (cVar3 = equal(param_2), cVar3 != '\0')) break;
    local_38 = local_38 + 1;
    Inc();
  }
  FUN_00404250(1,0);
  FUN_0055bae6();
  return;
}

