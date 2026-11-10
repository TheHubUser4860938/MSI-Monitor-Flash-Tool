// rea decompile_all
// name: CMFCDragFrameImpl::DrawFrameTab
// address: 0x100c4da6
// body: available
// range: 0x100c4da6-0x100c4f66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCDragFrameImpl::DrawFrameTab(class CDockablePane *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCDragFrameImpl::DrawFrameTab(CMFCDragFrameImpl *this,CDockablePane *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  AFX_GLOBAL_DATA *pAVar3;
  LONG LVar4;
  int iVar5;
  LONG LStack_78;
  CSmartDockingManager *local_50;
  tagRECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  GetWindowRect(*(HWND *)(param_1 + 0x20),&local_28);
  local_50 = (CSmartDockingManager *)0x0;
  bVar2 = false;
  if (*(int *)(this + 0x48) != 0) {
    local_50 = *(CSmartDockingManager **)(*(int *)(this + 0x48) + 0x1b8);
    if (((local_50 != (CSmartDockingManager *)0x0) && (*(int *)(local_50 + 8) != 0)) &&
       (*(int *)(local_50 + 4) != 0)) {
      bVar2 = true;
    }
  }
  pAVar3 = GetGlobalData();
  iVar1 = *(int *)(pAVar3 + 0x1b4);
  local_18.left = local_28.left;
  local_18.top = local_28.top;
  local_18.right = local_28.right;
  local_18.bottom = local_28.bottom;
  if (DAT_101dcbbc == 0) {
    pAVar3 = GetGlobalData();
    local_28.bottom = local_28.bottom - *(int *)(pAVar3 + 0x1cc);
    pAVar3 = GetGlobalData();
    local_18.top = local_18.bottom - *(int *)(pAVar3 + 0x1cc);
  }
  else {
    pAVar3 = GetGlobalData();
    local_28.top = local_28.top + *(int *)(pAVar3 + 0x1cc);
    pAVar3 = GetGlobalData();
    local_18.bottom = *(int *)(pAVar3 + 0x1cc) + local_18.top;
  }
  local_18.right = local_18.left + 0x32;
  if (local_28.right <= local_18.right) {
    local_18.right = (local_28.right - iVar1) + -4;
  }
  iVar5 = 0;
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  local_18.left = local_18.left + 10;
  SetRectEmpty(&local_38);
  local_48.left = 0;
  local_48.top = 0;
  local_48.right = 0;
  local_48.bottom = 0;
  LVar4 = local_18.bottom;
  if (DAT_101dcbbc == 0) {
    LVar4 = local_18.top;
  }
  LStack_78 = 0x100c4ed2;
  SetRect(&local_48,local_18.left + iVar1,LVar4 - iVar1,local_18.right - iVar1,LVar4 + iVar1);
  if (param_2 == 0) {
    if (bVar2) {
      CopyRect((LPRECT)&stack0xffffff84,&local_28);
      CSmartDockingManager::ShowTabbedPlaceAt(local_50);
      goto LAB_100c4f54;
    }
    iVar5 = 1;
  }
  else if (bVar2) {
    CSmartDockingManager::HidePlace(local_50);
    goto LAB_100c4f54;
  }
  LStack_78 = 0x100c4f2d;
  DrawDragFrame(this,&local_38,&local_18,iVar5,iVar1,iVar1);
  LStack_78 = 0x100c4f3f;
  DrawDragFrame(this,&local_38,&local_28,iVar5,iVar1,iVar1);
  LStack_78 = 0x100c4f51;
  DrawDragFrame(this,&local_38,&local_48,iVar5,iVar1,iVar1);
  *(int *)(this + 0x54) = iVar5;
LAB_100c4f54:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

