// rea decompile_all
// name: CMFCColorPickerCtrl::DrawCursor
// address: 0x1013d08c
// body: available
// range: 0x1013d08c-0x1013d211 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCColorPickerCtrl::DrawCursor(class CDC *,class CRect const
   &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCColorPickerCtrl::DrawCursor(CMFCColorPickerCtrl *this,CDC *param_1,CRect *param_2)

{
  HWND pHVar1;
  CWnd *pCVar2;
  AFX_GLOBAL_DATA *pAVar3;
  ulong uVar4;
  CPen *pCVar5;
  CPen *pCVar6;
  uint uVar7;
  undefined **local_3c [2];
  undefined **local_34;
  int local_30;
  POINT local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x1013d098;
  local_30 = (*(int *)(param_2 + 8) - *(int *)param_2) / 2;
  if (*(int *)(this + 0x80) == 2) {
    pHVar1 = GetFocus();
    pCVar2 = CWnd::FromHandle(pHVar1);
    uVar7 = -(uint)(pCVar2 != (CWnd *)this) & 0xffffff;
    CDC::FillSolidRect(param_1,*(int *)param_2 + local_30 + -1,*(int *)(param_2 + 4),3,5,uVar7);
    CDC::FillSolidRect(param_1,*(int *)param_2 + local_30 + -1,*(int *)(param_2 + 0xc) + -5,3,5,
                       uVar7);
    CDC::FillSolidRect(param_1,*(int *)param_2,*(int *)(param_2 + 4) + local_30 + -1,5,3,uVar7);
    CDC::FillSolidRect(param_1,*(int *)(param_2 + 8) + -5,*(int *)(param_2 + 4) + local_30 + -1,5,3,
                       uVar7);
  }
  else if (*(int *)(this + 0x80) == 1) {
    local_2c.x = *(LONG *)param_2;
    local_20 = *(int *)(param_2 + 4);
    local_2c.y = local_30 + local_20;
    local_24 = *(int *)(param_2 + 8) + -1;
    local_18 = *(int *)(param_2 + 0xc) + -1;
    local_1c = local_24;
    pAVar3 = GetGlobalData();
    CPen::CPen((CPen *)&local_34,0,1,*(ulong *)(pAVar3 + 0x28));
    local_8 = 0;
    pHVar1 = GetFocus();
    pCVar2 = CWnd::FromHandle(pHVar1);
    if (pCVar2 == (CWnd *)this) {
      pAVar3 = GetGlobalData();
      uVar4 = *(ulong *)(pAVar3 + 0x28);
    }
    else {
      pAVar3 = GetGlobalData();
      uVar4 = *(ulong *)(pAVar3 + 0x20);
    }
    CBrush::CBrush((CBrush *)local_3c,uVar4);
    local_8 = CONCAT31(local_8._1_3_,1);
    pCVar5 = CDC::SelectObject(param_1,(CPen *)local_3c);
    pCVar6 = CDC::SelectObject(param_1,(CPen *)&local_34);
    Polygon(*(HDC *)(param_1 + 4),&local_2c,3);
    CDC::SelectObject(param_1,pCVar5);
    CDC::SelectObject(param_1,pCVar6);
    local_3c[0] = CBrush::vftable;
    CImageList::~CImageList((CImageList *)local_3c);
    local_34 = CPen::vftable;
    CImageList::~CImageList((CImageList *)&local_34);
  }
  FUN_101490fe();
  return;
}

