// rea decompile_all
// name: CWnd::HandleFloatingSysCommand
// address: 0x10028de0
// body: available
// range: 0x10028de0-0x10028e97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CWnd::HandleFloatingSysCommand(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

int __thiscall CWnd::HandleFloatingSysCommand(CWnd *this,uint param_1,long param_2)

{
  HWND hWnd;
  CWnd *this_00;
  uint uVar1;
  HWND hWnd_00;
  HWND pHVar2;
  BOOL BVar3;
  
  this_00 = GetTopLevelParent(this);
  uVar1 = param_1 & 0xfff0;
  if ((uVar1 == 0xf040) || (uVar1 == 0xf050)) {
    if ((short)param_2 != 0x75) {
      return 0;
    }
    if (this_00 == (CWnd *)0x0) {
      return 0;
    }
    SetFocus(this_00);
  }
  else {
    if ((uVar1 != 0xf060) && (uVar1 != 0xf100)) {
      return 0;
    }
    if (((uVar1 == 0xf060) || (param_2 != 0)) && (this_00 != (CWnd *)0x0)) {
      hWnd = *(HWND *)(this + 0x20);
      hWnd_00 = GetFocus();
      pHVar2 = SetActiveWindow(*(HWND *)(this_00 + 0x20));
      FromHandle(pHVar2);
      SendMessageW(*(HWND *)(this_00 + 0x20),0x112,param_1,param_2);
      BVar3 = IsWindow(hWnd);
      if (BVar3 != 0) {
        SetActiveWindow(hWnd);
      }
      BVar3 = IsWindow(hWnd_00);
      if (BVar3 != 0) {
        ::SetFocus(hWnd_00);
      }
    }
  }
  return 1;
}

