// rea decompile_all
// name: CPreviewDC::MirrorViewportOrg
// address: 0x55a8aa
// body: available
// range: 0x55a8aa-0x55a925 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPreviewDC::MirrorViewportOrg(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPreviewDC::MirrorViewportOrg(CPreviewDC *this)

{
  tagPOINT local_14;
  tagPOINT local_c;
  
  if ((*(int *)(this + 8) != 0) && (*(int *)(this + 4) != 0)) {
    local_c.x = 0;
    local_c.y = 0;
    GetViewportOrgEx(*(HDC *)(this + 8),&local_c);
    PrinterDPtoScreenDP(this,&local_c);
    local_c.y = local_c.y + *(int *)(this + 0x24);
    local_c.x = local_c.x + *(int *)(this + 0x20);
    SetViewportOrgEx(*(HDC *)(this + 4),local_c.x,local_c.y,(LPPOINT)0x0);
    local_14.x = 0;
    local_14.y = 0;
    GetWindowOrgEx(*(HDC *)(this + 8),&local_14);
    SetWindowOrgEx(*(HDC *)(this + 4),local_14.x,local_14.y,(LPPOINT)0x0);
  }
  return;
}

