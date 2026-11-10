// rea decompile_all
// name: CMFCVisualManagerWindows::OnDrawTab
// address: 0x42294f
// body: available
// range: 0x42294f-0x422b23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerWindows::OnDrawTab(class CDC *,class
   CRect,int,int,class CMFCBaseTabCtrl const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerWindows::OnDrawTab
          (CMFCVisualManagerWindows *this,CDC *param_1,LONG param_3,LONG param_4,int param_5,
          int param_6,int param_7,int param_8,int *param_9)

{
  code *pcVar1;
  int *piVar2;
  CDC *pCVar3;
  int iVar4;
  AFX_GLOBAL_DATA *pAVar5;
  undefined4 uVar6;
  HDC hdc;
  CDrawingManager local_2c [8];
  int *local_24;
  COLORREF local_20;
  CDC *local_1c;
  int local_18;
  CMFCVisualManagerWindows *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar2 = param_9;
  uStack_4 = 0x1c;
  local_8 = 0x42295b;
  local_1c = param_1;
  local_24 = param_9;
  local_14 = this;
  if ((DAT_00612d3c != 0) && (*(int *)(this + 0x40) != 0)) {
    pcVar1 = *(code **)(*param_9 + 0x280);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 == 0) {
      pcVar1 = *(code **)(*piVar2 + 0x288);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 == 0) {
        pcVar1 = *(code **)(*piVar2 + 0x28c);
        guard_check_icall();
        iVar4 = (*pcVar1)();
        if (iVar4 == 0) {
          pcVar1 = *(code **)(*piVar2 + 0x290);
          guard_check_icall();
          iVar4 = (*pcVar1)();
          if (iVar4 == 0) {
            local_18 = 1;
            if (param_8 == 0) {
              if (param_7 == piVar2[0x45]) {
                local_18 = 2;
              }
            }
            else {
              local_18 = 3;
            }
            param_5 = param_5 + 1;
            if ((piVar2[0x24] == 1) && (param_8 == 0)) {
              param_6 = param_6 + -1;
            }
            if (param_1 == (CDC *)0x0) {
              hdc = (HDC)0x0;
            }
            else {
              hdc = *(HDC *)(param_1 + 4);
            }
            DrawThemeBackground(*(HTHEME *)(local_14 + 0x40),hdc,1,local_18,(LPCRECT)&param_3,
                                (LPCRECT)0x0);
            if (piVar2[0x24] == 0) {
              CDrawingManager::CDrawingManager(local_2c,param_1);
              local_8 = 0;
              CDrawingManager::MirrorRect(local_2c,param_3,param_4,param_5,param_6,0);
              local_8 = 0xffffffff;
              FUN_00461ef9();
              param_1 = local_1c;
            }
            pAVar5 = GetGlobalData();
            local_20 = *(COLORREF *)(pAVar5 + 0x70);
            GetThemeColor(*(HTHEME *)(local_14 + 0x40),1,local_18,0xedb,&local_20);
            pcVar1 = *(code **)(*(int *)param_1 + 0x30);
            guard_check_icall(local_20);
            uVar6 = (*pcVar1)();
            pCVar3 = local_1c;
            pcVar1 = *(code **)(*(int *)local_14 + 0xfc);
            guard_check_icall(local_1c,param_3,param_4,param_5,param_6,param_7,param_8,local_24,
                              0xffffffff);
            (*pcVar1)();
            pcVar1 = *(code **)(*(int *)pCVar3 + 0x30);
            guard_check_icall(uVar6);
            (*pcVar1)();
            return;
          }
        }
      }
    }
  }
  CMFCVisualManagerOfficeXP::OnDrawTab
            ((CMFCVisualManagerOfficeXP *)local_14,local_1c,param_3,param_4,param_5,param_6,param_7,
             param_8,piVar2);
  return;
}

