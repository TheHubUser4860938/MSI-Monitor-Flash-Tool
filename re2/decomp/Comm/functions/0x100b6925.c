// rea decompile_all
// name: CMDIChildWndEx::OnSetIcon
// address: 0x100b6925
// body: available
// range: 0x100b6925-0x100b694d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: struct HICON__ * __thiscall CMDIChildWndEx::OnSetIcon(int,struct HICON__ *)
   
   Library: Visual Studio 2015 Release */

HICON__ * __thiscall CMDIChildWndEx::OnSetIcon(CMDIChildWndEx *this,int param_1,HICON__ *param_2)

{
  HICON__ *pHVar1;
  
  pHVar1 = (HICON__ *)FUN_1001d029();
  if (*(int *)(this + 0x448) != 0) {
    CMDIClientAreaWnd::UpdateTabs((CMDIClientAreaWnd *)(*(int *)(this + 0x448) + 0x458),0);
  }
  return pHVar1;
}

