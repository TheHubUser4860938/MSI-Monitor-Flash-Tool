// rea decompile_all
// name: CFrameWnd::ShowOwnedWindows
// address: 0x4d7951
// body: available
// range: 0x4d7951-0x4d79ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CFrameWnd::ShowOwnedWindows(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameWnd::ShowOwnedWindows(CFrameWnd *this,int param_1)

{
  HWND hWnd;
  HWND__ *hWnd_00;
  CWnd *pCVar1;
  int iVar2;
  uint uVar3;
  UINT uCmd;
  
  uCmd = 5;
  hWnd = GetDesktopWindow();
  for (hWnd_00 = GetWindow(hWnd,uCmd); hWnd_00 != (HWND__ *)0x0; hWnd_00 = GetWindow(hWnd_00,2)) {
    pCVar1 = CWnd::FromHandlePermanent(hWnd_00);
    if (((pCVar1 != (CWnd *)0x0) && (*(HWND__ **)(this + 0x20) != hWnd_00)) &&
       (iVar2 = AfxIsDescendant(*(HWND__ **)(this + 0x20),hWnd_00), iVar2 != 0)) {
      uVar3 = GetWindowLongW(hWnd_00,-0x10);
      if (param_1 == 0) {
        if ((uVar3 & 0x18000000) == 0x10000000) {
          ShowWindow(hWnd_00,0);
          *(uint *)(pCVar1 + 0x60) = *(uint *)(pCVar1 + 0x60) | 2;
        }
      }
      else if ((((uVar3 & 0x18000000) == 0) && (((byte)pCVar1[0x60] & 2) != 0)) &&
              (*(int *)(this + 0xe0) == 0)) {
        ShowWindow(hWnd_00,4);
        *(uint *)(pCVar1 + 0x60) = *(uint *)(pCVar1 + 0x60) & 0xfffffffd;
      }
    }
  }
  return;
}

