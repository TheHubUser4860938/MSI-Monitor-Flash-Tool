// rea decompile_all
// name: CBaseTabbedPane::LoadSiblingPaneIDs
// address: 0x100fa82a
// body: available
// range: 0x100fa82a-0x100fa875 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static void __stdcall CBaseTabbedPane::LoadSiblingPaneIDs(class CArchive &,class
   CList<unsigned int,unsigned int> &)
   
   Library: Visual Studio 2015 Release */

void CBaseTabbedPane::LoadSiblingPaneIDs
               (CArchive *param_1,CList<unsigned_int,unsigned_int> *param_2)

{
  HWND__ *pHVar1;
  HWND__ *local_8;
  
  if (((byte)param_1[0x18] & 1) != 0) {
    local_8 = (HWND__ *)0x0;
    FUN_10051107(&local_8);
    pHVar1 = local_8;
    if (0 < (int)local_8) {
      do {
        local_8 = (HWND__ *)0xffffffff;
        FUN_10051107(&local_8);
        CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)param_2,local_8);
        pHVar1 = (HWND__ *)((int)&pHVar1[-1].unused + 3);
      } while (pHVar1 != (HWND__ *)0x0);
    }
  }
  return;
}

