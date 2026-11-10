// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnEraseTabsFrame
// address: 0x1014c240
// body: available
// range: 0x1014c240-0x1014c3a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCVisualManagerOffice2003::OnEraseTabsFrame(class CDC *,class
   CRect,class CMFCBaseTabCtrl const *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCVisualManagerOffice2003::OnEraseTabsFrame
          (undefined4 param_1_00,CDC *param_1,LONG param_3,LONG param_4,LONG param_5,LONG param_6,
          int *param_7)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  AFX_GLOBAL_DATA *pAVar4;
  undefined4 uVar5;
  ulong uVar6;
  HBRUSH hbr;
  ulong uVar7;
  ulong uVar8;
  CDrawingManager local_20 [8];
  CMFCVisualManager *local_18;
  CDC *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar2 = param_7;
  uStack_4 = 0x10;
  local_8 = 0x1014c24c;
  local_14 = param_1;
  pcVar1 = *(code **)(*param_7 + 0x280);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if ((iVar3 != 0) || (pAVar4 = GetGlobalData(), *(int *)(pAVar4 + 0x1ac) < 9)) {
LAB_1014c380:
    iVar3 = CMFCVisualManager::OnEraseTabsFrame
                      (local_18,local_14,param_3,param_4,param_5,param_6,piVar2);
    return iVar3;
  }
  pAVar4 = GetGlobalData();
  iVar3 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar4);
  if ((iVar3 != 0) || (piVar2[0x4d] != 0)) goto LAB_1014c380;
  iVar3 = *piVar2;
  pcVar1 = *(code **)(iVar3 + 0x20c);
  guard_check_icall();
  uVar5 = (*pcVar1)();
  pcVar1 = *(code **)(iVar3 + 0x1dc);
  guard_check_icall(uVar5);
  uVar6 = (*pcVar1)();
  if (uVar6 == 0xffffffff) {
    pcVar1 = *(code **)(*piVar2 + 0x288);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      pcVar1 = *(code **)(*piVar2 + 0x28c);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 == 0) goto LAB_1014c324;
    }
    pAVar4 = GetGlobalData();
    hbr = (HBRUSH)0x0;
    if (pAVar4 != (AFX_GLOBAL_DATA *)0xffffff38) {
      hbr = *(HBRUSH *)(pAVar4 + 0xcc);
    }
    FillRect(*(HDC *)(local_14 + 4),(RECT *)&param_3,hbr);
  }
  else {
LAB_1014c324:
    CDrawingManager::CDrawingManager(local_20,local_14);
    local_8 = 0;
    uVar8 = *(ulong *)(local_18 + 0x15c);
    if (uVar6 != 0xffffffff) {
      uVar8 = uVar6;
    }
    uVar7 = CDrawingManager::PixelAlpha(uVar8,0x82);
    uVar6 = uVar7;
    if (piVar2[0x24] == 0) {
      uVar6 = uVar8;
      uVar8 = uVar7;
    }
    CDrawingManager::FillGradient2(local_20,param_3,param_4,param_5,param_6,uVar8,uVar6,0x2d);
    FUN_100b0b83();
  }
  return 1;
}

