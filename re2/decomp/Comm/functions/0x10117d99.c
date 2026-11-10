// rea decompile_all
// name: CMFCRibbonGallery::GetKeyTipRect
// address: 0x10117d99
// body: available
// range: 0x10117d99-0x10117ed5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual class CRect __thiscall CMFCRibbonGallery::GetKeyTipRect(class CDC *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonGallery::GetKeyTipRect(CMFCRibbonGallery *this,CDC *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 *puVar4;
  CObject *pCVar5;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  iVar2 = IsButtonLook(this);
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x1d4);
    guard_check_icall(&local_24,param_2);
    (*pcVar1)();
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    if (((local_24 != 0) || (local_20 != 0)) &&
       (BVar3 = IsRectEmpty((RECT *)(this + 0x74)), BVar3 == 0)) {
      local_38 = *(int *)(this + 0x7c) - local_24 / 2;
      local_34 = *(int *)(this + 0x80) - local_20 / 2;
      local_2c = local_34;
      local_1c = local_34;
      if (0 < *(int *)(this + 0x1cc)) {
        puVar4 = (undefined4 *)FUN_100d7168(*(int *)(this + 0x1cc) + -1);
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_1019f0a8,
                                    (CObject *)*puVar4);
        local_2c = local_1c;
        if (pCVar5 != (CObject *)0x0) {
          local_18.left = *(LONG *)(pCVar5 + 0x74);
          local_18.top = *(LONG *)(pCVar5 + 0x78);
          local_18.right = *(LONG *)(pCVar5 + 0x7c);
          local_18.bottom = *(LONG *)(pCVar5 + 0x80);
          if ((*(int *)(pCVar5 + 0x1c8) == -3) &&
             (BVar3 = IsRectEmpty(&local_18), local_2c = local_1c, BVar3 == 0)) {
            local_38 = (local_18.right + local_18.left) / 2;
            local_34 = local_18.bottom + -3;
            local_2c = local_34;
          }
        }
      }
      local_30 = local_24 + local_38;
      local_2c = local_20 + local_2c;
    }
    *(int *)param_1 = local_38;
    *(int *)(param_1 + 4) = local_34;
    *(int *)(param_1 + 8) = local_30;
    *(int *)(param_1 + 0xc) = local_2c;
  }
  else {
    CMFCRibbonButton::GetKeyTipRect((CMFCRibbonButton *)this,param_1,param_2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

