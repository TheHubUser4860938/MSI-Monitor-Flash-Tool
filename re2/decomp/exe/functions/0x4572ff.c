// rea decompile_all
// name: CMFCToolBar::OnSetCursor
// address: 0x4572ff
// body: available
// range: 0x4572ff-0x457440 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCToolBar::OnSetCursor(class CWnd *,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBar::OnSetCursor(CMFCToolBar *this,CWnd *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  POINT pt;
  int iVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  BOOL BVar6;
  AFX_GLOBAL_DATA *pAVar7;
  HCURSOR hCursor;
  tagPOINT local_28;
  tagPOINT local_20;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_20.x = 0;
  local_20.y = 0;
  iVar4 = *(int *)(this + 0xba4);
  GetCursorPos(&local_20);
  if (iVar4 == 0) {
    if (((DAT_00614ed8 != 0) && (*(int *)(this + 0xbf4) != -1)) && (*(int *)(this + 0xb78) == 0)) {
      ScreenToClient(*(HWND *)(this + 0x20),&local_20);
      iVar4 = *(int *)(this + 0xbf4);
      pcVar1 = *(code **)(*(int *)this + 0x390);
      guard_check_icall(local_20.x,local_20.y);
      iVar2 = (*pcVar1)();
      if (iVar2 == iVar4) {
        piVar3 = (int *)FUN_00452f94(iVar4);
        pcVar1 = *(code **)(*piVar3 + 0x3c);
        guard_check_icall();
        iVar4 = (*pcVar1)();
        if (iVar4 != 0) {
          lVar5 = _labs(local_20.x - piVar3[0x17]);
          if (lVar5 < 7) goto LAB_0045741a;
        }
      }
    }
    local_28.x = local_20.x;
    local_28.y = local_20.y;
    ScreenToClient(*(HWND *)(this + 0x20),&local_28);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    CMFCControlBarImpl::GetGripperRect((CMFCControlBarImpl *)(this + 0xbe0),(CRect *)&local_18,1);
    pt.y = local_28.y;
    pt.x = local_28.x;
    BVar6 = PtInRect(&local_18,pt);
    if ((BVar6 == 0) || (DAT_00616b18 != 0)) {
      FUN_0042ec70();
      goto LAB_0045742e;
    }
    pAVar7 = GetGlobalData();
    hCursor = *(HCURSOR *)(pAVar7 + 0xfc);
  }
  else {
LAB_0045741a:
    pAVar7 = GetGlobalData();
    hCursor = *(HCURSOR *)(pAVar7 + 0xf0);
  }
  SetCursor(hCursor);
LAB_0045742e:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

