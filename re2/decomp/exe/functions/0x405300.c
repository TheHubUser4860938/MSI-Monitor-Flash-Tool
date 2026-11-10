// rea decompile_all
// name: std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Ffmt
// address: 0x405300
// body: available
// range: 0x405300-0x4053bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: char * __cdecl std::num_put<char,class std::ostreambuf_iterator<char,struct
   std::char_traits<char> > >::_Ffmt(char *,char,int)const 
   
   Library: Visual Studio 2019 Release */

char * __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Ffmt
          (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *this,char *param_1
          ,char param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  undefined3 in_stack_00000009;
  uint in_stack_00000010;
  
  *_param_2 = '%';
  pcVar1 = _param_2 + 1;
  if ((in_stack_00000010 & 0x20) != 0) {
    *pcVar1 = '+';
    pcVar1 = _param_2 + 2;
  }
  if ((in_stack_00000010 & 0x10) != 0) {
    *pcVar1 = '#';
    pcVar1 = pcVar1 + 1;
  }
  pcVar1[0] = '.';
  pcVar1[1] = '*';
  pcVar2 = pcVar1 + 2;
  if ((char)param_3 != '\0') {
    *pcVar2 = (char)param_3;
    pcVar2 = pcVar1 + 3;
  }
  uVar3 = in_stack_00000010 & 0x3000;
  if ((in_stack_00000010 & 4) == 0) {
    if (uVar3 != 0x2000) {
      if (uVar3 == 0x3000) {
        *pcVar2 = 'a';
        pcVar2[1] = '\0';
        return _param_2;
      }
      *pcVar2 = (uVar3 != 0x1000) * '\x02' + 'e';
      pcVar2[1] = '\0';
      return _param_2;
    }
  }
  else if (uVar3 != 0x2000) {
    if (uVar3 == 0x3000) {
      *pcVar2 = 'A';
      pcVar2[1] = '\0';
      return _param_2;
    }
    *pcVar2 = (uVar3 != 0x1000) * '\x02' + 'E';
    pcVar2[1] = '\0';
    return _param_2;
  }
  *pcVar2 = 'f';
  pcVar2[1] = '\0';
  return _param_2;
}

