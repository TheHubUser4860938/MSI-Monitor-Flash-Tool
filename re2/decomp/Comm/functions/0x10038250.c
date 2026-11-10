// rea decompile_all
// name: CMFCEditBrowseCtrl::OnDrawBrowseButton
// address: 0x10038250
// body: available
// range: 0x10038250-0x1003846e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCEditBrowseCtrl::OnDrawBrowseButton(class CDC *,class
   CRect,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCEditBrowseCtrl::OnDrawBrowseButton
          (CMFCEditBrowseCtrl *this,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8)

{
  code *pcVar1;
  tagPOINT tVar2;
  CDC *this_00;
  CMFCEditBrowseCtrl *pCVar3;
  AFX_GLOBAL_DATA *pAVar4;
  CMFCVisualManager *pCVar5;
  int iVar6;
  int iVar7;
  CMFCEditBrowseCtrl *pCVar8;
  undefined4 uVar9;
  CDC *pCVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 local_38;
  CDC *local_34;
  int local_30;
  int local_2c;
  CMFCEditBrowseCtrl *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x1003825c;
  uVar9 = 0;
  local_34 = param_1;
  if (param_7 == 0) {
    if (param_8 != 0) {
      uVar9 = 2;
    }
  }
  else {
    uVar9 = 1;
  }
  local_28 = this;
  pAVar4 = GetGlobalData();
  local_38 = *(undefined4 *)(pAVar4 + 0x28);
  pCVar5 = CMFCVisualManager::GetInstance();
  puVar14 = &local_38;
  pcVar1 = *(code **)(*(int *)pCVar5 + 0x1bc);
  pCVar10 = local_34;
  iVar7 = param_3;
  iVar11 = param_4;
  iVar12 = param_5;
  iVar13 = param_6;
  guard_check_icall(local_34,param_3,param_4,param_5,param_6,this,uVar9,puVar14);
  iVar6 = (*pcVar1)();
  pCVar3 = local_28;
  this_00 = local_34;
  if (iVar6 != 0) {
    local_30 = 0;
    if ((local_28 == (CMFCEditBrowseCtrl *)0xffffff3c) || (*(int *)(local_28 + 200) == 0)) {
      pcVar1 = *(code **)(*(int *)local_34 + 0x30);
      guard_check_icall(local_38);
      local_34 = (CDC *)(*pcVar1)();
      local_30 = CDC::SetBkMode(this_00,1);
      pcVar1 = *(code **)(*(int *)this_00 + 0x24);
      guard_check_icall(0x11);
      local_2c = (*pcVar1)();
      local_24.left = param_3;
      local_24.top = param_4;
      local_24.right = param_5;
      local_24.bottom = param_6;
      InflateRect(&local_24,-1,-2);
      OffsetRect(&local_24,0,-2);
      if (param_7 != 0) {
        OffsetRect(&local_24,1,1);
      }
      FUN_100037c0(&DAT_101843d0);
      iVar7 = *(int *)this_00;
      local_8 = 0;
      guard_check_icall(local_28,*(undefined4 *)(local_28 + -0xc),&local_24,0x25);
      (**(code **)(iVar7 + 0x68))();
      local_8 = 0xffffffff;
      FUN_10003460();
      pcVar1 = *(code **)(*(int *)this_00 + 0x30);
      guard_check_icall(local_34);
      (*pcVar1)();
      CDC::SetBkMode(this_00,local_30);
      pcVar1 = *(code **)(*(int *)this_00 + 0x28);
      guard_check_icall(local_2c);
      (*pcVar1)();
    }
    else {
      if (*(int *)(local_28 + 0x90) != 0) {
        if (*(int *)(local_28 + 0xc0) == 2) {
          local_30 = 1;
        }
        else if (*(int *)(local_28 + 0xc0) == 3) {
          local_30 = 0;
        }
      }
      iVar6 = (param_5 + param_3) / 2 - *(int *)(local_28 + 0xa4) / 2;
      pCVar8 = (CMFCEditBrowseCtrl *)((param_4 + param_6) / 2 - *(int *)(local_28 + 0xa8) / 2);
      local_2c = iVar6;
      local_28 = pCVar8;
      if (param_7 != 0) {
        pCVar5 = CMFCVisualManager::GetInstance();
        pcVar1 = *(code **)(*(int *)pCVar5 + 0x2ec);
        guard_check_icall(pCVar10,iVar7,iVar11,iVar12,iVar13,this,uVar9,puVar14);
        iVar7 = (*pcVar1)();
        iVar6 = local_2c;
        pCVar8 = local_28;
        if (iVar7 != 0) {
          iVar6 = local_2c + 1;
          pCVar8 = local_28 + 1;
        }
      }
      tVar2.y = (LONG)pCVar8;
      tVar2.x = iVar6;
      CImageList::Draw((CImageList *)(pCVar3 + 0xc4),local_34,local_30,tVar2,0);
    }
  }
  FUN_101490fe();
  return;
}

