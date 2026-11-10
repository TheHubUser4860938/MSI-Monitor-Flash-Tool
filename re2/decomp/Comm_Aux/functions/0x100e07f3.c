// rea decompile_all
// name: CDockingManager::CDockingManager
// address: 0x100e07f3
// body: available
// range: 0x100e07f3-0x100e09c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CDockingManager::CDockingManager(void)
   
   Library: Visual Studio 2015 Release */

CDockingManager * __thiscall CDockingManager::CDockingManager(CDockingManager *this)

{
  undefined4 uVar1;
  
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  CObList::CObList((CObList *)(this + 0x20),10);
  CObList::CObList((CObList *)(this + 0x3c),10);
  CObList::CObList((CObList *)(this + 0x58),10);
  CObList::CObList((CObList *)(this + 0x74),10);
  CObList::CObList((CObList *)(this + 0x90),10);
  FID_conflict_CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>(10);
  CObList::CObList((CObList *)(this + 200),10);
  *(undefined4 *)(this + 0xe4) = 0;
  ((LPRECT)(this + 0xe8))->left = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  ((LPRECT)(this + 0xf8))->left = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  ((LPRECT)(this + 0x108))->left = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  CObList::CObList((CObList *)(this + 0x134),10);
  FID_conflict_CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>(10);
  FID_conflict_CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>(10);
  FID_conflict_CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>(10);
  *(undefined4 *)(this + 0x1b8) = 0;
  CMap<unsigned_int,unsigned_int,CPane*,CPane*>::CMap<unsigned_int,unsigned_int,CPane*,CPane*>
            ((CMap<unsigned_int,unsigned_int,CPane*,CPane*> *)(this + 0x1bc),10);
  uVar1 = FUN_10048e90();
  FUN_10034c30(uVar1);
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  SetRectEmpty((LPRECT)(this + 0xe8));
  SetRectEmpty((LPRECT)(this + 0xf8));
  SetRectEmpty((LPRECT)(this + 0x108));
  SetRectEmpty((LPRECT)(this + 0x10));
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  return this;
}

