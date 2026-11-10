// rea decompile_all
// name: CMFCPropertyGridToolTipCtrl::Track
// address: 0x1009b32e
// body: available
// range: 0x1009b32e-0x1009b5ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009b3ce to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCPropertyGridToolTipCtrl::Track(class CRect,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCPropertyGridToolTipCtrl::Track
          (CMFCPropertyGridToolTipCtrl *this,int param_2,LONG param_3,undefined4 *param_4,
          int param_5,undefined4 *param_6)

{
  CMFCPropertyGridToolTipCtrl *pCVar1;
  code *pcVar2;
  POINT pt;
  int iVar3;
  undefined4 *puVar4;
  BOOL BVar5;
  int iVar6;
  CGdiObject *pCVar7;
  wchar_t *pwVar8;
  AFX_GLOBAL_DATA *pAVar9;
  int *piVar10;
  ulong uVar11;
  HMONITOR hMonitor;
  HCURSOR hCursor;
  tagMONITORINFO *lpmi;
  int local_78 [5];
  int local_64;
  CGdiObject *local_60;
  tagMONITORINFO local_5c;
  int local_34 [2];
  int local_2c;
  undefined4 local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  puVar4 = param_6;
  uStack_4 = 0x68;
  local_8 = 0x1009b33a;
  local_60 = (CGdiObject *)param_6;
  if ((this != (CMFCPropertyGridToolTipCtrl *)0x0) && (*(int *)(this + 0x20) != 0)) {
    BVar5 = EqualRect((RECT *)(this + 0x84),(RECT *)&param_2);
    if ((BVar5 == 0) || (iVar6 = FUN_10030ace(*puVar4), iVar6 != 0)) {
      ((RECT *)(this + 0x84))->left = param_2;
      *(LONG *)(this + 0x88) = param_3;
      *(undefined4 **)(this + 0x8c) = param_4;
      *(int *)(this + 0x90) = param_5;
      pCVar1 = this + 0x80;
      FUN_10018680(local_60);
      CClientDC::CClientDC((CClientDC *)local_78,(CWnd *)this);
      local_8 = 0;
      if (*(void **)(this + 0x98) == (void *)0x0) {
        local_60 = CDC::SelectStockObject((CDC *)local_78,0x11);
      }
      else {
        pCVar7 = CGdiObject::FromHandle(*(void **)(this + 0x98));
        local_60 = (CGdiObject *)CDC::SelectObject((CDC *)local_78,(CPen *)pCVar7);
      }
      if (local_60 == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001d023();
      }
      local_64 = param_5 - param_3;
      pwVar8 = _wcspbrk(*(wchar_t **)pCVar1,L"\n");
      if ((pwVar8 == (wchar_t *)0x0) || ((int)pwVar8 - *(int *)pCVar1 >> 1 == -1)) {
        piVar10 = (int *)CDC::GetTextExtent((CDC *)local_78,
                                            (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                             *)&local_2c);
        iVar6 = *piVar10 + *(int *)(this + 0x94) * 2;
      }
      else {
        pAVar9 = GetGlobalData();
        local_28 = *(undefined4 *)(pAVar9 + 0x1cc);
        local_34[0] = 0;
        local_34[1] = 0;
        local_2c = 200;
        pcVar2 = *(code **)(local_78[0] + 0x68);
        guard_check_icall(*(int *)pCVar1,*(undefined4 *)(*(int *)pCVar1 + -0xc),local_34,0x410);
        local_64 = (*pcVar2)();
        local_64 = local_64 + *(int *)(this + 0x94) * 2;
        iVar6 = (*(int *)(this + 0x94) * 2 - local_34[0]) + local_2c;
      }
      CDC::SelectObject((CDC *)local_78,(CPen *)local_60);
      uVar11 = CWnd::GetExStyle(*(CWnd **)(this + 0x9c));
      if ((uVar11 & 0x400000) == 0) {
        param_4 = (undefined4 *)(param_2 + iVar6);
      }
      else {
        param_2 = (int)param_4 - iVar6;
      }
      param_5 = local_64 + param_3;
      if (param_5 - param_3 < *(int *)(this + 0x90) - *(int *)(this + 0x88)) {
        param_3 = *(LONG *)(this + 0x88);
        param_5 = *(int *)(this + 0x90);
      }
      local_5c.cbSize = 0x28;
      local_24.left = 0;
      local_24.top = 0;
      local_24.right = 0;
      local_24.bottom = 0;
      lpmi = &local_5c;
      pt.y = param_3;
      pt.x = param_2;
      hMonitor = MonitorFromPoint(pt,2);
      BVar5 = GetMonitorInfoW(hMonitor,lpmi);
      if (BVar5 == 0) {
        SystemParametersInfoW(0x30,0,&local_24,0);
      }
      else {
        CopyRect(&local_24,&local_5c.rcWork);
      }
      iVar3 = local_24.left;
      puVar4 = (undefined4 *)local_24.right;
      if ((int)param_4 - param_2 <= local_24.right - local_24.left) {
        if (local_24.right < (int)param_4) {
          iVar3 = local_24.right - iVar6;
          puVar4 = (undefined4 *)local_24.right;
        }
        else {
          iVar3 = param_2;
          puVar4 = param_4;
          if (param_2 < local_24.left) {
            iVar3 = local_24.left;
            puVar4 = (undefined4 *)(local_24.left + iVar6);
          }
        }
      }
      param_4 = puVar4;
      param_2 = iVar3;
      iVar6 = local_24.top;
      iVar3 = local_24.bottom;
      if (param_5 - param_3 <= local_24.bottom - local_24.top) {
        if (local_24.bottom < param_5) {
          iVar6 = local_24.bottom - local_64;
          iVar3 = local_24.bottom;
        }
        else {
          iVar6 = param_3;
          iVar3 = param_5;
          if (param_3 < local_24.top) {
            iVar6 = local_24.top;
            iVar3 = param_5 + local_64;
          }
        }
      }
      param_5 = iVar3;
      param_3 = iVar6;
      local_60 = (CGdiObject *)param_4;
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)&DAT_10209088,param_2,param_3,(int)param_4 - param_2,
                         param_5 - param_3,0x210);
      CWnd::ShowWindow((CWnd *)this,4);
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
      UpdateWindow(*(HWND *)(this + 0x20));
      AfxGetModuleState();
      hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
      SetCursor(hCursor);
      CClientDC::~CClientDC((CClientDC *)local_78);
    }
  }
  FUN_10154478();
  return;
}

