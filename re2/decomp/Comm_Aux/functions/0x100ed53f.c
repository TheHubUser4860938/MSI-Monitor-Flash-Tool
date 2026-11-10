// rea decompile_all
// name: CMDIChildWndEx::OnUpdateFrameTitle
// address: 0x100ed53f
// body: available
// range: 0x100ed53f-0x100ed620 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMDIChildWndEx::OnUpdateFrameTitle(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIChildWndEx::OnUpdateFrameTitle(CMDIChildWndEx *this,int param_1)

{
  bool bVar1;
  int iVar2;
  BOOL BVar3;
  ulong uVar4;
  undefined4 uVar5;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_18 [4];
  undefined4 local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100ed54b;
  iVar2 = CFrameImpl::IsOwnerDrawCaption((CFrameImpl *)(this + 0x150));
  if (iVar2 != 0) {
    BVar3 = IsWindowVisible(*(HWND *)(this + 0x20));
    if (BVar3 != 0) {
      uVar4 = CWnd::GetExStyle((CWnd *)this);
      if ((uVar4 & 0x1000000) == 0) {
        bVar1 = true;
        goto LAB_100ed580;
      }
    }
  }
  bVar1 = false;
LAB_100ed580:
  uVar5 = FUN_10048e90();
  FUN_10034c30(uVar5);
  local_8 = 0;
  if (bVar1) {
    CWnd::GetWindowTextW((CWnd *)this,local_18);
  }
  CMDIChildWnd::OnUpdateFrameTitle((CMDIChildWnd *)this,param_1);
  if (bVar1) {
    uVar5 = FUN_10048e90();
    FUN_10034c30(uVar5);
    local_8 = CONCAT31(local_8._1_3_,1);
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
    iVar2 = FUN_1004a623(local_14[0]);
    if (iVar2 != 0) {
      SendMessageW(*(HWND *)(this + 0x20),0x85,0,0);
    }
    local_8 = local_8 & 0xffffff00;
    FUN_10034f00();
  }
  if (*(int *)(this + 0x448) != 0) {
    CMDIClientAreaWnd::UpdateTabs((CMDIClientAreaWnd *)(*(int *)(this + 0x448) + 0x458),0);
  }
  FUN_10034f00();
  return;
}

