// rea decompile_all
// name: _setvbuf
// address: 0x10172c5e
// body: available
// range: 0x10172c5e-0x10172cd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _setvbuf
   
   Library: Visual Studio 2015 Release */

int __cdecl _setvbuf(FILE *_File,char *_Buf,int _Mode,size_t _Size)

{
  int *piVar1;
  int iVar2;
  size_t *local_18;
  FILE **local_14;
  int *local_10;
  char **local_c;
  FILE *local_8;
  
  local_8 = _File;
  if (_File == (FILE *)0x0) {
LAB_10172c70:
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_1016ec41();
    iVar2 = -1;
  }
  else {
    if (_Mode == 4) {
LAB_10172c96:
      if ((_Mode == 0) || (_Mode == 0x40)) goto LAB_10172c9f;
    }
    else {
      if (_Mode != 0) {
        if (_Mode != 0x40) goto LAB_10172c70;
        goto LAB_10172c96;
      }
LAB_10172c9f:
      if (0x7ffffffd < _Size - 2) goto LAB_10172c70;
    }
    local_18 = &_Size;
    local_14 = &local_8;
    local_10 = &_Mode;
    local_c = &_Buf;
    iVar2 = __acrt_lock_stream_and_call<<lambda_b721fa326cdb32351d23dfa67958c160>_>
                      (_File,(<lambda_b721fa326cdb32351d23dfa67958c160> *)&local_18);
  }
  return iVar2;
}

