// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnErasePopupWindowButton
// address: 0x1014afc3
// body: available
// range: 0x1014afc3-0x1014b131 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnErasePopupWindowButton(class CDC
   *,class CRect,class CMFCDesktopAlertWndButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnErasePopupWindowButton
          (CMFCVisualManagerOffice2003 *this,int param_1,LONG param_3,LONG param_4,LONG param_5,
          LONG param_6,CMFCButton *param_7)

{
  code *pcVar1;
  CMFCButton *this_00;
  AFX_GLOBAL_DATA *pAVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  ulong uVar6;
  CImageList *this_01;
  undefined **local_2c;
  HBRUSH local_28;
  undefined **local_24;
  HBRUSH local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  this_00 = param_7;
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_1c = param_1;
  pAVar2 = GetGlobalData();
  if (8 < *(int *)(pAVar2 + 0x1ac)) {
    pAVar2 = GetGlobalData();
    iVar3 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar2);
    if (iVar3 == 0) {
      iVar3 = CMFCButton::IsPressed(this_00);
      if (iVar3 == 0) {
        if ((*(int *)(this_00 + 0xb4) == 0) && (*(int *)(this_00 + 0xac) == 0)) {
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          pHVar4 = GetParent(*(HWND *)(this_00 + 0x20));
          pCVar5 = CWnd::FromHandle(pHVar4);
          GetClientRect(*(HWND *)(pCVar5 + 0x20),&local_18);
          pHVar4 = GetParent(*(HWND *)(this_00 + 0x20));
          pCVar5 = CWnd::FromHandle(pHVar4);
          MapWindowPoints(*(HWND *)(pCVar5 + 0x20),*(HWND *)(this_00 + 0x20),(LPPOINT)&local_18,2);
          pcVar1 = *(code **)(*(int *)this + 0x1dc);
          guard_check_icall(local_1c,local_18.left,local_18.top,local_18.right,local_18.bottom);
          (*pcVar1)();
          goto LAB_1014b11f;
        }
        uVar6 = *(ulong *)(this + 0x18c);
        if (uVar6 == 0xffffffff) {
          uVar6 = *(ulong *)(this + 200);
        }
        CBrush::CBrush((CBrush *)&local_2c,uVar6);
        FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,local_28);
        local_2c = CBrush::vftable;
        this_01 = (CImageList *)&local_2c;
      }
      else {
        uVar6 = *(ulong *)(this + 0x198);
        if (uVar6 == 0xffffffff) {
          uVar6 = *(ulong *)(this + 0xcc);
        }
        CBrush::CBrush((CBrush *)&local_24,uVar6);
        FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,local_20);
        local_24 = CBrush::vftable;
        this_01 = (CImageList *)&local_24;
      }
      CImageList::~CImageList(this_01);
      goto LAB_1014b11f;
    }
  }
  CMFCVisualManagerOfficeXP::OnErasePopupWindowButton
            ((CMFCVisualManagerOfficeXP *)this,local_1c,param_3,param_4,param_5,param_6,this_00);
LAB_1014b11f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

