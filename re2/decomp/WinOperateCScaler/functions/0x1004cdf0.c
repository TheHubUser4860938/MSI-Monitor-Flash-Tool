// rea decompile_all
// name: CMFCPropertyGridCtrl::UpdateColor
// address: 0x1004cdf0
// body: available
// range: 0x1004cdf0-0x1004ce7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCPropertyGridCtrl::UpdateColor(unsigned long)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPropertyGridCtrl::UpdateColor(CMFCPropertyGridCtrl *this,ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  CObject *this_00;
  BOOL BVar3;
  
  this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPropertyGridColorProperty_101b02dc,
                               *(CObject **)(this + 0x3d8));
  if (this_00 != (CObject *)0x0) {
    uVar1 = *(ulong *)(this_00 + 0xe8);
    CMFCPropertyGridColorProperty::SetColor((CMFCPropertyGridColorProperty *)this_00,param_1);
    if (param_1 != uVar1) {
      pcVar2 = *(code **)(*(int *)this + 0x174);
      guard_check_icall(this_00);
      (*pcVar2)();
    }
    if ((param_1 == 0xffffffff) && (*(int *)(this_00 + 0xb8) != 0)) {
      BVar3 = IsWindow(*(HWND *)(*(int *)(this_00 + 0xb8) + 0x20));
      if (BVar3 != 0) {
        FUN_1002da47(&DAT_101a63a8);
      }
    }
    pcVar2 = *(code **)(*(int *)this_00 + 0x28);
    guard_check_icall();
    (*pcVar2)();
  }
  return;
}

