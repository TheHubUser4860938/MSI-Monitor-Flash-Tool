// rea decompile_all
// name: ___vcrt_getptd_noexit
// address: 0x1019a536
// body: available
// range: 0x1019a536-0x1019a5c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___vcrt_getptd_noexit
   
   Library: Visual Studio 2015 Release */

void * ___vcrt_getptd_noexit(void)

{
  DWORD dwErrCode;
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  void *_Memory;
  
  if (DAT_1023e070 == -1) {
    return (void *)0x0;
  }
  dwErrCode = GetLastError();
  pvVar1 = (void *)___vcrt_FlsGetValue(DAT_1023e070);
  if (pvVar1 == (void *)0xffffffff) {
LAB_1019a576:
    pvVar1 = (void *)0x0;
    goto LAB_1019a5bc;
  }
  if (pvVar1 != (void *)0x0) goto LAB_1019a5bc;
  iVar2 = ___vcrt_FlsSetValue(DAT_1023e070,0xffffffff);
  if (iVar2 == 0) goto LAB_1019a576;
  pvVar3 = (void *)__calloc_base(1,0x28);
  if (pvVar3 == (void *)0x0) {
LAB_1019a59e:
    ___vcrt_FlsSetValue(DAT_1023e070,0);
    pvVar1 = (void *)0x0;
    _Memory = pvVar3;
  }
  else {
    iVar2 = ___vcrt_FlsSetValue(DAT_1023e070,pvVar3);
    if (iVar2 == 0) goto LAB_1019a59e;
    _Memory = (void *)0x0;
    pvVar1 = pvVar3;
  }
  FID_conflict__free(_Memory);
LAB_1019a5bc:
  SetLastError(dwErrCode);
  return pvVar1;
}

