// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnFillTab
// address: 0x1014c5d6
// body: available
// range: 0x1014c5d6-0x1014c789 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnFillTab(class CDC *,class
   CRect,class CBrush *,int,int,class CMFCBaseTabCtrl const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnFillTab
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,LONG param_3,LONG param_4,LONG param_5,
          LONG param_6,undefined4 param_7,undefined4 param_8,int param_9,int *param_10)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  AFX_GLOBAL_DATA *pAVar4;
  ulong uVar5;
  HBRUSH hbr;
  ulong uVar6;
  CDrawingManager local_24 [8];
  CMFCVisualManagerOffice2003 *local_1c;
  CDC *local_18;
  ulong local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar2 = param_10;
  uStack_4 = 0x14;
  local_8 = 0x1014c5e2;
  local_18 = param_1;
  local_14 = param_7;
  pcVar1 = *(code **)(*param_10 + 0x280);
  local_1c = this;
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if ((iVar3 == 0) && (pAVar4 = GetGlobalData(), 8 < *(int *)(pAVar4 + 0x1ac))) {
    pAVar4 = GetGlobalData();
    iVar3 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar4);
    if ((iVar3 == 0) && (piVar2[0x4d] == 0)) {
      local_14 = CDrawingManager::PixelAlpha(*(ulong *)(this + 0x15c),0x69);
      pcVar1 = *(code **)(*piVar2 + 0x1dc);
      guard_check_icall(param_8);
      iVar3 = (*pcVar1)();
      hbr = (HBRUSH)0x0;
      if (iVar3 == -1) {
        if (*(int *)(local_1c + 0x74) == 0) {
          pcVar1 = *(code **)(*piVar2 + 0x28c);
          guard_check_icall();
          iVar3 = (*pcVar1)();
          if (iVar3 == 0) {
            pcVar1 = *(code **)(*piVar2 + 0x290);
            guard_check_icall();
            iVar3 = (*pcVar1)();
            if (iVar3 == 0) {
              uVar5 = local_14;
              if (param_9 == 0) {
                return;
              }
              goto LAB_1014c711;
            }
          }
        }
        uVar5 = local_14;
        if (param_9 != 0) {
          pAVar4 = GetGlobalData();
          if (pAVar4 != (AFX_GLOBAL_DATA *)0xffffff38) {
            hbr = *(HBRUSH *)(pAVar4 + 0xcc);
          }
          goto LAB_1014c6a7;
        }
      }
      else {
        pcVar1 = *(code **)(*piVar2 + 0x1dc);
        guard_check_icall(param_8);
        uVar5 = (*pcVar1)();
        pAVar4 = GetGlobalData();
        if ((uVar5 == *(ulong *)(pAVar4 + 0x6c)) && (param_9 != 0)) {
          pAVar4 = GetGlobalData();
          hbr = (HBRUSH)0x0;
          if (pAVar4 != (AFX_GLOBAL_DATA *)0xffffff38) {
            hbr = *(HBRUSH *)(pAVar4 + 0xcc);
          }
LAB_1014c6a7:
          FillRect(*(HDC *)(local_18 + 4),(RECT *)&param_3,hbr);
          return;
        }
      }
LAB_1014c711:
      local_14 = CDrawingManager::PixelAlpha(uVar5,0x78);
      CDrawingManager::CDrawingManager(local_24,local_18);
      local_8 = 0;
      uVar6 = local_14;
      if (piVar2[0x24] == 1) {
        uVar6 = uVar5;
        uVar5 = local_14;
      }
      CDrawingManager::FillGradient(local_24,param_3,param_4,param_5,param_6,uVar6,uVar5,1,0,0);
      FUN_100afd36();
      return;
    }
  }
  CMFCVisualManagerOfficeXP::OnFillTab
            ((CMFCVisualManagerOfficeXP *)local_1c,local_18,param_3,param_4,param_5,param_6,local_14
             ,param_8,param_9,piVar2);
  return;
}

