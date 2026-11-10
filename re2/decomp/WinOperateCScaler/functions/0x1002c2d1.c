// rea decompile_all
// name: ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::accLocation
// address: 0x1002c2d1
// body: available
// range: 0x1002c2d1-0x1002c333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::accLocation(long *,long *,long *,long *,struct tagVARIANT)
   
   Library: Visual Studio 2015 Release */

long ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::accLocation
               (int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
               undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    lVar3 = -0x7ffefef8;
  }
  else if ((((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) || (param_5 == 0)) {
    lVar3 = -0x7fffbffd;
  }
  else {
    iVar2 = *piVar1;
    guard_check_icall(piVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    lVar3 = (**(code **)(iVar2 + 0x58))();
  }
  return lVar3;
}

