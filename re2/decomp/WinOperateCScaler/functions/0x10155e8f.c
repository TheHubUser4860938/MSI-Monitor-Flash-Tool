// rea decompile_all
// name: std::_Getloctxt<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>
// address: 0x10155e8f
// body: available
// range: 0x10155e8f-0x10156024 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    int __cdecl std::_Getloctxt<char,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > >(class std::istreambuf_iterator<char,struct std::char_traits<char> >
   &,class std::istreambuf_iterator<char,struct std::char_traits<char> > &,unsigned int,char const
   *)
   
   Library: Visual Studio 2015 Release */

int __cdecl
std::_Getloctxt<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>
          (istreambuf_iterator<char,std::char_traits<char>_> *param_1,
          istreambuf_iterator<char,std::char_traits<char>_> *param_2,uint param_3,char *param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined4 ****ppppuVar5;
  char *pcVar7;
  int iVar8;
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
  local_8 = 0x10155e9b;
  cVar1 = *param_4;
  pcVar7 = param_4;
  while (cVar1 != '\0') {
    if (cVar1 == *param_4) {
      param_3 = param_3 + 1;
    }
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  FUN_1001ad30(param_3,0);
  local_8 = 0;
  local_38 = 1;
  local_34 = local_2c[0];
  while( true ) {
    iVar8 = 0;
    bVar4 = false;
    local_3c = 0;
    if (param_3 == 0) break;
    do {
      cVar1 = param_4[iVar8];
      if (cVar1 != '\0') {
        do {
          if (cVar1 == *param_4) break;
          iVar8 = iVar8 + 1;
          cVar1 = param_4[iVar8];
        } while (cVar1 != '\0');
      }
      ppppuVar5 = (undefined4 ****)local_34;
      if (local_18 < 0x10) {
        ppppuVar5 = local_2c;
      }
      if (*(char *)((int)ppppuVar5 + local_3c) == '\0') {
        iVar8 = iVar8 + local_38;
        if ((param_4[iVar8] == *param_4) || (param_4[iVar8] == '\0')) {
          uVar6 = local_38;
          if (0x7e < local_38) {
            uVar6 = 0x7f;
          }
          uVar3 = (undefined1)uVar6;
          if (local_18 < 0x10) {
            local_34 = local_2c;
          }
        }
        else {
          bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                            (param_1,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)
                                     param_2);
          if (!bVar2) {
            if (param_1[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
              istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_1);
            }
            if (*(istreambuf_iterator<char,std::char_traits<char>_> *)(param_4 + iVar8) ==
                param_1[5]) {
              bVar4 = true;
              goto LAB_10155fd9;
            }
          }
          uVar6 = local_38;
          if (0x7e < local_38) {
            uVar6 = 0x7f;
          }
          uVar3 = (undefined1)uVar6;
          if (local_18 < 0x10) {
            local_34 = local_2c;
          }
        }
        *(undefined1 *)((int)local_34 + local_3c) = uVar3;
        local_34 = local_2c[0];
      }
      else {
        ppppuVar5 = (undefined4 ****)local_34;
        if (local_18 < 0x10) {
          ppppuVar5 = local_2c;
        }
        iVar8 = iVar8 + *(char *)((int)ppppuVar5 + local_3c);
      }
LAB_10155fd9:
      local_3c = local_3c + 1;
    } while (local_3c < param_3);
    if ((!bVar4) ||
       (bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                          (param_1,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)
                                   param_2), bVar4)) break;
    local_38 = local_38 + 1;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_1);
  }
  FUN_10003850(1,0);
  iVar8 = FUN_10154478();
  return iVar8;
}

