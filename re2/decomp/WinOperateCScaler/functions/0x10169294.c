// rea decompile_all
// name: std::collate<char>::do_transform
// address: 0x10169294
// body: available
// range: 0x10169294-0x10169327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > __thiscall std::collate<char>::do_transform(char const *,char const
   *)const 
   
   Library: Visual Studio 2015 Release */

char * __thiscall std::collate<char>::do_transform(collate<char> *this,char *param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  char *_String1;
  char *in_stack_0000000c;
  
  param_1[0x14] = '\x0f';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  uVar2 = *(uint *)(param_1 + 0x14);
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  pcVar1 = param_1;
  if (0xf < uVar2) {
    pcVar1 = *(char **)param_1;
  }
  *pcVar1 = '\0';
  uVar2 = 0;
  if ((int)in_stack_0000000c - (int)param_2 != 0) {
    uVar2 = (int)in_stack_0000000c - (int)param_2;
    do {
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1,uVar2,
                 '\0');
      pcVar1 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pcVar1 = *(char **)param_1;
      }
      _String1 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        _String1 = *(char **)param_1;
      }
      uVar2 = __Strxfrm(_String1,pcVar1 + *(int *)(param_1 + 0x10),param_2,in_stack_0000000c,
                        (_Collvec *)(this + 8));
    } while ((*(uint *)(param_1 + 0x10) < uVar2) && (uVar2 != 0));
  }
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1,uVar2,'\0');
  return param_1;
}

