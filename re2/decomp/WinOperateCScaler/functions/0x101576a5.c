// rea decompile_all
// name: std::istreambuf_iterator<char,std::char_traits<char>_>::_Peek
// address: 0x101576a5
// body: available
// range: 0x101576a5-0x101576c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: char __thiscall std::istreambuf_iterator<char,struct std::char_traits<char>
   >::_Peek(void)const 
   
   Library: Visual Studio 2015 Release */

char __thiscall
std::istreambuf_iterator<char,std::char_traits<char>_>::_Peek
          (istreambuf_iterator<char,std::char_traits<char>_> *this)

{
  int iVar1;
  
  if (*(basic_streambuf<char,std::char_traits<char>_> **)this !=
      (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    iVar1 = basic_streambuf<char,std::char_traits<char>_>::sgetc
                      (*(basic_streambuf<char,std::char_traits<char>_> **)this);
    if (iVar1 != -1) {
      this[5] = SUB41(iVar1,0);
      goto LAB_101576c0;
    }
  }
  *(undefined4 *)this = 0;
LAB_101576c0:
  this[4] = (istreambuf_iterator<char,std::char_traits<char>_>)0x1;
  return (char)this[5];
}

