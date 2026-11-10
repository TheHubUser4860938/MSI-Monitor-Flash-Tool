// rea decompile_all
// name: FUN_10006640
// address: 0x10006640
// body: available
// range: 0x10006640-0x100066ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10006640(uint param_1,uint param_2,char param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 <= (uint)(0xffffffff / (ulonglong)param_2)) {
    param_1 = param_1 * param_2;
    if ((param_3 == '\0') || (param_1 < 0x1000)) {
      uVar3 = FUN_100491ae();
      if (uVar3 != 0) {
        return uVar3;
      }
    }
    else {
      if (param_1 + 0x23 <= param_1) goto FUN_10180c1c;
      iVar2 = FUN_100491ae();
      if (iVar2 != 0) {
        uVar3 = iVar2 + 0x23U & 0xffffffe0;
        *(int *)(uVar3 - 4) = iVar2;
        return uVar3;
      }
    }
    FUN_1019aae6(0,0);
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
FUN_10180c1c:
  FUN_10180b8c();
  __CxxThrowException_8(&stack0xffffffec,&DAT_10236dfc);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

