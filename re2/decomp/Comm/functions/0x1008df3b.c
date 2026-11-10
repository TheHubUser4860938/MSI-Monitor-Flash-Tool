// rea decompile_all
// name: CMFCToolBarComboBoxButton::SetStyle
// address: 0x1008df3b
// body: available
// range: 0x1008df3b-0x1008dfdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarComboBoxButton::SetStyle(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarComboBoxButton::SetStyle(CMFCToolBarComboBoxButton *this,uint param_1)

{
  code *pcVar1;
  CWnd *pCVar2;
  int iVar3;
  uint uVar4;
  
  *(uint *)(this + 0x24) = param_1;
  if (DAT_101daf90 == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x60);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if ((iVar3 != 0) && ((*(uint *)(this + 0x24) & 0x40000) == 0)) {
      uVar4 = 0;
      goto LAB_1008df77;
    }
  }
  uVar4 = 1;
LAB_1008df77:
  pCVar2 = *(CWnd **)(this + 0xb4);
  if ((pCVar2 != (CWnd *)0x0) && (*(int *)(pCVar2 + 0x20) != 0)) {
    CWnd::EnableWindow(pCVar2,uVar4 ^ 1);
    RedrawWindow(*(HWND *)(*(int *)(this + 0xb4) + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
  pCVar2 = *(CWnd **)(this + 0xb0);
  if ((pCVar2 != (CWnd *)0x0) && (*(int *)(pCVar2 + 0x20) != 0)) {
    CWnd::EnableWindow(pCVar2,uVar4 ^ 1);
    RedrawWindow(*(HWND *)(*(int *)(this + 0xb0) + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
  return;
}

