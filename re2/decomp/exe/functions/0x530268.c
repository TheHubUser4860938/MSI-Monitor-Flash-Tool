// rea decompile_all
// name: COleIPFrameWnd::BuildSharedMenu
// address: 0x530268
// body: available
// range: 0x530268-0x530332 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall COleIPFrameWnd::BuildSharedMenu(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall COleIPFrameWnd::BuildSharedMenu(COleIPFrameWnd *this)

{
  COleIPFrameWnd *lpMenuWidths;
  code *pcVar1;
  HMENU__ *pHVar2;
  HMENU pHVar3;
  int iVar4;
  uint uVar5;
  HOLEMENU pvVar6;
  
  pcVar1 = *(code **)(*(int *)this + 0x1d8);
  guard_check_icall();
  pHVar2 = (HMENU__ *)(*pcVar1)();
  pHVar3 = CreateMenu();
  *(HMENU *)(this + 0x148) = pHVar3;
  uVar5 = 0;
  if (pHVar3 != (HMENU)0x0) {
    lpMenuWidths = this + 0x14c;
    _memset(lpMenuWidths,0,0x18);
    pcVar1 = *(code **)(**(int **)(this + 0x138) + 0x24);
    guard_check_icall(*(int **)(this + 0x138),*(undefined4 *)(this + 0x148),lpMenuWidths);
    iVar4 = (*pcVar1)();
    if (iVar4 == 0) {
      if (pHVar2 == (HMENU__ *)0x0) {
        uVar5 = 1;
      }
      else {
        pHVar2 = AfxMergeMenus(*(HMENU__ **)(this + 0x148),pHVar2,(long *)lpMenuWidths,1,
                               (uint)(*(int *)(this + 0x160) != 0));
        *(HMENU__ **)(this + 400) = pHVar2;
        pvVar6 = OleCreateMenuDescriptor
                           (*(HMENU *)(this + 0x148),(LPOLEMENUGROUPWIDTHS)lpMenuWidths);
        *(HOLEMENU *)(this + 0x164) = pvVar6;
        uVar5 = (uint)(pvVar6 != (HOLEMENU)0x0);
      }
    }
    else {
      DestroyMenu(*(HMENU *)(this + 0x148));
      *(undefined4 *)(this + 0x148) = 0;
      uVar5 = 0;
    }
  }
  return uVar5;
}

