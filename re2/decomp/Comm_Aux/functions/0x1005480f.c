// rea decompile_all
// name: ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::accHitTest
// address: 0x1005480f
// body: available
// range: 0x1005480f-0x1005484c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::accHitTest(long,long,struct tagVARIANT *)
   
   Library: Visual Studio 2015 Release */

long ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::accHitTest
               (long param_1,long param_2,tagVARIANT *param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int in_stack_00000010;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    lVar3 = -0x7ffefef8;
  }
  else if (in_stack_00000010 == 0) {
    lVar3 = -0x7fffbffd;
  }
  else {
    iVar2 = *piVar1;
    guard_check_icall(piVar1,param_2,param_3);
    lVar3 = (**(code **)(iVar2 + 0x60))();
  }
  return lVar3;
}

