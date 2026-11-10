// rea decompile_all
// name: CMDIChildWndEx::OnMDIActivate
// address: 0x100b6319
// body: available
// range: 0x100b6319-0x100b64a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDIChildWndEx::OnMDIActivate(int,class CWnd *,class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMDIChildWndEx::OnMDIActivate(CMDIChildWndEx *this,int param_1,CWnd *param_2,CWnd *param_3)

{
  code *pcVar1;
  HWND__ *pHVar2;
  int iVar3;
  AFX_MODULE_STATE *pAVar4;
  int *piVar5;
  CObject *this_00;
  CDockingManager *this_01;
  bool bVar6;
  
  pcVar1 = *(code **)(*(int *)(this + 0x254) + 0x58);
  guard_check_icall(param_1);
  (*pcVar1)();
  bVar6 = DAT_101dc964 == 0;
  *(int *)(this + 0x148) = param_1;
  if (bVar6) {
    DAT_101dc964 = 1;
    CMDIChildWnd::OnMDIActivate((CMDIChildWnd *)this,param_1,param_2,param_3);
    if ((param_1 != 0) && (*(int *)(this + 0x448) != 0)) {
      if (param_2 == (CWnd *)0x0) {
        pHVar2 = (HWND__ *)0x0;
      }
      else {
        pHVar2 = *(HWND__ **)(param_2 + 0x20);
      }
      CMDIClientAreaWnd::SetActiveTab((CMDIClientAreaWnd *)(*(int *)(this + 0x448) + 0x458),pHVar2);
    }
    iVar3 = IsTaskbarTabsSupportEnabled(this);
    if ((iVar3 != 0) && (iVar3 = IsRegisteredWithTaskbarTabs(this), iVar3 != 0)) {
      pAVar4 = AfxGetModuleState();
      if (*(int **)(pAVar4 + 4) != (int *)0x0) {
        pcVar1 = *(code **)(**(int **)(pAVar4 + 4) + 0xfc);
        guard_check_icall();
        piVar5 = (int *)(*pcVar1)();
        if (piVar5 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar5 + 0x30);
          guard_check_icall();
          iVar3 = (*pcVar1)();
          if (iVar3 != 0) goto LAB_100b640e;
        }
        InvalidateIconicBitmaps(this);
        this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_10193444,
                                     (CObject *)param_3);
        if (this_00 != (CObject *)0x0) {
          InvalidateIconicBitmaps((CMDIChildWndEx *)this_00);
        }
        SetTaskbarTabActive(this);
      }
    }
LAB_100b640e:
    DAT_101dc964 = 0;
    if (param_1 != 0) {
      if ((*(int *)(this + 0x448) != 0) &&
         (((this_01 = (CDockingManager *)(*(int *)(this + 0x448) + 0x160),
           this_01 != (CDockingManager *)0x0 &&
           (iVar3 = CDockingManager::IsOLEContainerMode(this_01), iVar3 != 0)) ||
          (iVar3 = CDockingManager::IsOLEContainerMode((CDockingManager *)(this + 0x254)),
          iVar3 != 0)))) {
        CGlobalUtils::ForceAdjustLayout((CGlobalUtils *)&PTR_vftable_101d3944,this_01,1,0);
      }
      goto LAB_100b6454;
    }
  }
  else {
LAB_100b6454:
    if ((param_1 != 0) && (iVar3 = IsTaskbarTabsSupportEnabled(this), iVar3 == 0))
    goto LAB_100b646e;
  }
  iVar3 = IsRegisteredWithTaskbarTabs(this);
  if (iVar3 != 0) {
    return;
  }
LAB_100b646e:
  pcVar1 = *(code **)(*(int *)this + 0x21c);
  guard_check_icall(0,0,0,0);
  (*pcVar1)();
  return;
}

