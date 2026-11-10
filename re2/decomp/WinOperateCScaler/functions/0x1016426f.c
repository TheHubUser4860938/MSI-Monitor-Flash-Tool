// rea decompile_all
// name: do_in
// address: 0x1016426f
// body: available
// range: 0x1016426f-0x10164310 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual int __thiscall std::codecvt<unsigned short,char,struct
   _Mbstatet>::do_in(struct _Mbstatet &,char const *,char const *,char const * &,unsigned short
   *,unsigned short *,unsigned short * &)const 
    protected: virtual int __thiscall std::codecvt<wchar_t,char,struct _Mbstatet>::do_in(struct
   _Mbstatet &,char const *,char const *,char const * &,wchar_t *,wchar_t *,wchar_t * &)const 
   
   Library: Visual Studio 2015 Release */

bool do_in(mbstate_t *param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,
          int *param_7)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int in_ECX;
  bool bVar4;
  
  *param_4 = param_2;
  *param_7 = param_5;
  bVar4 = *param_4 != param_3;
  while( true ) {
    if (*param_4 == param_3) {
      return bVar4;
    }
    if (*param_7 == param_6) {
      return bVar4;
    }
    pcVar3 = (char *)__Mbrtowc((wchar_t *)*param_7,(char *)*param_4,param_3 - *param_4,param_1,
                               (_Cvtvec *)(in_ECX + 8));
    if (pcVar3 == (char *)0xfffffffe) {
      *param_4 = param_3;
      return bVar4;
    }
    if (pcVar3 == (char *)0xffffffff) break;
    if ((pcVar3 == (char *)0x0) && (*(short *)*param_7 == 0)) {
      pcVar3 = (char *)*param_4;
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      pcVar3 = pcVar3 + (1 - (int)pcVar1);
    }
    *param_4 = *param_4 + (-(uint)(pcVar3 != (char *)0xfffffffd) & (uint)pcVar3);
    *param_7 = *param_7 + 2;
    bVar4 = false;
  }
  return (bool)2;
}

