// rea decompile_all
// name: FUN_10013330
// address: 0x10013330
// body: available
// range: 0x10013330-0x1001337b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013330(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _Cvtvec *p_Var6;
  undefined4 *in_ECX;
  _Cvtvec local_34;
  
  in_ECX[1] = param_2;
  *in_ECX = std::codecvt<wchar_t,char,_Mbstatet>::vftable;
  p_Var6 = __Getcvt(&local_34);
  uVar1 = p_Var6->_Mbcurmax;
  iVar2 = p_Var6->_Isclocale;
  uVar3 = *(undefined4 *)p_Var6->_Isleadbyte;
  in_ECX[2] = p_Var6->_Page;
  in_ECX[3] = uVar1;
  in_ECX[4] = iVar2;
  in_ECX[5] = uVar3;
  uVar3 = *(undefined4 *)(p_Var6->_Isleadbyte + 8);
  uVar4 = *(undefined4 *)(p_Var6->_Isleadbyte + 0xc);
  uVar5 = *(undefined4 *)(p_Var6->_Isleadbyte + 0x10);
  in_ECX[6] = *(undefined4 *)(p_Var6->_Isleadbyte + 4);
  in_ECX[7] = uVar3;
  in_ECX[8] = uVar4;
  in_ECX[9] = uVar5;
  *(undefined8 *)(in_ECX + 10) = *(undefined8 *)(p_Var6->_Isleadbyte + 0x14);
  in_ECX[0xc] = *(undefined4 *)(p_Var6->_Isleadbyte + 0x1c);
  return;
}

