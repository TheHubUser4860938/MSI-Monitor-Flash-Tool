// rea decompile_all
// name: FUN_0055e336
// address: 0x55e336
// body: available
// range: 0x55e336-0x55e3c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x55e3c4 to 0x55c78b FUN_0055c78b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0055e336(int param_1,uint param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  int _Category;
  
  if (param_3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0055c78b("bad locale name");
  }
  if ((*param_3 != '*') || (param_3[1] != '\0')) {
    if (param_2 == 0) {
      param_3 = (char *)0x0;
    }
    else if (param_2 != 0x3f) {
      _Category = 0;
      do {
        if ((param_2 & (1 << ((byte)_Category & 0x1f)) >> 1) != 0) {
          _setlocale(_Category,param_3);
        }
        _Category = _Category + 1;
      } while (_Category < 6);
    }
    pcVar1 = _setlocale(0,param_3);
    if (pcVar1 != (char *)0x0) {
      pcVar2 = *(char **)(param_1 + 0x2c);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = (char *)(param_1 + 0x30);
      }
      if ((*pcVar2 == '*') && (pcVar2[1] == '\0')) {
        return param_1;
      }
      goto LAB_0055e3b1;
    }
  }
  pcVar1 = "*";
LAB_0055e3b1:
  FUN_00409800(pcVar1);
  return param_1;
}

