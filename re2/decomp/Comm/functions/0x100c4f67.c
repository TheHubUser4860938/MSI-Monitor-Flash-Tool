// rea decompile_all
// name: FUN_100c4f67
// address: 0x100c4f67
// body: available
// range: 0x100c4f67-0x100c505f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c505b to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c4f67(int param_1)

{
  CSmartDockingManager *this;
  undefined4 uVar1;
  bool bVar2;
  BOOL BVar3;
  CMFCDragFrameImpl *in_ECX;
  RECT *lprc;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(in_ECX + 0x48) != 0) {
    this = *(CSmartDockingManager **)(*(int *)(in_ECX + 0x48) + 0x1b8);
    bVar2 = false;
    if (((this != (CSmartDockingManager *)0x0) && (*(int *)(this + 8) != 0)) &&
       (*(int *)(this + 4) != 0)) {
      bVar2 = true;
      CSmartDockingManager::HidePlace(this);
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    SetRectEmpty(&local_18);
    lprc = (RECT *)(in_ECX + 0x1c);
    BVar3 = IsRectEmpty(lprc);
    if (BVar3 != 0) {
      lprc = (RECT *)(in_ECX + 0xc);
    }
    local_28.left = lprc->left;
    local_28.top = lprc->top;
    local_28.right = lprc->right;
    local_28.bottom = lprc->bottom;
    if (*(int *)(in_ECX + 0x34) == -1) {
      if (!bVar2) {
        CMFCDragFrameImpl::DrawDragFrame(in_ECX,&local_18,&local_28,0,*(int *)(in_ECX + 0x40),4);
      }
    }
    else {
      *(undefined4 *)(in_ECX + 0x2c) = 1;
    }
    if (param_1 != 0) {
      CMFCDragFrameImpl::RemoveTabPreDocking(in_ECX,(CDockablePane *)0x0);
      SetRectEmpty((LPRECT)(in_ECX + 0x1c));
      SetRectEmpty((LPRECT)(in_ECX + 0xc));
      uVar1 = *(undefined4 *)(in_ECX + 0x4c);
      *(undefined4 *)(in_ECX + 0x4c) = 0;
      *(undefined4 *)(in_ECX + 0x38) = uVar1;
    }
    *(undefined4 *)(in_ECX + 0x30) = 0;
    if (*(CDockingManager **)(in_ECX + 0x48) == (CDockingManager *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10012a3f();
    }
    if (!bVar2) {
      CDockingManager::LockUpdate(*(CDockingManager **)(in_ECX + 0x48),0);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

