// rea decompile_all
// name: CWnd::EnableDynamicLayout
// address: 0x1005437d
// body: available
// range: 0x1005437d-0x100543d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CWnd::EnableDynamicLayout(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CWnd::EnableDynamicLayout(CWnd *this,int param_1)

{
  code *pcVar1;
  CMFCDynamicLayout *this_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int **)(this + 0x58) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x58) + 4);
    guard_check_icall(1);
    (*pcVar1)();
    *(undefined4 *)(this + 0x58) = 0;
  }
  if (param_1 != 0) {
    this_00 = (CMFCDynamicLayout *)FUN_100491ae(0x2c);
    if (this_00 != (CMFCDynamicLayout *)0x0) {
      uVar2 = CMFCDynamicLayout::CMFCDynamicLayout(this_00);
    }
    *(undefined4 *)(this + 0x58) = uVar2;
  }
  return;
}

