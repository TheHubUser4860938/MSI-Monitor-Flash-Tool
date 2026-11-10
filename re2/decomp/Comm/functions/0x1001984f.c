// rea decompile_all
// name: CHandleMap::CHandleMap
// address: 0x1001984f
// body: available
// range: 0x1001984f-0x100198d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001989c to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CHandleMap::CHandleMap(struct CRuntimeClass *,void (__stdcall*)(class CObject
   *),void (__stdcall*)(class CObject *),unsigned int,int)
   
   Library: Visual Studio 2015 Release */

CHandleMap * __thiscall
CHandleMap::CHandleMap
          (CHandleMap *this,CRuntimeClass *param_1,_func_void_CObject_ptr *param_2,
          _func_void_CObject_ptr *param_3,uint param_4,int param_5)

{
  *(undefined ***)this = vftable;
  CFixedAllocNoSync::CFixedAllocNoSync((CFixedAllocNoSync *)(this + 4),*(uint *)(param_1 + 4),0x40);
  CMapPtrToPtr::CMapPtrToPtr((CMapPtrToPtr *)(this + 0x1c),10);
  CMapPtrToPtr::CMapPtrToPtr((CMapPtrToPtr *)(this + 0x38),4);
  if ((param_2 != (_func_void_CObject_ptr *)0x0) && (param_3 != (_func_void_CObject_ptr *)0x0)) {
    CMapPtrToPtr::InitHashTable((CMapPtrToPtr *)(this + 0x38),7,0);
    *(_func_void_CObject_ptr **)(this + 0x14) = param_2;
    *(uint *)(this + 0x58) = param_4;
    *(int *)(this + 0x5c) = param_5;
    *(CRuntimeClass **)(this + 0x54) = param_1;
    *(_func_void_CObject_ptr **)(this + 0x18) = param_3;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

