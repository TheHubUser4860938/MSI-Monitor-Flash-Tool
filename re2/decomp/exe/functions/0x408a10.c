// rea decompile_all
// name: FUN_00408a10
// address: 0x408a10
// body: available
// range: 0x408a10-0x408bb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408b74 to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00408a10(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint *in_ECX;
  undefined4 extraout_ECX;
  void *_Memory;
  int in_EDX;
  uint uVar7;
  void *local_34 [5];
  uint local_20;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0059c599;
  local_10 = ExceptionList;
  uVar3 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  in_ECX[0] = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_8 = 0;
  uVar7 = 0;
  local_18 = 1;
  local_14 = in_EDX;
  while( true ) {
    if (*param_1 == '\0') {
      iVar4 = 0;
    }
    else {
      pcVar5 = param_1;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar4 = (int)pcVar5 - (int)(param_1 + 1);
    }
    iVar4 = FUN_0040c080(param_1,uVar7,iVar4);
    if (iVar4 == -1) break;
    if (iVar4 - uVar7 != 0) {
      uVar7 = FUN_00409870(local_34,uVar7,iVar4 - uVar7);
      local_8 = 1;
      if ((uVar7 < in_ECX[1]) && (uVar2 = *in_ECX, uVar2 <= uVar7)) {
        if (in_ECX[1] == in_ECX[2]) {
          FUN_0040bd80(extraout_ECX);
        }
        uVar7 = *in_ECX + ((int)(uVar7 - uVar2) / 0x18) * 0x18;
        uVar2 = in_ECX[1];
      }
      else {
        if (in_ECX[1] == in_ECX[2]) {
          FUN_0040bd80(extraout_ECX);
        }
        uVar2 = in_ECX[1];
      }
      if (uVar2 != 0) {
        FUN_00403500(uVar7);
      }
      in_ECX[1] = in_ECX[1] + 0x18;
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_20) {
        _Memory = local_34[0];
        if ((0xfff < local_20 + 1) &&
           ((((((uint)local_34[0] & 0x1f) != 0 ||
              (_Memory = *(void **)((int)local_34[0] + -4), local_34[0] <= _Memory)) ||
             ((uint)((int)local_34[0] - (int)_Memory) < 4)) ||
            (0x23 < (uint)((int)local_34[0] - (int)_Memory))))) {
                    /* WARNING: Subroutine does not return */
          FUN_0057663d();
        }
        FID_conflict__free(_Memory);
      }
    }
    uVar7 = iVar4 + 1;
  }
  if (uVar7 < *(uint *)(local_14 + 0x10)) {
    uVar6 = FUN_00409870(local_34,uVar7,0xffffffff);
    local_8 = 2;
    FUN_00409780(uVar6);
    FUN_004033e0(uVar3);
  }
  ExceptionList = local_10;
  return;
}

