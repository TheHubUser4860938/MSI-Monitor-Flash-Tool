// rea decompile_all
// name: CMFCOutlookBarPane::DoPaint
// address: 0x4825d3
// body: available
// range: 0x4825d3-0x48292a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x482848 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCOutlookBarPane::DoPaint(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCOutlookBarPane::DoPaint(CMFCOutlookBarPane *this,CDC *param_1)

{
  code *pcVar1;
  CMFCOutlookBarPane *pCVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 uVar6;
  CDC *this_00;
  undefined1 local_b0 [12];
  undefined4 local_a4;
  int *local_a0;
  CMFCVisualManager *local_9c;
  CDC *local_98;
  CMFCOutlookBarPane *local_94;
  CMemDC local_90 [4];
  CDC *local_8c;
  int local_88;
  CDC local_80 [44];
  tagRECT local_54;
  RECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa0;
  local_8 = 0x4825e2;
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  local_94 = this;
  GetClientRect(*(HWND *)(this + 0x20),&local_34);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_24);
  CMemDC::CMemDC(local_90,param_1,(CWnd *)this);
  local_8 = 0;
  local_98 = local_80;
  if (local_88 == 0) {
    local_98 = local_8c;
  }
  local_9c = CMFCVisualManager::GetInstance();
  this_00 = local_98;
  iVar4 = *(int *)local_9c;
  guard_check_icall(local_98,local_94,local_24.left,local_24.top,local_24.right,local_24.bottom,
                    local_24.left,local_24.top,local_24.right,local_24.bottom,0);
  (**(code **)(iVar4 + 0x34))();
  pCVar2 = local_94;
  if (*(int *)(local_94 + 0xc48) != 0) {
    iVar4 = *(int *)this_00;
    pAVar3 = GetGlobalData();
    guard_check_icall(*(undefined4 *)(pAVar3 + 0x28));
    (**(code **)(iVar4 + 0x30))();
    CDC::SetBkMode(this_00,1);
    iVar4 = CMFCToolBarImages::PrepareDrawImage((CMFCToolBarImages *)&DAT_006162b8,local_b0,0,0,0);
    if (iVar4 != 0) {
      iVar4 = *(int *)this_00;
      pAVar3 = GetGlobalData();
      guard_check_icall(pAVar3 + 0x11c);
      local_a4 = (**(code **)(iVar4 + 0x28))();
      local_9c = *(CMFCVisualManager **)(pCVar2 + 0xc40);
      local_94 = (CMFCOutlookBarPane *)0x0;
      while (local_9c != (CMFCVisualManager *)0x0) {
        local_a0 = (int *)FUN_004ead48(&local_9c);
        local_a0 = (int *)*local_a0;
        local_44.left = local_a0[0x15];
        local_44.top = local_a0[0x16];
        local_44.right = local_a0[0x17];
        local_44.bottom = local_a0[0x18];
        if ((((DAT_00614ed8 == 0) || (*(int *)(pCVar2 + 0xb78) != 0)) &&
            ((local_94 == *(CMFCOutlookBarPane **)(pCVar2 + 0xbf0) ||
             (local_94 == *(CMFCOutlookBarPane **)(pCVar2 + 0xbec))))) &&
           ((*(CMFCOutlookBarPane **)(pCVar2 + 0xbec) == (CMFCOutlookBarPane *)0xffffffff ||
            (local_94 == *(CMFCOutlookBarPane **)(pCVar2 + 0xbec))))) {
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
        local_54.left = 0;
        local_54.top = 0;
        local_54.right = 0;
        local_54.bottom = 0;
        BVar5 = IntersectRect(&local_54,&local_44,&local_34);
        this_00 = local_98;
        if (BVar5 != 0) {
          iVar4 = *local_a0;
          guard_check_icall(local_98,&local_44,&DAT_006162b8,0,DAT_00614ed8,uVar6,1,1);
          (**(code **)(iVar4 + 0x18))();
        }
        local_94 = local_94 + 1;
      }
      if (*(int *)(pCVar2 + 0xc48) <= *(int *)(pCVar2 + 0xbf4)) {
        *(int *)(pCVar2 + 0xbf4) = -1;
      }
      if (DAT_00614ed8 != 0) {
        if ((-1 < *(int *)(pCVar2 + 0xbf4)) && (*(int *)(pCVar2 + 0xb78) == 0)) {
          local_94 = (CMFCOutlookBarPane *)FUN_00452f94(*(int *)(pCVar2 + 0xbf4));
          if (local_94 == (CMFCOutlookBarPane *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00429127();
          }
          pcVar1 = *(code **)(*(int *)local_94 + 0x50);
          guard_check_icall();
          iVar4 = (*pcVar1)();
          if (iVar4 != 0) {
            local_44.left = *(LONG *)(local_94 + 0x54);
            local_44.top = *(LONG *)(local_94 + 0x58);
            local_44.right = *(LONG *)(local_94 + 0x5c);
            local_44.bottom = *(LONG *)(local_94 + 0x60);
            pcVar1 = *(code **)(*(int *)local_94 + 0x38);
            guard_check_icall();
            iVar4 = (*pcVar1)();
            if (iVar4 != 0) {
              InflateRect(&local_44,0,1);
            }
            this_00 = local_98;
            CDC::DrawDragRect(local_98,&local_44,(tagSIZE)0x200000002,(tagRECT *)0x0,
                              (tagSIZE)0x200000002,(CBrush *)0x0,(CBrush *)0x0);
          }
        }
        if (((DAT_00614ed8 != 0) && (-1 < *(int *)(pCVar2 + 0xc00))) &&
           (*(int *)(pCVar2 + 0xb78) == 0)) {
          pcVar1 = *(code **)(*(int *)pCVar2 + 0x3c0);
          guard_check_icall(this_00);
          (*pcVar1)();
        }
      }
      CDC::SelectClipRgn(this_00,(CRgn *)0x0);
      pcVar1 = *(code **)(*(int *)this_00 + 0x28);
      guard_check_icall(local_a4);
      (*pcVar1)();
      FUN_0044c977(local_b0);
    }
  }
  CMemDC::~CMemDC(local_90);
  FUN_0055bae6();
  return;
}

