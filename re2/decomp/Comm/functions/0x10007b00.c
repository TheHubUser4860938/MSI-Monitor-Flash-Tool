// rea decompile_all
// name: I2CMasterWriteEx
// address: 0x10007b00
// body: available
// range: 0x10007b00-0x10007c0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int I2CMasterWriteEx(undefined4 param_1,char param_2,ushort param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint local_8;
  
                    /* 0x7b00  69  I2CMasterWriteEx */
  local_8 = 0x100;
  iVar1 = (*DAT_101def10)();
  if (iVar1 == 2) {
    uVar2 = (*DAT_101deebc)();
    local_8 = 2;
    if ((uVar2 & 2) != 0) {
      local_8 = 0x100;
    }
  }
  if (param_3 != 0) {
    iVar5 = 0;
    iVar1 = param_4;
    if (param_3 / local_8 != 0) {
      do {
        cVar4 = param_2;
        if (param_5 == 1) {
          cVar4 = (char)local_8 * (char)iVar5 + param_2;
        }
        iVar3 = FUN_10003c80(cVar4,local_8,iVar1);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + local_8;
      } while (iVar5 < (int)(param_3 / local_8));
    }
    iVar1 = 0;
    if ((uint)param_3 % local_8 != 0) {
      if (param_5 == 1) {
        param_2 = (char)local_8 * (char)iVar5 + param_2;
      }
      iVar1 = FUN_10003c80(param_2,(uint)param_3 % local_8,local_8 * iVar5 + param_4);
    }
    return iVar1;
  }
  iVar1 = I2CMasterCurrentWriteEx(param_1,0,param_4);
  return iVar1;
}

