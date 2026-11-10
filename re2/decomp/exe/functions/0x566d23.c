// rea decompile_all
// name: FUN_00566d23
// address: 0x566d23
// body: available
// range: 0x566d23-0x566d3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00566d23(void)

{
  lconv *plVar1;
  _Cvtvec _Var2;
  int iVar3;
  ushort unaff_BX;
  int unaff_EBP;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 in_stack_ffffffd4 [40];
  undefined4 in_stack_fffffffc;
  
  plVar1 = *(lconv **)(unaff_EBP + -0x44);
  puVar4 = (undefined4 *)(unaff_EBP + -0x40);
  puVar5 = (undefined4 *)&stack0xffffffd4;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  _Var2._Isleadbyte[0x1c] = (char)in_stack_fffffffc;
  _Var2._Isleadbyte[0x1d] = (char)((uint)in_stack_fffffffc >> 8);
  _Var2._Isleadbyte[0x1e] = (char)((uint)in_stack_fffffffc >> 0x10);
  _Var2._Isleadbyte[0x1f] = (char)((uint)in_stack_fffffffc >> 0x18);
  _Var2._Page = in_stack_ffffffd4._0_4_;
  _Var2._Mbcurmax = in_stack_ffffffd4._4_4_;
  _Var2._Isclocale = in_stack_ffffffd4._8_4_;
  _Var2._Isleadbyte[0] = in_stack_ffffffd4[0xc];
  _Var2._Isleadbyte[1] = in_stack_ffffffd4[0xd];
  _Var2._Isleadbyte[2] = in_stack_ffffffd4[0xe];
  _Var2._Isleadbyte[3] = in_stack_ffffffd4[0xf];
  _Var2._Isleadbyte[4] = in_stack_ffffffd4[0x10];
  _Var2._Isleadbyte[5] = in_stack_ffffffd4[0x11];
  _Var2._Isleadbyte[6] = in_stack_ffffffd4[0x12];
  _Var2._Isleadbyte[7] = in_stack_ffffffd4[0x13];
  _Var2._Isleadbyte[8] = in_stack_ffffffd4[0x14];
  _Var2._Isleadbyte[9] = in_stack_ffffffd4[0x15];
  _Var2._Isleadbyte[10] = in_stack_ffffffd4[0x16];
  _Var2._Isleadbyte[0xb] = in_stack_ffffffd4[0x17];
  _Var2._Isleadbyte[0xc] = in_stack_ffffffd4[0x18];
  _Var2._Isleadbyte[0xd] = in_stack_ffffffd4[0x19];
  _Var2._Isleadbyte[0xe] = in_stack_ffffffd4[0x1a];
  _Var2._Isleadbyte[0xf] = in_stack_ffffffd4[0x1b];
  _Var2._Isleadbyte[0x10] = in_stack_ffffffd4[0x1c];
  _Var2._Isleadbyte[0x11] = in_stack_ffffffd4[0x1d];
  _Var2._Isleadbyte[0x12] = in_stack_ffffffd4[0x1e];
  _Var2._Isleadbyte[0x13] = in_stack_ffffffd4[0x1f];
  _Var2._Isleadbyte[0x14] = in_stack_ffffffd4[0x20];
  _Var2._Isleadbyte[0x15] = in_stack_ffffffd4[0x21];
  _Var2._Isleadbyte[0x16] = in_stack_ffffffd4[0x22];
  _Var2._Isleadbyte[0x17] = in_stack_ffffffd4[0x23];
  _Var2._Isleadbyte[0x18] = in_stack_ffffffd4[0x24];
  _Var2._Isleadbyte[0x19] = in_stack_ffffffd4[0x25];
  _Var2._Isleadbyte[0x1a] = in_stack_ffffffd4[0x26];
  _Var2._Isleadbyte[0x1b] = in_stack_ffffffd4[0x27];
  std::numpunct<unsigned_short>::_Getvals<unsigned_short>
            (*(numpunct<unsigned_short> **)(unaff_EBP + -0x48),unaff_BX,plVar1,_Var2);
  FUN_0055baf7();
  return;
}

