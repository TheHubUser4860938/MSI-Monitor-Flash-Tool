// rea decompile_all
// name: std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get
// address: 0x55e719
// body: available
// range: 0x55e719-0x55e7e1 inclusive
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
   std::istreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base &,int
   &,unsigned short &)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get
          (num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,
          undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,int param_7,uint *param_8,undefined2 *param_9)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this_00;
  istreambuf_iterator<char,std::char_traits<char>_> *piVar5;
  undefined1 local_4c [8];
  undefined4 *local_44;
  undefined2 *local_40;
  istreambuf_iterator<char,std::char_traits<char>_> *local_3c;
  int local_38;
  istreambuf_iterator<char,std::char_traits<char>_> local_34;
  istreambuf_iterator<char,std::char_traits<char>_> local_33 [43];
  undefined4 local_8;
  undefined4 uStack_4;
  
  puVar1 = param_8;
  iVar3 = param_7;
  uStack_4 = 0x3c;
  local_8 = 0x55e725;
  local_38 = 0;
  local_44 = param_2;
  local_40 = param_9;
  FUN_00402ad0(local_4c);
  local_8 = 0;
  iVar3 = _Getifld(this_00,(char *)this,&local_34,
                   (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,
                   *(locale **)(iVar3 + 0x14));
  local_8 = 0xffffffff;
  FUN_00402240();
  piVar5 = local_33;
  if (local_34 != (istreambuf_iterator<char,std::char_traits<char>_>)0x2d) {
    piVar5 = &local_34;
  }
  uVar4 = __Stoulx(piVar5,&local_3c,iVar3,&local_38);
  bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  if (bVar2) {
    *puVar1 = *puVar1 | 1;
  }
  if (((local_3c == piVar5) || (local_38 != 0)) || (0xffff < uVar4)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    if (local_34 == (istreambuf_iterator<char,std::char_traits<char>_>)0x2d) {
      uVar4 = -uVar4;
    }
    *local_40 = (short)uVar4;
  }
  *local_44 = param_3;
  local_44[1] = param_4;
  FUN_0055bae6();
  return;
}

