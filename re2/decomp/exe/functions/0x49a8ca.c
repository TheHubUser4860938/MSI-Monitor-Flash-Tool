// rea decompile_all
// name: CMFCRibbonRichEditCtrl::ProcessClipboardAccelerators
// address: 0x49a8ca
// body: available
// range: 0x49a8ca-0x49a951 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCRibbonRichEditCtrl::ProcessClipboardAccelerators(unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCRibbonRichEditCtrl::ProcessClipboardAccelerators(CMFCRibbonRichEditCtrl *this,uint param_1)

{
  ushort uVar1;
  ushort uVar2;
  UINT Msg;
  
  uVar1 = GetAsyncKeyState(0x11);
  uVar2 = GetAsyncKeyState(0x10);
  if ((uVar1 & 0x8000) == 0) {
LAB_0049a901:
    if (((uVar2 & 0x8000) == 0) || (param_1 != 0x2d)) {
      if ((((uVar1 & 0x8000) == 0) || (param_1 != 0x58)) &&
         (((uVar2 & 0x8000) == 0 || (param_1 != 0x2e)))) {
        return 0;
      }
      Msg = 0x300;
      goto LAB_0049a91e;
    }
  }
  else {
    if ((param_1 == 0x43) || (param_1 == 0x2d)) {
      Msg = 0x301;
      goto LAB_0049a91e;
    }
    if (param_1 != 0x56) goto LAB_0049a901;
  }
  Msg = 0x302;
LAB_0049a91e:
  SendMessageW(*(HWND *)(this + 0x20),Msg,0,0);
  return 1;
}

