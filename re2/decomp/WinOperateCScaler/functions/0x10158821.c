// rea decompile_all
// name: _Getloctxt<>
// address: 0x10158821
// body: available
// range: 0x10158821-0x101589ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    int __cdecl std::_Getloctxt<char,class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >(class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > &,class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > &,unsigned int,char const *)
    int __cdecl std::_Getloctxt<char,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >(class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,unsigned int,char const *)
   
   Library: Visual Studio 2015 Release */

void _Getloctxt<>(int param_1,undefined4 param_2,uint param_3,char *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 ****ppppuVar4;
  char *pcVar6;
  int iVar7;
  uint local_3c;
  uint local_38;
  undefined4 ***local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  uint uVar5;
  
  uStack_4 = 0x38;
  local_8 = 0x1015882d;
  cVar3 = *param_4;
  pcVar6 = param_4;
  while (cVar3 != '\0') {
    if (cVar3 == *param_4) {
      param_3 = param_3 + 1;
    }
    pcVar6 = pcVar6 + 1;
    cVar3 = *pcVar6;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  FUN_1001ad30(param_3,0);
  local_8 = 0;
  local_38 = 1;
  local_34 = local_2c[0];
  while( true ) {
    iVar7 = 0;
    bVar1 = false;
    local_3c = 0;
    if (param_3 == 0) break;
    do {
      cVar3 = param_4[iVar7];
      if (cVar3 != '\0') {
        do {
          if (cVar3 == *param_4) break;
          iVar7 = iVar7 + 1;
          cVar3 = param_4[iVar7];
        } while (cVar3 != '\0');
      }
      ppppuVar4 = (undefined4 ****)local_34;
      if (local_18 < 0x10) {
        ppppuVar4 = local_2c;
      }
      if (*(char *)((int)ppppuVar4 + local_3c) == '\0') {
        iVar7 = iVar7 + local_38;
        if ((param_4[iVar7] == *param_4) || (param_4[iVar7] == '\0')) {
          uVar5 = local_38;
          if (0x7e < local_38) {
            uVar5 = 0x7f;
          }
          uVar2 = (undefined1)uVar5;
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
            if ((int)param_4[iVar7] == (uint)*(ushort *)(param_1 + 6)) {
              bVar1 = true;
              goto LAB_1015896f;
            }
          }
          uVar5 = local_38;
          if (0x7e < local_38) {
            uVar5 = 0x7f;
          }
          uVar2 = (undefined1)uVar5;
          if (local_18 < 0x10) {
            local_34 = local_2c;
          }
        }
        *(undefined1 *)((int)local_34 + local_3c) = uVar2;
        local_34 = local_2c[0];
      }
      else {
        ppppuVar4 = (undefined4 ****)local_34;
        if (local_18 < 0x10) {
          ppppuVar4 = local_2c;
        }
        iVar7 = iVar7 + *(char *)((int)ppppuVar4 + local_3c);
      }
LAB_1015896f:
      local_3c = local_3c + 1;
    } while (local_3c < param_3);
    if ((!bVar1) || (cVar3 = equal(param_2), cVar3 != '\0')) break;
    local_38 = local_38 + 1;
    Inc();
  }
  FUN_10003850(1,0);
  FUN_10154478();
  return;
}

