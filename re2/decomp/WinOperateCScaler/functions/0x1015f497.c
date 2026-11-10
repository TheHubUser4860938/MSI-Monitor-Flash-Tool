// rea decompile_all
// name: std::numpunct<unsigned_short>::_Init
// address: 0x1015f497
// body: available
// range: 0x1015f497-0x1015f57d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall std::numpunct<unsigned short>::_Init(class std::_Locinfo const
   &,bool)
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::numpunct<unsigned_short>::_Init(numpunct<unsigned_short> *this,_Locinfo *param_1,bool param_2)

{
  _Cvtvec _Var1;
  numpunct<unsigned_short> *pnVar2;
  lconv *plVar3;
  ushort uVar4;
  _Cvtvec *p_Var5;
  undefined4 uVar6;
  int iVar7;
  _Cvtvec *p_Var8;
  uint *puVar9;
  undefined1 in_stack_ffffff1c [16];
  undefined4 in_stack_ffffff2c;
  undefined4 in_stack_ffffff30;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  _Cvtvec local_7c;
  numpunct<unsigned_short> *local_50;
  numpunct<unsigned_short> *local_4c;
  lconv *local_48;
  _Cvtvec local_44;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x98;
  local_8 = 0x1015f4a6;
  local_50 = this;
  local_4c = this;
  local_48 = _localeconv();
  p_Var5 = __Getcvt(&local_7c);
  pnVar2 = local_4c;
  p_Var8 = &local_44;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    p_Var8->_Page = p_Var5->_Page;
    p_Var5 = (_Cvtvec *)&p_Var5->_Mbcurmax;
    p_Var8 = (_Cvtvec *)&p_Var8->_Mbcurmax;
  }
  local_8 = 0;
  *(undefined4 *)(local_4c + 8) = 0;
  *(undefined4 *)(local_4c + 0x10) = 0;
  *(undefined4 *)(local_4c + 0x14) = 0;
  __Getcvt(&local_7c);
  uVar10 = 0x1015f502;
  uVar6 = FUN_10156025();
  *(undefined4 *)(pnVar2 + 8) = uVar6;
  uVar6 = FUN_10158e3b();
  *(undefined4 *)(pnVar2 + 0x10) = uVar6;
  p_Var5 = &local_44;
  uVar13 = 0;
  puVar12 = &DAT_101a7854;
  uVar11 = 0x1015f52c;
  uVar6 = FUN_10158e3b();
  plVar3 = local_48;
  *(undefined4 *)(pnVar2 + 0x14) = uVar6;
  if (param_2) {
    uVar4 = _Maklocchr<unsigned_short>('.',(ushort *)0x0,&local_44);
    *(ushort *)(pnVar2 + 0xc) = uVar4;
    uVar4 = _Maklocchr<unsigned_short>(',',(ushort *)0x0,&local_44);
    *(ushort *)(pnVar2 + 0xe) = uVar4;
  }
  else {
    p_Var8 = &local_44;
    puVar9 = (uint *)&stack0xffffff1c;
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = p_Var8->_Page;
      p_Var8 = (_Cvtvec *)&p_Var8->_Mbcurmax;
      puVar9 = puVar9 + 1;
    }
    _Var1._Isleadbyte[4] = (char)in_stack_ffffff2c;
    _Var1._Isleadbyte[5] = (char)((uint)in_stack_ffffff2c >> 8);
    _Var1._Isleadbyte[6] = (char)((uint)in_stack_ffffff2c >> 0x10);
    _Var1._Isleadbyte[7] = (char)((uint)in_stack_ffffff2c >> 0x18);
    _Var1._Page = in_stack_ffffff1c._0_4_;
    _Var1._Mbcurmax = in_stack_ffffff1c._4_4_;
    _Var1._Isclocale = in_stack_ffffff1c._8_4_;
    _Var1._Isleadbyte[0] = in_stack_ffffff1c[0xc];
    _Var1._Isleadbyte[1] = in_stack_ffffff1c[0xd];
    _Var1._Isleadbyte[2] = in_stack_ffffff1c[0xe];
    _Var1._Isleadbyte[3] = in_stack_ffffff1c[0xf];
    _Var1._Isleadbyte[8] = (char)in_stack_ffffff30;
    _Var1._Isleadbyte[9] = (char)((uint)in_stack_ffffff30 >> 8);
    _Var1._Isleadbyte[10] = (char)((uint)in_stack_ffffff30 >> 0x10);
    _Var1._Isleadbyte[0xb] = (char)((uint)in_stack_ffffff30 >> 0x18);
    _Var1._Isleadbyte[0xc] = (char)uVar10;
    _Var1._Isleadbyte[0xd] = (char)((uint)uVar10 >> 8);
    _Var1._Isleadbyte[0xe] = (char)((uint)uVar10 >> 0x10);
    _Var1._Isleadbyte[0xf] = (char)((uint)uVar10 >> 0x18);
    _Var1._Isleadbyte[0x10] = (char)uVar11;
    _Var1._Isleadbyte[0x11] = (char)((uint)uVar11 >> 8);
    _Var1._Isleadbyte[0x12] = (char)((uint)uVar11 >> 0x10);
    _Var1._Isleadbyte[0x13] = (char)((uint)uVar11 >> 0x18);
    _Var1._Isleadbyte._20_4_ = puVar12;
    _Var1._Isleadbyte[0x18] = (char)uVar13;
    _Var1._Isleadbyte[0x19] = (char)((uint)uVar13 >> 8);
    _Var1._Isleadbyte[0x1a] = (char)((uint)uVar13 >> 0x10);
    _Var1._Isleadbyte[0x1b] = (char)((uint)uVar13 >> 0x18);
    _Var1._Isleadbyte._28_4_ = p_Var5;
    _Getvals<unsigned_short>(local_4c,0,plVar3,_Var1);
  }
  FUN_10154489();
  return;
}

