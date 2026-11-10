// rea decompile_all
// name: I2CWriteSegmentEx
// address: 0x10007fd0
// body: available
// range: 0x10007fd0-0x100080c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int I2CWriteSegmentEx(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4,
                     ushort param_5,int param_6,int param_7)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x7fd0  82  I2CWriteSegmentEx */
  uVar2 = (*DAT_101def08)();
  uVar2 = uVar2 & 0xffff;
  if (DAT_101dee94 == (code *)0x0) {
    return 6;
  }
  iVar5 = 0;
  iVar4 = param_6;
  if (param_5 / uVar2 != 0) {
    do {
      cVar1 = param_4;
      if (param_7 == 1) {
        cVar1 = (char)uVar2 * (char)iVar5 + param_4;
      }
      iVar3 = (*DAT_101dee94)(param_1,param_2,param_3,cVar1,uVar2,iVar4);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + uVar2;
    } while (iVar5 < (int)(param_5 / uVar2));
  }
  iVar4 = 0;
  if ((uint)param_5 % uVar2 != 0) {
    if (param_7 == 1) {
      param_4 = (char)uVar2 * (char)iVar5 + param_4;
    }
    iVar4 = (*DAT_101dee94)(param_1,param_2,param_3,param_4,(uint)param_5 % uVar2,
                            uVar2 * iVar5 + param_6);
  }
  return iVar4;
}

