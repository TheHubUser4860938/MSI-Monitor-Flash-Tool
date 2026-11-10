// rea decompile_all
// name: CMFCRibbonGallery::OnAfterChangeRect
// address: 0x506c33
// body: available
// range: 0x506c33-0x506e30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonGallery::OnAfterChangeRect(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonGallery::OnAfterChangeRect(CMFCRibbonGallery *this,CDC *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  CObject *pCVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  FUN_00471e6c(param_1);
  piVar9 = &local_38;
  *(undefined4 *)(this + 0x340) = 0;
  pcVar1 = *(code **)(*(int *)this + 0x28c);
  *(undefined4 *)(this + 0x33c) = 0;
  guard_check_icall(piVar9);
  (*pcVar1)();
  if (((local_38 == 0) || (local_34 == 0)) || (iVar2 = IsButtonLook(this), iVar2 != 0)) {
    *(undefined4 *)(this + 0x330) = 0;
    *(undefined4 *)(this + 0x338) = 0;
    RebuildIconLocations(this);
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x240);
    guard_check_icall(piVar9);
    local_2c = (*pcVar1)();
    local_2c = local_2c + 6;
    local_28.left = *(LONG *)(this + 0x74);
    local_28.top = *(LONG *)(this + 0x78);
    local_28.right = *(LONG *)(this + 0x7c);
    local_28.bottom = *(LONG *)(this + 0x80);
    iVar7 = (-(uint)(*(int *)(this + 0x358) != 0) & 0xfffffffc) + 4;
    InflateRect(&local_28,0,-iVar7);
    local_28.right = local_28.right - local_2c;
    iVar2 = (local_28.right - local_28.left) / (local_38 + iVar7 * 2);
    *(int *)(this + 0x330) = iVar2;
    iVar7 = (local_28.bottom - local_28.top) / (local_34 + iVar7 * 2);
    *(int *)(this + 0x338) = iVar7;
    if (iVar2 == 0) {
      *(undefined4 *)(this + 0x340) = 0;
    }
    else {
      iVar7 = *(int *)(this + 0x34c) / iVar2 - iVar7;
      *(int *)(this + 0x340) = iVar7;
      if (*(int *)(this + 0x34c) % iVar2 != 0) {
        *(int *)(this + 0x340) = iVar7 + 1;
      }
    }
    RebuildIconLocations(this);
    local_18.left = *(LONG *)(this + 0x74);
    local_18.top = *(LONG *)(this + 0x78);
    local_18.right = *(LONG *)(this + 0x7c);
    local_18.bottom = *(LONG *)(this + 0x80);
    InflateRect(&local_18,-1,-3);
    iVar7 = local_18.right + -2;
    iVar3 = local_18.bottom - local_18.top;
    local_30 = iVar7 - local_2c;
    local_2c = 0;
    iVar2 = local_18.top;
    local_18.right = iVar7;
    if (0 < *(int *)(this + 0x1cc)) {
      do {
        iVar8 = local_2c;
        puVar4 = (undefined4 *)FUN_004ab4cd(local_2c);
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_005c9d90,
                                    (CObject *)*puVar4);
        iVar6 = iVar2;
        if ((pCVar5 != (CObject *)0x0) && (*(int *)(pCVar5 + 0x1c8) < 0)) {
          iVar6 = iVar3 / 3 + iVar2;
          if (iVar8 == *(int *)(this + 0x1cc) + -1) {
            iVar6 = local_18.bottom;
          }
          *(int *)(pCVar5 + 0x74) = local_30;
          *(int *)(pCVar5 + 0x78) = iVar2;
          *(int *)(pCVar5 + 0x7c) = iVar7;
          *(int *)(pCVar5 + 0x80) = iVar6;
          iVar8 = local_2c;
        }
        local_2c = iVar8 + 1;
        iVar2 = iVar6;
      } while (local_2c < *(int *)(this + 0x1cc));
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

