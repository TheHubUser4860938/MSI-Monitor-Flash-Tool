// rea decompile_all
// name: do_get
// address: 0x1018e5d6
// body: available
// range: 0x1018e5d6-0x1018e6cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > __thiscall std::num_get<unsigned short,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_get(class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::ios_base &,int &,float &)const 
    protected: virtual class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::num_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_get(class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::ios_base &,int &,float &)const 
   
   Library: Visual Studio 2015 Release */

void do_get(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
           undefined4 param_5,undefined4 param_6,uint *param_7,float *param_8)

{
  uint *puVar1;
  float *pfVar2;
  char cVar3;
  int iVar4;
  float10 fVar5;
  int *piVar6;
  char *local_330;
  int local_32c;
  int local_328;
  float local_324;
  char local_320 [792];
  uint local_8;
  
  pfVar2 = param_8;
  puVar1 = param_7;
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  piVar6 = &local_32c;
  local_32c = 0;
  local_328 = 1000000000;
  iVar4 = Getffld();
  local_324 = std::_Stofx_v2(local_320,&local_330,iVar4,piVar6);
  if ((local_328 != 1000000000) && (local_328 != 0)) {
    fVar5 = (float10)ldexpf(local_324,local_328 << 2);
    local_324 = (float)fVar5;
  }
  cVar3 = equal(&param_4);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((local_330 == local_320) || (local_32c != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *pfVar2 = local_324;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

