// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonCaptionButton
// address: 0x41c0ae
// body: available
// range: 0x41c0ae-0x41c17f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonCaptionButton(class CDC *,class
   CMFCRibbonCaptionButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonCaptionButton
          (CMFCVisualManager *this,CDC *param_1,CMFCRibbonCaptionButton *param_2)

{
  code *pcVar1;
  CDC *pCVar2;
  CMFCRibbonCaptionButton *pCVar3;
  int iVar4;
  IMAGES_IDS IVar5;
  CSize *pCVar6;
  undefined4 local_2c;
  undefined4 local_28;
  CMFCVisualManager *local_24;
  CDC *local_20;
  CMFCRibbonCaptionButton *local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  pcVar1 = *(code **)(*(int *)this + 0x238);
  local_1c = param_2;
  local_24 = this;
  guard_check_icall(param_1,param_2);
  (*pcVar1)();
  pCVar3 = local_1c;
  iVar4 = *(int *)(param_2 + 0xa4);
  if (iVar4 == 0xf020) {
    IVar5 = 3;
  }
  else if (iVar4 == 0xf030) {
    IVar5 = 6;
  }
  else if (iVar4 == 0xf060) {
    IVar5 = 5;
  }
  else {
    if (iVar4 != 0xf120) goto LAB_0041c16d;
    IVar5 = 4;
  }
  local_2c = 0;
  local_28 = 0;
  local_18 = *(undefined4 *)(param_2 + 0x74);
  pCVar6 = (CSize *)&local_2c;
  uStack_14 = *(undefined4 *)(param_2 + 0x78);
  uStack_10 = *(undefined4 *)(param_2 + 0x7c);
  uStack_c = *(undefined4 *)(param_2 + 0x80);
  pcVar1 = *(code **)(*(int *)local_1c + 0xdc);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  pCVar2 = local_20;
  CMenuImages::Draw(local_20,IVar5,(CRect *)&local_18,(uint)(iVar4 != 0),pCVar6);
  pcVar1 = *(code **)(*(int *)local_24 + 0x240);
  guard_check_icall(pCVar2,pCVar3);
  (*pcVar1)();
LAB_0041c16d:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

