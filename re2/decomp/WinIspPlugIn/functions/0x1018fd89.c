// rea decompile_all
// name: do_get_time
// address: 0x1018fd89
// body: available
// range: 0x1018fd89-0x1018fea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x1018fd95;
  uVar4 = FUN_100072b0(local_1c);
  local_8 = 0;
  piVar5 = (int *)FUN_1003ca30(uVar4);
  local_8 = 0xffffffff;
  FUN_10006a30();
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
    if (cVar3 != ':') goto LAB_1018fe35;
    Inc();
    uVar6 = Getint(local_14,&param_2,&param_4,0,0x3b,param_8 + 4,piVar5);
    *puVar2 = *puVar2 | uVar6;
  }
  else {
LAB_1018fe35:
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
      goto LAB_1018fe8e;
    }
  }
  *puVar2 = *puVar2 | 2;
LAB_1018fe8e:
  *param_1 = param_2;
  param_1[1] = CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,(char)param_3));
  return;
}

