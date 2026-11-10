// rea decompile_all
// name: CMFCHeaderCtrl::CommonInit
// address: 0x1008f1db
// body: available
// range: 0x1008f1db-0x1008f217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCHeaderCtrl::CommonInit(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCHeaderCtrl::CommonInit(CMFCHeaderCtrl *this)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  
  pHVar2 = *(HWND *)(this + 0x20);
  while( true ) {
    pHVar2 = GetParent(pHVar2);
    pCVar3 = CWnd::FromHandle(pHVar2);
    if (pCVar3 == (CWnd *)0x0) {
      return;
    }
    iVar1 = FUN_10019d4f(&PTR_s_CDialog_10180a68);
    if (iVar1 != 0) break;
    pHVar2 = *(HWND *)(pCVar3 + 0x20);
  }
  *(undefined4 *)(this + 0xac) = 1;
  return;
}

