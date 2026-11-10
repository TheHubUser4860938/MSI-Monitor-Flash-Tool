// rea decompile_all
// name: std::money_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get
// address: 0x56fe80
// body: available
// range: 0x56fe80-0x56ff53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual class std::istreambuf_iterator<char,struct std::char_traits<char> >
   __thiscall std::money_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char>
   > >::do_get(class std::istreambuf_iterator<char,struct std::char_traits<char> >,class
   std::istreambuf_iterator<char,struct std::char_traits<char> >,bool,class std::ios_base &,int
   &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &)const
   
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::money_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get
          (money_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,
          undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,ios_base *param_7,char *param_8,uint *param_9,undefined4 *param_10)

{
  uint *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  char ****ppppcVar4;
  undefined4 *puVar5;
  uint uVar6;
  char ***local_38 [4];
  uint local_28;
  uint local_24;
  undefined1 local_16;
  undefined4 local_8;
  undefined4 uStack_4;
  
  puVar2 = param_10;
  puVar1 = param_9;
  uStack_4 = 0x2c;
  local_8 = 0x56fe8c;
  _Getmfld(this,(istreambuf_iterator<char,std::char_traits<char>_> *)local_38,
           (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,SUB41(&param_5,0),param_7,
           param_8);
  local_8 = 0;
  bVar3 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  if (bVar3) {
    *puVar1 = *puVar1 | 1;
  }
  if (local_28 == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    uVar6 = 0;
    FUN_004042e0(local_28);
    ppppcVar4 = (char ****)local_38[0];
    if (local_24 < 0x10) {
      ppppcVar4 = local_38;
    }
    if (*(char *)ppppcVar4 == '-') {
      puVar5 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar5 = (undefined4 *)*puVar2;
      }
      *(undefined1 *)puVar5 = local_16;
      uVar6 = 1;
    }
    for (; uVar6 < local_28; uVar6 = uVar6 + 1) {
      ppppcVar4 = (char ****)local_38[0];
      if (local_24 < 0x10) {
        ppppcVar4 = local_38;
      }
      puVar5 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar5 = (undefined4 *)*puVar2;
      }
      *(undefined1 *)((int)puVar5 + uVar6) =
           *(undefined1 *)((int)local_38 + *(char *)((int)ppppcVar4 + uVar6) + -0x18);
    }
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  FUN_00404250(1);
  FUN_0055bae6();
  return;
}

