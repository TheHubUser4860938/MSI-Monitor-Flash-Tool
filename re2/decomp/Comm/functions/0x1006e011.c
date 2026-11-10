// rea decompile_all
// name: CMFCOutlookBarPane::OnDragOver
// address: 0x1006e011
// body: available
// range: 0x1006e011-0x1006e117 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual unsigned long __thiscall CMFCOutlookBarPane::OnDragOver(class COleDataObject
   *,unsigned long,class CPoint)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCOutlookBarPane::OnDragOver
          (CMFCOutlookBarPane *this,undefined4 param_1,undefined4 param_2,LONG param_4,LONG param_5)

{
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  int *piVar2;
  int iVar3;
  BOOL BVar4;
  ulong uVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined8 uVar6;
  int *piVar7;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  uVar6 = FUN_100e6f66(param_1);
  piVar2 = (int *)uVar6;
  if (piVar2 != (int *)0x0) {
    piVar7 = piVar2;
    iVar3 = FUN_10019d4f(&PTR_s_CMFCOutlookBarPaneButton_101d39e0);
    pcVar1 = *(code **)(*piVar2 + 4);
    guard_check_icall(1);
    (*pcVar1)();
    uVar6 = CONCAT44(extraout_EDX,piVar7);
    if (iVar3 != 0) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0xe88),&local_18);
      CWnd::ScreenToClient((CWnd *)this,&local_18);
      pt.y = param_5;
      pt.x = param_4;
      BVar4 = PtInRect(&local_18,pt);
      if (BVar4 == 0) {
        local_28.left = 0;
        local_28.top = 0;
        local_28.right = 0;
        local_28.bottom = 0;
        GetWindowRect(*(HWND *)(this + 0x1630),&local_28);
        CWnd::ScreenToClient((CWnd *)this,&local_28);
        pt_00.y = param_5;
        pt_00.x = param_4;
        BVar4 = PtInRect(&local_28,pt_00);
        if (BVar4 == 0) {
          CMFCToolBar::OnDragOver((CMFCToolBar *)this,param_1,param_2,param_4,param_5);
          uVar6 = CONCAT44(extraout_EDX_02,piVar7);
        }
        else {
          ScrollDown(this);
          uVar6 = CONCAT44(extraout_EDX_01,piVar7);
        }
      }
      else {
        ScrollUp(this);
        uVar6 = CONCAT44(extraout_EDX_00,piVar7);
      }
    }
  }
  uVar5 = __security_check_cookie
                    (local_8 ^ (uint)&stack0xfffffffc,(int)((ulonglong)uVar6 >> 0x20),param_1,
                     (int)uVar6);
  return uVar5;
}

