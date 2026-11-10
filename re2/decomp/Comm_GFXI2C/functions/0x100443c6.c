// rea decompile_all
// name: FUN_100443c6
// address: 0x100443c6
// body: available
// range: 0x10044370-0x100443da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

LONG __fastcall FUN_100443c6(int *param_1)

{
  LONG LVar1;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  int *piStack_4;
  
  if (param_1[2] == 0) {
    piStack_4 = (int *)0x8;
    local_8 = 0x1004437c;
    if (param_1[1] == 0) {
      LVar1 = 0;
    }
    else {
      LVar1 = InterlockedDecrement(param_1 + 1);
      if (LVar1 == 0) {
        AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,(AFX_MODULE_STATE *)param_1[7]);
        local_8 = 0;
        (**(code **)(*param_1 + 0x10))();
        local_8 = 0xffffffff;
        if (local_14 != 0) {
          FUN_1003b9c8();
        }
      }
    }
    return LVar1;
  }
  piStack_4 = (int *)param_1[2];
  local_8 = 0x100443d5;
  LVar1 = (**(code **)(*piStack_4 + 8))();
  return LVar1;
}

