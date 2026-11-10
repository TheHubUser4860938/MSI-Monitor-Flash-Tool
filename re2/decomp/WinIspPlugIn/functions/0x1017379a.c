// rea decompile_all
// name: CMFCToolBarsListCheckBox::OnNewString
// address: 0x1017379a
// body: available
// range: 0x1017379a-0x10173806 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsListCheckBox::OnNewString(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarsListCheckBox::OnNewString(CMFCToolBarsListCheckBox *this,int param_1)

{
  LRESULT LVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (-1 < param_1) {
    LVar1 = SendMessageW(*(HWND *)(this + 0x20),0x18b,0,0);
    FUN_1006874b(LVar1,0xffffffff);
    iVar3 = LVar1 + -1;
    while (param_1 < iVar3) {
      puVar2 = (undefined4 *)FUN_100efaed(iVar3 + -1);
      FUN_10173807(iVar3,*puVar2);
      iVar3 = iVar3 + -1;
    }
    FUN_10173807(param_1,1);
  }
  return;
}

