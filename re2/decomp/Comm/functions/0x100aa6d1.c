// rea decompile_all
// name: ~CList<>
// address: 0x100aa6d1
// body: available
// range: 0x100aa6d1-0x100aa70c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual __thiscall CList<struct AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,struct
   AFX_AUTOHIDE_DOCKSITE_SAVE_INFO &>::~CList<struct AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,struct
   AFX_AUTOHIDE_DOCKSITE_SAVE_INFO &>(void)
    public: virtual __thiscall CList<struct CMFCRestoredTabInfo,struct
   CMFCRestoredTabInfo>::~CList<struct CMFCRestoredTabInfo,struct CMFCRestoredTabInfo>(void)
   
   Library: Visual Studio 2015 Release */

void ~CList<>(void)

{
  CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&> *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1016d6c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)in_ECX =
       CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>::vftable;
  CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>::RemoveAll(in_ECX);
  ExceptionList = local_10;
  return;
}

