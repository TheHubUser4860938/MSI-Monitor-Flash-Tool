// rea decompile_all
// name: CPreviewDC::ClipToPage
// address: 0x10153349
// body: available
// range: 0x10153349-0x101533cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CPreviewDC::ClipToPage(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPreviewDC::ClipToPage(CPreviewDC *this)

{
  int iVar1;
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  iVar1 = GetDeviceCaps(*(HDC *)(this + 8),10);
  local_c.x = GetDeviceCaps(*(HDC *)(this + 8),8);
  local_c.y = iVar1;
  PrinterDPtoScreenDP(this,&local_c);
  SetMapMode(*(HDC *)(this + 4),1);
  SetWindowOrgEx(*(HDC *)(this + 4),0,0,(LPPOINT)0x0);
  SetViewportOrgEx(*(HDC *)(this + 4),*(int *)(this + 0x20),*(int *)(this + 0x24),(LPPOINT)0x0);
  IntersectClipRect(*(HDC *)(this + 4),-1,-1,local_c.x + 2,local_c.y + 2);
  MirrorMappingMode(this,0);
  return;
}

