// rea decompile_all
// name: FUN_00407a00
// address: 0x407a00
// body: available
// range: 0x407a00-0x407a4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00407a00(void)

{
  short *psVar1;
  int iVar2;
  wchar_t *pwVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _Ctypevec *p_Var8;
  _Cvtvec *p_Var9;
  int in_ECX;
  _Cvtvec local_48;
  _Ctypevec local_18;
  
  p_Var8 = __Getctype(&local_18);
  psVar1 = p_Var8->_Table;
  iVar2 = p_Var8->_Delfl;
  pwVar3 = p_Var8->_LocaleName;
  *(uint *)(in_ECX + 8) = p_Var8->_Page;
  *(short **)(in_ECX + 0xc) = psVar1;
  *(int *)(in_ECX + 0x10) = iVar2;
  *(wchar_t **)(in_ECX + 0x14) = pwVar3;
  p_Var9 = __Getcvt(&local_48);
  uVar4 = p_Var9->_Mbcurmax;
  iVar2 = p_Var9->_Isclocale;
  uVar5 = *(undefined4 *)p_Var9->_Isleadbyte;
  *(uint *)(in_ECX + 0x18) = p_Var9->_Page;
  *(uint *)(in_ECX + 0x1c) = uVar4;
  *(int *)(in_ECX + 0x20) = iVar2;
  *(undefined4 *)(in_ECX + 0x24) = uVar5;
  uVar5 = *(undefined4 *)(p_Var9->_Isleadbyte + 8);
  uVar6 = *(undefined4 *)(p_Var9->_Isleadbyte + 0xc);
  uVar7 = *(undefined4 *)(p_Var9->_Isleadbyte + 0x10);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(p_Var9->_Isleadbyte + 4);
  *(undefined4 *)(in_ECX + 0x2c) = uVar5;
  *(undefined4 *)(in_ECX + 0x30) = uVar6;
  *(undefined4 *)(in_ECX + 0x34) = uVar7;
  *(undefined8 *)(in_ECX + 0x38) = *(undefined8 *)(p_Var9->_Isleadbyte + 0x14);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(p_Var9->_Isleadbyte + 0x1c);
  return;
}

