// rea decompile_all
// name: std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get_year
// address: 0x10194ccc
// body: available
// range: 0x10194ccc-0x10194d5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual class std::istreambuf_iterator<char,struct std::char_traits<char> >
   __thiscall std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> >
   >::do_get_year(class std::istreambuf_iterator<char,struct std::char_traits<char> >,class
   std::istreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base &,int &,struct
   tm *)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get_year
          (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,
          undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this_00;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  undefined1 local_1c [8];
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x10194cd8;
  uVar1 = FUN_100072b0(local_1c);
  local_8 = 0;
  FUN_1000c530(uVar1);
  local_8 = 0xffffffff;
  FUN_10006a30();
  local_14[0] = 0;
  uVar2 = _Getint(this_00,(istreambuf_iterator<char,std::char_traits<char>_> *)this,
                  (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                  (int)&stack0x00000010,0,(int *)0x270f,(ctype<char> *)local_14);
  *in_stack_0000001c = *in_stack_0000001c | uVar2;
  if ((uVar2 & 2) == 0) {
    if (local_14[0] < 0x45) {
      local_14[0] = local_14[0] + 100;
    }
    else if (99 < local_14[0]) {
      local_14[0] = local_14[0] + -0x76c;
    }
    *(int *)(in_stack_00000020 + 0x14) = local_14[0];
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}

