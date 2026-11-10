// rea decompile_all
// name: CThreadSlotData::SetValue
// address: 0x1004ff82
// body: available
// range: 0x1004ff82-0x1005009e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10050055 to 0x1004a39d FUN_1004a39d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CThreadSlotData::SetValue(int,void *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CThreadSlotData::SetValue(CThreadSlotData *this,int param_1,void *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *lpTlsValue;
  undefined4 *puVar1;
  SIZE_T SVar2;
  HLOCAL pvVar3;
  UINT uFlags;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  if ((param_1 < 1) || (*(int *)(this + 0xc) <= param_1)) goto LAB_100500b6;
  lpTlsValue = TlsGetValue(*(DWORD *)this);
  if (lpTlsValue == (undefined4 *)0x0) {
    lpTlsValue = (undefined4 *)FUN_1004f9ec(0x10);
    if (lpTlsValue == (undefined4 *)0x0) {
      lpTlsValue = (undefined4 *)0x0;
    }
    else {
      *lpTlsValue = CThreadData::vftable;
    }
    lpTlsValue[2] = 0;
    lpTlsValue[3] = 0;
    puVar1 = (undefined4 *)FUN_1004feae(lpTlsValue);
    *puVar1 = *(undefined4 *)(this + 0x14);
    *(undefined4 **)(this + 0x14) = lpTlsValue;
LAB_10050013:
    if (lpTlsValue[3] == 0) {
      SVar2 = FUN_100496e2(*(undefined4 *)(this + 0xc),4);
      pvVar3 = LocalAlloc(0,SVar2);
    }
    else {
      uFlags = 2;
      SVar2 = FUN_100496e2(*(undefined4 *)(this + 0xc),4);
      pvVar3 = LocalReAlloc((HLOCAL)lpTlsValue[3],SVar2,uFlags);
    }
    if (pvVar3 == (HLOCAL)0x0) {
      LeaveCriticalSection(lpCriticalSection);
                    /* WARNING: Subroutine does not return */
      FUN_1004a39d();
    }
    lpTlsValue[3] = pvVar3;
    _memset((void *)((int)pvVar3 + lpTlsValue[2] * 4),0,(*(int *)(this + 0xc) - lpTlsValue[2]) * 4);
    lpTlsValue[2] = *(undefined4 *)(this + 0xc);
    TlsSetValue(*(DWORD *)this,lpTlsValue);
  }
  else if (((int)lpTlsValue[2] <= param_1) && (param_2 != (void *)0x0)) goto LAB_10050013;
  if ((lpTlsValue[3] != 0) && (param_1 < (int)lpTlsValue[2])) {
    *(void **)(lpTlsValue[3] + param_1 * 4) = param_2;
  }
LAB_100500b6:
  LeaveCriticalSection(lpCriticalSection);
  return;
}

