// rea decompile_all
// name: CPreviewDC::PrinterDPtoScreenDP
// address: 0x1017e6fc
// body: available
// range: 0x1017e6fc-0x1017e764 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CPreviewDC::PrinterDPtoScreenDP(struct tagPOINT *)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall CPreviewDC::PrinterDPtoScreenDP(CPreviewDC *this,tagPOINT *param_1)

{
  long lVar1;
  tagSIZE local_14;
  tagSIZE local_c;
  
  local_c.cx = 0;
  local_c.cy = 0;
  GetViewportExtEx(*(HDC *)(this + 8),&local_c);
  local_14.cx = 0;
  local_14.cy = 0;
  GetWindowExtEx(*(HDC *)(this + 8),&local_14);
  lVar1 = _AfxMultMultDivDiv(param_1->x,local_14.cx,*(int *)(this + 0x38),local_c.cx,
                             *(int *)(this + 0x30));
  param_1->x = lVar1;
  lVar1 = _AfxMultMultDivDiv(param_1->y,local_14.cy,*(int *)(this + 0x3c),local_c.cy,
                             *(int *)(this + 0x34));
  param_1->y = lVar1;
  return;
}

