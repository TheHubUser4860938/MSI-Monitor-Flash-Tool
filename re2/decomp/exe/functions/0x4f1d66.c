// rea decompile_all
// name: CMFCTabCtrl::Draw3DTab
// address: 0x4f1d66
// body: available
// range: 0x4f1d66-0x4f1e23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCTabCtrl::Draw3DTab(class CDC *,class CMFCTabInfo *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCTabCtrl::Draw3DTab(CMFCTabCtrl *this,CDC *param_1,CMFCTabInfo *param_2,int param_3)

{
  code *pcVar1;
  BOOL BVar2;
  CMFCVisualManager *pCVar3;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (((((*(int *)(this + 0x254) == 0) && (*(int *)(this + 600) == 0)) &&
       (*(int *)(this + 0x25c) == 0)) || (*(int *)(this + 0x2dc) <= *(int *)(param_2 + 0x10))) &&
     (*(int *)(param_2 + 0x34) != 0)) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    BVar2 = IsRectEmpty((RECT *)(this + 0x2cc));
    if (BVar2 == 0) {
      BVar2 = IntersectRect(&local_18,(RECT *)(param_2 + 0x10),(RECT *)(this + 0x2cc));
      if (BVar2 == 0) goto LAB_004f1e11;
    }
    pCVar3 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar3 + 0xf4);
    guard_check_icall(param_1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                      *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                      *(undefined4 *)(this + 0x104),param_3,this);
    (*pcVar1)();
  }
LAB_004f1e11:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

