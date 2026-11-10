// rea decompile_all
// name: CMDIChildWndEx::RegisterTaskbarTab
// address: 0x4c7d03
// body: available
// range: 0x4c7d03-0x4c7f25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMDIChildWndEx::RegisterTaskbarTab(class CMDIChildWndEx *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIChildWndEx::RegisterTaskbarTab(CMDIChildWndEx *this,CMDIChildWndEx *param_1)

{
  CMDIChildWndEx *pCVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  AFX_GLOBAL_DATA *this_00;
  ITaskbarList3 *pIVar5;
  CFrameWnd *pCVar6;
  CObject *pCVar7;
  uint uVar8;
  CMDIChildWnd *pCVar9;
  HWND__ *pHVar10;
  undefined4 uVar11;
  HWND__ *pHVar12;
  undefined4 *puVar13;
  wchar_t *pwVar14;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x4c7d0f;
  iVar3 = IsTaskbarTabsSupportEnabled(this);
  if ((iVar3 == 0) ||
     ((pCVar1 = this + 0x450, pCVar1 != (CMDIChildWndEx *)0x0 && (*(int *)(this + 0x470) != 0))))
  goto LAB_004c7f1e;
  *(CMDIChildWndEx **)(this + 0x4d0) = this;
  pwVar14 = L"AFX_SUPERBAR_TAB";
  local_24 = 0xffff8300;
  local_20 = 0xffff8300;
  local_1c = 0xffff830a;
  local_18 = 0xffff830a;
  puVar13 = &local_30;
  GetGlobalData();
  RegisterWindowClass(puVar13,pwVar14);
  local_8 = 0;
  uVar4 = FUN_004295fe();
  FUN_0040eb30(uVar4);
  local_8 = CONCAT31(local_8._1_3_,1);
  CWnd::GetWindowTextW
            ((CWnd *)this,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_28);
  iVar3 = *(int *)pCVar1;
  guard_check_icall(0x8000080,local_30,local_28,0x80cf0000,&local_24,0,0,0);
  iVar3 = (**(code **)(iVar3 + 0x58))();
  if (iVar3 != 0) {
    this_00 = GetGlobalData();
    pIVar5 = AFX_GLOBAL_DATA::GetITaskbarList3(this_00);
    if (pIVar5 == (ITaskbarList3 *)0x0) {
LAB_004c7eec:
      *(undefined4 *)(this + 0x4d8) = 1;
      iVar3 = IsRegisteredWithTaskbarTabs(this);
      if (iVar3 != 0) {
        InvalidateIconicBitmaps(this);
      }
    }
    else {
      pCVar6 = CWnd::GetTopLevelFrame((CWnd *)this);
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_005bad18,(CObject *)pCVar6)
      ;
      if (pCVar7 == (CObject *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pCVar7 + 0x20);
      }
      if (pCVar1 == (CMDIChildWndEx *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined4 *)(this + 0x470);
      }
      pcVar2 = *(code **)(*(int *)pIVar5 + 0x2c);
      guard_check_icall(pIVar5,uVar11,uVar4);
      iVar3 = (*pcVar2)();
      if (-1 < iVar3) {
        if ((param_1 == (CMDIChildWndEx *)0x0) && (*(int *)(this + 0x448) != 0)) {
          param_1 = CMDIClientAreaWnd::FindNextRegisteredWithTaskbarMDIChild
                              ((CMDIClientAreaWnd *)(*(int *)(this + 0x448) + 0x458),this);
        }
        uVar8 = -(uint)(param_1 != (CMDIChildWndEx *)0x0) & (uint)(param_1 + 0x450);
        if (uVar8 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(uVar8 + 0x20);
        }
        if (pCVar1 == (CMDIChildWndEx *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(this + 0x470);
        }
        pcVar2 = *(code **)(*(int *)pIVar5 + 0x34);
        guard_check_icall(pIVar5,uVar11,uVar4);
        iVar3 = (*pcVar2)();
        if (-1 < iVar3) {
          pHVar12 = (HWND__ *)0x0;
          if (*(CMDIFrameWnd **)(this + 0x448) != (CMDIFrameWnd *)0x0) {
            pCVar9 = CMDIFrameWnd::MDIGetActive(*(CMDIFrameWnd **)(this + 0x448),(int *)0x0);
            if (pCVar9 == (CMDIChildWnd *)this) {
              SetTaskbarTabActive(this);
            }
          }
          local_2c = 1;
          pHVar10 = (HWND__ *)0x0;
          if (pCVar1 != (CMDIChildWndEx *)0x0) {
            pHVar10 = *(HWND__ **)(this + 0x470);
          }
          _AfxDwmSetWindowAttribute(pHVar10,10,&local_2c,4);
          if (pCVar1 != (CMDIChildWndEx *)0x0) {
            pHVar12 = *(HWND__ **)(this + 0x470);
          }
          _AfxDwmSetWindowAttribute(pHVar12,7,&local_2c,4);
          SetTaskbarTabProperties(this,DAT_0060c7f4);
          pcVar2 = *(code **)(*(int *)this + 0x224);
          guard_check_icall(local_28);
          (*pcVar2)();
          goto LAB_004c7eec;
        }
      }
      UnregisterTaskbarTab(this,1);
    }
  }
  FUN_0040efa0();
  FUN_0040efa0();
LAB_004c7f1e:
  FUN_0055bae6();
  return;
}

