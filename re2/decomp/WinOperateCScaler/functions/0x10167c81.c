// rea decompile_all
// name: std::_Mpunct<char>::_Makpat
// address: 0x10167c81
// body: available
// range: 0x10167c81-0x10167cde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: void __thiscall std::_Mpunct<char>::_Makpat(struct std::money_base::pattern &,unsigned
   int,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::_Mpunct<char>::_Makpat
          (_Mpunct<char> *this,pattern *param_1,uint param_2,uint param_3,uint param_4)

{
  char *pcVar1;
  int *piVar2;
  
  if ((((this[0x28] == (_Mpunct<char>)0x0) && (param_2 < 3)) && (param_3 < 2)) && (param_4 < 5)) {
    pcVar1 = "+v$x+v$xv$+xv+$xv$+x+$vx+$vx$v+x+$vx$+vx+v $+v $v $+v +$v $++$ v+$ v$ v++$ v$+ v+xv$+ v$v$ +v+ $v$ ++x$v+ $v$v ++ $v$ +v"
             + ((param_3 + param_2 * 2) * 5 + param_4) * 4;
  }
  else {
    pcVar1 = "$+xv";
  }
  if (param_1 != (pattern *)0x0) {
    if (pcVar1 != (char *)0x0) {
      *(undefined4 *)param_1 = *(undefined4 *)pcVar1;
      return;
    }
    *(undefined4 *)param_1 = 0;
  }
  piVar2 = __errno();
  *piVar2 = 0x16;
  FUN_1016ec41();
  return;
}

