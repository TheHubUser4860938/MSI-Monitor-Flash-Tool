// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnFillButtonInterior
// address: 0x101473bd
// body: available
// range: 0x101473bd-0x10147525 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnFillButtonInterior(class CDC
   *,class CMFCToolBarButton *,class CRect,enum CMFCVisualManager::AFX_BUTTON_STATE)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnFillButtonInterior
          (CMFCVisualManagerOfficeXP *this,undefined4 param_1,CObject *param_2,LONG param_4,
          LONG param_5,LONG param_6,LONG param_7,int param_8)

{
  code *pcVar1;
  bool bVar2;
  CObject *pCVar3;
  int iVar4;
  CMFCVisualManagerOfficeXP *pCVar5;
  bool bVar6;
  
  if (((param_8 == 1) || (param_8 == 2)) &&
     ((bVar2 = false, DAT_10245ca8 == 0 || ((DAT_10245cac != 0 || (*(int *)(param_2 + 0x3c) != 0))))
     )) {
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_1023d9fc,param_2);
    bVar6 = pCVar3 != (CObject *)0x0;
    if ((bVar6) &&
       ((*(int *)(pCVar3 + 0x6c) != 0 &&
        (iVar4 = FUN_10051e53(&PTR_s_CMFCPopupMenuBar_1023d928), iVar4 != 0)))) {
      bVar2 = true;
    }
    else if (*(int *)(this + 0x60) == 0) {
      return;
    }
    if (((*(uint *)(param_2 + 0x24) & 0x20000) == 0) || (iVar4 = 0x124, bVar2)) {
      iVar4 = 0x11c;
    }
    pCVar5 = this + iVar4;
    if ((bVar6) && (!bVar2)) {
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x70);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 != 0) {
        pcVar1 = *(code **)(*(int *)this + 0x30c);
        guard_check_icall(pCVar3,&param_4);
        (*pcVar1)();
        pCVar5 = this + 0xfc;
      }
    }
    if ((*(uint *)(param_2 + 0x24) & 0x10000) != 0) {
      pCVar5 = this + (uint)(param_8 != 2) * 8 + 0x124;
    }
    if ((bVar6) && ((*(uint *)(param_2 + 0x24) & 0x40000) != 0)) {
      pCVar5 = this + 0x10c;
    }
    if (param_8 - 1U < 2) {
      if ((*(uint *)(param_2 + 0x24) & 0x10000) == 0) {
        InflateRect((LPRECT)&param_4,-1,-1);
      }
      pcVar1 = *(code **)(*(int *)this + 0x314);
      guard_check_icall(param_1,param_4,param_5,param_6,param_7,pCVar5,param_2);
      (*pcVar1)();
    }
  }
  return;
}

