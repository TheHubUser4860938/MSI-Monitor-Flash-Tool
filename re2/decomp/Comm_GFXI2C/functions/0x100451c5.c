// rea decompile_all
// name: CDialogTemplate::GetTemplateSize
// address: 0x100451c5
// body: available
// range: 0x100451c5-0x10045296 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: static unsigned int __cdecl CDialogTemplate::GetTemplateSize(struct DLGTEMPLATE const
   *)
   
   Library: Visual Studio 2008 Release */

uint __cdecl CDialogTemplate::GetTemplateSize(DLGTEMPLATE *param_1)

{
  WORD WVar1;
  short *psVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t wVar5;
  bool bVar6;
  
  bVar6 = *(short *)((int)&param_1->style + 2) == -1;
  psVar2 = (short *)GetFontSizeField(param_1);
  iVar3 = HasFont(param_1);
  if (iVar3 != 0) {
    iVar3 = FUN_10047adf(psVar2 + (uint)bVar6 * 2 + 1);
    psVar2 = psVar2 + (uint)bVar6 * 2 + 1 + iVar3 + 1;
  }
  if (bVar6) {
    WVar1 = param_1->cy;
  }
  else {
    WVar1 = param_1->cdit;
  }
  if (WVar1 != 0) {
    do {
      pwVar4 = (wchar_t *)(((int)psVar2 + 3U & 0xfffffffc) + (-(uint)bVar6 & 6) + 0x12);
      if (*pwVar4 == L'\xffff') {
        pwVar4 = pwVar4 + 2;
      }
      else {
        pwVar4 = _SkipString(pwVar4);
      }
      if (*pwVar4 == L'\xffff') {
        pwVar4 = pwVar4 + 2;
      }
      else {
        pwVar4 = _SkipString(pwVar4);
      }
      wVar5 = *pwVar4;
      if ((wVar5 != L'\0') && (!bVar6)) {
        wVar5 = wVar5 + L'\xfffe';
      }
      WVar1 = WVar1 - 1;
      psVar2 = (short *)((int)pwVar4 + (ushort)wVar5 + 2);
    } while (WVar1 != 0);
  }
  return (int)psVar2 - (int)param_1;
}

