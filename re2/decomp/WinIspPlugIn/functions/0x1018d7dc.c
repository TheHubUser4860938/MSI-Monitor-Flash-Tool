// rea decompile_all
// name: do_get
// address: 0x1018d7dc
// body: available
// range: 0x1018d7dc-0x1018d8b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > __thiscall std::money_get<unsigned short,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_get(class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,bool,class
   std::ios_base &,int &,class std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> > &)const 
    protected: virtual class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::money_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_get(class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,bool,class std::ios_base &,int &,class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   &)const 
   
   Library: Visual Studio 2015 Release */

void do_get(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
           undefined4 param_5,undefined4 param_6,undefined4 param_7,uint *param_8,
           undefined4 *param_9)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  char ****ppppcVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined2 auStack_8c [12];
  undefined4 uStack_74;
  char ***pppcStack_70;
  undefined4 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined1 *puStack_5c;
  undefined4 *local_48;
  char ***local_44 [4];
  uint local_34;
  uint local_30;
  undefined1 local_2c [20];
  undefined2 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  puVar2 = param_9;
  puVar1 = param_8;
  uStack_4 = 0x38;
  local_8 = 0x1018d7e8;
  puStack_5c = local_2c;
  local_48 = param_1;
  uStack_60 = param_7;
  uStack_64 = param_6;
  puStack_68 = (undefined1 *)&param_4;
  puStack_6c = &param_2;
  pppcStack_70 = (char ***)local_44;
  uStack_74 = 0x1018d810;
  Getmfld();
  local_8 = 0;
  puStack_5c = (undefined1 *)&param_4;
  uStack_60 = 0x1018d823;
  cVar3 = equal();
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (local_34 == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    uVar6 = 0;
    puStack_5c = (undefined1 *)0x0;
    uStack_60 = local_34;
    uStack_64 = 0x1018d83e;
    FID_conflict_resize();
    ppppcVar4 = (char ****)local_44[0];
    if (local_30 < 0x10) {
      ppppcVar4 = local_44;
    }
    if (*(char *)ppppcVar4 == '-') {
      puVar5 = puVar2;
      if (7 < (uint)puVar2[5]) {
        puVar5 = (undefined4 *)*puVar2;
      }
      *(undefined2 *)puVar5 = local_18;
      uVar6 = 1;
    }
    for (; uVar6 < local_34; uVar6 = uVar6 + 1) {
      ppppcVar4 = (char ****)local_44[0];
      if (local_30 < 0x10) {
        ppppcVar4 = local_44;
      }
      puVar5 = puVar2;
      if (7 < (uint)puVar2[5]) {
        puVar5 = (undefined4 *)*puVar2;
      }
      *(undefined2 *)((int)puVar5 + uVar6 * 2) = auStack_8c[*(char *)((int)ppppcVar4 + uVar6)];
    }
  }
  puStack_5c = (undefined1 *)0x0;
  uStack_60 = 1;
  *local_48 = param_2;
  local_48[1] = param_3;
  uStack_64 = 0x1018d8ae;
  FUN_1000a890();
  puStack_5c = (undefined1 *)0x1018d8b5;
  FUN_1018015d();
  return;
}

