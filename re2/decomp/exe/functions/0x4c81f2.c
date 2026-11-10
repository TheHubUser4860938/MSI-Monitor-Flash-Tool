// rea decompile_all
// name: CMDIChildWndEx::SetTaskbarThumbnailClipRect
// address: 0x4c81f2
// body: available
// range: 0x4c81f2-0x4c82a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMDIChildWndEx::SetTaskbarThumbnailClipRect(class CRect)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMDIChildWndEx::SetTaskbarThumbnailClipRect(CMDIChildWndEx *this)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  CFrameWnd *pCVar3;
  CObject *this_00;
  CMDIChildWnd *pCVar4;
  int iVar5;
  ITaskbarList3 *pIVar6;
  BOOL BVar7;
  undefined1 *puVar8;
  
  pAVar2 = GetGlobalData();
  puVar8 = (undefined1 *)0x0;
  if (*(int *)(pAVar2 + 0x17c) != 0) {
    pCVar3 = CWnd::GetTopLevelFrame((CWnd *)this);
    this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_005bad18,(CObject *)pCVar3);
    if ((this_00 != (CObject *)0x0) &&
       (pCVar4 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)this_00,(int *)0x0),
       pCVar4 == (CMDIChildWnd *)this)) {
      iVar5 = CRect::IsRectNull((CRect *)&stack0x00000004);
      if (iVar5 == 0) {
        CWnd::ScreenToClient((CWnd *)this_00,(tagRECT *)&stack0x00000004);
      }
      pAVar2 = GetGlobalData();
      pIVar6 = AFX_GLOBAL_DATA::GetITaskbarList3(pAVar2);
      if (pIVar6 != (ITaskbarList3 *)0x0) {
        iVar5 = CRect::IsRectNull((CRect *)&stack0x00000004);
        if ((iVar5 == 0) && (BVar7 = IsRectEmpty((RECT *)&stack0x00000004), BVar7 == 0)) {
          puVar8 = &stack0x00000004;
        }
        pcVar1 = *(code **)(*(int *)pIVar6 + 0x50);
        guard_check_icall(pIVar6,*(undefined4 *)(this_00 + 0x20),puVar8);
        iVar5 = (*pcVar1)();
        return (uint)(-1 < iVar5);
      }
    }
  }
  return 0;
}

