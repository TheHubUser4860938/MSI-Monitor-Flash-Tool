// rea decompile_all
// name: CThreadLocalObject::GetData
// address: 0x1005a59c
// body: available
// range: 0x1005a59c-0x1005a624 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005a5b0 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CNoTrackObject * __thiscall CThreadLocalObject::GetData(class CNoTrackObject *
   (__stdcall*)(void))
   
   Library: Visual Studio 2015 Release */

CNoTrackObject * __thiscall
CThreadLocalObject::GetData(CThreadLocalObject *this,_func_CNoTrackObject_ptr *param_1)

{
  int iVar1;
  CNoTrackObject *pCVar2;
  
  if (param_1 == (_func_CNoTrackObject_ptr *)0x0) {
LAB_1005a5b0:
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  if (*(int *)this == 0) {
    if (DAT_1020d91c == (CThreadSlotData *)0x0) {
      DAT_1020d91c = (CThreadSlotData *)FUN_1005a062();
      if (DAT_1020d91c == (CThreadSlotData *)0x0) goto LAB_1005a5b0;
    }
    iVar1 = FUN_1005a253();
    *(int *)this = iVar1;
    if (iVar1 == 0) goto LAB_1005a5b0;
  }
  pCVar2 = CThreadSlotData::GetThreadValue(DAT_1020d91c,*(int *)this);
  if (pCVar2 == (CNoTrackObject *)0x0) {
    guard_check_icall();
    pCVar2 = (*param_1)();
    CThreadSlotData::SetValue(DAT_1020d91c,*(int *)this,pCVar2);
  }
  return pCVar2;
}

