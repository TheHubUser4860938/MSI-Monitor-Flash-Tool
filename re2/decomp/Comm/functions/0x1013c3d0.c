// rea decompile_all
// name: CCheckListBox::get_accDefaultAction
// address: 0x1013c3d0
// body: available
// range: 0x1013c3d0-0x1013c499 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013c463 to 0x10003500 FUN_10003500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual long __thiscall CCheckListBox::get_accDefaultAction(struct tagVARIANT,wchar_t
   * *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CCheckListBox::get_accDefaultAction
          (CCheckListBox *this,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
          int *param_6)

{
  LRESULT LVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  
  if ((param_4 < 1) || (LVar1 = SendMessageW(*(HWND *)(this + 0x20),0x18b,0,0), LVar1 < param_4)) {
    lVar5 = CWnd::get_accDefaultAction((CWnd *)this,param_2,param_3,param_4,param_5,param_6);
    return lVar5;
  }
  iVar4 = *(int *)(this + 0x84);
  iVar2 = GetCheck(this,param_4 + -1);
  uVar3 = FUN_10013071();
  FUN_10003190(uVar3);
  iVar2 = (iVar2 + 1) % (int)((iVar4 == 6) + 2) + 0xf2e1;
  iVar4 = FUN_10012ca3(iVar2);
  if (iVar4 != 0) {
    FUN_100032f0(iVar4,iVar2);
  }
  iVar4 = Ordinal_4(this,*(undefined4 *)(this + -0xc));
  if (iVar4 != 0) {
    *param_6 = iVar4;
    FUN_10003460();
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10003500();
}

