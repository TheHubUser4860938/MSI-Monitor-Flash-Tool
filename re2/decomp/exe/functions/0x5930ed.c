// rea decompile_all
// name: FUN_005930ed
// address: 0x5930ed
// body: available
// range: 0x5930ed-0x59318a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x59318a with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005930ed(short *param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  
  psVar6 = param_1;
  do {
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar1 != 0);
  uVar7 = ((int)psVar6 - (int)(param_1 + 1) >> 1) + 1;
  if (-param_3 - 1U < uVar7) {
    uVar5 = 0xc;
  }
  else {
    iVar8 = param_3 + 1 + uVar7;
    iVar3 = __calloc_base(iVar8,2);
    if (param_3 != 0) {
      iVar4 = FUN_0057efe7(iVar3,iVar8,param_2,param_3);
      if (iVar4 != 0) goto LAB_0059317e;
    }
    iVar8 = FUN_0057efe7(iVar3 + param_3 * 2,iVar8 - param_3,param_1,uVar7);
    if (iVar8 != 0) {
LAB_0059317e:
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    uVar5 = append(iVar3);
    FID_conflict__free((void *)0x0);
  }
  return uVar5;
}

