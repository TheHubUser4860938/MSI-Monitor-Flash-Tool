// rea decompile_all
// name: CMFCRibbonLabel::OnCalcTextSize
// address: 0x1013c82f
// body: available
// range: 0x1013c82f-0x1013c95d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonLabel::OnCalcTextSize(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonLabel::OnCalcTextSize(CMFCRibbonLabel *this,CDC *param_1)

{
  code *pcVar1;
  int iVar2;
  CStringData *pCVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int iVar5;
  int local_40;
  int local_3c;
  CStringData *local_38;
  CMFCRibbonLabel *local_34;
  int local_30;
  CDC *local_2c;
  int local_28;
  int local_24 [3];
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x1013c83b;
  local_2c = param_1;
  local_34 = this;
  iVar2 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this);
  iVar5 = 0;
  if ((iVar2 == 0) && (*(int *)(this + 0xf0) != 0)) {
    CMFCRibbonCategory::GetImageSize(*(CMFCRibbonCategory **)(this + 0x88),(int)&local_40);
    if ((local_40 != 0) || (local_3c != 0)) {
      local_30 = local_3c * 2;
      pCVar3 = (CStringData *)FUN_100187a0(*(int *)(this + 0x60) + -0x10);
      local_8 = 0;
      local_28 = 10;
      local_38 = pCVar3;
      do {
        iVar2 = *(int *)param_1;
        local_24[0] = 0;
        local_24[1] = 0;
        local_18 = 10000;
        local_24[2] = local_28;
        guard_check_icall(pCVar3 + 0x10,*(undefined4 *)(pCVar3 + 4),local_24,0x410);
        iVar2 = (**(code **)(iVar2 + 0x68))();
        if ((iVar2 <= local_30) && (iVar2 <= local_24[2] - local_24[0])) break;
        local_28 = local_28 + 10;
        param_1 = local_2c;
      } while (local_28 < 200);
      *(int *)(local_34 + 0x10c) = local_24[2] - local_24[0];
      *(int *)(local_34 + 0x110) = iVar2;
      ATL::CStringData::Release(local_38);
    }
  }
  else {
    iVar2 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this);
    if (iVar2 != 0) {
      iVar2 = *(int *)param_1;
      pAVar4 = GetGlobalData();
      guard_check_icall(pAVar4 + 300);
      iVar5 = (**(code **)(iVar2 + 0x28))();
    }
    CMFCRibbonButton::OnCalcTextSize((CMFCRibbonButton *)this,param_1);
    if (iVar5 != 0) {
      pcVar1 = *(code **)(*(int *)param_1 + 0x28);
      guard_check_icall(iVar5);
      (*pcVar1)();
    }
  }
  FUN_10154478();
  return;
}

