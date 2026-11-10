// rea decompile_all
// name: CMapPtrToPtr::GetValueAt
// address: 0x1004562a
// body: available
// range: 0x1004562a-0x1004566e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10045633 to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void * __thiscall CMapPtrToPtr::GetValueAt(void *)const 
   
   Library: Visual Studio 2008 Release */

void * __thiscall CMapPtrToPtr::GetValueAt(CMapPtrToPtr *this,void *param_1)

{
  undefined4 *puVar1;
  
  if (this == (CMapPtrToPtr *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10038e31();
  }
  if (*(int *)(this + 4) != 0) {
    for (puVar1 = *(undefined4 **)
                   (*(int *)(this + 4) + (((uint)param_1 >> 4) % *(uint *)(this + 8)) * 4);
        puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if ((void *)puVar1[1] == param_1) {
        return (void *)puVar1[2];
      }
    }
  }
  return (void *)0x0;
}

