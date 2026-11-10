// rea decompile_all
// name: FUN_1018491f
// address: 0x1018491f
// body: available
// range: 0x1018491f-0x101849c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101849c3 to 0x10180c1c FUN_10180c1c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


wchar_t * FUN_1018491f(char *param_1,undefined4 param_2,_Cvtvec *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  wchar_t *pwVar6;
  mbstate_t local_20;
  undefined4 local_1c;
  mbstate_t local_18;
  undefined4 local_14;
  wchar_t *local_10;
  char *local_c;
  wchar_t local_8 [2];
  
  local_18 = 0;
  local_14 = 0;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar5 = 0;
  pcVar3 = pcVar3 + (1 - (int)(param_1 + 1));
  local_c = pcVar3;
  pcVar4 = param_1;
  while ((pcVar3 != (char *)0x0 &&
         (iVar2 = __Mbrtowc(local_8,pcVar4,(size_t)pcVar3,&local_18,param_3), 0 < iVar2))) {
    pcVar4 = pcVar4 + iVar2;
    iVar5 = iVar5 + 1;
    pcVar3 = pcVar3 + -iVar2;
  }
  iVar5 = iVar5 + 1;
  local_10 = (wchar_t *)FUN_1019efc4(iVar5,2);
  if (local_10 != (wchar_t *)0x0) {
    local_20 = 0;
    local_1c = 0;
    pwVar6 = local_10;
    while ((iVar5 != 0 &&
           (iVar2 = __Mbrtowc(pwVar6,param_1,(size_t)local_c,&local_20,param_3), 0 < iVar2))) {
      param_1 = param_1 + iVar2;
      pwVar6 = pwVar6 + 1;
      iVar5 = iVar5 + -1;
    }
    *pwVar6 = L'\0';
    return local_10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10180c1c();
}

