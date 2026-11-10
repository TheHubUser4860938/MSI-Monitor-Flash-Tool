// rea decompile_all
// name: CMDIChildWndEx::AddTabbedPane
// address: 0x4c5a44
// body: available
// range: 0x4c5a44-0x4c5ad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMDIChildWndEx::AddTabbedPane(class CDockablePane *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIChildWndEx::AddTabbedPane(CMDIChildWndEx *this,CDockablePane *param_1)

{
  code *pcVar1;
  
  *(CDockablePane **)(this + 0x444) = param_1;
  pcVar1 = *(code **)(*(int *)param_1 + 0x21c);
  guard_check_icall(this,0);
  (*pcVar1)();
  pcVar1 = *(code **)(**(int **)(this + 0x444) + 0x1f0);
  guard_check_icall(0);
  (*pcVar1)();
  CWnd::SetParent(*(CWnd **)(this + 0x444),(CWnd *)this);
  CWnd::ShowWindow(*(CWnd **)(this + 0x444),5);
  *(undefined4 *)(*(int *)(this + 0x444) + 0x90) = 1;
  CDockingManager::RemoveHiddenMDITabbedBar
            ((CDockingManager *)(*(int *)(this + 0x448) + 0x160),*(CDockablePane **)(this + 0x444));
  AdjustClientArea(this);
  return;
}

