// rea decompile_all
// name: CColorDialog::CColorDialog
// address: 0x1013dd94
// body: available
// range: 0x1013dd94-0x1013de1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CColorDialog::CColorDialog(unsigned long,unsigned long,class CWnd *)
   
   Library: Visual Studio 2015 Release */

CColorDialog * __thiscall
CColorDialog::CColorDialog(CColorDialog *this,ulong param_1,ulong param_2,CWnd *param_3)

{
  ulong *puVar1;
  
  CDialog::CDialog((CDialog *)this,0,param_3);
  *(undefined ***)this = vftable;
  _memset(this + 0xa8,0,0x24);
  *(undefined4 *)(this + 0x80) = 0x7007;
  *(undefined4 *)(this + 0xa8) = 0x24;
  puVar1 = GetSavedCustomColors();
  *(ulong **)(this + 0xb8) = puVar1;
  *(ulong *)(this + 0xbc) = param_2 | 0x10;
  *(code **)(this + 0xc4) = FUN_1005a55a;
  *(ulong *)(this + 0xb4) = param_1;
  if (param_1 != 0) {
    *(ulong *)(this + 0xbc) = param_2 | 0x11;
  }
  return this;
}

