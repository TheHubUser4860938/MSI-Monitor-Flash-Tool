// rea decompile_all
// name: FUN_10165b80
// address: 0x10165b80
// body: available
// range: 0x10165b80-0x10165c15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10165c15 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10165b80(char *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar6 = param_1;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + (1 - (int)(param_1 + 1));
  if ((char *)(-1 - param_3) < pcVar6) {
    uVar5 = 0xc;
  }
  else {
    pcVar7 = pcVar6 + param_3 + 1;
    iVar3 = __calloc_base(pcVar7,1);
    if (param_3 != 0) {
      iVar4 = FUN_10162f15(iVar3,pcVar7,param_2,param_3);
      if (iVar4 != 0) goto LAB_10165c09;
    }
    iVar4 = FUN_10162f15(iVar3 + param_3,(int)pcVar7 - param_3,param_1,pcVar6);
    if (iVar4 != 0) {
LAB_10165c09:
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

