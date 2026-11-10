// rea decompile_all
// name: CThreadLocalObject::GetData
// address: 0x1004fe0b
// body: available
// range: 0x1004fe0b-0x1004fe93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004fe1f to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
LAB_1004fe1f:
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
  if (*(int *)this == 0) {
    if (DAT_102435c8 == (CThreadSlotData *)0x0) {
      DAT_102435c8 = (CThreadSlotData *)FUN_1004f8d1();
      if (DAT_102435c8 == (CThreadSlotData *)0x0) goto LAB_1004fe1f;
    }
    iVar1 = FUN_1004fac2();
    *(int *)this = iVar1;
    if (iVar1 == 0) goto LAB_1004fe1f;
  }
  pCVar2 = CThreadSlotData::GetThreadValue(DAT_102435c8,*(int *)this);
  if (pCVar2 == (CNoTrackObject *)0x0) {
    guard_check_icall();
    pCVar2 = (*param_1)();
    CThreadSlotData::SetValue(DAT_102435c8,*(int *)this,pCVar2);
  }
  return pCVar2;
}

