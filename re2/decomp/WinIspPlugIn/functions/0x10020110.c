// rea decompile_all
// name: FUN_10020110
// address: 0x10020110
// body: available
// range: 0x10020110-0x10020214 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10020110(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int *in_ECX;
  uint *in_EDX;
  
  FUN_10048350(&DAT_1024a13c,L"GetKeyAndSignatureInfoOneBankMode start");
  FUN_10016860();
  if (*in_ECX != 0x5254535a) {
    FUN_10048350(&DAT_1024a13c,L"GetKeyAndSignatureInfoOneBankMode Fail: ulMagic 0x%X",*in_ECX);
    FUN_10016860();
    return 0xd62;
  }
  uVar1 = in_ECX[3];
  uVar2 = in_ECX[4];
  if (0x4c4 < uVar1) {
    return 0xd6f;
  }
  *in_EDX = uVar1;
  _memset(in_EDX + 1,0xff,0x4c4);
  FUN_10197c50(in_EDX + 1,in_ECX + 5,uVar1);
  if (0x4c4 < uVar2) {
    return 0xd70;
  }
  *param_1 = uVar2;
  _memset(param_1 + 1,0xff,0x4c4);
  FUN_10197c50(param_1 + 1,(int)(in_ECX + 5) + uVar1,uVar2);
  FUN_10048350(&DAT_1024a13c,L"GetKeyAndSignatureInfoOneBankMode end");
  FUN_10016860();
  return 0;
}

