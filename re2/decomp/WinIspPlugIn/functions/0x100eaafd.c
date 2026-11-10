// rea decompile_all
// name: CMDIFrameWndEx::ShowPopupMenu
// address: 0x100eaafd
// body: available
// range: 0x100eaafd-0x100eadb0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: int __thiscall CMDIFrameWndEx::ShowPopupMenu(class CMFCPopupMenu *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMDIFrameWndEx::ShowPopupMenu(CMDIFrameWndEx *this,CMFCPopupMenu *param_1)

{
  code *pcVar1;
  int iVar2;
  UINT UVar3;
  undefined4 uVar4;
  CMFCToolBarMenuButton *pCVar5;
  HMENU pHVar6;
  bool bVar7;
  int in_stack_fffffdf4;
  UINT in_stack_fffffdf8;
  wchar_t *local_1f0;
  CMenu *local_1ec;
  CMFCPopupMenu *local_1e8;
  CMFCToolBarMenuButton local_1e4 [232];
  CMFCToolBarMenuButton local_fc [36];
  uint local_d8;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1ec;
  local_8 = 0x100eab0c;
  local_1e8 = param_1;
  local_1ec = (CMenu *)this;
  iVar2 = CFrameImpl::OnShowPopupMenu((CFrameImpl *)(this + 0x350),param_1,(CFrameWnd *)this);
  if (iVar2 == 0) goto LAB_100eada9;
  if ((DAT_10245ca8 == 0) && (*(int *)(this + 300) != 0)) {
    if (param_1 != (CMFCPopupMenu *)0x0) {
      pHVar6 = *(HMENU *)(param_1 + 0xf34);
      if (pHVar6 != (HMENU)0x0) {
        bVar7 = false;
        local_1f0 = (wchar_t *)GetMenuItemCount(pHVar6);
        iVar2 = 0;
        do {
          if ((int)local_1f0 <= iVar2) break;
          UVar3 = GetMenuItemID(pHVar6,iVar2);
          bVar7 = UVar3 - 0xe130 < 0x10;
          iVar2 = iVar2 + 1;
        } while (!bVar7);
        param_1 = local_1e8;
        this = (CMDIFrameWndEx *)local_1ec;
        if ((bVar7) &&
           (local_1ec = CMenu::FromHandle(*(HMENU__ **)(local_1ec + 300)), local_1ec != (CMenu *)0x0
           )) {
          iVar2 = GetMenuItemCount(*(HMENU *)(local_1ec + 4));
          pHVar6 = (HMENU)0x0;
          bVar7 = true;
          local_1e8 = (CMFCPopupMenu *)0x0;
          if (0 < iVar2) {
            do {
              UVar3 = GetMenuItemID(*(HMENU *)(local_1ec + 4),(int)pHVar6);
              if ((0xfeff < UVar3) && (UVar3 != 0xffffffff)) {
                if ((*(int *)(this + 0x130) == 0) || (UVar3 != 0xff09)) {
                  if (bVar7) {
                    CMFCPopupMenu::InsertSeparator(param_1,-1);
                    bVar7 = false;
                    SendMessageW(*(HWND *)(this + 0x120),0x234,0,0);
                  }
                  uVar4 = FUN_10049868();
                  FUN_100476a0(uVar4);
                  local_8 = 0;
                  FID_conflict_GetMenuStringA
                            (pHVar6,(UINT)&local_1f0,(LPSTR)0x400,in_stack_fffffdf4,
                             in_stack_fffffdf8);
                  CMFCToolBarMenuButton::CMFCToolBarMenuButton
                            (local_fc,UVar3,(HMENU__ *)0x0,-1,local_1f0,0);
                  local_8 = CONCAT31(local_8._1_3_,1);
                  UVar3 = GetMenuState(*(HMENU *)(local_1ec + 4),(UINT)pHVar6,0x400);
                  if ((UVar3 & 8) != 0) {
                    local_d8 = local_d8 | 0x10000;
                  }
                  CMFCPopupMenu::InsertItem(param_1,local_fc,-1);
                  FUN_1011101d();
                  local_8 = 0xffffffff;
                  FUN_100476d0();
                }
                else {
                  local_1e8 = (CMFCPopupMenu *)0x1;
                }
              }
              pHVar6 = (HMENU)((int)&pHVar6->unused + 1);
            } while ((int)pHVar6 < iVar2);
          }
          if ((*(uint *)(this + 0x130) != 0) &&
             ((local_1e8 != (CMFCPopupMenu *)0x0 || (*(int *)(this + 0x140) != 0)))) {
            if (DAT_1023d630 != 0) {
              CMFCToolBar::AddBasicCommand(*(uint *)(this + 0x130));
            }
            pCVar5 = (CMFCToolBarMenuButton *)
                     CMFCToolBarMenuButton::CMFCToolBarMenuButton
                               (local_1e4,*(uint *)(this + 0x130),(HMENU__ *)0x0,-1,
                                *(wchar_t **)(this + 0x128),0);
            local_8 = 2;
            CMFCPopupMenu::InsertItem(param_1,pCVar5,-1);
            local_8 = 0xffffffff;
            FUN_1011101d();
          }
        }
      }
      goto LAB_100ead83;
    }
  }
  else {
LAB_100ead83:
    if ((param_1 != (CMFCPopupMenu *)0x0) && (*(int *)(param_1 + 0xf48) != 0)) goto LAB_100eada9;
  }
  pcVar1 = *(code **)(*(int *)this + 0x1e4);
  guard_check_icall(param_1);
  (*pcVar1)();
LAB_100eada9:
  iVar2 = FUN_1018015d();
  return iVar2;
}

