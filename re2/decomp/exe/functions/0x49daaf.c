// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawComboDropButton
// address: 0x49daaf
// body: available
// range: 0x49daaf-0x49dc61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49dbe4 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnDrawComboDropButton(class CDC
   *,class CRect,int,int,int,class CMFCToolBarComboBoxButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnDrawComboDropButton
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,int param_3,int param_4,LONG param_5,
          int param_6,int param_7,int param_8,int param_9)

{
  code *pcVar1;
  CMFCVisualManagerOfficeXP *pCVar2;
  COLORREF CVar3;
  AFX_GLOBAL_DATA *pAVar4;
  HBRUSH hbr;
  int iVar5;
  CPen *pCVar6;
  IMAGE_STATE IVar7;
  ulong uVar8;
  undefined4 local_20;
  COLORREF local_1c;
  CDrawingManager local_18 [4];
  CMFCVisualManagerOfficeXP *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x49dabb;
  local_14 = this;
  CVar3 = GetTextColor(*(HDC *)(param_1 + 8));
  local_1c = CVar3;
  if (param_8 == 0) {
    if (param_9 == 0) {
      pAVar4 = GetGlobalData();
      hbr = (HBRUSH)0x0;
      if (pAVar4 != (AFX_GLOBAL_DATA *)0xffffff30) {
        hbr = *(HBRUSH *)(pAVar4 + 0xd4);
      }
      FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,hbr);
      if (DAT_00614e28 == 0) {
        pAVar4 = GetGlobalData();
        uVar8 = *(ulong *)(pAVar4 + 0x50);
        pAVar4 = GetGlobalData();
        CDC::Draw3dRect(param_1,(tagRECT *)&param_3,*(ulong *)(pAVar4 + 0x50),uVar8);
      }
      else {
        CDrawingManager::CDrawingManager(local_18,param_1);
        local_8 = 1;
        pAVar4 = GetGlobalData();
        CDrawingManager::DrawRect(local_18,(CRect *)&param_3,0xffffffff,*(ulong *)(pAVar4 + 0x6c));
        local_8 = 0xffffffff;
        FUN_00461ef9();
      }
      goto LAB_0049dc12;
    }
    iVar5 = 0x11c;
  }
  else {
    iVar5 = 0x124;
  }
  pcVar1 = *(code **)(*(int *)this + 0x314);
  guard_check_icall(param_1,param_3,param_4,param_5,param_6,this + iVar5,0);
  pCVar2 = local_14;
  (*pcVar1)();
  if (DAT_00614e28 == 0) {
    pCVar6 = CDC::SelectObject(param_1,(CPen *)(pCVar2 + 0x144));
    if (pCVar6 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    CDC::MoveTo(param_1,(int)local_18,param_3);
    CDC::LineTo(param_1,param_3,param_6);
    CDC::SelectObject(param_1,pCVar6);
    CVar3 = local_1c;
  }
  else {
    CDrawingManager::CDrawingManager(local_18,param_1);
    local_8 = 0;
    CDrawingManager::DrawLine(local_18,param_3,param_4,param_3,param_6,*(ulong *)(pCVar2 + 0xe8));
    local_8 = 0xffffffff;
    FUN_00461ef9();
    CVar3 = local_1c;
  }
LAB_0049dc12:
  if (param_7 == 0) {
    if ((param_8 == 0) || (param_9 == 0)) {
      IVar7 = 0;
    }
    else {
      IVar7 = 3;
    }
  }
  else {
    IVar7 = 1;
  }
  local_20 = 0;
  local_1c = 0;
  CMenuImages::Draw(param_1,0,(CRect *)&param_3,IVar7,(CSize *)&local_20);
  pcVar1 = *(code **)(*(int *)param_1 + 0x30);
  guard_check_icall(CVar3);
  (*pcVar1)();
  return;
}

