// rea decompile_all
// name: FUN_100d03ac
// address: 0x100d03ac
// body: available
// range: 0x100d03ac-0x100d05bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100d03ac(CDC *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  double dVar1;
  code *pcVar2;
  HDC cxWidth;
  CObject *pCVar3;
  CMFCVisualManager *pCVar4;
  AFX_GLOBAL_DATA *pAVar5;
  CMFCRibbonBar *this;
  ulong uVar6;
  CMFCRibbonBaseElement *in_ECX;
  int iVar7;
  int local_c;
  HDC local_8;
  
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonDefaultPanelButton_10196960,
                              *(CObject **)(in_ECX + 0x8c));
  if (pCVar3 == (CObject *)0x0) {
    iVar7 = 0;
    if (*(int *)(in_ECX + 0x1c4) == 0) {
      pCVar4 = CMFCVisualManager::GetInstance();
      pcVar2 = *(code **)(*(int *)pCVar4 + 0x268);
      guard_check_icall(param_1,param_3,param_4,param_5,param_6,0,0,0);
      (*pcVar2)();
    }
    else {
      local_8 = (HDC)0x10;
      local_c = 0x10;
      pAVar5 = GetGlobalData();
      if (*(int *)(pAVar5 + 0x1e8) == 0) {
        dVar1 = 1.0;
      }
      else {
        dVar1 = *(double *)(pAVar5 + 0x1e0);
      }
      if (dVar1 != 1.0) {
        GetGlobalData();
        local_8 = (HDC)FUN_10149490();
        GetGlobalData();
        local_c = FUN_10149490();
      }
      cxWidth = local_8;
      this = CMFCRibbonBaseElement::GetTopLevelRibbonBar(in_ECX);
      if ((this != (CMFCRibbonBar *)0x0) &&
         (uVar6 = CWnd::GetExStyle((CWnd *)this), (uVar6 & 0x400000) != 0)) {
        iVar7 = 1;
      }
      pAVar5 = GetGlobalData();
      if (*(int *)(pAVar5 + 0x1e8) == 0) {
        dVar1 = 1.0;
      }
      else {
        dVar1 = *(double *)(pAVar5 + 0x1e0);
      }
      if ((dVar1 == 1.0) && (iVar7 == 0)) {
        CDC::DrawState(param_1,(param_5 + param_3) / 2 - (int)local_8 / 2,
                       (param_4 + param_6) / 2 - local_c / 2,local_8,local_c,
                       *(undefined4 *)(in_ECX + 0x1c4),0,0);
      }
      else {
        if (param_1 == (CDC *)0x0) {
          local_8 = (HDC)0x0;
        }
        else {
          local_8 = *(HDC *)(param_1 + 4);
        }
        DrawIconEx(local_8,(param_5 + param_3) / 2 - (int)cxWidth / 2,
                   (param_4 + param_6) / 2 - local_c / 2,*(HICON *)(in_ECX + 0x1c4),(int)cxWidth,
                   local_c,0,(HBRUSH)0x0,iVar7 * 0x10 + 3);
      }
    }
  }
  else {
    pcVar2 = *(code **)(*(int *)pCVar3 + 0x120);
    guard_check_icall(param_1,param_2,param_3,param_4,param_5,param_6);
    (*pcVar2)();
  }
  return;
}

