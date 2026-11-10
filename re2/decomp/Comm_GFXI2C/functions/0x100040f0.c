// rea decompile_all
// name: FUN_100040f0
// address: 0x100040f0
// body: available
// range: 0x100040f0-0x100041ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000412e to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __thiscall FUN_100040f0(void *this,short *param_1)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  HMODULE pHVar5;
  short *psVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10058738;
  local_c = ExceptionList;
  uVar2 = DAT_10064168 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  piVar3 = (int *)FUN_10038f10();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80004005);
  }
  iVar4 = (**(code **)(*piVar3 + 0xc))(uVar2);
  *(int *)this = iVar4 + 0x10;
  uStack_4 = 0;
  if (param_1 == (short *)0x0) {
    iVar4 = 0;
  }
  else {
    if (((uint)param_1 & 0xffff0000) == 0) {
      pHVar5 = (HMODULE)FUN_1003d6fa();
      if (pHVar5 == (HMODULE)0x0) {
        ExceptionList = local_c;
        return this;
      }
      FUN_10003fb0(this,pHVar5,(uint)param_1 & 0xffff);
      ExceptionList = local_c;
      return this;
    }
    psVar6 = param_1;
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    iVar4 = (int)psVar6 - (int)(param_1 + 1) >> 1;
  }
  FUN_10002660(this,param_1,iVar4);
  ExceptionList = local_c;
  return this;
}

