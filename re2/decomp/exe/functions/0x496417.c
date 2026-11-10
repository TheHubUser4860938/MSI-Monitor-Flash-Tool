// rea decompile_all
// name: CFrameWndEx::OnUpdateFrameTitle
// address: 0x496417
// body: available
// range: 0x496417-0x49650b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CFrameWndEx::OnUpdateFrameTitle(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameWndEx::OnUpdateFrameTitle(CFrameWndEx *this,int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_18 [4];
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x496423;
  bVar4 = false;
  if ((*(int *)(this + 0x230) != 0) &&
     (((BVar1 = IsWindowVisible(*(HWND *)(*(int *)(this + 0x230) + 0x20)), BVar1 != 0 ||
       (BVar1 = IsWindowVisible(*(HWND *)(this + 0x20)), BVar1 == 0)) &&
      (*(int *)(*(int *)(this + 0x230) + 0x328) != 0)))) {
    bVar4 = true;
  }
  iVar2 = CFrameImpl::IsOwnerDrawCaption((CFrameImpl *)(this + 0x134));
  if (((iVar2 != 0) && (BVar1 = IsWindowVisible(*(HWND *)(this + 0x20)), BVar1 != 0)) && (!bVar4)) {
    uVar3 = FUN_004295fe();
    FUN_0040eb30(uVar3);
    local_8 = 0;
    CWnd::GetWindowTextW((CWnd *)this,local_18);
    CFrameWnd::OnUpdateFrameTitle((CFrameWnd *)this,param_1);
    uVar3 = FUN_004295fe();
    FUN_0040eb30(uVar3);
    local_8 = CONCAT31(local_8._1_3_,1);
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
    iVar2 = FUN_0042cb39(local_14[0]);
    if (iVar2 != 0) {
      SendMessageW(*(HWND *)(this + 0x20),0x85,0,0);
    }
    FUN_0040efa0();
    FUN_0040efa0();
    return;
  }
  CFrameWnd::OnUpdateFrameTitle((CFrameWnd *)this,param_1);
  return;
}

