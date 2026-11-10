// rea decompile_all
// name: CMFCToolBarComboBoxButton::IsOwnerOf
// address: 0x4a3233
// body: available
// range: 0x4a3233-0x4a32b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarComboBoxButton::IsOwnerOf(struct HWND__ *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBarComboBoxButton::IsOwnerOf(CMFCToolBarComboBoxButton *this,HWND__ *param_1)

{
  int iVar1;
  HWND hWndParent;
  BOOL BVar2;
  HWND__ *pHVar3;
  HWND hWndParent_00;
  
  hWndParent_00 = (HWND)0x0;
  iVar1 = *(int *)(this + 0xb4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
    pHVar3 = (HWND__ *)0x0;
    if (iVar1 != 0) {
      pHVar3 = *(HWND__ **)(iVar1 + 0x20);
    }
    if (pHVar3 == param_1) {
      return 1;
    }
    if (iVar1 == 0) {
      hWndParent = (HWND)0x0;
    }
    else {
      hWndParent = *(HWND *)(iVar1 + 0x20);
    }
    BVar2 = IsChild(hWndParent,param_1);
    if (BVar2 != 0) {
      return 1;
    }
  }
  iVar1 = *(int *)(this + 0xb0);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x20) == 0)) {
    return 0;
  }
  pHVar3 = (HWND__ *)0x0;
  if (iVar1 != 0) {
    pHVar3 = *(HWND__ **)(iVar1 + 0x20);
  }
  if (pHVar3 != param_1) {
    if (iVar1 != 0) {
      hWndParent_00 = *(HWND *)(iVar1 + 0x20);
    }
    BVar2 = IsChild(hWndParent_00,param_1);
    if (BVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

