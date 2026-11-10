// rea decompile_all
// name: CMFCRibbonGallery::GetRegularSize
// address: 0x506899
// body: available
// range: 0x506899-0x5069fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCRibbonGallery::GetRegularSize(class CDC *)
   
   Library: Visual Studio 2015 Release */

CDC * __thiscall CMFCRibbonGallery::GetRegularSize(CMFCRibbonGallery *this,CDC *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_1c [2];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  pcVar1 = *(code **)(*(int *)this + 0x28c);
  guard_check_icall(&local_14);
  (*pcVar1)();
  iVar3 = 0x10;
  if (*(CMFCRibbonCategory **)(this + 0x88) != (CMFCRibbonCategory *)0x0) {
    puVar2 = (undefined4 *)
             CMFCRibbonCategory::GetImageSize(*(CMFCRibbonCategory **)(this + 0x88),(int)&local_c);
    local_1c[0] = *puVar2;
    iVar3 = puVar2[1];
  }
  iVar7 = local_10;
  iVar5 = 3;
  uVar6 = (uint)(local_10 <= (iVar3 * 3) / 2);
  *(uint *)(this + 0x358) = uVar6;
  if ((*(int *)(this + 0x374) != 0) && (uVar6 == 0)) {
    *(undefined4 *)(this + 0x334) = 6;
    if ((*(int *)(this + 0x94) != 0) && (*(int *)(*(int *)(this + 0x94) + 0xeb4) == 0)) {
      *(undefined4 *)(this + 0x334) = 3;
    }
  }
  *(undefined4 *)(this + 0x374) = 0;
  iVar3 = IsButtonLook(this);
  if (iVar3 == 0) {
    if (*(int *)(this + 0x1cc) == 0) {
      CreateIcons(this);
      iVar7 = local_10;
    }
    if (*(CMFCRibbonCategory **)(this + 0x88) == (CMFCRibbonCategory *)0x0) {
      local_c = 0;
      piVar4 = &local_c;
      local_8 = 0;
      local_10 = iVar7;
    }
    else {
      piVar4 = (int *)CMFCRibbonCategory::GetImageSize
                                (*(CMFCRibbonCategory **)(this + 0x88),(int)local_1c);
    }
    if (*(int *)(this + 0x358) == 0) {
      iVar3 = local_10 + 0x12;
      local_8 = (local_14 + 8) * *(int *)(this + 0x334);
    }
    else {
      local_8 = *(int *)(this + 0x334) * local_14;
      if ((((*piVar4 != 0) || (piVar4[1] != 0)) && (local_10 != 0)) &&
         (iVar3 = (piVar4[1] * 2) / local_10, 2 < iVar3)) {
        iVar5 = iVar3;
      }
      iVar3 = iVar5 * local_10 + 6;
    }
    pcVar1 = *(code **)(*(int *)this + 0x240);
    guard_check_icall();
    iVar5 = (*pcVar1)();
    *(int *)param_1 = local_8 + 0xc + iVar5;
    *(int *)(param_1 + 4) = iVar3;
  }
  else {
    CMFCRibbonButton::GetRegularSize((CMFCRibbonButton *)this,param_1);
  }
  return param_1;
}

