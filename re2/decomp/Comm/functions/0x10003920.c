// rea decompile_all
// name: FUN_10003920
// address: 0x10003920
// body: available
// range: 0x10003920-0x10003983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10003920(byte param_1)

{
  int iVar1;
  uint3 in_ECX;
  byte in_DL;
  int iVar2;
  int iVar3;
  undefined4 uStack_8;
  
  iVar2 = 0x5dc;
  uStack_8 = (uint)in_ECX;
  iVar3 = 5;
  do {
    iVar1 = ReadMcuReg(0x5d,(int)&uStack_8 + 3);
    if (iVar1 == 0) {
      if ((uStack_8._3_1_ & in_DL) == (param_1 & in_DL)) {
        return 0;
      }
      Sleep(2);
      iVar2 = iVar2 + -1;
    }
    else {
      iVar3 = iVar3 + -1;
      if (iVar3 < 1) {
        return 3;
      }
    }
  } while (0 < iVar2);
  return 3;
}

