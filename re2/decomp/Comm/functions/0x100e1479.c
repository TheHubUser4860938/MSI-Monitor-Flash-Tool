// rea decompile_all
// name: CFrameImpl::OnNcHitTest
// address: 0x100e1479
// body: available
// range: 0x100e1479-0x100e1637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: unsigned int __thiscall CFrameImpl::OnNcHitTest(class CPoint)
   
   Library: Visual Studio 2015 Release */

uint __thiscall CFrameImpl::OnNcHitTest(CFrameImpl *this,int param_2,int param_3)

{
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  int iVar2;
  BOOL BVar3;
  AFX_GLOBAL_DATA *this_00;
  int iVar4;
  undefined4 *puVar5;
  RECT *lprc;
  uint uVar6;
  HWND__ *pHVar7;
  int local_40;
  int local_3c;
  CFrameImpl *local_38;
  CFrameImpl *local_34;
  int *local_30;
  long local_2c;
  RECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_38 = this;
  if ((((*(int *)(this + 0xfc) != 0) &&
       (BVar3 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xfc) + 0x20)), BVar3 != 0)) &&
      (*(int *)(*(int *)(this + 0xfc) + 0x328) != 0)) &&
     (*(int *)(*(int *)(this + 0xfc) + 0x308) != 0)) {
    this_00 = GetGlobalData();
    iVar4 = AFX_GLOBAL_DATA::IsDwmCompositionEnabled(this_00);
    if (iVar4 != 0) {
      pHVar7 = (HWND__ *)0x0;
      local_2c = 0;
      if (*(int *)(this + 0xb0) != 0) {
        pHVar7 = *(HWND__ **)(*(int *)(this + 0xb0) + 0x20);
      }
      _AfxDwmDefWindowProc
                (pHVar7,0x84,0,CONCAT22((undefined2)param_3,(undefined2)param_2),&local_2c);
      goto LAB_100e1626;
    }
  }
  iVar4 = IsOwnerDrawCaption(this);
  if (iVar4 != 0) {
    ScreenToClient(*(HWND *)(*(int *)(this + 0xb0) + 0x20),(LPPOINT)&param_2);
    CGlobalUtils::GetSystemBorders((CGlobalUtils *)&PTR_vftable_101d3944,(CWnd *)&local_40);
    BVar3 = IsIconic(*(HWND *)(*(int *)(this + 0xb0) + 0x20));
    if (BVar3 == 0) {
      iVar4 = GetSystemMetrics(4);
      local_3c = local_3c + iVar4;
    }
    param_2 = param_2 + local_40;
    local_2c = *(long *)(this + 0x90);
    param_3 = param_3 + local_3c;
    if (local_2c != 0) {
      local_34 = this + 0x8c;
      do {
        puVar5 = (undefined4 *)FUN_1002466e(&local_2c);
        iVar2 = param_3;
        iVar4 = param_2;
        local_30 = (int *)*puVar5;
        pcVar1 = *(code **)(*local_30 + 0xc);
        guard_check_icall(&local_18);
        lprc = (RECT *)(*pcVar1)();
        pt.y = iVar2;
        pt.x = iVar4;
        BVar3 = PtInRect(lprc,pt);
        if (BVar3 != 0) goto LAB_100e1626;
        this = local_38;
      } while (local_2c != 0);
    }
    GetCaptionRect(this);
    pt_00.y = param_3;
    pt_00.x = param_2;
    BVar3 = PtInRect(&local_28,pt_00);
    if (BVar3 != 0) {
      local_18.left = local_28.left;
      local_18.top = local_28.top;
      local_18.right = local_28.right;
      local_18.bottom = local_28.bottom;
      iVar4 = GetSystemMetrics(4);
      local_18.right = iVar4 + local_18.left + local_40 * 2;
      pt_01.y = param_3;
      pt_01.x = param_2;
      PtInRect(&local_18,pt_01);
    }
  }
LAB_100e1626:
  uVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar6;
}

