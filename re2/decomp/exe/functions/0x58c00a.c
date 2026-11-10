// rea decompile_all
// name: FUN_0058c00a
// address: 0x58c00a
// body: available
// range: 0x58c00a-0x58c0dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058c00a(int param_1,uint param_2,int *param_3)

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

