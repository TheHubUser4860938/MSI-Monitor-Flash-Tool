// rea decompile_all
// name: CMFCCustomizeMenuButton::OnCalculateSize
// address: 0x5148f2
// body: available
// range: 0x5148f2-0x514bb2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual struct tagSIZE __thiscall CMFCCustomizeMenuButton::OnCalculateSize(class CDC
   *,class CSize const &,int)
   
   Library: Visual Studio 2015 Release */

tagSIZE __thiscall
CMFCCustomizeMenuButton::OnCalculateSize
          (CMFCCustomizeMenuButton *this,CDC *param_1,CSize *param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  CWnd *pCVar4;
  CFrameWnd *pCVar5;
  CMFCVisualManager *pCVar6;
  int iVar7;
  tagSIZE tVar8;
  int local_7c;
  CDC local_6c [4];
  int local_68;
  CDC *local_64;
  CSize *local_5c;
  int local_58;
  CFrameWnd *local_54;
  tagTEXTMETRICW local_50;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x5148fe;
  local_64 = param_1;
  local_5c = param_2;
  local_68 = param_3;
  if (*(int *)(this + 0xf0) != 0) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 4;
    goto LAB_00514bab;
  }
  if (*(int *)(this + 0x100) != 0) {
    CMFCToolBarMenuButton::OnCalculateSize((CMFCToolBarMenuButton *)this,param_1,param_2,param_3);
    goto LAB_00514bab;
  }
  if (*(int *)(*(int *)(this + 0x2c) + -0xc) == 0) {
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
    uVar2 = *(undefined4 *)(this + 0x20);
    local_8 = 0;
    iVar3 = FUN_00435fce(uVar2);
    if (((iVar3 != 0) && (iVar3 = FUN_004160f0(iVar3,uVar2), iVar3 != 0)) &&
       (iVar3 = FUN_004148c0(10,0), iVar3 != -1)) {
      uVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_58,(int)&local_54);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_00415f50(uVar2);
      FUN_0040efa0();
    }
LAB_005149eb:
    local_8 = 0xffffffff;
    FUN_0040efa0();
  }
  else {
    iVar3 = FUN_004148c0(9,0);
    if (iVar3 != -1) {
      uVar2 = FUN_004147d0(&local_54,iVar3);
      local_8 = 2;
      FUN_00415f50(uVar2);
      goto LAB_005149eb;
    }
  }
  if (((DAT_00616884 != 0) && (*(int *)(this + 0x94) != 0)) &&
     ((*(uint *)(this + 0x20) < 0xf000 || (0xf1ef < *(uint *)(this + 0x20))))) {
    iVar3 = FUN_004148c0(9,0);
    if (-1 < iVar3) {
      uVar2 = FUN_004147d0(&local_54,iVar3);
      local_8 = 3;
      FUN_00415f50(uVar2);
      local_8 = 0xffffffff;
      FUN_0040efa0();
    }
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
    local_8 = 4;
    if (*(CWnd **)(this + 0x6c) == (CWnd *)0x0) {
      pCVar4 = AfxGetMainWnd();
      local_54 = (CFrameWnd *)
                 AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_005c363c,(CObject *)pCVar4);
LAB_00514aac:
      if (local_54 != (CFrameWnd *)0x0) goto LAB_00514ab0;
    }
    else {
      local_54 = DAT_0061620c;
      if (DAT_0061620c == (CFrameWnd *)0x0) {
        local_54 = CWnd::GetTopLevelFrame(*(CWnd **)(this + 0x6c));
        goto LAB_00514aac;
      }
LAB_00514ab0:
      pCVar5 = local_54;
      iVar3 = CKeyboardManager::FindDefaultAccelerator
                        (*(uint *)(this + 0x20),
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_58,local_54,1);
      if (iVar3 == 0) {
        pcVar1 = *(code **)(*(int *)pCVar5 + 0x170);
        guard_check_icall();
        pCVar5 = (CFrameWnd *)(*pcVar1)();
        iVar3 = CKeyboardManager::FindDefaultAccelerator
                          (*(uint *)(this + 0x20),
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_58,pCVar5,iVar3);
        if (iVar3 == 0) goto LAB_00514b00;
      }
      FUN_004153a0(9);
      FUN_004157a0(local_58,*(undefined4 *)(local_58 + -0xc));
    }
LAB_00514b00:
    local_8 = 0xffffffff;
    FUN_0040efa0();
  }
  iVar3 = *(int *)(*(int *)(this + 0x2c) + -0xc);
  GetTextMetricsW(*(HDC *)(local_5c + 8),&local_50);
  CMFCToolBar::GetMenuButtonSize();
  pCVar6 = CMFCVisualManager::GetInstance();
  pcVar1 = *(code **)(*(int *)pCVar6 + 0x2dc);
  guard_check_icall();
  iVar7 = (*pcVar1)();
  local_54 = (CFrameWnd *)(iVar7 * 3 + local_50.tmAveCharWidth * iVar3 + local_7c * 2 + 0x32);
  tVar8 = CMFCToolBarMenuButton::OnCalculateSize
                    ((CMFCToolBarMenuButton *)this,local_6c,local_5c,local_68);
  iVar3 = *(int *)(tVar8.cx + 4) + 2;
  if (*(int *)(this + 0x94) == 0) {
    pCVar6 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar6 + 0x2dc);
    guard_check_icall();
    iVar7 = (*pcVar1)();
    iVar3 = iVar3 + iVar7;
  }
  *(CFrameWnd **)local_64 = local_54;
  *(int *)(local_64 + 4) = iVar3;
LAB_00514bab:
  tVar8 = (tagSIZE)FUN_0055bae6();
  return tVar8;
}

