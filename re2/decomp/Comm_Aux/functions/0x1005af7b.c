// rea decompile_all
// name: CHandleMap::FromHandle
// address: 0x1005af7b
// body: available
// range: 0x1005af7b-0x1005b028 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005afe6 to 0x10048884 FUN_10048884 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CObject * __thiscall CHandleMap::FromHandle(void *)
   
   Library: Visual Studio 2015 Release */

CObject * __thiscall CHandleMap::FromHandle(CHandleMap *this,void *param_1)

{
  int iVar1;
  code *pcVar2;
  CObject *pCVar3;
  _func_int_uint *p_Var4;
  void **ppvVar5;
  
  if (param_1 == (void *)0x0) {
    pCVar3 = (CObject *)0x0;
  }
  else {
    pCVar3 = (CObject *)FUN_1005ff87(param_1);
    if (pCVar3 == (CObject *)0x0) {
      pCVar3 = (CObject *)FUN_1005ff87(param_1);
      if (pCVar3 == (CObject *)0x0) {
        p_Var4 = AfxSetNewHandler(FUN_1005f98b);
        pCVar3 = CFixedAllocNoSync::Alloc((CFixedAllocNoSync *)(this + 4));
        if (pCVar3 == (CObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10048884();
        }
        pcVar2 = *(code **)(this + 0x14);
        guard_check_icall(pCVar3);
        (*pcVar2)();
        ppvVar5 = CMapPtrToPtr::operator[]((CMapPtrToPtr *)(this + 0x38),param_1);
        *ppvVar5 = pCVar3;
        AfxSetNewHandler(p_Var4);
        iVar1 = *(int *)(this + 0x58);
        *(void **)(pCVar3 + iVar1) = param_1;
        if (*(int *)(this + 0x5c) == 2) {
          *(void **)(pCVar3 + iVar1 + 4) = param_1;
        }
      }
      else {
        iVar1 = *(int *)(this + 0x58);
        *(void **)(pCVar3 + iVar1) = param_1;
        if (*(int *)(this + 0x5c) == 2) {
          *(void **)(pCVar3 + iVar1 + 4) = param_1;
        }
      }
    }
  }
  return pCVar3;
}

