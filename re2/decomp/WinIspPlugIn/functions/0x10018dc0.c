// rea decompile_all
// name: FUN_10018dc0
// address: 0x10018dc0
// body: available
// range: 0x10018dc0-0x10018f08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10018dc0(void)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  int local_8;
  
  FUN_1001b860();
  if (((in_ECX != 2) && (in_EDX != 6)) && ((in_EDX != 7 || (DAT_1024be68 == 0)))) {
    return 0;
  }
  FUN_10048350(&DAT_1024a13c,L"\nWait for Signature or Copy Result, it will take more than %d ms..."
               ,DAT_1024a374);
  FUN_1003fc00();
  FUN_10016860();
  Sleep(DAT_1024a374);
  iVar1 = FUN_1001b990();
  if ((((iVar1 == 0) && (iVar1 = FUN_10017720(), iVar1 == 0)) &&
      (iVar1 = FUN_10018890(), iVar1 == 0)) && (iVar1 = FUN_10018a00(), iVar1 == 0)) {
    FUN_10048350(&DAT_1024a13c,L"enumSignStatus :0x%x",local_8);
    FUN_10016860();
    if (local_8 == 0) {
      if (((in_EDX == 6) || (in_EDX == 7)) && (iVar1 = FUN_10018c00(), iVar1 != 0)) {
        return iVar1;
      }
      if (((in_ECX != 0) || (DAT_1024a380 != 0)) && (iVar1 = FUN_100182d0(), iVar1 != 0)) {
        return iVar1;
      }
      (**(code **)(*DAT_10249d10 + 0x44))(2);
      iVar1 = (**(code **)(*DAT_10249d10 + 0x124))(1);
      if (iVar1 == 0) {
        FUN_1001b8f0();
        return 0;
      }
    }
    else {
      FUN_10048350(&DAT_1024a13c,L"Boot I ask signature result fail!");
      FUN_10016860();
      iVar1 = 0xd64;
    }
  }
  return iVar1;
}

