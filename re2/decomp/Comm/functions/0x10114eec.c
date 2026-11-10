// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnEraseTabsArea
// address: 0x10114eec
// body: available
// range: 0x10114eec-0x10114fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnEraseTabsArea(class CDC *,class
   CRect,class CMFCBaseTabCtrl const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnEraseTabsArea
          (undefined4 param_1_00,CDC *param_1,LONG param_3,LONG param_4,LONG param_5,LONG param_6,
          int *param_7)

{
  code *pcVar1;
  int *piVar2;
  AFX_GLOBAL_DATA *pAVar3;
  HBRUSH hbr;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CDrawingManager local_1c [8];
  CMFCVisualManagerOfficeXP *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar2 = param_7;
  uStack_4 = 0xc;
  local_8 = 0x10114ef8;
  if (param_7[0x4d] == 0) {
    pcVar1 = *(code **)(*param_7 + 0x280);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if ((iVar4 == 0) && (pAVar3 = GetGlobalData(), 8 < *(int *)(pAVar3 + 0x1ac))) {
      pAVar3 = GetGlobalData();
      iVar4 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar3);
      if (iVar4 == 0) {
        CDrawingManager::CDrawingManager(local_1c,param_1);
        uVar6 = *(undefined4 *)(local_14 + 0x164);
        local_8 = 0;
        uVar5 = *(undefined4 *)(local_14 + 0x168);
        if (piVar2[0x24] == 0) {
          uVar5 = uVar6;
          uVar6 = *(undefined4 *)(local_14 + 0x168);
        }
        CDrawingManager::FillGradient(local_1c,param_3,param_4,param_5,param_6,uVar5,uVar6,1,0,0);
        FUN_10079775();
        return;
      }
    }
    CMFCVisualManagerOfficeXP::OnEraseTabsArea
              (local_14,param_1,param_3,param_4,param_5,param_6,piVar2);
  }
  else {
    pAVar3 = GetGlobalData();
    hbr = (HBRUSH)0x0;
    if (pAVar3 != (AFX_GLOBAL_DATA *)0xffffff68) {
      hbr = *(HBRUSH *)(pAVar3 + 0x9c);
    }
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,hbr);
  }
  return;
}

