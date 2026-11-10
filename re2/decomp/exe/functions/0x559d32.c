// rea decompile_all
// name: COleBusyDialog::DoModal
// address: 0x559d32
// body: available
// range: 0x559d32-0x559dcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall COleBusyDialog::DoModal(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall COleBusyDialog::DoModal(COleBusyDialog *this)

{
  HWND__ *pHVar1;
  uint uVar2;
  int iVar3;
  COleBusyDialog *local_8;
  
  pHVar1 = (HWND__ *)0x0;
  if (*(int *)(this + 0x94) != 0) {
    pHVar1 = *(HWND__ **)(*(int *)(this + 0x94) + 0x20);
  }
  local_8 = this;
  pHVar1 = CWnd::GetSafeOwner_(pHVar1,(HWND__ **)&local_8);
  *(HWND__ **)(this + 0xb8) = pHVar1;
  FUN_0042d91f(this);
  uVar2 = OleUIBusyW(this + 0xb0);
  FUN_0042dc8d();
  CWnd::Detach((CWnd *)this);
  if (local_8 != (COleBusyDialog *)0x0) {
    EnableWindow((HWND)local_8,1);
  }
  iVar3 = 2;
  if (uVar2 != 2) {
    if (uVar2 == 0x75) {
      *(undefined4 *)(this + 0xdc) = 1;
    }
    else {
      if (uVar2 != 0x76) {
        if (uVar2 == 0x77) {
          *(undefined4 *)(this + 0xdc) = 3;
          return 1;
        }
        iVar3 = COleDialog::MapResult((COleDialog *)this,uVar2);
      }
      *(int *)(this + 0xdc) = iVar3;
    }
    return 1;
  }
  return 2;
}

