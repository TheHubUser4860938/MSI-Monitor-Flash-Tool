// rea decompile_all
// name: SetText
// address: 0x552e6a
// body: available
// range: 0x552e6a-0x552f4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x552e7e to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCTasksPaneToolBarCmdUI::SetText(char const *)
    public: virtual void __thiscall CMFCTasksPaneToolBarCmdUI::SetText(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

void SetText(int param_1)

{
  CMFCTasksPane *this;
  int iVar1;
  undefined4 uVar2;
  CMFCTasksPaneTaskGroup *pCVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  int local_18;
  undefined4 local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x552e76;
  if ((param_1 != 0) && (this = *(CMFCTasksPane **)(in_ECX + 0x14), this != (CMFCTasksPane *)0x0)) {
    FUN_00415a10(param_1);
    local_8 = 0;
    iVar1 = FUN_004148c0(9,0);
    if (iVar1 != -1) {
      uVar2 = FUN_004147d0(&local_18,iVar1);
      local_8._0_1_ = 1;
      FUN_00415f50(uVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0040efa0();
    }
    pCVar3 = CMFCTasksPane::GetTaskGroup(this,*(int *)(in_ECX + 8));
    if (pCVar3 != (CMFCTasksPaneTaskGroup *)0x0) {
      local_18 = *(int *)(pCVar3 + 0x10);
      while (local_18 != 0) {
        piVar4 = (int *)FUN_004ead48(&local_18);
        iVar1 = *piVar4;
        if ((*(int *)(iVar1 + 0x24) == *(int *)(in_ECX + 4)) &&
           (iVar5 = FUN_0042cb39(local_14[0]), iVar5 != 0)) {
          FUN_00415f50(local_14);
          InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(iVar1 + 0xc),1);
        }
      }
    }
    FUN_0040efa0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

