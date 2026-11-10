// rea decompile_all
// name: do_get
// address: 0x56a303
// body: available
// range: 0x56a303-0x56a3b0 inclusive
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
   std::ios_base &,int &,void * &)const 
    protected: virtual class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::num_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_get(class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::ios_base &,int &,void * &)const 
   
   Library: Visual Studio 2015 Release */

void do_get(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint *in_stack_0000001c;
  undefined4 *in_stack_00000020;
  undefined1 local_48 [8];
  undefined4 *local_40;
  undefined1 *local_3c;
  int local_38;
  undefined1 local_34 [44];
  undefined4 local_8;
  undefined4 uStack_4;
  
  puVar1 = in_stack_0000001c;
  uStack_4 = 0x40;
  local_8 = 0x56a30f;
  local_38 = 0;
  local_40 = in_stack_00000020;
  FUN_00402ad0(local_48);
  local_8 = 0;
  uVar3 = Getifld();
  local_8 = 0xffffffff;
  FUN_00402240();
  uVar3 = __Stoulx(local_34,&local_3c,uVar3,&local_38);
  cVar2 = equal(&stack0x00000010);
  if (cVar2 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((local_3c == local_34) || (local_38 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *local_40 = uVar3;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_0055bae6();
  return;
}

