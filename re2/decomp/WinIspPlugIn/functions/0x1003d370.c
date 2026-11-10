// rea decompile_all
// name: FUN_1003d370
// address: 0x1003d370
// body: available
// range: 0x1003d370-0x1003d44b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003d370(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  DWORD dwMilliseconds;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  int iVar3;
  int iVar4;
  
  dwMilliseconds = _DAT_1024a39c;
  iVar2 = _DAT_1024a398;
  iVar3 = 0;
  iVar4 = 0;
  iVar1 = _DAT_1024a398;
  while( true ) {
    if (iVar1 == 0) {
      return iVar4;
    }
    if (iVar3 == 0) {
      iVar4 = FUN_1003d450(param_1,in_ECX,param_3,param_4,param_5);
    }
    if (iVar4 == 0) break;
    Sleep(dwMilliseconds);
    FUN_10048350(&DAT_1024a13c,
                 L"RetrySectorISP StartAddr: 0x%x ProLen: 0x%x ErrorCode: 0x%x, Sleep Time %d ms",
                 param_1,0x1000,iVar4,dwMilliseconds);
    FUN_10016860();
    iVar3 = FUN_1003e610(param_1 >> 0x10,param_1 >> 0xc & 0xf,param_4);
    FUN_10048350(&DAT_1024a13c,L"RetryCount: %d, Sector Erase Error Code 0x%x",(iVar2 - iVar1) + 1,
                 iVar3);
    FUN_10016860();
    iVar1 = iVar1 + -1;
    in_ECX = extraout_ECX;
  }
  return 0;
}

