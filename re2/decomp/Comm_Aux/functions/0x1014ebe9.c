// rea decompile_all
// name: CMFCRibbonGalleryIcon::OnDraw
// address: 0x1014ebe9
// body: available
// range: 0x1014ebe9-0x1014edb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonGalleryIcon::OnDraw(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonGalleryIcon::OnDraw(CMFCRibbonGalleryIcon *this,CDC *param_1)

{
  code *pcVar1;
  CDC *pCVar2;
  BOOL BVar3;
  int iVar4;
  CMFCVisualManager *pCVar5;
  undefined4 uVar6;
  IMAGES_IDS IVar7;
  undefined4 local_38;
  RECT *local_34;
  CMFCRibbonGalleryIcon *local_30;
  CDC *local_2c;
  tagRECT local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_34 = (RECT *)(this + 0x74);
  local_2c = param_1;
  local_30 = this;
  BVar3 = IsRectEmpty(local_34);
  if (BVar3 == 0) {
    if (*(int *)(this + 0x1c8) < 0) {
      pCVar5 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar5 + 0x27c);
      guard_check_icall(param_1,this);
      (*pcVar1)();
      iVar4 = *(int *)(this + 0x1c8);
      if (iVar4 == -1) {
        IVar7 = 7;
      }
      else {
        IVar7 = -(uint)(iVar4 != -2) & 0x1d;
      }
      local_28.left = local_34->left;
      local_28.top = local_34->top;
      local_28.right = local_34->right;
      local_c = local_34->bottom;
      if (iVar4 == -3) {
        if ((local_28.right - local_28.left) + 2 < local_c - local_28.top) {
          local_c = local_28.top + 2 + (local_28.right - local_28.left);
        }
      }
      local_28.bottom = local_c;
      local_18 = local_28.left;
      local_14 = local_28.top;
      local_10 = local_28.right;
      OffsetRect(&local_28,0,1);
      pCVar2 = local_2c;
      local_38 = 0;
      local_34 = (RECT *)0x0;
      CMenuImages::Draw(local_2c,IVar7,(CRect *)&local_28,3,(CSize *)&local_38);
      local_38 = 0;
      local_34 = (RECT *)0x0;
      CMenuImages::Draw(pCVar2,IVar7,(CRect *)&local_18,(uint)(*(int *)(local_30 + 0xd4) != 0),
                        (CSize *)&local_38);
    }
    else {
      pcVar1 = *(code **)(**(int **)(this + 0x1c4) + 0xdc);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 == 0) {
        uVar6 = 0xffffffff;
        if ((*(int *)(*(int *)(this + 0x1c4) + 0x368) != 0) ||
           (*(int *)(*(int *)(this + 0x1c4) + 0x364) == 0)) {
          pcVar1 = *(code **)(*(int *)this + 0x270);
          guard_check_icall(local_2c);
          uVar6 = (*pcVar1)();
        }
        pCVar2 = local_2c;
        pcVar1 = *(code **)(**(int **)(this + 0x1c4) + 0x2a4);
        guard_check_icall(local_2c,*(int *)(local_30 + 0x74),*(int *)(local_30 + 0x78),
                          *(int *)(local_30 + 0x7c),*(int *)(local_30 + 0x80),
                          *(int *)(local_30 + 0x1c8),local_30,uVar6);
        (*pcVar1)();
        if ((*(int *)(*(int *)(local_30 + 0x1c4) + 0x368) != 0) ||
           (*(int *)(*(int *)(local_30 + 0x1c4) + 0x364) == 0)) {
          pcVar1 = *(code **)(*(int *)local_30 + 0x274);
          guard_check_icall(pCVar2);
          (*pcVar1)();
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

