// rea decompile_all
// name: CWinApp::DevModeChange
// address: 0x1003af9b
// body: available
// range: 0x1003af9b-0x1003b03b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CWinApp::DevModeChange(wchar_t *)
   
   Library: Visual Studio 2008 Release */

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
  
  if (*(HGLOBAL *)(this + 0x74) != (HGLOBAL)0x0) {
    local_8 = this;
    pvVar1 = GlobalLock(*(HGLOBAL *)(this + 0x74));
    iVar2 = lstrcmpW((LPCWSTR)((int)pvVar1 + (uint)*(ushort *)((int)pvVar1 + 2) * 2),param_1);
    if ((iVar2 == 0) &&
       (BVar3 = OpenPrinterW(param_1,&local_8,(LPPRINTER_DEFAULTSW)0x0), BVar3 != 0)) {
      if (*(void **)(this + 0x70) != (void *)0x0) {
        AfxGlobalFree(*(void **)(this + 0x70));
      }
      dwBytes = DocumentPropertiesW((HWND)0x0,local_8,param_1,(PDEVMODEW)0x0,(PDEVMODEW)0x0,0);
      hMem = GlobalAlloc(0x42,dwBytes);
      *(HGLOBAL *)(this + 0x70) = hMem;
      pDevModeOutput = GlobalLock(hMem);
      LVar4 = DocumentPropertiesW((HWND)0x0,local_8,param_1,pDevModeOutput,(PDEVMODEW)0x0,2);
      if (LVar4 != 1) {
        AfxGlobalFree(*(void **)(this + 0x70));
        *(undefined4 *)(this + 0x70) = 0;
      }
      ClosePrinter(local_8);
    }
  }
  return;
}

