// rea decompile_all
// name: FUN_1002b8f0
// address: 0x1002b8f0
// body: available
// range: 0x1002b8f0-0x1002b992 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1002b8f0(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = (int *)*in_ECX;
  piVar2 = (int *)*piVar1;
  iVar6 = 0;
  do {
    if (piVar1 == piVar2) {
      FUN_10048350(&DAT_1024a13c,L"Program page count:%d",iVar6);
      FUN_10016860();
      return iVar6;
    }
    FUN_1000ccd0();
    iVar5 = 0x100;
    iVar4 = piVar1[5];
    iVar7 = iVar6;
    do {
      iVar4 = iVar4 + 0x100;
      uVar3 = 0xff;
      do {
        if (*(char *)(uVar3 + iVar4) != -1) break;
        uVar3 = uVar3 - 1;
      } while (uVar3 < 0x100);
      iVar6 = iVar7 + 1;
      if (uVar3 == 0xffffffff) {
        iVar6 = iVar7;
      }
      iVar5 = iVar5 + -1;
      iVar7 = iVar6;
    } while (iVar5 != 0);
    FUN_1000ccd0();
  } while( true );
}

