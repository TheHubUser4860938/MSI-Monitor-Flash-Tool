// rea decompile_all
// name: do_out
// address: 0x1016447f
// body: available
// range: 0x1016447f-0x10164564 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual int __thiscall std::codecvt<unsigned short,char,struct
   _Mbstatet>::do_out(struct _Mbstatet &,unsigned short const *,unsigned short const *,unsigned
   short const * &,char *,char *,char * &)const 
    protected: virtual int __thiscall std::codecvt<wchar_t,char,struct _Mbstatet>::do_out(struct
   _Mbstatet &,wchar_t const *,wchar_t const *,wchar_t const * &,char *,char *,char * &)const 
   
   Library: Visual Studio 2015 Release */

void do_out(mbstate_t *param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,
           int *param_7)

{
  mbstate_t mVar1;
  mbstate_t mVar2;
  int iVar3;
  int in_ECX;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  *param_4 = param_2;
  *param_7 = param_5;
  iVar3 = *param_4;
  do {
    if ((iVar3 == param_3) || (*param_7 == param_6)) goto LAB_10164552;
    if (param_6 - *param_7 < 5) {
      mVar1 = *param_1;
      mVar2 = param_1[1];
      iVar3 = __Wcrtomb(local_10,*(wchar_t *)*param_4,param_1,(_Cvtvec *)(in_ECX + 8));
      if (iVar3 < 0) goto LAB_10164552;
      if (param_6 - *param_7 < iVar3) {
        *param_1 = mVar1;
        param_1[1] = mVar2;
LAB_10164552:
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      FUN_1016bba0(*param_7,local_10,iVar3);
    }
    else {
      iVar3 = __Wcrtomb((char *)*param_7,*(wchar_t *)*param_4,param_1,(_Cvtvec *)(in_ECX + 8));
      if (iVar3 < 0) goto LAB_10164552;
    }
    *param_4 = *param_4 + 2;
    *param_7 = *param_7 + iVar3;
    iVar3 = *param_4;
  } while( true );
}

