// rea decompile_all
// name: COleDropTarget::COleDropTarget
// address: 0x100f2069
// body: available
// range: 0x100f2069-0x100f2104 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall COleDropTarget::COleDropTarget(void)
   
   Library: Visual Studio 2015 Release */

COleDropTarget * __thiscall COleDropTarget::COleDropTarget(COleDropTarget *this)

{
  CCmdTarget::CCmdTarget((CCmdTarget *)this);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x34) = XDropTarget::vftable;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0xffff;
  FUN_10019bf6(4);
  if (DAT_101dd0d8 == 0) {
    DAT_101dd0cc = GetProfileIntW(L"windows",L"DragScrollInset",0xb);
    DAT_101dd0d0 = GetProfileIntW(L"windows",L"DragScrollDelay",0x32);
    DAT_101dd0d4 = GetProfileIntW(L"windows",L"DragScrollInterval",0x32);
    DAT_101dd0d8 = 1;
  }
  FUN_10019c6a(4);
  return this;
}

