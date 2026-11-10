// rea decompile_all
// name: SetText
// address: 0x45a38a
// body: available
// range: 0x45a38a-0x45a472 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45a39c to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCToolBarCmdUI::SetText(char const *)
    public: virtual void __thiscall CMFCToolBarCmdUI::SetText(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

undefined1 * SetText(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined1 local_18 [4];
  undefined4 local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  puVar3 = &LAB_005a0837;
  local_8 = 0x45a396;
  if ((param_1 != 0) && (piVar1 = *(int **)(in_ECX + 0x14), piVar1 != (int *)0x0)) {
    if (piVar1[0x2f1] == 0) {
      iVar4 = FUN_00452f94(*(undefined4 *)(in_ECX + 8));
      puVar3 = (undefined1 *)0x0;
      if (iVar4 != 0) {
        FUN_00415a10(param_1);
        local_8 = 0;
        iVar4 = FUN_004148c0(9,0);
        if (iVar4 != -1) {
          uVar5 = FUN_004147d0(local_18,iVar4);
          local_8._0_1_ = 1;
          FUN_00415f50(uVar5);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_0040efa0();
        }
        FUN_0045acc6(local_18,&DAT_005af150);
        local_8 = CONCAT31(local_8._1_3_,2);
        iVar4 = FUN_0042cb39(local_14[0]);
        if (iVar4 != 0) {
          FUN_00415f50(local_14);
          pcVar2 = *(code **)(*piVar1 + 0x20c);
          guard_check_icall();
          (*pcVar2)();
        }
        FUN_0040efa0();
        puVar3 = (undefined1 *)FUN_0040efa0();
      }
    }
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

