// rea decompile_all
// name: FUN_10029d70
// address: 0x10029d70
// body: available
// range: 0x10029d70-0x10029efe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10029d70(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 in_ECX;
  int iVar3;
  undefined **local_64;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  char local_30;
  uint local_2f [6];
  undefined1 local_17;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c27d8;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = '\0';
  local_17 = 0;
  local_2f[0] = 0;
  local_2f[1] = 0;
  local_2f[2] = 0;
  local_2f[3] = 0;
  local_4c = 7;
  local_2f[4] = 0;
  local_2f[5] = 0;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffff0000;
  local_64 = CCpRsString::vftable;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  local_8 = 0;
  iVar1 = (**(code **)(*DAT_10249d10 + 0x220))(0x45,9,0,0xb,&local_30,local_14);
  FUN_10048350(&DAT_1024a13c,L"GetFwInfoInDebugMode Read data Error:0x%X, data0:0x%X",iVar1,local_30
              );
  FUN_10016860();
  _DAT_1024a150 = 0;
  puVar2 = &DAT_1024a140;
  if (7 < DAT_1024a154) {
    puVar2 = _DAT_1024a140;
  }
  iVar3 = 0;
  *puVar2 = 0;
  do {
    FUN_10048350(&local_64,L"0x%02X ,",(&local_30)[iVar3]);
    FUN_1002c980(local_60,0,0xffffffff);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  if ((((iVar1 == 0) && (local_30 == 'E')) && ((byte)local_2f[0] != 0xee)) &&
     ((byte)local_2f[0] < 0xb)) {
    FUN_10197c50(in_ECX,local_2f,(local_2f[0] & 0xff) + 1);
  }
  local_64 = CCpRsString::vftable;
  if (0xf < local_34) {
    FUN_1000b630(local_48,local_34 + 1);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  if (7 < local_4c) {
    FUN_1000b5d0(local_60[0],local_4c + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

