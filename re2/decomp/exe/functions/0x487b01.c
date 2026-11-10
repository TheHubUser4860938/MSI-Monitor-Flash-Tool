// rea decompile_all
// name: CMFCBaseTabCtrl::RenameTab
// address: 0x487b01
// body: available
// range: 0x487b01-0x487bc6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseTabCtrl::RenameTab(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCBaseTabCtrl::RenameTab(CMFCBaseTabCtrl *this)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  LRESULT LVar6;
  int iVar7;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x487b0d;
  iVar7 = 0;
  if (*(int *)(this + 0x150) == 0) {
    iVar7 = 0;
  }
  else {
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
    local_8 = 0;
    CWnd::GetWindowTextW
              (*(CWnd **)(this + 0x150),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
    if (*(int *)(local_14[0] + -0xc) != 0) {
      pcVar1 = *(code **)(*(int *)this + 0x200);
      guard_check_icall(*(undefined4 *)(this + 0x14c),local_14);
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) {
        pHVar4 = GetParent(*(HWND *)(this + 0x20));
        pCVar5 = CWnd::FromHandle(pHVar4);
        LVar6 = SendMessageW(*(HWND *)(pCVar5 + 0x20),DAT_00616444,*(WPARAM *)(this + 0x14c),
                             local_14[0]);
        if (LVar6 == 0) {
          pcVar1 = *(code **)(*(int *)this + 0x1c0);
          guard_check_icall(*(undefined4 *)(this + 0x14c),local_14);
          iVar7 = (*pcVar1)();
        }
      }
    }
    FUN_0040efa0();
  }
  return iVar7;
}

