// rea decompile_all
// name: CMFCRibbonSeparator::OnDraw
// address: 0x100c959b
// body: available
// range: 0x100c959b-0x100c973d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonSeparator::OnDraw(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonSeparator::OnDraw(CMFCRibbonSeparator *this,CDC *param_1)

{
  code *pcVar1;
  BOOL BVar2;
  CMFCVisualManager *pCVar3;
  int iVar4;
  undefined4 local_28;
  CMFCRibbonBar *local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  BVar2 = IsRectEmpty((RECT *)(this + 0x74));
  if (BVar2 == 0) {
    local_18.left = ((RECT *)(this + 0x74))->left;
    local_18.top = *(LONG *)(this + 0x78);
    local_18.right = *(LONG *)(this + 0x7c);
    local_18.bottom = *(LONG *)(this + 0x80);
    if (*(int *)(this + 0xc4) == 0) {
      if (*(int *)(this + 0x10c) == 0) {
        local_18.left = (local_18.right + local_18.left) / 2;
        local_18.right = local_18.left + 1;
        InflateRect(&local_18,0,-5);
      }
      else {
        local_18.top = (local_18.bottom + local_18.top) / 2;
        local_18.bottom = local_18.top + 1;
      }
      local_20 = *(CMFCRibbonBar **)(this + 0x94);
      if (local_20 == (CMFCRibbonBar *)0x0) {
        local_20 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)this);
        if (local_20 == (CMFCRibbonBar *)0x0) goto LAB_100c972b;
      }
      local_28 = 0;
      if ((*(int *)(this + 0xec) != 0) && (*(int *)(this + 0x94) != 0)) {
        local_28 = *(undefined4 *)(*(int *)(this + 0x94) + 0xd40);
        pCVar3 = CMFCVisualManager::GetInstance();
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x2dc);
        guard_check_icall();
        iVar4 = (*pcVar1)();
        local_18.left = local_18.left + 2 + iVar4 * 2;
        *(undefined4 *)(*(int *)(this + 0x94) + 0xd40) = 0;
      }
      pCVar3 = CMFCVisualManager::GetInstance();
      iVar4 = *(int *)pCVar3;
      guard_check_icall(param_1,local_20,local_18.left,local_18.top,local_18.right,local_18.bottom,
                        *(int *)(this + 0x10c) == 0);
      (**(code **)(iVar4 + 0x48))();
      if (*(int *)(this + 0x94) != 0) {
        *(undefined4 *)(*(int *)(this + 0x94) + 0xd40) = local_28;
      }
    }
    else {
      local_18.right = (local_18.right + local_18.left) / 2;
      local_18.left = local_18.right + -1;
      local_18.right = local_18.right + 1;
      InflateRect(&local_18,0,-3);
      pCVar3 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x2ac);
      guard_check_icall(param_1,this,local_18.left,local_18.top,local_18.right,local_18.bottom);
      (*pcVar1)();
    }
  }
LAB_100c972b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

