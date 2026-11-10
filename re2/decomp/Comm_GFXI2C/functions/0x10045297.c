// rea decompile_all
// name: CDialogTemplate::SetTemplate
// address: 0x10045297
// body: available
// range: 0x10045297-0x100452f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CDialogTemplate::SetTemplate(struct DLGTEMPLATE const *,unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __thiscall CDialogTemplate::SetTemplate(CDialogTemplate *this,DLGTEMPLATE *param_1,uint param_2)

{
  HGLOBAL hMem;
  DLGTEMPLATE *pDVar1;
  int iVar2;
  
  *(uint *)(this + 4) = param_2;
  if (param_2 <= param_2 + 0x40) {
    hMem = GlobalAlloc(0x40,param_2 + 0x40);
    *(HGLOBAL *)this = hMem;
    if (hMem != (HGLOBAL)0x0) {
      pDVar1 = GlobalLock(hMem);
      FUN_10038b3c(pDVar1,*(rsize_t *)(this + 4),param_1,*(rsize_t *)(this + 4));
      iVar2 = HasFont(pDVar1);
      *(uint *)(this + 8) = (uint)(iVar2 == 0);
      GlobalUnlock(*(HGLOBAL *)this);
      return 1;
    }
  }
  return 0;
}

