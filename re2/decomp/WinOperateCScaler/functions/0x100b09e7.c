// rea decompile_all
// name: CPaneFrameWnd::HitTest
// address: 0x100b09e7
// body: available
// range: 0x100b09e7-0x100b0eb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __thiscall CPaneFrameWnd::HitTest(class CPoint,int)
   
   Library: Visual Studio 2015 Release */

long __thiscall CPaneFrameWnd::HitTest(CPaneFrameWnd *this,LONG param_2,LONG param_3,int param_4)

{
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  POINT pt_04;
  POINT pt_05;
  POINT pt_06;
  POINT pt_07;
  POINT pt_08;
  POINT pt_09;
  POINT pt_10;
  POINT pt_11;
  POINT pt_12;
  POINT pt_13;
  POINT pt_14;
  bool bVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  long lVar8;
  CWnd *local_6c;
  tagRECT local_68;
  RECT local_58;
  tagRECT local_48;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  iVar3 = IsCustModeAndNotFloatingToolbar(this);
  if (iVar3 == 0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    pt_13.y = param_3;
    pt_13.x = param_2;
    BVar4 = PtInRect(&local_18,pt_13);
    if (BVar4 != 0) {
      local_48.left = 0;
      local_48.top = 0;
      local_48.right = 0;
      local_48.bottom = 0;
      GetClientRect(*(HWND *)(this + 0x20),&local_48);
      CWnd::ClientToScreen((CWnd *)this,&local_48);
      pt_14.y = param_3;
      pt_14.x = param_2;
      BVar4 = PtInRect(&local_48,pt_14);
      if (BVar4 == 0) {
        local_38 = 0;
        pcVar1 = *(code **)(*(int *)this + 0x1bc);
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        guard_check_icall(&local_38);
        (*pcVar1)();
        iVar3 = GetSystemMetrics(0xd);
        iVar3 = iVar3 / 2;
        iVar5 = GetSystemMetrics(0xe);
        local_58.left = local_38 + local_18.left;
        local_58.top = local_34 + local_18.top;
        local_58.right = local_18.right - local_30;
        iVar5 = iVar5 / 2;
        local_58.bottom = *(int *)(this + 0xac) + local_34 + local_18.top;
        pt.y = param_3;
        pt.x = param_2;
        BVar4 = PtInRect(&local_58,pt);
        if (BVar4 == 0) {
          bVar2 = true;
          local_6c = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xd4));
          if (local_6c != (CWnd *)0x0) {
            iVar7 = FUN_100250d6(&PTR_s_CMFCToolBar_10201648);
            bVar2 = (bool)(~(iVar7 != 0) & 1);
            iVar7 = FUN_100250d6(&PTR_s_CMFCColorBar_102017b0);
            if (iVar7 != 0) {
              AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCColorBar_102017b0,(CObject *)local_6c);
            }
          }
          local_28.left = 0;
          local_28.top = 0;
          local_28.right = 0;
          local_28.bottom = 0;
          if (bVar2) {
            SetRect(&local_28,local_18.left,local_18.top,local_18.left + iVar3,local_18.top + iVar5)
            ;
            pt_01.y = param_3;
            pt_01.x = param_2;
            BVar4 = PtInRect(&local_28,pt_01);
            if (BVar4 != 0) goto LAB_100b0ea5;
            SetRect(&local_28,local_18.left + iVar3,local_18.top,local_18.right - iVar3,
                    local_34 + local_18.top);
            pt_02.y = param_3;
            pt_02.x = param_2;
            BVar4 = PtInRect(&local_28,pt_02);
            if (BVar4 != 0) goto LAB_100b0ea5;
            SetRect(&local_28,local_18.right - iVar3,local_18.top,local_18.right,
                    local_18.top + iVar5);
            pt_03.y = param_3;
            pt_03.x = param_2;
            BVar4 = PtInRect(&local_28,pt_03);
            if (BVar4 != 0) goto LAB_100b0ea5;
            SetRect(&local_28,local_18.right - local_30,local_18.top + iVar5,local_18.right,
                    local_18.bottom - iVar5);
            pt_04.y = param_3;
            pt_04.x = param_2;
            BVar4 = PtInRect(&local_28,pt_04);
            if (BVar4 != 0) goto LAB_100b0ea5;
            SetRect(&local_28,local_18.right - iVar3,local_18.bottom - iVar5,local_18.right,
                    local_18.bottom);
            pt_05.y = param_3;
            pt_05.x = param_2;
            BVar4 = PtInRect(&local_28,pt_05);
            if (BVar4 != 0) goto LAB_100b0ea5;
            SetRect(&local_28,local_18.left + iVar3,local_18.bottom - local_2c,
                    local_18.right - iVar3,local_18.bottom);
            pt_06.y = param_3;
            pt_06.x = param_2;
            BVar4 = PtInRect(&local_28,pt_06);
            if (BVar4 != 0) goto LAB_100b0ea5;
            SetRect(&local_28,local_18.left,local_18.bottom - iVar5,local_18.left + iVar3,
                    local_18.bottom);
            pt_07.y = param_3;
            pt_07.x = param_2;
            BVar4 = PtInRect(&local_28,pt_07);
            if (BVar4 != 0) goto LAB_100b0ea5;
            SetRect(&local_28,local_18.left,local_18.top + iVar5,local_38 + local_18.left,
                    local_18.bottom - iVar5);
            pt_08.y = param_3;
            pt_08.x = param_2;
            iVar3 = PtInRect(&local_28,pt_08);
          }
          else {
            SetRect(&local_28,local_18.left,local_18.top,local_18.right,local_34 + local_18.top);
            pt_09.y = param_3;
            pt_09.x = param_2;
            BVar4 = PtInRect(&local_28,pt_09);
            if (BVar4 != 0) goto LAB_100b0ea5;
            SetRect(&local_28,local_18.left,local_18.top,local_38 + local_18.left,local_18.bottom);
            pt_10.y = param_3;
            pt_10.x = param_2;
            BVar4 = PtInRect(&local_28,pt_10);
            if (BVar4 != 0) goto LAB_100b0ea5;
            SetRect(&local_28,local_18.left,local_18.bottom - local_2c,local_18.right,
                    local_18.bottom);
            pt_11.y = param_3;
            pt_11.x = param_2;
            BVar4 = PtInRect(&local_28,pt_11);
            if (BVar4 != 0) goto LAB_100b0ea5;
            SetRect(&local_28,local_18.right - local_30,local_18.top,local_18.right,local_18.bottom)
            ;
            pt_12.y = param_3;
            pt_12.x = param_2;
            iVar3 = PtInRect(&local_28,pt_12);
          }
          if (iVar3 == 0) {
            FUN_100283ad();
          }
        }
        else if (param_4 == 0) {
          local_6c = *(CWnd **)(this + 0x10c);
          do {
            if (local_6c == (CWnd *)0x0) goto LAB_100b0ea5;
            puVar6 = (undefined4 *)FUN_100972dc(&local_6c);
            pcVar1 = *(code **)(*(int *)*puVar6 + 0xc);
            guard_check_icall(&local_68);
            (*pcVar1)();
            OffsetRect(&local_68,local_58.left,local_58.top);
            pt_00.y = param_3;
            pt_00.x = param_2;
            BVar4 = PtInRect(&local_68,pt_00);
          } while (BVar4 == 0);
          FUN_10168326();
        }
      }
    }
  }
LAB_100b0ea5:
  lVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar8;
}

