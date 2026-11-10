// rea decompile_all
// name: do_get_time
// address: 0x56b7a7
// body: available
// range: 0x56b7a7-0x56b8c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > __thiscall std::time_get<unsigned short,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >
   >::do_get_time(class std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned
   short> >,class std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short>
   >,class std::ios_base &,int &,struct tm *)const 
    protected: virtual class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::time_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_get_time(class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::ios_base &,int &,struct tm *)const 
   
   Library: Visual Studio 2015 Release */

void do_get_time(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                undefined4 param_5,undefined4 param_6,uint *param_7,int param_8)

{
  code *pcVar1;
  uint *puVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined1 local_1c [8];
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x56b7b3;
  uVar4 = FUN_00402ad0(local_1c);
  local_8 = 0;
  piVar5 = (int *)use_facet<>(uVar4);
  local_8 = 0xffffffff;
  FUN_00402240();
  uVar6 = Getint();
  puVar2 = param_7;
  *param_7 = *param_7 | uVar6;
  if (*param_7 == 0) {
    if ((char)param_3 == '\0') {
      Peek();
    }
    pcVar1 = *(code **)(*piVar5 + 0x38);
    guard_check_icall(CONCAT22(param_4,param_3._2_2_),0);
    cVar3 = (*pcVar1)();
    if (cVar3 != ':') goto LAB_0056b853;
    Inc();
    uVar6 = Getint(local_14,&param_2,&param_4,0,0x3b,param_8 + 4,piVar5);
    *puVar2 = *puVar2 | uVar6;
  }
  else {
LAB_0056b853:
    *puVar2 = *puVar2 | 2;
  }
  if (*puVar2 == 0) {
    if ((char)param_3 == '\0') {
      Peek();
    }
    pcVar1 = *(code **)(*piVar5 + 0x38);
    guard_check_icall(CONCAT22(param_4,param_3._2_2_),0);
    cVar3 = (*pcVar1)();
    if (cVar3 == ':') {
      Inc();
      uVar6 = Getint(local_14,&param_2,&param_4,0,0x3b,param_8,piVar5);
      *puVar2 = *puVar2 | uVar6;
      goto LAB_0056b8ac;
    }
  }
  *puVar2 = *puVar2 | 2;
LAB_0056b8ac:
  *param_1 = param_2;
  param_1[1] = CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,(char)param_3));
  return;
}

