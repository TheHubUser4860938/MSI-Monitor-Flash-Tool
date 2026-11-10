// rea decompile_all
// name: do_put
// address: 0x56cf91
// body: available
// range: 0x56cf91-0x56d06a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > __thiscall std::time_put<unsigned short,class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_put(class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::ios_base &,unsigned short,struct tm const *,char,char)const 
    protected: virtual class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::time_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_put(class std::ostreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::ios_base &,wchar_t,struct tm const *,char,char)const 
   
   Library: Visual Studio 2015 Release */

void do_put(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
           undefined4 param_5,tm *param_6,char param_7,char param_8)

{
  wchar_t ****ppppwVar1;
  size_t sVar2;
  int in_ECX;
  int iVar3;
  wchar_t ***local_38 [4];
  size_t local_28;
  uint local_24;
  wchar_t local_20 [2];
  undefined4 local_1c;
  undefined2 uStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_28 = 0;
  local_20[0] = L'!';
  local_20[1] = L'%';
  local_24 = 7;
  local_38[0] = (wchar_t ***)((uint)local_38[0] & 0xffff0000);
  uStack_18 = 0;
  local_8 = 0;
  if (param_8 == '\0') {
    local_1c = (uint)(ushort)(short)param_7;
  }
  else {
    local_1c = CONCAT22((short)param_7,(short)param_8);
  }
  iVar3 = 0x10;
  while( true ) {
    FUN_004065b0(iVar3,0);
    ppppwVar1 = (wchar_t ****)local_38[0];
    if (local_24 < 8) {
      ppppwVar1 = local_38;
    }
    sVar2 = __Wcsftime((wchar_t *)ppppwVar1,local_28,local_20,param_6,*(void **)(in_ECX + 8));
    if (sVar2 != 0) break;
    iVar3 = iVar3 * 2;
  }
  ppppwVar1 = (wchar_t ****)local_38[0];
  if (local_24 < 8) {
    ppppwVar1 = local_38;
  }
  copy<>(param_1,(wchar_t *)((int)ppppwVar1 + 2),(wchar_t *)((int)ppppwVar1 + sVar2 * 2),param_2,
         param_3);
  FUN_00403e60(1,0);
  FUN_0055bae6();
  return;
}

