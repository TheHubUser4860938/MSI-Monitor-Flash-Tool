// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnFillHighlightedArea
// address: 0x10115f75
// body: available
// range: 0x10115f75-0x10116198 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnFillHighlightedArea(class CDC
   *,class CRect,class CBrush *,class CMFCToolBarButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnFillHighlightedArea
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,LONG param_3,LONG param_4,LONG param_5,
          LONG param_6,CMFCVisualManagerOffice2003 *param_7,CObject *param_8)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  int iVar3;
  CObject *pCVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  CMFCVisualManagerOffice2003 *pCVar8;
  CDrawingManager local_3c [8];
  undefined **local_34;
  HBRUSH local_30;
  CObject *local_2c;
  CObject *local_28;
  undefined4 local_24;
  ulong local_20;
  int local_1c;
  CDC *local_18;
  CMFCVisualManagerOffice2003 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  pCVar4 = param_8;
  pCVar8 = param_7;
  uStack_4 = 0x2c;
  local_8 = 0x10115f81;
  local_18 = param_1;
  local_14 = param_7;
  local_2c = param_8;
  pAVar2 = GetGlobalData();
  if (8 < *(int *)(pAVar2 + 0x1ac)) {
    pAVar2 = GetGlobalData();
    iVar3 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar2);
    if (iVar3 == 0) {
      local_24 = 1;
      local_20 = 0xffffffff;
      uVar7 = 0xffffffff;
      iVar3 = 0;
      if (pCVar4 != (CObject *)0x0) {
        local_24 = *(undefined4 *)(pCVar4 + 0x4c);
        pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_101d39fc,pCVar4);
        local_28 = pCVar4;
        if (((pCVar4 == (CObject *)0x0) || (*(int *)(pCVar4 + 0x6c) == 0)) ||
           (iVar3 = FUN_10019d4f(&PTR_s_CMFCPopupMenuBar_101d3928), iVar3 == 0)) {
          iVar3 = 0;
          local_1c = 0;
        }
        else {
          iVar3 = 1;
          local_1c = 1;
          if ((local_14 == this + 0x11c) && (*(ulong *)(this + 0x18c) != 0xffffffff)) {
            CBrush::CBrush((CBrush *)&local_34,*(ulong *)(this + 0x18c));
            FillRect(*(HDC *)(local_18 + 4),(RECT *)&param_3,local_30);
            local_34 = CBrush::vftable;
            CImageList::~CImageList((CImageList *)&local_34);
            return;
          }
        }
        if ((pCVar4 != (CObject *)0x0) && (iVar3 == 0)) {
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x70);
          guard_check_icall();
          iVar5 = (*pcVar1)();
          iVar3 = local_1c;
          if (iVar5 != 0) {
            uVar7 = CDrawingManager::PixelAlpha
                              (*(ulong *)(this + 0x164),
                               (-(uint)(*(int *)(this + 0x208) != 0) & 0xffffffed) + 0x78);
            local_20 = CDrawingManager::PixelAlpha(*(ulong *)(this + 0x168),0x6e);
            iVar3 = local_1c;
          }
        }
      }
      if ((local_14 == this + 0x11c) && (*(int *)(this + 0x208) != 0)) {
        uVar7 = *(ulong *)(this + 0x194);
        uVar6 = uVar7;
        if (iVar3 == 0) {
          uVar6 = *(ulong *)(this + 400);
        }
      }
      else if ((local_14 == this + 0x124) && (*(int *)(this + 0x208) != 0)) {
        if (iVar3 == 0) {
          uVar7 = *(ulong *)(this + 0x19c);
        }
        else {
          uVar7 = *(ulong *)(this + 0x198);
        }
        uVar6 = *(ulong *)(this + 0x198);
      }
      else {
        uVar6 = local_20;
        if ((local_14 == this + 300) && (*(int *)(this + 0x208) != 0)) {
          if (iVar3 == 0) {
            uVar7 = *(ulong *)(this + 0x1a4);
          }
          else {
            uVar7 = *(ulong *)(this + 0x1a0);
          }
          uVar6 = *(ulong *)(this + 0x1a0);
        }
      }
      pCVar8 = local_14;
      pCVar4 = local_2c;
      if ((uVar7 != 0xffffffff) && (uVar6 != 0xffffffff)) {
        CDrawingManager::CDrawingManager(local_3c,local_18);
        local_8 = 0;
        CDrawingManager::FillGradient
                  (local_3c,param_3,param_4,param_5,param_6,uVar7,uVar6,local_24,0,0);
        FUN_10079775();
        return;
      }
    }
  }
  CMFCVisualManagerOfficeXP::OnFillHighlightedArea
            ((CMFCVisualManagerOfficeXP *)this,local_18,param_3,param_4,param_5,param_6,pCVar8,
             pCVar4);
  return;
}

