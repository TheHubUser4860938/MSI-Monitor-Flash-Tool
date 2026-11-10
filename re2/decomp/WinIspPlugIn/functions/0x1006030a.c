// rea decompile_all
// name: CFile::Close
// address: 0x1006030a
// body: available
// range: 0x1006030a-0x1006034b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CFile::Close(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFile::Close(CFile *this)

{
  BOOL BVar1;
  DWORD DVar2;
  bool bVar3;
  undefined4 uVar4;
  
  bVar3 = false;
  if (*(int *)(this + 4) != -1) {
    BVar1 = CloseHandle(*(HANDLE *)(this + 4));
    bVar3 = BVar1 == 0;
  }
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  FUN_10047240();
  if (bVar3) {
    uVar4 = *(undefined4 *)(this + 0xc);
    DVar2 = GetLastError();
    FUN_1006608b(DVar2,uVar4);
  }
  return;
}

