// rea decompile_all
// name: AFX_GLOBAL_DATA::DrawParentBackground
// address: 0x10051c55
// body: available
// range: 0x10051c55-0x10051d4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall AFX_GLOBAL_DATA::DrawParentBackground(class CWnd *,class CDC *,struct
   tagRECT *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
AFX_GLOBAL_DATA::DrawParentBackground
          (AFX_GLOBAL_DATA *this,CWnd *param_1,CDC *param_2,tagRECT *param_3)

{
  HRGN pHVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  HDC hdc;
  HRESULT HVar4;
  int *piVar5;
  uint uVar6;
  undefined1 local_28 [8];
  undefined **local_20;
  undefined4 local_1c;
  tagPOINT local_18 [2];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_1c = 0;
  local_20 = CRgn::vftable;
  local_8 = 0;
  if (param_3 != (tagRECT *)0x0) {
    pHVar1 = CreateRectRgnIndirect(param_3);
    CMenu::Attach((CMenu *)&local_20,(HMENU__ *)pHVar1);
    CDC::SelectClipRgn(param_2,(CRgn *)&local_20);
  }
  pHVar2 = GetParent(*(HWND *)(param_1 + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  if (param_2 == (CDC *)0x0) {
    hdc = (HDC)0x0;
  }
  else {
    hdc = *(HDC *)(param_2 + 4);
  }
  HVar4 = DrawThemeParentBackground(*(HWND *)(param_1 + 0x20),hdc,param_3);
  uVar6 = (uint)(HVar4 == 0);
  if (uVar6 == 0) {
    pHVar2 = (HWND)0x0;
    if (pCVar3 != (CWnd *)0x0) {
      pHVar2 = *(HWND *)(pCVar3 + 0x20);
    }
    local_18[0].x = uVar6;
    local_18[0].y = uVar6;
    MapWindowPoints(*(HWND *)(param_1 + 0x20),pHVar2,local_18,1);
    piVar5 = (int *)CDC::OffsetWindowOrg(param_2,(int)local_28,local_18[0].x);
    local_18[0].x = *piVar5;
    local_18[0].y = piVar5[1];
    uVar6 = SendMessageW(*(HWND *)(pCVar3 + 0x20),0x14,*(WPARAM *)(param_2 + 4),0);
    CDC::SetWindowOrg(param_2,(int)local_28,local_18[0].x);
  }
  CDC::SelectClipRgn(param_2,(CRgn *)0x0);
  local_20 = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_20);
  return uVar6;
}

