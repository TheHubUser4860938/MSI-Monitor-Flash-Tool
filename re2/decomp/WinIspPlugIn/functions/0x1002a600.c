// rea decompile_all
// name: FUN_1002a600
// address: 0x1002a600
// body: available
// range: 0x1002a600-0x1002a9ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a600(uint param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  undefined4 local_168;
  undefined4 local_164;
  byte local_15e;
  undefined1 local_15d;
  undefined **local_15c;
  undefined2 local_158;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_140;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128;
  undefined1 local_127 [255];
  char local_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  byte bStack_23;
  undefined2 uStack_22;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined1 local_1b;
  undefined1 uStack_1a;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c2876;
  local_10 = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = uVar1;
  _memset(&local_128,0,0x100);
  local_15d = 4;
  local_28 = '\0';
  uStack_27 = 0;
  uStack_26 = 0;
  uStack_25 = 0;
  uStack_24 = 0;
  bStack_23 = 0;
  uStack_22 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_1b = 0;
  uStack_1a = 0;
  local_144 = 7;
  local_148 = 0;
  local_158 = 0;
  local_15c = CCpRsString::vftable;
  local_12c = 0xf;
  local_130 = 0;
  local_140 = 0;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x10) != 0) {
    FUN_10045540(L"Get Project ID Addr",0x13);
    FUN_10016860(uVar1);
    local_128 = 5;
    iVar2 = (**(code **)(*DAT_10249d10 + 0x54))(0x3a,0x31,1,&local_128);
    if (iVar2 == 0) {
      Sleep(*(int *)(in_ECX + 0xc) * 0x28);
      uStack_20 = 0;
      local_28 = '\0';
      uStack_27 = 0;
      uStack_26 = 0;
      uStack_25 = 0;
      uStack_24 = 0;
      bStack_23 = 0;
      uStack_22 = 0;
      uStack_1c = 0;
      local_1b = 0;
      uStack_1a = 0;
      iVar2 = (**(code **)(*DAT_10249d10 + 0x58))(0x3a,0x31,6,&local_28);
      if (iVar2 == 0) {
        if (local_28 == '\x11') {
          local_168 = 0;
          local_164 = 0;
          local_168 = FUN_1000c2b0();
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_10007610(&local_168);
          iVar2 = CONCAT31(CONCAT21(CONCAT11(uStack_27,uStack_26),uStack_25),uStack_24);
          local_15e = bStack_23;
          uVar1 = (uint)bStack_23;
          if (param_1 < uVar1 + iVar2) {
            FUN_10048350(&local_15c,L"Get Project ID Addr Fail.Data Error  0x%X",local_28);
            FUN_10016860();
            (**(code **)(*DAT_10249d10 + 0x54))(0x3a,0x31,1,&local_15d);
            FUN_10007b30();
          }
          else {
            FUN_10048240(L"Verify Project ID Addr");
            FUN_10016860();
            local_128 = 6;
            FUN_10197c50(local_127,in_EDX + iVar2,uVar1);
            iVar2 = (**(code **)(*DAT_10249d10 + 0x54))(0x3a,0x31,local_15e + 1,&local_128);
            if (iVar2 == 0) {
              Sleep(*(DWORD *)(in_ECX + 0xc));
              iVar2 = FUN_1002aa00();
              if (iVar2 == 0) {
                FUN_10007b30();
              }
              else {
                FUN_10048350(&local_15c,
                             L"Polling Status in check project id fail, error code:0x%x, Send Exit Command"
                             ,iVar2);
                FUN_10016860();
                (**(code **)(*DAT_10249d10 + 0x54))(0x3a,0x31,1,&local_15d);
                FUN_10007b30();
              }
            }
            else {
              FUN_10048350(&local_15c,L"Send Backgroudn FW Update Start Command Error Code %d",iVar2
                          );
              FUN_10016860();
              (**(code **)(*DAT_10249d10 + 0x54))(0x3a,0x31,1,&local_15d);
              FUN_10007b30();
            }
          }
        }
        else {
          FUN_10048350(&local_15c,L"Get Project ID Addr Fail.Data Error  0x%X",local_28);
          FUN_10016860();
          (**(code **)(*DAT_10249d10 + 0x54))(0x3a,0x31,1,&local_15d);
        }
      }
      else {
        FUN_10048350(&local_15c,L"Error Code 0x%X",iVar2);
        FUN_10016860();
        (**(code **)(*DAT_10249d10 + 0x54))(0x3a,0x31,1,&local_15d);
      }
    }
    else {
      FUN_10048350(&local_15c,L"Send Backgroudn FW Update Start Command Error Code %d",iVar2);
      FUN_10016860();
      (**(code **)(*DAT_10249d10 + 0x54))(0x3a,0x31,1,&local_15d);
    }
  }
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

