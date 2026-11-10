// rea decompile_all
// name: CMFCRibbonQuickAccessCustomizeButton::OnDraw
// address: 0x10151386
// body: available
// range: 0x10151386-0x10151493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonQuickAccessCustomizeButton::OnDraw(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonQuickAccessCustomizeButton::OnDraw
          (CMFCRibbonQuickAccessCustomizeButton *this,CDC *param_1)

{
  code *pcVar1;
  CDC *pCVar2;
  CMFCRibbonQuickAccessCustomizeButton *pCVar3;
  BOOL BVar4;
  CMFCVisualManager *pCVar5;
  AFX_GLOBAL_DATA *pAVar6;
  IMAGES_IDS IVar7;
  CSize local_2c [8];
  RECT *local_24;
  CDC *local_20;
  CMFCRibbonQuickAccessCustomizeButton *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_24 = (RECT *)(this + 0x74);
  local_20 = param_1;
  local_1c = this;
  BVar4 = IsRectEmpty(local_24);
  if (BVar4 == 0) {
    pCVar5 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x238);
    guard_check_icall(param_1,this);
    (*pcVar1)();
    pCVar3 = local_1c;
    IVar7 = 0x1d;
    if (0 < *(int *)(local_1c + 0x1cc)) {
      pAVar6 = GetGlobalData();
      IVar7 = (-(uint)(*(int *)(pAVar6 + 0x198) != 0) & 0xfffffffa) + 0x1f;
    }
    pcVar1 = *(code **)(*(int *)pCVar3 + 0xb8);
    guard_check_icall(-(uint)(*(int *)(pCVar3 + 0x1cc) != 0) & 0x101f6d00,0);
    (*pcVar1)();
    local_18.left = *(LONG *)(pCVar3 + 0x74);
    local_18.top = *(LONG *)(pCVar3 + 0x78);
    local_18.right = *(LONG *)(pCVar3 + 0x7c);
    local_18.bottom = *(LONG *)(pCVar3 + 0x80);
    OffsetRect(&local_18,0,1);
    FUN_100b0af4(local_2c);
    pCVar2 = local_20;
    CMenuImages::Draw(local_20,IVar7,(CRect *)&local_18,2,local_2c);
    CMenuImages::Draw(pCVar2,IVar7,(CRect *)local_24,5,local_2c);
    pCVar5 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x240);
    guard_check_icall(pCVar2,local_1c);
    (*pcVar1)();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

