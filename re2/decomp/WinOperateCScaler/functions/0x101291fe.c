// rea decompile_all
// name: CMFCRibbonMainPanel::RecalcWidths
// address: 0x101291fe
// body: available
// range: 0x101291fe-0x10129285 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonMainPanel::RecalcWidths(class CDC *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonMainPanel::RecalcWidths(CMFCRibbonMainPanel *this,CDC *param_1,int param_2)

{
  code *pcVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  FUN_100d5586(0,0xffffffff);
  *(undefined4 *)(this + 0x6c) = 1;
  *(undefined4 *)(this + 0xa4) = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x7fff;
  local_c = 0x7fff;
  pcVar1 = *(code **)(*(int *)this + 0xec);
  guard_check_icall(param_1,&local_18);
  (*pcVar1)();
  FUN_100d52cc(*(undefined4 *)(this + 0x4d0),*(undefined4 *)(this + 0xa8));
  *(undefined4 *)(this + 0x6c) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

