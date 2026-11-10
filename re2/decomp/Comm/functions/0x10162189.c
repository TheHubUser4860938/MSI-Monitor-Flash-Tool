// rea decompile_all
// name: FUN_10162189
// address: 0x10162189
// body: available
// range: 0x10162189-0x1016225c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10162189(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  double dVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  
  dVar2 = (double)CONCAT17(param_2._3_1_,
                           CONCAT16(param_2._2_1_,CONCAT24((undefined2)param_2,param_1)));
  if (dVar2 == 0.0) {
    iVar5 = 0;
  }
  else {
    uVar4 = (ushort)(param_2 >> 0x10);
    if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
      iVar5 = -0x3fd;
      uVar3 = param_2;
      if ((param_2 & 0x100000) == 0) {
        do {
          uVar1 = uVar3 * 2;
          param_2._0_2_ = (undefined2)uVar1;
          uVar3 = uVar1;
          if (param_1 < 0) {
            uVar3 = uVar1 | 1;
            param_2._0_2_ = (undefined2)uVar3;
          }
          param_1 = param_1 * 2;
          iVar5 = iVar5 + -1;
        } while ((uVar1 & 0x100000) == 0);
        uVar4 = (ushort)(uVar1 >> 0x10);
      }
      param_2._2_1_ = (undefined1)(uVar4 & 0xffef);
      param_2._3_1_ = (byte)((uVar4 & 0xffef) >> 8);
      if (dVar2 < 0.0) {
        param_2._3_1_ = param_2._3_1_ | 0x80;
      }
      __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((undefined2)param_2,param_1))
                        ),0);
    }
    else {
      __set_exp(dVar2,0);
      iVar5 = (uVar4 >> 4 & 0x7ff) - 0x3fe;
    }
  }
  *param_3 = iVar5;
  return;
}

