// rea decompile_all
// name: CMFCRibbonMainPanel::DoPaint
// address: 0x10153664
// body: available
// range: 0x10153664-0x101538e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonMainPanel::DoPaint(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonMainPanel::DoPaint(CMFCRibbonMainPanel *this,CDC *param_1)

{
  code *pcVar1;
  RECT *lprc;
  BOOL BVar2;
  COLORREF CVar3;
  CMFCVisualManager *pCVar4;
  undefined4 uVar5;
  CWnd *pCVar6;
  int *piVar7;
  int iVar8;
  tagRECT local_48;
  RECT local_38;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  lprc = (RECT *)(this + 0xcc);
  BVar2 = IsRectEmpty(lprc);
  if (BVar2 == 0) {
    local_38.left = 0;
    pcVar1 = *(code **)(*(int *)param_1 + 0x50);
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    guard_check_icall(&local_38);
    (*pcVar1)();
    local_48.left = 0;
    local_48.top = 0;
    local_48.right = 0;
    local_48.bottom = 0;
    BVar2 = IntersectRect(&local_48,lprc,&local_38);
    if (BVar2 != 0) {
      CVar3 = GetTextColor(*(HDC *)(param_1 + 8));
      pCVar4 = CMFCVisualManager::GetInstance();
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x220);
      guard_check_icall(param_1,this,lprc->left,*(undefined4 *)(this + 0xd0),
                        *(undefined4 *)(this + 0xd4),*(undefined4 *)(this + 0xd8),0,0,0,0);
      uVar5 = (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0xa4);
      guard_check_icall();
      pCVar6 = (CWnd *)(*pcVar1)();
      DrawApplicationButton(this,param_1,pCVar6);
      local_28.left = 0;
      local_28.top = 0;
      local_18.left = *(LONG *)(this + 0x4fc);
      local_28.right = 0;
      local_28.bottom = 0;
      local_18.top = *(LONG *)(this + 0x500);
      local_18.right = *(LONG *)(this + 0x504);
      local_18.bottom = *(LONG *)(this + 0x508);
      SetRectEmpty(&local_28);
      iVar8 = *(int *)(this + 0x510);
      if (iVar8 != 0) {
        local_28.left = *(LONG *)(iVar8 + 0x74);
        local_28.top = *(LONG *)(iVar8 + 0x78);
        local_28.right = *(int *)(iVar8 + 0x7c);
        local_28.bottom = *(LONG *)(iVar8 + 0x80);
        pCVar4 = CMFCVisualManager::GetInstance();
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x274);
        guard_check_icall(param_1,this,local_28.left,local_28.top,local_28.right,local_28.bottom);
        (*pcVar1)();
      }
      BVar2 = IsRectEmpty(&local_28);
      if (BVar2 == 0) {
        local_18.right = local_28.right;
      }
      pCVar4 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x270);
      guard_check_icall(param_1,this,*(int *)(this + 0x4fc),*(undefined4 *)(this + 0x500),
                        *(undefined4 *)(this + 0x504),*(undefined4 *)(this + 0x508));
      (*pcVar1)();
      pCVar4 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x26c);
      guard_check_icall(param_1,this,local_18.left,local_18.top,local_18.right,local_18.bottom);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall(uVar5);
      (*pcVar1)();
      iVar8 = 0;
      if (0 < *(int *)(this + 0x4e4)) {
        do {
          piVar7 = (int *)FUN_10151a1d(iVar8);
          piVar7 = (int *)*piVar7;
          local_18.left = piVar7[0x1d];
          local_18.top = piVar7[0x1e];
          local_18.right = piVar7[0x1f];
          local_18.bottom = piVar7[0x20];
          BVar2 = IntersectRect(&local_48,&local_18,&local_38);
          if (BVar2 != 0) {
            pcVar1 = *(code **)(*(int *)param_1 + 0x30);
            guard_check_icall(uVar5);
            (*pcVar1)();
            pcVar1 = *(code **)(*piVar7 + 0x17c);
            guard_check_icall(param_1);
            (*pcVar1)();
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(this + 0x4e4));
      }
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall(CVar3);
      (*pcVar1)();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

