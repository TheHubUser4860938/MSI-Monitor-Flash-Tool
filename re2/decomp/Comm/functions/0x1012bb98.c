// rea decompile_all
// name: COleIPFrameWnd::PreTranslateMessage
// address: 0x1012bb98
// body: available
// range: 0x1012bb98-0x1012bc31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall COleIPFrameWnd::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall COleIPFrameWnd::PreTranslateMessage(COleIPFrameWnd *this,tagMSG *param_1)

{
  code *pcVar1;
  COleIPFrameWnd *pCVar2;
  int iVar3;
  HACCEL hAccelSrc;
  BOOL BVar4;
  HRESULT HVar5;
  COleIPFrameWnd *pCVar6;
  tagOIFI *ptVar7;
  tagMSG *lpMsg;
  WORD *lpwCmd;
  tagOIFI local_1c;
  COleIPFrameWnd *local_8;
  
  local_8 = this;
  iVar3 = FUN_10087461(param_1);
  if (iVar3 != 0) {
    return 1;
  }
  if ((param_1->message < 0x100) || (0x109 < param_1->message)) {
LAB_1012bc27:
    iVar3 = 0;
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x1ac);
    guard_check_icall();
    hAccelSrc = (HACCEL)(*pcVar1)();
    if (hAccelSrc == (HACCEL)0x0) {
LAB_1012bbfc:
      pCVar2 = local_8;
      pCVar6 = this + 0x124;
      ptVar7 = &local_1c;
      for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        ptVar7->cb = *(UINT *)pCVar6;
        pCVar6 = pCVar6 + 4;
        ptVar7 = (tagOIFI *)&ptVar7->fMDIApp;
      }
      HVar5 = OleTranslateAccelerator(*(LPOLEINPLACEFRAME *)(pCVar2 + 0x138),&local_1c,param_1);
      if (HVar5 != 0) goto LAB_1012bc27;
    }
    else {
      lpwCmd = (WORD *)0x0;
      lpMsg = param_1;
      iVar3 = CopyAcceleratorTableW(hAccelSrc,(LPACCEL)0x0,0);
      BVar4 = IsAccelerator(hAccelSrc,iVar3,lpMsg,lpwCmd);
      if (BVar4 == 0) goto LAB_1012bbfc;
    }
    iVar3 = 1;
  }
  return iVar3;
}

