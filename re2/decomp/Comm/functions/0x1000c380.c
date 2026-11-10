// rea decompile_all
// name: I2C2SubReadEx
// address: 0x1000c380
// body: available
// range: 0x1000c380-0x1000c46e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int I2C2SubReadEx(undefined4 param_1,undefined1 param_2,undefined1 param_3,ushort param_4,
                 int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
                    /* 0xc380  51  I2C2SubReadEx */
  uVar1 = (*DAT_101def08)();
  uVar1 = uVar1 & 0xffff;
  if (DAT_101dee58 == (code *)0x0) {
    return 6;
  }
  uVar5 = (uint)CONCAT11(param_2,param_3);
  iVar6 = 0;
  iVar4 = param_5;
  if (param_4 / uVar1 != 0) {
    do {
      uVar2 = uVar5;
      if (param_6 == 1) {
        uVar2 = iVar6 * uVar1 + uVar5;
      }
      iVar3 = (*DAT_101dee58)(param_1,(uVar2 & 0xffff) >> 8,uVar2 & 0xffff,uVar1,iVar4);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + uVar1;
    } while (iVar6 < (int)(param_4 / uVar1));
  }
  iVar4 = 0;
  if ((uint)param_4 % uVar1 != 0) {
    if (param_6 == 1) {
      uVar5 = iVar6 * uVar1 + uVar5;
    }
    iVar4 = (*DAT_101dee58)(param_1,(uVar5 & 0xffff) >> 8,uVar5 & 0xffff,(uint)param_4 % uVar1,
                            uVar1 * iVar6 + param_5);
  }
  return iVar4;
}

