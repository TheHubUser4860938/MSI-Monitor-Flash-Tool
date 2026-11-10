// rea decompile_all
// name: CMFCToolBar::SetButtonStyle
// address: 0x1009c66a
// body: available
// range: 0x1009c66a-0x1009c6d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBar::SetButtonStyle(int,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::SetButtonStyle(CMFCToolBar *this,int param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_1009640a(param_1);
  if ((piVar3 != (int *)0x0) && (uVar1 = piVar3[9], uVar1 != param_2)) {
    if ((param_2 & 0x40000) != 0) {
      param_2 = param_2 & 0xfffdffff;
    }
    pcVar2 = *(code **)(*piVar3 + 0x8c);
    guard_check_icall(param_2);
    (*pcVar2)();
    if ((uVar1 & param_2 & 0x20000) == 0) {
      InvalidateButton(this,param_1);
    }
  }
  return;
}

