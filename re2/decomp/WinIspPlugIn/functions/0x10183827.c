// rea decompile_all
// name: std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get
// address: 0x10183827
// body: available
// range: 0x10183827-0x101838db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual class std::istreambuf_iterator<char,struct std::char_traits<char> >
   __thiscall std::num_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> >
   >::do_get(class std::istreambuf_iterator<char,struct std::char_traits<char> >,class
   std::istreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base &,int
   &,unsigned __int64 &)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get
          (num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,
          undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,int param_7,uint *param_8,undefined8 *param_9)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this_00;
  undefined1 local_4c [8];
  undefined4 *local_44;
  undefined8 *local_40;
  istreambuf_iterator<char,std::char_traits<char>_> *local_3c;
  int local_38;
  istreambuf_iterator<char,std::char_traits<char>_> local_34 [44];
  undefined4 local_8;
  undefined4 uStack_4;
  
  puVar1 = param_8;
  iVar3 = param_7;
  uStack_4 = 0x3c;
  local_8 = 0x10183833;
  local_38 = 0;
  local_44 = param_2;
  local_40 = param_9;
  FUN_100072b0(local_4c);
  local_8 = 0;
  this_00 = (num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)&local_38;
  iVar3 = _Getifld(this_00,(char *)this,local_34,
                   (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,
                   *(locale **)(iVar3 + 0x14));
  uVar4 = __Stoullx(local_34,&local_3c,iVar3,this_00);
  local_8 = 0xffffffff;
  FUN_10006a30();
  bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  if (bVar2) {
    *puVar1 = *puVar1 | 1;
  }
  if ((local_3c == local_34) || (local_38 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *local_40 = uVar4;
  }
  *local_44 = param_3;
  local_44[1] = param_4;
  FUN_1018015d();
  return;
}

