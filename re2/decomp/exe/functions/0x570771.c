// rea decompile_all
// name: std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get_time
// address: 0x570771
// body: available
// range: 0x570771-0x57088b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual class std::istreambuf_iterator<char,struct std::char_traits<char> >
   __thiscall std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> >
   >::do_get_time(class std::istreambuf_iterator<char,struct std::char_traits<char> >,class
   std::istreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base &,int &,struct
   tm *)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get_time
          (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,
          undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5,
          undefined4 param_6,undefined4 param_7,uint *param_8,ctype<char> *param_9)

{
  code *pcVar1;
  uint *puVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this_00;
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this_01;
  undefined1 local_1c [8];
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x57077d;
  local_14 = this;
  uVar4 = FUN_00402ad0(local_1c);
  local_8 = 0;
  piVar5 = (int *)FUN_00405f50(uVar4);
  local_8 = 0xffffffff;
  FUN_00402240();
  uVar6 = _Getint((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                  (param_9 + 8),(istreambuf_iterator<char,std::char_traits<char>_> *)this,
                  (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,0,
                  (int *)0x17,param_9 + 8);
  puVar2 = param_8;
  *param_8 = *param_8 | uVar6;
  if (*param_8 == 0) {
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    }
    pcVar1 = *(code **)(*piVar5 + 0x28);
    guard_check_icall(CONCAT13(param_5,param_4._1_3_),0);
    cVar3 = (*pcVar1)();
    if (cVar3 != ':') goto LAB_0057081d;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc
              ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    uVar6 = _Getint(this_00,(istreambuf_iterator<char,std::char_traits<char>_> *)local_14,
                    (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,0,
                    (int *)0x3b,param_9 + 4);
    *puVar2 = *puVar2 | uVar6;
  }
  else {
LAB_0057081d:
    *puVar2 = *puVar2 | 2;
  }
  if (*puVar2 == 0) {
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    }
    pcVar1 = *(code **)(*piVar5 + 0x28);
    guard_check_icall(CONCAT13(param_5,param_4._1_3_),0);
    cVar3 = (*pcVar1)();
    if (cVar3 == ':') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
      uVar6 = _Getint(this_01,(istreambuf_iterator<char,std::char_traits<char>_> *)local_14,
                      (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,0,
                      (int *)0x3b,param_9);
      *puVar2 = *puVar2 | uVar6;
      goto LAB_00570876;
    }
  }
  *puVar2 = *puVar2 | 2;
LAB_00570876:
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}

