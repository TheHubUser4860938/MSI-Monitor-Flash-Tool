// rea decompile_all
// name: do_get
// address: 0x569c6e
// body: available
// range: 0x569c6e-0x569e25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > __thiscall std::num_get<unsigned short,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_get(class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::ios_base &,int &,bool &)const 
    protected: virtual class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::num_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_get(class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::ios_base &,int &,bool &)const 
   
   Library: Visual Studio 2015 Release */

void do_get(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
           undefined4 param_5,int param_6,uint *param_7,undefined4 param_8)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 local_84 [8];
  undefined4 local_7c;
  undefined1 *local_78;
  int local_74;
  undefined1 local_70 [4];
  uint local_6c;
  int local_68;
  undefined1 local_64 [24];
  undefined4 local_4c;
  undefined4 local_3c;
  uint local_38;
  undefined1 local_34 [44];
  undefined4 local_8;
  undefined4 uStack_4;
  
  puVar1 = param_7;
  uStack_4 = 0x74;
  local_8 = 0x569c7a;
  uVar5 = 0xffffffff;
  local_74 = param_6;
  local_7c = param_8;
  if ((*(uint *)(param_6 + 0x14) & 0x4000) == 0) {
    local_68 = 0;
    uVar3 = FUN_00402ad0(local_84);
    local_8 = 4;
    uVar3 = Getifld(local_6c,local_34,&param_2,&param_4,*(undefined4 *)(local_74 + 0x14),uVar3,
                    &local_68);
    local_6c = __Stoulx(local_34,&local_78,uVar3);
    local_8 = 0xffffffff;
    FUN_00402240();
    if (((local_78 != local_34) && (local_68 == 0)) && (local_6c < 2)) {
      uVar5 = local_6c;
    }
  }
  else {
    uVar3 = FUN_00402ad0(local_70);
    local_8 = 0;
    use_facet<>(uVar3);
    local_8 = 0xffffffff;
    FUN_00402240();
    local_3c = 0;
    local_38 = 7;
    local_4c = (undefined4 *)((uint)local_4c._2_2_ << 0x10);
    FUN_00569057(1,0);
    local_8 = 1;
    uVar3 = curr_symbol(local_64);
    local_8._0_1_ = 2;
    FUN_00568e6f(uVar3,0,0xffffffff);
    local_8._0_1_ = 1;
    FID_conflict__Tidy(1,0);
    FUN_00568f10(1,0);
    uVar3 = positive_sign(local_64);
    local_8._0_1_ = 3;
    FUN_00568e6f(uVar3,0,0xffffffff);
    local_8 = CONCAT31(local_8._1_3_,1);
    FID_conflict__Tidy(1,0);
    puVar4 = local_4c;
    if (local_38 < 8) {
      puVar4 = &local_4c;
    }
    uVar5 = _Getloctxt<>(&param_2,&param_4,2,puVar4);
    local_8 = 0xffffffff;
    FID_conflict__Tidy(1,0);
  }
  cVar2 = equal(&param_4);
  if (cVar2 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((int)uVar5 < 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *(bool *)local_7c = uVar5 != 0;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_0055bae6();
  return;
}

