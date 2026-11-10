// rea decompile_all
// name: CMFCColorMenuButton::OnDraw
// address: 0x520cea
// body: available
// range: 0x520cea-0x520f7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x520d74 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCColorMenuButton::OnDraw(class CDC *,class CRect const
   &,class CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCColorMenuButton::OnDraw
          (CMFCColorMenuButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  CPalette *pCVar1;
  CGdiObject *this_00;
  code *pcVar2;
  CDC *this_01;
  int iVar3;
  AFX_GLOBAL_DATA *pAVar4;
  void *ho;
  CMFCVisualManager *pCVar5;
  CPen *pCVar6;
  CPen *pCVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **local_40 [2];
  undefined **local_38;
  HBRUSH local_34;
  CPalette *local_30;
  CDC *local_2c;
  CMFCToolBarImages *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x520cf6;
  local_28 = param_3;
  local_2c = param_1;
  CMFCToolBarMenuButton::OnDraw
            ((CMFCToolBarMenuButton *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
             param_8);
  iVar3 = CMFCToolBarButton::IsDrawImage((CMFCToolBarButton *)this);
  if ((iVar3 == 0) || (param_3 == (CMFCToolBarImages *)0x0)) goto LAB_00520f76;
  local_30 = (CPalette *)0x0;
  pAVar4 = GetGlobalData();
  if (*(int *)(pAVar4 + 0x1ac) == 8) {
    pCVar1 = (CPalette *)(this + 0x104);
    if ((pCVar1 == (CPalette *)0x0) || (*(int *)(this + 0x108) == 0)) {
      FUN_004ab390(this + 0xf0,pCVar1);
    }
    if (pCVar1 == (CPalette *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(this + 0x108);
    }
    if (iVar3 == 0) goto LAB_00520d74;
    local_30 = CDC::SelectPalette(param_1,pCVar1,0);
    RealizePalette(*(HDC *)(param_1 + 4));
    param_3 = local_28;
  }
  else {
    this_00 = (CGdiObject *)(this + 0x104);
    if ((this_00 != (CGdiObject *)0x0) && (*(int *)(this + 0x108) != 0)) {
      ho = CGdiObject::Detach(this_00);
      DeleteObject(ho);
      if (this_00 == (CGdiObject *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(this + 0x108);
      }
      if (iVar3 != 0) goto LAB_00520d74;
    }
  }
  if (param_3 == (CMFCToolBarImages *)0x0) {
LAB_00520d74:
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  local_24.left = *(LONG *)(param_3 + 0x6c);
  local_24.right = *(LONG *)(param_3 + 0x74);
  local_24.bottom = *(LONG *)(param_3 + 0x78);
  if ((DAT_00614ee0 == 0) || (*(int *)(this + 0x94) != 0)) {
    local_24.top = 5;
  }
  else {
    local_24.top = 10;
  }
  local_24.top = local_24.bottom - local_24.top;
  OffsetRect(&local_24,0,1);
  if (((param_6 != 0) && (param_5 == 0)) &&
     (pCVar5 = CMFCVisualManager::GetInstance(), *(int *)(pCVar5 + 0x54) != 0)) {
    pAVar4 = GetGlobalData();
    iVar3 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar4);
    if ((iVar3 == 0) && ((*(uint *)(this + 0x24) & 0x70000) == 0)) {
      pAVar4 = GetGlobalData();
      CBrush::CBrush((CBrush *)&local_38,*(ulong *)(pAVar4 + 0x58));
      FillRect(*(HDC *)(local_2c + 4),&local_24,local_34);
      OffsetRect(&local_24,-1,-1);
      local_38 = CBrush::vftable;
      FUN_0040ee80();
    }
  }
  if ((*(uint *)(this + 0x24) & 0x40000) == 0) {
    local_28 = *(CMFCToolBarImages **)(this + 0xe8);
    if (local_28 == (CMFCToolBarImages *)0xffffffff) {
      local_28 = *(CMFCToolBarImages **)(this + 0xec);
    }
  }
  else {
    pAVar4 = GetGlobalData();
    local_28 = *(CMFCToolBarImages **)(pAVar4 + 0x58);
  }
  CBrush::CBrush((CBrush *)local_40,
                 (((uint)local_28 >> 0x10 & 0xff | 0x200) << 8 | (uint)local_28 >> 8 & 0xff) << 8 |
                 (uint)local_28 & 0xff);
  this_01 = local_2c;
  local_8 = 0;
  pCVar6 = CDC::SelectObject(local_2c,(CPen *)local_40);
  pcVar2 = *(code **)(*(int *)this_01 + 0x24);
  guard_check_icall(8);
  pCVar7 = (CPen *)(*pcVar2)();
  Rectangle(*(HDC *)(this_01 + 4),local_24.left,local_24.top,local_24.right,local_24.bottom);
  CDC::SelectObject(this_01,pCVar7);
  CDC::SelectObject(this_01,pCVar6);
  pCVar5 = CMFCVisualManager::GetInstance();
  if (*(int *)(pCVar5 + 0x50) == 0) {
    pAVar4 = GetGlobalData();
    uVar9 = *(ulong *)(pAVar4 + 100);
    pAVar4 = GetGlobalData();
    uVar8 = *(ulong *)(pAVar4 + 0x58);
LAB_00520f4b:
    CDC::Draw3dRect(this_01,&local_24,uVar8,uVar9);
  }
  else {
    pAVar4 = GetGlobalData();
    if (local_28 == *(CMFCToolBarImages **)(pAVar4 + 0x54)) {
      pAVar4 = GetGlobalData();
      uVar9 = *(ulong *)(pAVar4 + 0x60);
      pAVar4 = GetGlobalData();
      uVar8 = *(ulong *)(pAVar4 + 0x60);
      goto LAB_00520f4b;
    }
  }
  if (local_30 != (CPalette *)0x0) {
    CDC::SelectPalette(this_01,local_30,0);
  }
  local_40[0] = CBrush::vftable;
  FUN_0040ee80();
LAB_00520f76:
  FUN_0055bae6();
  return;
}

