// rea decompile_all
// name: ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accParent
// address: 0x10021922
// body: available
// range: 0x10021922-0x1002195a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accParent(struct IDispatch * *)
   
   Library: Visual Studio 2015 Release */

long ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accParent(IDispatch **param_1)

{
  IDispatch *pIVar1;
  code *pcVar2;
  long lVar3;
  int in_stack_00000008;
  
  pIVar1 = param_1[2];
  if (pIVar1 == (IDispatch *)0x0) {
    lVar3 = -0x7ffefef8;
  }
  else if (in_stack_00000008 == 0) {
    lVar3 = -0x7fffbffd;
  }
  else {
    pcVar2 = *(code **)(*(int *)pIVar1 + 0x1c);
    guard_check_icall(pIVar1);
    lVar3 = (*pcVar2)();
  }
  return lVar3;
}

