// rea decompile_all
// name: common_openfile<char>
// address: 0x101b9b36
// body: available
// range: 0x101b9b36-0x101b9bba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    struct _iobuf * __cdecl common_openfile<char>(char const * const,char const * const,int,class
   __crt_stdio_stream)
   
   Library: Visual Studio 2015 Release */

_iobuf * __cdecl common_openfile<char>(char *param_1,undefined4 param_2,int param_3,_iobuf *param_4)

{
  int *piVar1;
  errno_t eVar2;
  char local_20 [12];
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  piVar1 = (int *)__acrt_stdio_parse_mode<char>(local_20);
  local_14 = *piVar1;
  local_10 = piVar1[1];
  local_c = piVar1[2];
  if (((char)local_c != '\0') &&
     (eVar2 = FID_conflict___sopen_s(&local_8,param_1,local_14,param_3,0x180), eVar2 == 0)) {
    _DAT_10249610 = _DAT_10249610 + 1;
    LOCK();
    param_4->_flag = param_4->_flag | local_10;
    UNLOCK();
    param_4->_base = (char *)0x0;
    param_4->_tmpfname = (char *)0x0;
    param_4->_cnt = 0;
    param_4->_ptr = (char *)0x0;
    param_4->_file = local_8;
    return param_4;
  }
  return (_iobuf *)0x0;
}

