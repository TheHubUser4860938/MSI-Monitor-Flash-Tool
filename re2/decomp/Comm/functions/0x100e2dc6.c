// rea decompile_all
// name: CFrameImpl::UpdateCaption
// address: 0x100e2dc6
// body: available
// range: 0x100e2dc6-0x100e2fca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CFrameImpl::UpdateCaption(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameImpl::UpdateCaption(CFrameImpl *this)

{
  CObList *this_00;
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  HMENU pHVar6;
  CMenu *pCVar7;
  BOOL BVar8;
  ulong uVar9;
  CObject *pCVar10;
  CMFCVisualManager *pCVar11;
  int *piVar12;
  int iVar13;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  CFrameImpl *local_24;
  CMFCCaptionButtonEx *local_20;
  int local_1c;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x100e2dd2;
  local_24 = this;
  iVar4 = IsOwnerDrawCaption(this);
  if (iVar4 != 0) {
    if (*(int *)(this + 0x98) == 0) {
      uVar5 = CWnd::GetExStyle(*(CWnd **)(this + 0xb0));
      pHVar6 = GetSystemMenu(*(HWND *)(*(int *)(this + 0xb0) + 0x20),0);
      pCVar7 = CMenu::FromHandle(pHVar6);
      if ((pCVar7 != (CMenu *)0x0) && (BVar8 = IsMenu(*(HMENU *)(pCVar7 + 4)), BVar8 != 0)) {
        pHVar6 = *(HMENU *)(pCVar7 + 4);
        BVar8 = IsMenu(pHVar6);
        if ((BVar8 == 0) ||
           (uVar9 = CWnd::GetExStyle(*(CWnd **)(this + 0xb0)), (uVar9 & 0x80000) == 0)) {
          pHVar6 = (HMENU)0x0;
        }
        if (pHVar6 != (HMENU)0x0) {
          local_20 = (CMFCCaptionButtonEx *)FUN_10011f7d(0x40);
          local_8 = 0;
          if (local_20 == (CMFCCaptionButtonEx *)0x0) {
            pCVar10 = (CObject *)0x0;
          }
          else {
            pCVar10 = (CObject *)CMFCCaptionButtonEx::CMFCCaptionButtonEx(local_20,0x13);
          }
          local_8 = 0xffffffff;
          this_00 = (CObList *)(this + 0x8c);
          CObList::AddTail(this_00,pCVar10);
          if ((uVar5 & 0x10000) != 0) {
            local_20 = (CMFCCaptionButtonEx *)FUN_10011f7d(0x40);
            local_8 = 1;
            if (local_20 == (CMFCCaptionButtonEx *)0x0) {
              pCVar10 = (CObject *)0x0;
            }
            else {
              pCVar10 = (CObject *)CMFCCaptionButtonEx::CMFCCaptionButtonEx(local_20,0x1a);
            }
            local_8 = 0xffffffff;
            CObList::AddTail(this_00,pCVar10);
          }
          if ((uVar5 & 0x20000) != 0) {
            local_20 = (CMFCCaptionButtonEx *)FUN_10011f7d(0x40);
            local_8 = 2;
            if (local_20 == (CMFCCaptionButtonEx *)0x0) {
              pCVar10 = (CObject *)0x0;
            }
            else {
              pCVar10 = (CObject *)CMFCCaptionButtonEx::CMFCCaptionButtonEx(local_20,0x1b);
            }
            local_8 = 0xffffffff;
            CObList::AddTail(this_00,pCVar10);
          }
        }
      }
    }
    GetCaptionRect(this);
    pCVar11 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar11 + 0x208);
    guard_check_icall(&local_2c,0);
    (*pcVar1)();
    iVar4 = (local_30 - local_38) + -2;
    if (iVar4 <= local_28) {
      local_28 = iVar4;
    }
    iVar13 = local_34 - local_2c;
    iVar4 = ((local_30 - local_38) - local_28) / 2;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    iVar4 = local_38 + iVar4;
    local_14[0] = *(int *)(this + 0x90);
    local_1c = iVar4;
    local_18 = iVar13;
    if (local_14[0] != 0) {
      local_20 = (CMFCCaptionButtonEx *)(this + 0x8c);
      do {
        iVar3 = local_1c;
        piVar12 = (int *)FUN_1002466e(local_14);
        iVar2 = *piVar12;
        *(int *)(iVar2 + 0x30) = iVar13;
        *(int *)(iVar2 + 0x34) = iVar4;
        *(int *)(iVar2 + 0x38) = local_2c + iVar13;
        *(int *)(iVar2 + 0x3c) = local_28 + iVar3;
        iVar13 = iVar13 - local_2c;
        this = local_24;
      } while (local_14[0] != 0);
    }
    RedrawWindow(*(HWND *)(*(int *)(this + 0xb0) + 0x20),(RECT *)0x0,(HRGN)0x0,0x541);
  }
  return;
}

