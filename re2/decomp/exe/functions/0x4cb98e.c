// rea decompile_all
// name: CMFCPopupMenu::Initialize
// address: 0x4cb98e
// body: available
// range: 0x4cb98e-0x4cbbc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenu::Initialize(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPopupMenu::Initialize(CMFCPopupMenu *this)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  ANIMATION_TYPE AVar3;
  CMFCVisualManager *pCVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  CMFCPopupMenu *local_c;
  CMFCPopupMenu *pCStack_8;
  
  local_c = this;
  pCStack_8 = this;
  pAVar2 = GetGlobalData();
  if (*(int *)(pAVar2 + 0x19c) != 0) {
    this[0x24] = (CMFCPopupMenu)0x1;
  }
  pAVar2 = GetGlobalData();
  DAT_00616b28 = DAT_00616b28 & ~-(uint)(*(int *)(pAVar2 + 0x180) != 0);
  *(undefined4 *)(this + 0xf34) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x130) = 1;
  *(undefined4 *)(this + 0xf38) = 1;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0xf64) = 0;
  *(undefined4 *)(this + 0xf68) = 0;
  *(undefined4 *)(this + 0xf50) = 0;
  AVar3 = GetAnimationType(0);
  *(undefined4 *)(this + 0xf78) = 0;
  *(undefined4 *)(this + 0xf7c) = 0;
  *(undefined4 *)(this + 0xf80) = 0;
  *(undefined4 *)(this + 0xfac) = 0xffffffff;
  *(undefined4 *)(this + 0xf54) = 0xffffffff;
  *(uint *)(this + 0xf74) = (uint)(AVar3 == 0);
  *(undefined4 *)(this + 0xf4c) = 0;
  *(undefined4 *)(this + 0xf48) = 0;
  *(undefined4 *)(this + 0xf58) = 0;
  *(undefined4 *)(this + 0xf60) = 0;
  SetRectEmpty((LPRECT)(this + 0xf84));
  SetRectEmpty((LPRECT)(this + 0xf94));
  pCVar4 = CMFCVisualManager::GetInstance();
  pcVar1 = *(code **)(*(int *)pCVar4 + 0x2f4);
  guard_check_icall();
  iVar5 = (*pcVar1)();
  iVar6 = FUN_0045bc7e(&local_c);
  iVar6 = *(int *)(iVar6 + 4);
  *(undefined4 *)(this + 0xf6c) = 1;
  *(int *)(this + 0xfa8) = iVar6 + iVar5 * 2;
  *(undefined4 *)(this + 0xfa4) = 0;
  *(undefined4 *)(this + 0xf70) = 1;
  if ((DAT_0060c72c != 0) && (DAT_00614ed8 == 0)) {
    pAVar2 = GetGlobalData();
    if (8 < *(int *)(pAVar2 + 0x1ac)) {
      pCVar4 = CMFCVisualManager::GetInstance();
      uVar7 = *(undefined4 *)(pCVar4 + 0x7c);
      goto LAB_004cbae9;
    }
  }
  uVar7 = 0;
LAB_004cbae9:
  *(undefined4 *)(this + 0x105c) = uVar7;
  *(undefined4 *)(this + 0xfb0) = 0;
  AVar3 = GetAnimationType(0);
  if (AVar3 == 3) {
    pAVar2 = GetGlobalData();
    if (*(int *)(pAVar2 + 0x1ac) < 9) {
      DAT_00616b28 = 0;
      *(undefined4 *)(this + 0xf74) = 1;
    }
  }
  *(undefined4 *)(this + 0x1074) = 0;
  *(undefined4 *)(this + 0x1078) = 0;
  SetRectEmpty((LPRECT)(this + 0x107c));
  *(undefined4 *)(this + 0xf30) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0xf3c) = 0;
  *(undefined4 *)(this + 0xf44) = 0;
  *(undefined4 *)(this + 0x1160) = 0;
  *(undefined4 *)(this + 0x1168) = 2;
  *(undefined4 *)(this + 0x1164) = 0;
  *(undefined4 *)(this + 0x116c) = 0;
  *(undefined4 *)(this + 0x1170) = 0;
  *(undefined4 *)(this + 0xf5c) = 0;
  *(undefined4 *)(this + 0x113c) = 0;
  *(undefined4 *)(this + 0x1140) = 0;
  *(undefined4 *)(this + 0x1144) = 0;
  SetRectEmpty((LPRECT)(this + 0x1150));
  *(undefined4 *)(this + 0x1130) = 0;
  *(undefined4 *)(this + 0x1134) = 0;
  *(undefined4 *)(this + 0x1138) = 0;
  *(undefined4 *)(this + 0x1148) = 0;
  *(undefined4 *)(this + 0x114c) = 0;
  *(undefined4 *)(this + 0xf40) = 0;
  *(undefined4 *)(this + 0x1070) = 0;
  return;
}

