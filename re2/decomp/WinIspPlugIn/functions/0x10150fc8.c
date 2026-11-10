// rea decompile_all
// name: CMFCRibbonQuickAccessCustomizeButton::GetCompactSize
// address: 0x10150fc8
// body: available
// range: 0x10150fc8-0x10151011 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall
   CMFCRibbonQuickAccessCustomizeButton::GetCompactSize(class CDC *)
   
   Library: Visual Studio 2015 Release */

CDC * __thiscall
CMFCRibbonQuickAccessCustomizeButton::GetCompactSize
          (CMFCRibbonQuickAccessCustomizeButton *this,CDC *param_1)

{
  code *pcVar1;
  undefined4 in_stack_00000008;
  CMFCRibbonQuickAccessCustomizeButton *local_c;
  CMFCRibbonQuickAccessCustomizeButton *local_8;
  
  local_c = this;
  local_8 = this;
  FUN_101038a4(param_1,in_stack_00000008);
  pcVar1 = *(code **)(*(int *)this + 0x114);
  guard_check_icall(&local_c,0xffffffff);
  (*pcVar1)();
  *(CMFCRibbonQuickAccessCustomizeButton **)param_1 = local_c + 4;
  *(int *)(param_1 + 4) = (int)local_8 * 2;
  return param_1;
}

