// rea decompile_all
// name: CFileDialog::GetIFileSaveDialog
// address: 0x1004b4af
// body: available
// range: 0x1004b4af-0x1004b4e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct IFileSaveDialog * __thiscall CFileDialog::GetIFileSaveDialog(void)
   
   Library: Visual Studio 2015 Release */

IFileSaveDialog * __thiscall CFileDialog::GetIFileSaveDialog(CFileDialog *this)

{
  undefined4 *puVar1;
  IFileSaveDialog *pIVar2;
  IFileSaveDialog *local_8;
  
  local_8 = (IFileSaveDialog *)0x0;
  pIVar2 = (IFileSaveDialog *)0x0;
  if (*(int *)(this + 0xac) == 1) {
    puVar1 = (undefined4 *)**(undefined4 **)(this + 0xbc);
    guard_check_icall(*(undefined4 **)(this + 0xbc),&DAT_101b0634,&local_8);
    (*(code *)*puVar1)();
    pIVar2 = local_8;
  }
  return pIVar2;
}

