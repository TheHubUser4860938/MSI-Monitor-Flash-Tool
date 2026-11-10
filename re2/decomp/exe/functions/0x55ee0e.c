// rea decompile_all
// name: std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get
// address: 0x55ee0e
// body: available
// range: 0x55ee0e-0x55efc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual class std::istreambuf_iterator<char,struct std::char_traits<char> >
   __thiscall std::num_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> >
   >::do_get(class std::istreambuf_iterator<char,struct std::char_traits<char> >,class
   std::istreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base &,int &,bool
   &)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get
          (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,undefined4 param_9)

{
  uint *puVar1;
  bool bVar2;
  undefined4 uVar3;
  char ***pppcVar4;
  int iVar5;
  char *pcVar6;
  num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this;
  undefined1 local_84 [8];
  undefined4 local_7c;
  istreambuf_iterator<char,std::char_traits<char>_> *local_78;
  int local_74;
  undefined1 local_70 [4];
  char *local_6c;
  int local_68;
  undefined1 local_64 [24];
  char **local_4c [4];
  undefined4 local_3c;
  uint local_38;
  istreambuf_iterator<char,std::char_traits<char>_> local_34 [44];
  undefined4 local_8;
  undefined4 uStack_4;
  
  puVar1 = param_8;
  uStack_4 = 0x74;
  local_8 = 0x55ee1a;
  pcVar6 = (char *)0xffffffff;
  local_74 = param_7;
  local_7c = param_9;
  if ((*(uint *)(param_7 + 0x14) & 0x4000) == 0) {
    local_68 = 0;
    FUN_00402ad0(local_84);
    this = (num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)&local_68;
    local_8 = 4;
    iVar5 = _Getifld(this,local_6c,local_34,
                     (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,
                     *(locale **)(local_74 + 0x14));
    local_6c = (char *)__Stoulx(local_34,&local_78,iVar5,this);
    local_8 = 0xffffffff;
    FUN_00402240();
    if (((local_78 != local_34) && (local_68 == 0)) && (local_6c < 2)) {
      pcVar6 = local_6c;
    }
  }
  else {
    uVar3 = FUN_00402ad0(local_70);
    local_8 = 0;
    FUN_00406230(uVar3);
    local_8 = 0xffffffff;
    FUN_00402240();
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = (char **)((uint)local_4c[0] & 0xffffff00);
    FUN_00404310(1,0);
    local_8 = 1;
    uVar3 = FUN_00404a40(local_64);
    local_8._0_1_ = 2;
    FUN_00404740(uVar3,0,0xffffffff);
    local_8._0_1_ = 1;
    FUN_00404250(1,0);
    FUN_00405710(1,0);
    uVar3 = FUN_00404a20(local_64);
    local_8._0_1_ = 3;
    FUN_00404740(uVar3,0,0xffffffff);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00404250(1,0);
    pppcVar4 = (char ***)local_4c[0];
    if (local_38 < 0x10) {
      pppcVar4 = local_4c;
    }
    pcVar6 = (char *)_Getloctxt<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>
                               ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                                (istreambuf_iterator<char,std::char_traits<char>_> *)&param_5,2,
                                (char *)pppcVar4);
    local_8 = 0xffffffff;
    FUN_00404250(1,0);
  }
  bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  if (bVar2) {
    *puVar1 = *puVar1 | 1;
  }
  if ((int)pcVar6 < 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *(bool *)local_7c = pcVar6 != (char *)0x0;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  FUN_0055bae6();
  return;
}

