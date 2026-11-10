// rea decompile_all
// name: CMFCColorPickerCtrl::OnMouseMove
// address: 0x554cf2
// body: available
// range: 0x554cf2-0x554eff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCColorPickerCtrl::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCColorPickerCtrl::OnMouseMove(CMFCColorPickerCtrl *this,byte param_1,int param_3,int param_4)

{
  double dVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  RECT *lpRect;
  LONG LVar7;
  double dVar8;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  pHVar2 = GetCapture();
  pCVar3 = CWnd::FromHandle(pHVar2);
  if (pCVar3 != (CWnd *)this) goto LAB_00554eef;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  iVar4 = local_18.left;
  if (local_18.left <= param_3) {
    iVar4 = param_3;
  }
  LVar7 = local_18.right;
  if ((local_18.right <= iVar4) || (LVar7 = local_18.left, param_3 < local_18.left)) {
    param_3 = LVar7;
  }
  iVar4 = local_18.top;
  if (local_18.top <= param_4) {
    iVar4 = param_4;
  }
  LVar7 = local_18.bottom;
  if ((local_18.bottom <= iVar4) || (LVar7 = local_18.top, param_4 < local_18.top)) {
    param_4 = LVar7;
  }
  iVar4 = *(int *)(this + 0x80);
  if (iVar4 == 1) {
    GetCursorRect(this);
    InflateRect(&local_38,1,1);
    dVar8 = LumFromPoint(this,param_4);
    *(double *)(this + 0x88) = dVar8;
    uVar6 = FUN_004649d1(*(undefined8 *)(this + 0x98),dVar8,*(undefined8 *)(this + 0x90));
    *(undefined4 *)(this + 0xa0) = uVar6;
    InvalidateRect(*(HWND *)(this + 0x20),&local_38,1);
LAB_00554eca:
    lpRect = (RECT *)GetCursorRect(this);
LAB_00554ed4:
    InvalidateRect(*(HWND *)(this + 0x20),lpRect,1);
  }
  else {
    if (iVar4 == 2) {
      GetCursorRect(this);
      InflateRect(&local_28,1,1);
      if ((param_1 & 8) != 0) {
        piVar5 = (int *)GetCursorPos(this);
        param_3 = *piVar5;
      }
      if ((param_1 & 4) != 0) {
        iVar4 = GetCursorPos(this);
        param_4 = *(int *)(iVar4 + 4);
      }
      dVar8 = (double)param_3 / (double)(local_18.right - local_18.left);
      *(double *)(this + 0x98) = dVar8;
      dVar1 = 1.0 - (double)param_4 / (double)(local_18.bottom - local_18.top);
      *(double *)(this + 0x90) = dVar1;
      uVar6 = FUN_004649d1(dVar8,*(undefined8 *)(this + 0x88),dVar1);
      *(undefined4 *)(this + 0xa0) = uVar6;
      InvalidateRect(*(HWND *)(this + 0x20),&local_28,1);
      goto LAB_00554eca;
    }
    if (iVar4 - 3U < 2) {
      iVar4 = SelectCellHexagon(this,param_3,param_4);
      if (iVar4 == 0) goto LAB_00554eef;
      lpRect = (RECT *)0x0;
      goto LAB_00554ed4;
    }
  }
  NotifyParent(this);
  UpdateWindow(*(HWND *)(this + 0x20));
LAB_00554eef:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

