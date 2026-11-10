// rea decompile_all
// name: CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton
// address: 0x100c26d1
// body: available
// range: 0x100c26d1-0x100c2770 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton(void)
   
   Library: Visual Studio 2015 Release */

CMFCToolBarComboBoxButton * __thiscall
CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton(CMFCToolBarComboBoxButton *this)

{
  undefined4 uVar1;
  
  CMFCToolBarButton::CMFCToolBarButton((CMFCToolBarButton *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  uVar1 = FUN_10049868();
  FUN_100476a0(uVar1);
  CStringList::CStringList((CStringList *)(this + 0xbc),10);
  CList<unsigned_long,unsigned_long>::CList<unsigned_long,unsigned_long>
            ((CList<unsigned_long,unsigned_long> *)(this + 0xd8),10);
  *(undefined4 *)(this + 0x8c) = 0x50200403;
  *(undefined4 *)(this + 0x70) = 0x96;
  FUN_100c32ec();
  return this;
}

