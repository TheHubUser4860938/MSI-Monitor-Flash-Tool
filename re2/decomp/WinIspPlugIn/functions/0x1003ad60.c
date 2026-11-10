// rea decompile_all
// name: FUN_1003ad60
// address: 0x1003ad60
// body: available
// range: 0x1003ad60-0x1003af4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003ad60(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *in_ECX;
  int in_EDX;
  uint uVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  undefined **local_48;
  undefined2 local_44 [8];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c3620;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = 0;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_8 = 1;
  iVar1 = FUN_10017720(local_14);
  if (((iVar1 == 0) && (iVar1 = FUN_10017780(), iVar1 == 0)) &&
     ((iVar1 = (**(code **)(*DAT_10249d10 + 0x14))(), iVar1 != 2 ||
      ((DAT_1024a384 == 0 || (iVar1 = FUN_10019030(), iVar1 == 0)))))) {
    iVar1 = FUN_10029f00();
    iVar2 = (**(code **)(*DAT_10249d10 + 0x14))();
    if ((iVar2 == 2) && (DAT_1024a384 != 0)) {
      FUN_10019030();
    }
    if (iVar1 == 0) {
      puVar5 = (undefined4 *)(in_EDX + 4);
      *(undefined4 *)(in_EDX + 0x14) = 0;
      puVar3 = puVar5;
      if (7 < *(uint *)(in_EDX + 0x18)) {
        puVar3 = (undefined4 *)*puVar5;
      }
      *(undefined2 *)puVar3 = 0;
      uVar4 = (uint)*in_ECX;
      if (uVar4 == _DAT_1024e464) {
        iVar1 = 0;
        if (uVar4 != 0) {
          do {
            if (iVar1 == uVar4 - 1) {
              pwVar6 = L"%02d";
            }
            else {
              pwVar6 = L"%02d.";
            }
            FUN_10048350(&local_48,pwVar6,in_ECX[iVar1 + 1]);
            FUN_1002c980(local_44,0,0xffffffff);
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)uVar4);
        }
        if (7 < *(uint *)(in_EDX + 0x18)) {
          puVar5 = (undefined4 *)*puVar5;
        }
        FUN_10048350(&local_48,L"MergeFwGen2:%ls",puVar5);
        FUN_1003fc00();
        FUN_10016860();
      }
    }
  }
  FUN_10048130();
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

