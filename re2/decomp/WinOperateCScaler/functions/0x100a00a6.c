// rea decompile_all
// name: CMFCVisualManagerOffice2007::GetToolbarButtonTextColor
// address: 0x100a00a6
// body: available
// range: 0x100a00a6-0x100a0188 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall
   CMFCVisualManagerOffice2007::GetToolbarButtonTextColor(class CMFCToolBarButton *,enum
   CMFCVisualManager::AFX_BUTTON_STATE)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOffice2007::GetToolbarButtonTextColor
          (CMFCVisualManagerOffice2007 *this,CMFCToolBarButton *param_1,AFX_BUTTON_STATE param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = CanDrawImage(this);
  if (iVar3 == 0) {
    uVar4 = CMFCVisualManagerOfficeXP::GetToolbarButtonTextColor
                      ((CMFCVisualManagerOfficeXP *)this,param_1,param_2);
    return uVar4;
  }
  if (DAT_10209cf0 == 0) {
LAB_100a00f2:
    if ((*(uint *)(param_1 + 0x24) & 0x40000) != 0) goto LAB_100a00fb;
LAB_100a0100:
    bVar2 = false;
  }
  else {
    pcVar1 = *(code **)(*(int *)param_1 + 0x60);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      if (DAT_10209cf0 == 0) goto LAB_100a00f2;
      goto LAB_100a0100;
    }
LAB_100a00fb:
    bVar2 = true;
  }
  if ((*(int *)(param_1 + 0x6c) == 0) ||
     (iVar3 = FUN_100250d6(&PTR_s_CMFCMenuBar_10201ae0), iVar3 == 0)) {
    if (bVar2) {
      return *(ulong *)(this + 0x8f98);
    }
    if ((param_2 != 2) && (param_2 != 1)) {
      return *(ulong *)(this + 0x8f90);
    }
    return *(ulong *)(this + 0x8f94);
  }
  if (DAT_10209cf0 == 0) {
    if (bVar2) {
      return *(ulong *)(this + 0x8f8c);
    }
    if ((param_2 != 2) && (param_2 != 1)) {
      pcVar1 = *(code **)(*(int *)param_1 + 0x70);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 == 0) goto LAB_100a0120;
    }
    uVar4 = *(ulong *)(this + 0x8f88);
  }
  else {
LAB_100a0120:
    uVar4 = *(ulong *)(this + 0x8f84);
  }
  return uVar4;
}

