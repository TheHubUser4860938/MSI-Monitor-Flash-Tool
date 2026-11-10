// rea decompile_all
// name: CControlSiteFactoryMgr::CControlSiteFactoryMgr
// address: 0x417805
// body: available
// range: 0x417805-0x417853 inclusive
// range: 0x41787c-0x417883 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CControlSiteFactoryMgr::CControlSiteFactoryMgr(void)
   
   Library: Visual Studio 2015 Release */

CControlSiteFactoryMgr * __thiscall
CControlSiteFactoryMgr::CControlSiteFactoryMgr(CControlSiteFactoryMgr *this)

{
  undefined4 *puVar1;
  
  *(undefined ***)this = vftable;
  CList<IControlSiteFactory*,IControlSiteFactory*>::CList<IControlSiteFactory*,IControlSiteFactory*>
            ((CList<IControlSiteFactory*,IControlSiteFactory*> *)(this + 4),10);
  puVar1 = (undefined4 *)FUN_00416408(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = COleControlSiteFactory::vftable;
  }
  *(undefined4 **)(this + 0x20) = puVar1;
  FUN_004183fc(puVar1);
  return this;
}

