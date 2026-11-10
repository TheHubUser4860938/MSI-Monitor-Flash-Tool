// rea decompile_all
// name: afxMapHGDIOBJ
// address: 0x1005f448
// body: available
// range: 0x1005f448-0x1005f4b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    class CHandleMap * __stdcall afxMapHGDIOBJ(int)
   
   Library: Visual Studio 2015 Release */

CHandleMap * afxMapHGDIOBJ(int param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  _func_int_uint *p_Var2;
  CHandleMap *this;
  undefined4 uVar3;
  
  pAVar1 = AfxGetModuleThreadState();
  uVar3 = 0;
  if ((*(int *)(pAVar1 + 0x20) == 0) && (param_1 != 0)) {
    p_Var2 = AfxSetNewHandler(FUN_1005f98b);
    this = (CHandleMap *)FUN_10047eb4(0x60);
    if (this != (CHandleMap *)0x0) {
      uVar3 = CHandleMap::CHandleMap
                        (this,(CRuntimeClass *)&PTR_s_CGdiObject_101b507c,FUN_1005e9b9,Destruct,4,1)
      ;
    }
    *(undefined4 *)(pAVar1 + 0x20) = uVar3;
    AfxSetNewHandler(p_Var2);
  }
  return *(CHandleMap **)(pAVar1 + 0x20);
}

