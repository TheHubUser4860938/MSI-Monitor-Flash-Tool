// rea decompile_all
// name: CSmartDockingGroupGuide::Create
// address: 0x1012c9c3
// body: available
// range: 0x1012c9c3-0x1012cb52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CSmartDockingGroupGuide::Create(enum
   CSmartDockingStandaloneGuide::SDMarkerPlace,class CSmartDockingGroupGuidesManager *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CSmartDockingGroupGuide::Create
          (CSmartDockingGroupGuide *this,SDMarkerPlace param_1,
          CSmartDockingGroupGuidesManager *param_2)

{
  code *pcVar1;
  int iVar2;
  CSmartDockingGroupGuide *pCVar3;
  AFX_SMARTDOCK_THEME AVar4;
  CMFCVisualManager *pCVar5;
  HPEN pHVar6;
  int iVar7;
  HRGN__ *pHVar8;
  int iVar9;
  CSmartDockingGroupGuide *local_c;
  CSmartDockingGroupGuide *local_8;
  
  *(SDMarkerPlace *)(this + 4) = param_1;
  *(CSmartDockingGroupGuidesManager **)(this + 0x2f0) = param_2;
  pcVar1 = *(code **)(*(int *)this + 0x24);
  local_c = this;
  local_8 = this;
  guard_check_icall(&DAT_101dc800);
  (*pcVar1)();
  if (*(int *)(this + 0x2e8) != 0) {
    AVar4 = GetVMTheme();
    if (AVar4 == 1) {
      DAT_101dc80c = 9;
      DAT_101dc804 = 0x58;
      DAT_101dc808 = DAT_101dc804;
    }
    else if (AVar4 == 2) {
      DAT_101dc80c = 5;
      DAT_101dc804 = 0x6e;
      DAT_101dc808 = DAT_101dc804;
    }
  }
  pCVar5 = CMFCVisualManager::GetInstance();
  pcVar1 = *(code **)(*(int *)pCVar5 + 0x1d0);
  guard_check_icall(&local_c,this + 0x2f4);
  (*pcVar1)();
  pHVar6 = CreatePen(0,1,*(COLORREF *)(this + 0x2f4));
  pCVar3 = local_8;
  CMenu::Attach((CMenu *)(local_8 + 0x2f8),(HMENU__ *)pHVar6);
  pHVar6 = CreatePen(0,1,0xca7041);
  CMenu::Attach((CMenu *)(pCVar3 + 0x300),(HMENU__ *)pHVar6);
  iVar2 = DAT_101dc808;
  iVar9 = *(int *)(pCVar3 + 4);
  iVar7 = *(int *)(pCVar3 + 0xf4);
  if (iVar9 == 4) {
    *(undefined4 *)(pCVar3 + 0x308) = 0;
  }
  else {
    if (iVar9 == 5) {
      iVar7 = DAT_101dc804 - iVar7;
    }
    else {
      if (iVar9 == 6) {
        iVar7 = DAT_101dc804 - iVar7;
        *(undefined4 *)(pCVar3 + 0x30c) = 0;
        *(int *)(pCVar3 + 0x308) = iVar7 / 2;
        goto LAB_1012cb15;
      }
      if (iVar9 == 7) {
        iVar9 = DAT_101dc808 - *(int *)(pCVar3 + 0xf8);
        *(int *)(pCVar3 + 0x308) = (DAT_101dc804 - iVar7) / 2;
        *(int *)(pCVar3 + 0x30c) = iVar9;
        goto LAB_1012cb15;
      }
      if (iVar9 != 8) goto LAB_1012cb15;
      iVar7 = (DAT_101dc804 - iVar7) / 2;
    }
    *(int *)(pCVar3 + 0x308) = iVar7;
  }
  *(int *)(pCVar3 + 0x30c) = (iVar2 - *(int *)(pCVar3 + 0xf8)) / 2;
LAB_1012cb15:
  pHVar8 = CMFCToolBarImages::CreateRegionFromImage(*(HBITMAP__ **)(pCVar3 + 300),DAT_101dc810);
  CMenu::Attach((CMenu *)(pCVar3 + 0x2d0),(HMENU__ *)pHVar8);
  OffsetRgn(*(HRGN *)(pCVar3 + 0x2d4),*(int *)(pCVar3 + 0x308),*(int *)(pCVar3 + 0x30c));
  return;
}

