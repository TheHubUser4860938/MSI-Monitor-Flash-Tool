// rea decompile_all
// name: FUN_1016a300
// address: 0x1016a300
// body: available
// range: 0x1016a300-0x1016a3a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1016a3a9 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1016a300(int param_1,wchar_t *param_2,rsize_t param_3)

{
  wchar_t *_Src;
  code *pcVar1;
  int iVar2;
  errno_t eVar3;
  int iVar4;
  int iVar5;
  
  if ((((param_1 != 0) && (param_1 != 0x400)) && (param_1 != 0x800)) &&
     (((param_2 != (wchar_t *)0x0 || ((int)param_3 < 1)) && (-1 < (int)param_3)))) {
    iVar5 = 0;
    iVar4 = 0xe3;
    do {
      iVar2 = (iVar4 + iVar5) / 2;
      if (param_1 == *(int *)(&DAT_101afb58 + iVar2 * 8)) goto LAB_1016a361;
      if (param_1 - *(int *)(&DAT_101afb58 + iVar2 * 8) < 0) {
        iVar4 = iVar2 + -1;
      }
      else {
        iVar5 = iVar2 + 1;
      }
    } while (iVar5 <= iVar4);
    iVar2 = -1;
LAB_1016a361:
    if (-1 < iVar2) {
      _Src = *(wchar_t **)(&UNK_101afb5c + iVar2 * 8);
      iVar4 = FUN_101537ac(_Src,0x55);
      if (0 < (int)param_3) {
        if ((int)param_3 <= iVar4) {
          return 0;
        }
        eVar3 = _wcscpy_s(param_2,param_3,_Src);
        if (eVar3 != 0) {
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      return iVar4 + 1;
    }
  }
  return 0;
}

