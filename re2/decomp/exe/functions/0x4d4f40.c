// rea decompile_all
// name: CFrameWnd::GetMenu
// address: 0x4d4f40
// body: available
// range: 0x4d4f40-0x4d4f6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CMenu * __thiscall CFrameWnd::GetMenu(void)const 
   
   Library: Visual Studio 2015 Release */

CMenu * __thiscall CFrameWnd::GetMenu(CFrameWnd *this)

{
  code *pcVar1;
  HMENU__ *pHVar2;
  CMenu *pCVar3;
  undefined **ppuStack_8;
  
  if (*(int *)(this + 0x100) == 1) {
    ppuStack_8 = (undefined **)0x4d4f54;
    pHVar2 = ::GetMenu(*(HWND *)(this + 0x20));
  }
  else {
    if (*(int *)(this + 0x100) != 2) {
      ppuStack_8 = &PTR_vftable_0060c2c8;
      __CxxThrowException_8(&ppuStack_8,&DAT_005f8e28);
      pcVar1 = (code *)swi(3);
      pCVar3 = (CMenu *)(*pcVar1)();
      return pCVar3;
    }
    pHVar2 = *(HMENU__ **)(this + 0x104);
  }
  ppuStack_8 = (undefined **)0x4d4f6b;
  pCVar3 = CMenu::FromHandle(pHVar2);
  return pCVar3;
}

