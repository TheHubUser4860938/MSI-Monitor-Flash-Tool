// rea decompile_all
// name: CWinApp::DevModeChange
// address: 0x416baf
// body: available
// range: 0x416baf-0x416c50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CWinApp::DevModeChange(wchar_t *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CWinApp::DevModeChange(CWinApp *this,wchar_t *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  BOOL BVar3;
  SIZE_T dwBytes;
  HGLOBAL hMem;
  PDEVMODEW pDevModeOutput;
  LONG LVar4;
  CWinApp *local_8;
  
  if (*(int *)(this + 0x78) != 0) {
    local_8 = this;
    pvVar1 = GlobalLock(*(HGLOBAL *)(this + 0x78));
    iVar2 = lstrcmpW((LPCWSTR)((int)pvVar1 + (uint)*(ushort *)((int)pvVar1 + 2) * 2),param_1);
    if ((iVar2 == 0) &&
       (BVar3 = OpenPrinterW(param_1,&local_8,(LPPRINTER_DEFAULTSW)0x0), BVar3 != 0)) {
      if (*(int *)(this + 0x74) != 0) {
        AfxGlobalFree(*(void **)(this + 0x74));
      }
      dwBytes = DocumentPropertiesW((HWND)0x0,local_8,param_1,(PDEVMODEW)0x0,(PDEVMODEW)0x0,0);
      hMem = GlobalAlloc(0x42,dwBytes);
      *(HGLOBAL *)(this + 0x74) = hMem;
      pDevModeOutput = GlobalLock(hMem);
      LVar4 = DocumentPropertiesW((HWND)0x0,local_8,param_1,pDevModeOutput,(PDEVMODEW)0x0,2);
      if (LVar4 != 1) {
        AfxGlobalFree(*(void **)(this + 0x74));
        *(undefined4 *)(this + 0x74) = 0;
      }
      ClosePrinter(local_8);
    }
  }
  return;
}

