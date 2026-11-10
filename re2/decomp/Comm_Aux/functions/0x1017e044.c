// rea decompile_all
// name: CMFCAcceleratorKeyAssignCtrl::CMFCAcceleratorKeyAssignCtrl
// address: 0x1017e044
// body: available
// range: 0x1017e044-0x1017e096 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCAcceleratorKeyAssignCtrl::CMFCAcceleratorKeyAssignCtrl(void)
   
   Library: Visual Studio 2015 Release */

CMFCAcceleratorKeyAssignCtrl * __thiscall
CMFCAcceleratorKeyAssignCtrl::CMFCAcceleratorKeyAssignCtrl(CMFCAcceleratorKeyAssignCtrl *this)

{
  CWnd::CWnd((CWnd *)this);
  *(undefined ***)this = vftable;
  CMFCAcceleratorKey::CMFCAcceleratorKey
            ((CMFCAcceleratorKey *)(this + 0x8c),(tagACCEL *)(this + 0x84));
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  ResetKey(this);
  return this;
}

