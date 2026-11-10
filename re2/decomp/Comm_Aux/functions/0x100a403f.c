// rea decompile_all
// name: CMFCOutlookBarPane::SetBackImage
// address: 0x100a403f
// body: available
// range: 0x100a403f-0x100a410e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCOutlookBarPane::SetBackImage(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCOutlookBarPane::SetBackImage(CMFCOutlookBarPane *this,uint param_1)

{
  AFX_MODULE_STATE *pAVar1;
  HBITMAP__ *h;
  AFX_GLOBAL_DATA *pAVar2;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(uint *)(this + 0x1db8) != param_1) {
    *(undefined4 *)(this + 0x1dd4) = 0;
    if (0 < *(int *)(this + 0xd54)) {
      FUN_10084467();
    }
    *(undefined4 *)(this + 0x1db8) = 0;
    if (param_1 != 0) {
      pAVar1 = AfxGetModuleState();
      h = LoadImageW(*(HINSTANCE *)(pAVar1 + 0xc),(LPCWSTR)(param_1 & 0xffff),0,0,0,0x3000);
      if (h != (HBITMAP__ *)0x0) {
        GetObjectW(h,0x18,local_1c);
        *(undefined4 *)(this + 0xda4) = local_18;
        *(undefined4 *)(this + 0xda8) = local_14;
        CMFCToolBarImages::AddImage((CMFCToolBarImages *)(this + 0xd50),h,0);
        *(uint *)(this + 0x1db8) = param_1;
      }
      pAVar2 = GetGlobalData();
      *(uint *)(this + 0x1dd4) = (uint)(8 < *(int *)(pAVar2 + 0x1ac));
    }
    if (*(int *)(this + 0x20) != 0) {
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
      UpdateWindow(*(HWND *)(this + 0x20));
    }
  }
  return;
}

