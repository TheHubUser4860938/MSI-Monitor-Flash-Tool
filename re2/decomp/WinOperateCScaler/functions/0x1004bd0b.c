// rea decompile_all
// name: CMFCPropertyGridCtrl::ProcessClipboardAccelerators
// address: 0x1004bd0b
// body: available
// range: 0x1004bd0b-0x1004bdc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCPropertyGridCtrl::ProcessClipboardAccelerators(unsigned
   int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCPropertyGridCtrl::ProcessClipboardAccelerators(CMFCPropertyGridCtrl *this,uint param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  UINT Msg;
  
  if (*(int *)(this + 0x3d8) == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)(this + 0x3d8) + 0xb8);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0x20) == 0) {
    return 0;
  }
  uVar2 = GetAsyncKeyState(0x11);
  uVar3 = GetAsyncKeyState(0x10);
  if ((uVar2 & 0x8000) == 0) {
LAB_1004bd69:
    if (((uVar3 & 0x8000) == 0) || (param_1 != 0x2d)) {
      if ((((uVar2 & 0x8000) == 0) || (param_1 != 0x58)) &&
         (((uVar3 & 0x8000) == 0 || (param_1 != 0x2e)))) {
        return 0;
      }
      Msg = 0x300;
      goto LAB_1004bd86;
    }
  }
  else {
    if ((param_1 == 0x43) || (param_1 == 0x2d)) {
      Msg = 0x301;
      goto LAB_1004bd86;
    }
    if (param_1 != 0x56) goto LAB_1004bd69;
  }
  Msg = 0x302;
LAB_1004bd86:
  SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x3d8) + 0xb8) + 0x20),Msg,0,0);
  return 1;
}

