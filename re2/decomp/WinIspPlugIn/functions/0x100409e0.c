// rea decompile_all
// name: FUN_100409e0
// address: 0x100409e0
// body: available
// range: 0x100409e0-0x10040b6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100409e0(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint *in_ECX;
  undefined4 extraout_ECX;
  int in_EDX;
  uint uVar6;
  undefined4 local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101c3b49;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_8 = 0;
  uVar6 = 0;
  while( true ) {
    if (*param_1 == '\0') {
      iVar3 = 0;
    }
    else {
      pcVar4 = param_1;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar3 = (int)pcVar4 - (int)(param_1 + 1);
    }
    iVar3 = FUN_100456b0(param_1,uVar6,iVar3);
    if (iVar3 == -1) break;
    if (iVar3 - uVar6 != 0) {
      uVar6 = FUN_10043c30(local_2c,uVar6,iVar3 - uVar6);
      local_8 = 1;
      if ((uVar6 < in_ECX[1]) && (uVar2 = *in_ECX, uVar2 <= uVar6)) {
        if (in_ECX[1] == in_ECX[2]) {
          FUN_10045240(extraout_ECX);
        }
        uVar6 = *in_ECX + ((int)(uVar6 - uVar2) / 0x18) * 0x18;
        uVar2 = in_ECX[1];
      }
      else {
        if (in_ECX[1] == in_ECX[2]) {
          FUN_10045240(extraout_ECX);
        }
        uVar2 = in_ECX[1];
      }
      if (uVar2 != 0) {
        FUN_100090c0(uVar6);
      }
      in_ECX[1] = in_ECX[1] + 0x18;
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        FUN_1000b630(local_2c[0],local_18 + 1);
      }
    }
    uVar6 = iVar3 + 1;
  }
  if (uVar6 < *(uint *)(in_EDX + 0x10)) {
    uVar5 = FUN_10043c30(local_2c,uVar6,0xffffffff);
    local_8 = 2;
    FUN_100438e0(uVar5);
    if (0xf < local_18) {
      FUN_1000b630(local_2c[0],local_18 + 1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

