// rea decompile_all
// name: FUN_10003fb0
// address: 0x10003fb0
// body: available
// range: 0x10003fb0-0x10004074 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10004070 to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_10003fb0(void *this,HMODULE param_1,uint param_2)

{
  ushort uVar1;
  HRSRC pHVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  errno_t eVar6;
  uint uVar7;
  
  pHVar2 = FindResourceW(param_1,(LPCWSTR)((param_2 >> 4) + 1 & 0xffff),(LPCWSTR)0x6);
  if ((pHVar2 == (HRSRC)0x0) ||
     (puVar3 = (ushort *)FUN_10003e70(param_1,pHVar2,param_2), puVar3 == (ushort *)0x0)) {
    return 0;
  }
  uVar7 = (uint)*puVar3;
  if ((int)(1U - *(int *)(*(int *)this + -4) | *(int *)(*(int *)this + -8) - uVar7) < 0) {
    ATL::CSimpleStringT<char,0>::PrepareWrite2(this,uVar7);
  }
  uVar4 = (uint)*puVar3;
  if (uVar4 == 0xffffffff) {
    puVar5 = puVar3 + 1;
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (uVar1 != 0);
    uVar4 = ((int)puVar5 - (int)(puVar3 + 2) >> 1) + 1;
  }
  eVar6 = _memcpy_s(*(void **)this,uVar7 * 2,puVar3 + 1,uVar4 * 2);
  FUN_10003f20(eVar6);
  if (*(int *)(*(int *)this + -8) < (int)uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80070057);
  }
  *(uint *)(*(int *)this + -0xc) = uVar7;
  *(undefined2 *)(uVar7 * 2 + *(int *)this) = 0;
  return 1;
}

