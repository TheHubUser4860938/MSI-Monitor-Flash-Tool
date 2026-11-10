// rea decompile_all
// name: CDockingPanesRow::CDockingPanesRow
// address: 0x4ed359
// body: available
// range: 0x4ed359-0x4ed3c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CDockingPanesRow::CDockingPanesRow(class CDockSite *,int,int)
   
   Library: Visual Studio 2015 Release */

CDockingPanesRow * __thiscall
CDockingPanesRow::CDockingPanesRow
          (CDockingPanesRow *this,CDockSite *param_1,int param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  *(int *)(this + 0xc) = param_3;
  *(undefined ***)this = vftable;
  *(int *)(this + 0x18) = param_2;
  CObList::CObList((CObList *)(this + 0x24),10);
  *(CDockSite **)(this + 0x44) = param_1;
  pcVar1 = *(code **)(*(int *)param_1 + 0x194);
  guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(this + 0x40) = uVar2;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 1;
  return this;
}

