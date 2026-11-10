// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawComboDropButton
// address: 0x101126c0
// body: available
// range: 0x101126c0-0x101128cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10112834 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnDrawComboDropButton(class CDC
   *,class CRect,int,int,int,class CMFCToolBarComboBoxButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnDrawComboDropButton
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,int param_3,int param_4,LONG param_5,
          int param_6,int param_7,int param_8,int param_9,undefined4 param_10)

{
  code *pcVar1;
  undefined4 uVar2;
  CMFCVisualManagerOffice2003 *pCVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int iVar5;
  IMAGE_STATE IVar6;
  CPen *pCVar7;
  ulong uVar8;
  undefined4 local_20;
  undefined4 local_1c;
  undefined **local_18;
  CMFCVisualManagerOffice2003 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar2 = param_10;
  uStack_4 = 0x10;
  local_8 = 0x101126cc;
  local_14 = this;
  pAVar4 = GetGlobalData();
  if (*(int *)(pAVar4 + 0x1ac) < 9) {
LAB_101128a9:
    CMFCVisualManagerOfficeXP::OnDrawComboDropButton
              ((CMFCVisualManagerOfficeXP *)local_14,param_1,param_3,param_4,param_5,param_6,param_7
               ,param_8,param_9,uVar2);
    return;
  }
  pAVar4 = GetGlobalData();
  iVar5 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar4);
  if (iVar5 != 0) goto LAB_101128a9;
  if (param_7 != 0) {
    IVar6 = 1;
    goto LAB_1011288e;
  }
  if (param_8 == 0) {
    if (param_9 != 0) {
      iVar5 = 0x11c;
      goto LAB_101127a9;
    }
    CDrawingManager::CDrawingManager((CDrawingManager *)&local_18,param_1);
    local_8 = 2;
    CDrawingManager::FillGradient
              ((CDrawingManager *)&local_18,param_3,param_4,param_5,param_6,
               *(undefined4 *)(this + 0x164),*(undefined4 *)(this + 0x168),1,0,0);
    if (DAT_101dae9c == 0) {
      pAVar4 = GetGlobalData();
      uVar8 = *(ulong *)(pAVar4 + 0x6c);
      pAVar4 = GetGlobalData();
      CDC::Draw3dRect(param_1,(tagRECT *)&param_3,*(ulong *)(pAVar4 + 0x6c),uVar8);
    }
    else {
      pAVar4 = GetGlobalData();
      CDrawingManager::DrawRect
                ((CDrawingManager *)&local_18,(CRect *)&param_3,0xffffffff,*(ulong *)(pAVar4 + 0x6c)
                );
    }
    local_8 = 0xffffffff;
    FUN_10079775();
  }
  else {
    iVar5 = 0x124;
LAB_101127a9:
    pcVar1 = *(code **)(*(int *)this + 0x314);
    guard_check_icall(param_1,param_3,param_4,param_5,param_6,this + iVar5,0);
    pCVar3 = local_14;
    (*pcVar1)();
    if (DAT_101dae9c == 0) {
      CPen::CPen((CPen *)&local_18,0,1,*(ulong *)(pCVar3 + 0xe8));
      local_8 = 1;
      pCVar7 = CDC::SelectObject(param_1,(CPen *)&local_18);
      if (pCVar7 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10012a3f();
      }
      CDC::MoveTo(param_1,(int)&local_20,param_3);
      CDC::LineTo(param_1,param_3,param_6);
      CDC::SelectObject(param_1,pCVar7);
      local_8 = 0xffffffff;
      local_18 = CPen::vftable;
      CImageList::~CImageList((CImageList *)&local_18);
    }
    else {
      CDrawingManager::CDrawingManager((CDrawingManager *)&local_18,param_1);
      local_8 = 0;
      CDrawingManager::DrawLine
                ((CDrawingManager *)&local_18,param_3,param_4,param_3,param_6,
                 *(ulong *)(pCVar3 + 0xe8));
      local_8 = 0xffffffff;
      FUN_10079775();
    }
    if ((param_8 != 0) && (param_9 != 0)) {
      IVar6 = 3;
      goto LAB_1011288e;
    }
  }
  IVar6 = 0;
LAB_1011288e:
  local_20 = 0;
  local_1c = 0;
  CMenuImages::Draw(param_1,0,(CRect *)&param_3,IVar6,(CSize *)&local_20);
  return;
}

