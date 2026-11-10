// rea decompile_all
// name: CMFCRibbonCategory::OnDraw
// address: 0x100e2e0c
// body: available
// range: 0x100e2e0c-0x100e2f95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonCategory::OnDraw(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonCategory::OnDraw(CMFCRibbonCategory *this,CDC *param_1)

{
  code *pcVar1;
  CMFCRibbonCategory *pCVar2;
  BOOL BVar3;
  CMFCVisualManager *pCVar4;
  HRGN pHVar5;
  undefined4 *puVar6;
  CDC *pCVar7;
  undefined **local_38;
  undefined4 local_34;
  int local_30;
  CMFCRibbonCategory *local_2c;
  CDC *local_28;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x100e2e18;
  local_28 = param_1;
  local_2c = this;
  BVar3 = IsRectEmpty((RECT *)(this + 0x7c));
  if (BVar3 != 0) goto LAB_100e2f8e;
  pCVar4 = CMFCVisualManager::GetInstance();
  pcVar1 = *(code **)(*(int *)pCVar4 + 0x214);
  guard_check_icall(local_28,local_2c,((RECT *)(this + 0x7c))->left,*(undefined4 *)(this + 0x80),
                    *(undefined4 *)(this + 0x84),*(undefined4 *)(this + 0x88));
  (*pcVar1)();
  pCVar2 = local_2c;
  local_38 = CRgn::vftable;
  local_30 = 0;
  local_34 = 0;
  local_8 = 0;
  local_24.left = *(LONG *)(local_2c + 0x21c);
  local_24.top = *(LONG *)(local_2c + 0x220);
  local_24.right = *(LONG *)(local_2c + 0x224);
  local_24.bottom = *(LONG *)(local_2c + 0x228);
  BVar3 = IsRectEmpty(&local_24);
  if (BVar3 == 0) {
LAB_100e2ea9:
    local_24.left = *(int *)(pCVar2 + 0x7c) + 2;
    local_24.top = *(int *)(pCVar2 + 0x80) + 3;
    local_24.right = *(int *)(pCVar2 + 0x84) + -2;
    local_24.bottom = *(int *)(pCVar2 + 0x88) + -4;
    pHVar5 = CreateRectRgnIndirect(&local_24);
    CMenu::Attach((CMenu *)&local_38,(HMENU__ *)pHVar5);
    pCVar7 = local_28;
    CDC::SelectClipRgn(local_28,(CRgn *)&local_38);
    local_30 = 1;
  }
  else {
    local_24.left = *(LONG *)(pCVar2 + 0x3e4);
    local_24.top = *(LONG *)(pCVar2 + 1000);
    local_24.right = *(LONG *)(pCVar2 + 0x3ec);
    local_24.bottom = *(LONG *)(pCVar2 + 0x3f0);
    BVar3 = IsRectEmpty(&local_24);
    pCVar7 = local_28;
    if (BVar3 == 0) goto LAB_100e2ea9;
  }
  local_2c = (CMFCRibbonCategory *)0x0;
  if (0 < *(int *)(pCVar2 + 0x564)) {
    do {
      puVar6 = (undefined4 *)FUN_1009f8c7(local_2c);
      pcVar1 = *(code **)(*(int *)*puVar6 + 0xe8);
      guard_check_icall(pCVar7);
      (*pcVar1)();
      local_2c = local_2c + 1;
      pCVar7 = local_28;
    } while ((int)local_2c < *(int *)(pCVar2 + 0x564));
  }
  if (local_30 != 0) {
    CDC::SelectClipRgn(local_28,(CRgn *)0x0);
  }
  pcVar1 = *(code **)(*(int *)(pCVar2 + 0x1a8) + 0x17c);
  guard_check_icall(local_28);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)(pCVar2 + 0x370) + 0x17c);
  guard_check_icall(local_28);
  (*pcVar1)();
  local_38 = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_38);
LAB_100e2f8e:
  FUN_10154478();
  return;
}

