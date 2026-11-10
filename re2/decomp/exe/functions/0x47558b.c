// rea decompile_all
// name: CMFCRibbonLaunchButton::GetKeyTipRect
// address: 0x47558b
// body: available
// range: 0x47558b-0x47563f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CRect __thiscall CMFCRibbonLaunchButton::GetKeyTipRect(class CDC *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonLaunchButton::GetKeyTipRect(CMFCRibbonLaunchButton *this,CDC *param_1,int param_2)

{
  code *pcVar1;
  BOOL BVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x1c4) == 0) {
    CMFCRibbonButton::GetKeyTipRect((CMFCRibbonButton *)this,param_1,param_2);
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x1d4);
    guard_check_icall(&local_10,param_2);
    (*pcVar1)();
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    if ((local_10 != 0) || (local_c != 0)) {
      BVar2 = IsRectEmpty((RECT *)(this + 0x74));
      if (BVar2 == 0) {
        local_1c = *(int *)(this + 0x80);
        local_18 = *(int *)(*(int *)(this + 0x1c4) + 0xd4);
        local_20 = local_18 - local_10;
        local_14 = local_c + local_1c;
      }
    }
    *(int *)param_1 = local_20;
    *(int *)(param_1 + 4) = local_1c;
    *(int *)(param_1 + 8) = local_18;
    *(int *)(param_1 + 0xc) = local_14;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

