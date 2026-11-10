// rea decompile_all
// name: __expand_base
// address: 0x101767d2
// body: available
// range: 0x101767d2-0x10176890 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __expand_base
   
   Library: Visual Studio 2015 Release */

LPVOID __expand_base(LPCVOID param_1,uint param_2)

{
  int *piVar1;
  LPVOID pvVar2;
  SIZE_T SVar3;
  BOOL BVar4;
  DWORD DVar5;
  int iVar6;
  int local_8;
  
  if (param_1 == (LPCVOID)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_1016ec41();
    pvVar2 = (LPVOID)0x0;
  }
  else if (param_2 < 0xffffffe1) {
    SVar3 = HeapSize(DAT_1020db40,0,param_1);
    if (param_2 == 0) {
      param_2 = 1;
    }
    pvVar2 = HeapReAlloc(DAT_1020db40,0x10,param_1,param_2);
    if (pvVar2 == (LPVOID)0x0) {
      if ((SVar3 < 0x4001) && (param_2 <= SVar3)) {
        local_8 = -1;
        BVar4 = HeapQueryInformation
                          (DAT_1020db40,HeapCompatibilityInformation,&local_8,4,(PSIZE_T)0x0);
        if ((BVar4 != 0) && (local_8 == 2)) {
          return param_1;
        }
      }
      piVar1 = __errno();
      DVar5 = GetLastError();
      iVar6 = ___acrt_errno_from_os_error(DVar5);
      *piVar1 = iVar6;
      pvVar2 = (LPVOID)0x0;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0xc;
    pvVar2 = (LPVOID)0x0;
  }
  return pvVar2;
}

