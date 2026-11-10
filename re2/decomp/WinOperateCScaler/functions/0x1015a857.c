// rea decompile_all
// name: Fput
// address: 0x1015a857
// body: available
// range: 0x1015a857-0x1015ab85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    private: class std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >
   __cdecl std::num_put<unsigned short,class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >::_Fput(class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> >,class std::ios_base &,unsigned short,char const *,unsigned
   int)const 
    private: class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > __cdecl
   std::num_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   >::_Fput(class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >,class
   std::ios_base &,wchar_t,char const *,unsigned int)const 
   
   Library: Visual Studio 2015 Release */

void Fput(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
         undefined4 param_6,char *param_7,uint param_8)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  size_t sVar5;
  lconv *plVar6;
  size_t sVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  char *_Control;
  char ****ppppcVar14;
  int iVar15;
  uint uVar16;
  undefined1 local_5c [8];
  undefined1 local_54 [4];
  char *local_50;
  undefined2 local_4c [2];
  int *local_48;
  char ***local_44 [5];
  uint local_30;
  undefined4 local_2c;
  uint local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x1015a863;
  local_50 = param_7;
  if ((param_8 == 0) || ((*param_7 != '+' && (*param_7 != '-')))) {
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
  }
  if ((*(uint *)(param_5 + 0x14) & 0x3000) == 0x3000) {
    _Control = "pP";
    if (((uVar16 + 2 <= param_8) && (param_7[uVar16] == '0')) &&
       ((param_7[uVar16 + 1] == 'x' || (param_7[uVar16 + 1] == 'X')))) {
      uVar16 = uVar16 + 2;
    }
  }
  else {
    _Control = "eE";
  }
  sVar5 = _strcspn(param_7,_Control);
  local_4c[0] = 0x2e;
  plVar6 = _localeconv();
  local_4c[0] = CONCAT11(local_4c[0]._1_1_,*plVar6->decimal_point);
  sVar7 = _strcspn(param_7,(char *)local_4c);
  uVar8 = FUN_100103a0(local_5c);
  local_8 = 0;
  local_48 = (int *)FUN_10012f20(uVar8);
  local_8 = 0xffffffff;
  FUN_10007650();
  local_1c = 0;
  local_18 = 7;
  local_2c = (undefined4 *)((uint)local_2c._2_2_ << 0x10);
  FUN_1001ae00(param_8,0);
  local_8 = 1;
  puVar13 = local_2c;
  if (local_18 < 8) {
    puVar13 = &local_2c;
  }
  pcVar2 = *(code **)(*local_48 + 0x2c);
  guard_check_icall(local_50,local_50 + param_8,puVar13);
  (*pcVar2)();
  uVar8 = FUN_100103a0(local_5c);
  local_8._0_1_ = 2;
  piVar9 = (int *)use_facet<>(uVar8);
  local_8._0_1_ = 1;
  local_48 = piVar9;
  FUN_10007650();
  grouping(local_44);
  local_8 = CONCAT31(local_8._1_3_,3);
  pcVar2 = *(code **)(*piVar9 + 0x10);
  guard_check_icall();
  uVar10 = (*pcVar2)();
  local_50 = (char *)(uVar10 & 0xffff);
  if (sVar7 != param_8) {
    pcVar2 = *(code **)(*local_48 + 0xc);
    guard_check_icall();
    uVar4 = (*pcVar2)();
    puVar13 = local_2c;
    if (local_18 < 8) {
      puVar13 = &local_2c;
    }
    *(undefined2 *)((int)puVar13 + sVar7 * 2) = uVar4;
    sVar5 = sVar7;
  }
  ppppcVar14 = (char ****)local_44[0];
  if (local_30 < 0x10) {
    ppppcVar14 = local_44;
  }
  while (((uVar10 = local_1c, cVar1 = *(char *)ppppcVar14, cVar1 != '\x7f' && ('\0' < cVar1)) &&
         ((uint)(int)cVar1 < sVar5 - uVar16))) {
    sVar5 = sVar5 - (int)cVar1;
    FUN_10165cfa(sVar5,1,local_50);
    if ('\0' < *(char *)((int)ppppcVar14 + 1)) {
      ppppcVar14 = (char ****)((int)ppppcVar14 + 1);
    }
  }
  if (((*(int *)(param_5 + 0x24) < 0) ||
      ((*(int *)(param_5 + 0x24) < 1 && (*(int *)(param_5 + 0x20) == 0)))) ||
     (*(uint *)(param_5 + 0x20) <= local_1c)) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(uint *)(param_5 + 0x20) - local_1c;
  }
  uVar11 = *(uint *)(param_5 + 0x14) & 0x1c0;
  if (uVar11 == 0x40) {
    puVar13 = local_2c;
    if (local_18 < 8) {
      puVar13 = &local_2c;
    }
  }
  else {
    if (uVar11 == 0x100) {
      puVar13 = local_2c;
      if (local_18 < 8) {
        puVar13 = &local_2c;
      }
      puVar13 = (undefined4 *)Put(param_1,local_5c,param_3,param_4,puVar13,uVar16);
      puVar13 = (undefined4 *)Rep(param_1,local_5c,*puVar13,puVar13[1],param_6,iVar15);
      iVar15 = 0;
      goto LAB_1015ab0c;
    }
    puVar12 = (undefined4 *)Rep(param_1,local_5c,param_3,param_4,param_6,iVar15);
    iVar15 = 0;
    puVar13 = local_2c;
    if (local_18 < 8) {
      puVar13 = &local_2c;
    }
    param_4 = puVar12[1];
    param_3 = *puVar12;
  }
  puVar13 = (undefined4 *)Put(param_1,local_5c,param_3,param_4,puVar13,uVar16);
LAB_1015ab0c:
  local_50 = (char *)local_2c;
  if (local_18 < 8) {
    local_50 = (char *)&local_2c;
  }
  puVar13 = (undefined4 *)
            Put(param_1,local_54,*puVar13,puVar13[1],(int)local_50 + uVar16 * 2,uVar10 - uVar16);
  uVar8 = *puVar13;
  uVar3 = puVar13[1];
  *(undefined4 *)(param_5 + 0x20) = 0;
  *(undefined4 *)(param_5 + 0x24) = 0;
  Rep(param_1,param_2,uVar8,uVar3,param_6,iVar15);
  FUN_10003850(1,0);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy
            ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)&local_2c,
             true,0);
  FUN_10154478();
  return;
}

