// rea decompile_all
// name: ___acrt_lowio_ensure_fh_exists
// address: 0x585f92
// body: available
// range: 0x585f92-0x58601d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___acrt_lowio_ensure_fh_exists
   
   Library: Visual Studio 2015 Release */

undefined4 ___acrt_lowio_ensure_fh_exists(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 < 0x2000) {
    uVar3 = 0;
    ___acrt_lock(7);
    iVar4 = 0;
    iVar2 = DAT_006192a0;
    while (iVar2 <= (int)param_1) {
      if ((&DAT_006190a0)[iVar4] == 0) {
        iVar2 = ___acrt_lowio_create_handle_array();
        (&DAT_006190a0)[iVar4] = iVar2;
        if (iVar2 == 0) {
          uVar3 = 0xc;
          break;
        }
        iVar2 = DAT_006192a0 + 0x40;
        DAT_006192a0 = iVar2;
      }
      iVar4 = iVar4 + 1;
    }
    FUN_00586021();
  }
  else {
    piVar1 = __errno();
    uVar3 = 9;
    *piVar1 = 9;
    FUN_0057662d();
  }
  return uVar3;
}

