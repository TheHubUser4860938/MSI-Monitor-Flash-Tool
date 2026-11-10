// rea decompile_all
// name: I2CMasterWordReadEx
// address: 0x10007910
// body: available
// range: 0x10007910-0x100079d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int I2CMasterWordReadEx(undefined4 param_1,uint param_2,ushort param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
                    /* 0x7910  64  I2CMasterWordReadEx */
  uVar4 = (uint)param_3 % 0x18;
  iVar5 = 0;
  iVar3 = param_4;
  if (param_3 / 0x18 != 0) {
    do {
      uVar1 = param_2;
      if (param_5 == 1) {
        uVar1 = param_2 + iVar5 * 0x18;
      }
      iVar2 = FUN_10003990(uVar1 & 0xffff,0x18,iVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar5 < (int)(param_3 / 0x18));
  }
  iVar3 = 0;
  if (uVar4 != 0) {
    if (param_5 == 1) {
      param_2 = param_2 + iVar5 * 0x18;
    }
    if (0x18 < uVar4) {
      return 0x10;
    }
    iVar3 = FUN_10003990(param_2 & 0xffff,uVar4,param_4 + iVar5 * 0x18);
  }
  return iVar3;
}

