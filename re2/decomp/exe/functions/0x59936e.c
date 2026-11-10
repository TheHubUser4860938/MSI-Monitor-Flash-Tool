// rea decompile_all
// name: FUN_0059936e
// address: 0x59936e
// body: available
// range: 0x59936e-0x599417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x599417 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0059936e(int param_1,wchar_t *param_2,rsize_t param_3)

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
      if (param_1 == *(int *)(&DAT_005e2b98 + iVar2 * 8)) goto LAB_005993cf;
      if (param_1 - *(int *)(&DAT_005e2b98 + iVar2 * 8) < 0) {
        iVar4 = iVar2 + -1;
      }
      else {
        iVar5 = iVar2 + 1;
      }
    } while (iVar5 <= iVar4);
    iVar2 = -1;
LAB_005993cf:
    if (-1 < iVar2) {
      _Src = *(wchar_t **)(&UNK_005e2b9c + iVar2 * 8);
      iVar4 = FUN_0057c4e2(_Src,0x55);
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

