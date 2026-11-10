// rea decompile_all
// name: CMFCVisualManagerWindows::OnEraseTabsArea
// address: 0x42336d
// body: available
// range: 0x42336d-0x4234c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerWindows::OnEraseTabsArea(class CDC *,class
   CRect,class CMFCBaseTabCtrl const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerWindows::OnEraseTabsArea
          (CMFCVisualManagerWindows *this,CDC *param_1,LONG param_3,int param_4,int param_5,
          int param_6,CWnd *param_7)

{
  code *pcVar1;
  CWnd *pCVar2;
  int iVar3;
  CDC *pCVar4;
  HDC pHVar5;
  CDrawingManager local_5c [8];
  CMFCVisualManagerWindows *local_54;
  CMemDC local_50 [4];
  CDC *local_4c;
  int local_48;
  CDC local_40 [56];
  undefined4 local_8;
  undefined4 uStack_4;
  
  pCVar2 = param_7;
  uStack_4 = 0x4c;
  local_8 = 0x423379;
  local_54 = this;
  if ((DAT_00612d3c != 0) && (*(int *)(this + 0x40) != 0)) {
    pcVar1 = *(code **)(*(int *)param_7 + 0x280);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x288);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 == 0) {
        pcVar1 = *(code **)(*(int *)pCVar2 + 0x28c);
        guard_check_icall();
        iVar3 = (*pcVar1)();
        if ((iVar3 == 0) && (*(int *)(pCVar2 + 0x134) == 0)) {
          param_5 = param_5 + 10;
          if (*(int *)(pCVar2 + 0x90) != 0) {
            param_6 = param_6 + 2;
            if (param_1 == (CDC *)0x0) {
              pHVar5 = (HDC)0x0;
            }
            else {
              pHVar5 = *(HDC *)(param_1 + 4);
            }
            DrawThemeBackground(*(HTHEME *)(local_54 + 0x40),pHVar5,9,0,(LPCRECT)&param_3,
                                (LPCRECT)0x0);
            goto LAB_004234bf;
          }
          param_4 = param_4 + -3;
          CMemDC::CMemDC(local_50,param_1,pCVar2);
          local_8 = 0;
          if (local_48 == 0) {
            pCVar4 = local_4c;
            if (local_4c != (CDC *)0x0) goto LAB_0042341f;
            pHVar5 = (HDC)0x0;
          }
          else {
            pCVar4 = local_40;
LAB_0042341f:
            pHVar5 = *(HDC *)(pCVar4 + 4);
          }
          DrawThemeBackground(*(HTHEME *)(local_54 + 0x40),pHVar5,9,0,(LPCRECT)&param_3,(LPCRECT)0x0
                             );
          pCVar4 = local_40;
          if (local_48 == 0) {
            pCVar4 = local_4c;
          }
          CDrawingManager::CDrawingManager(local_5c,pCVar4);
          local_8 = CONCAT31(local_8._1_3_,1);
          CDrawingManager::MirrorRect(local_5c,param_3,param_4,param_5,param_6,0);
          FUN_00461ef9();
          CMemDC::~CMemDC(local_50);
          goto LAB_004234bf;
        }
      }
    }
  }
  CMFCVisualManagerOfficeXP::OnEraseTabsArea
            ((CMFCVisualManagerOfficeXP *)local_54,param_1,param_3,param_4,param_5,param_6,pCVar2);
LAB_004234bf:
  FUN_0055bae6();
  return;
}

