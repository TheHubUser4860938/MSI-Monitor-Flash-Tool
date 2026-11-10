// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawTab
// address: 0x10145493
// body: available
// range: 0x10145493-0x1014584b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101455b2 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnDrawTab(class CDC *,class
   CRect,int,int,class CMFCBaseTabCtrl const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnDrawTab
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,int param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8,int *param_9)

{
  code *pcVar1;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int local_60;
  int local_5c;
  undefined **local_58 [2];
  undefined **local_50 [2];
  undefined **local_48 [2];
  undefined **local_40 [2];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  CPen *local_2c;
  ulong local_28;
  ulong local_24;
  ulong local_20 [3];
  CMFCVisualManagerOfficeXP *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_8 = 0x1014549f;
  pcVar1 = *(code **)(*param_9 + 0x280);
  local_14 = this;
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*param_9 + 0x288);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      pcVar1 = *(code **)(*param_9 + 0x2a8);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*param_9 + 0x28c);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if (iVar2 == 0) {
          pcVar1 = *(code **)(*param_9 + 0x290);
          guard_check_icall();
          iVar2 = (*pcVar1)();
          if (iVar2 == 0) {
            local_20[2] = 0;
            local_20[1] = 0;
            pcVar1 = *(code **)(*(int *)this + 0x10c);
            guard_check_icall(param_9,local_20,&local_24,&local_28,local_38,local_34,local_30,
                              local_20 + 2,local_20 + 1);
            (*pcVar1)();
            CPen::CPen((CPen *)local_50,0,1,local_20[0]);
            local_8 = 0;
            CPen::CPen((CPen *)local_48,0,1,local_24);
            local_8._0_1_ = 1;
            CPen::CPen((CPen *)local_40,0,1,local_28);
            local_8 = CONCAT31(local_8._1_3_,2);
            local_2c = CDC::SelectObject(param_1,(CPen *)local_50);
            if (local_2c != (CPen *)0x0) {
              pcVar1 = *(code **)(*param_9 + 0x20c);
              guard_check_icall();
              iVar2 = (*pcVar1)();
              if (param_7 != iVar2 + -1) {
                pcVar1 = *(code **)(*param_9 + 0x1a4);
                guard_check_icall();
                iVar2 = (*pcVar1)();
                if ((param_7 < iVar2 + -1) || (*(int *)(this + 0x154) != 0)) {
                  CDC::MoveTo(param_1,(int)local_58,param_5);
                  CDC::LineTo(param_1,param_5,param_6 + -3);
                }
              }
              if (param_8 != 0) {
                if (param_9[0x24] == 0) {
                  local_60 = param_5;
                  local_5c = param_6;
                  pcVar1 = *(code **)(*(int *)local_14 + 0xf8);
                  guard_check_icall(param_1,param_3,param_4 + -1,param_5,param_6,local_20[2],param_7
                                    ,param_8,param_9);
                  this = local_14;
                  (*pcVar1)();
                  CDC::SelectObject(param_1,(CPen *)local_48);
                  CDC::MoveTo(param_1,(int)local_58,param_5);
                  CDC::LineTo(param_1,param_5,param_6);
                  CDC::LineTo(param_1,param_3,param_6);
                  CDC::SelectObject(param_1,(CPen *)local_40);
                  CDC::LineTo(param_1,param_3,param_4 + -2);
                }
                else {
                  CPen::CPen((CPen *)local_58,0,1,*(ulong *)(this + 0xc0));
                  local_5c = param_6 + 1;
                  local_8._0_1_ = 3;
                  local_60 = param_5;
                  pcVar1 = *(code **)(*(int *)local_14 + 0xf8);
                  guard_check_icall(param_1,param_3 + 1,param_4,param_5,local_5c,local_20[2],param_7
                                    ,param_8,param_9);
                  this = local_14;
                  (*pcVar1)();
                  CDC::SelectObject(param_1,(CPen *)local_48);
                  CDC::MoveTo(param_1,(int)&local_60,param_5);
                  CDC::LineTo(param_1,param_5,param_4);
                  CDC::SelectObject(param_1,(CPen *)local_40);
                  CDC::LineTo(param_1,param_5,param_4);
                  CDC::LineTo(param_1,param_3,param_4);
                  CDC::LineTo(param_1,param_3,param_6);
                  local_8 = CONCAT31(local_8._1_3_,2);
                  local_58[0] = CPen::vftable;
                  CImageList::~CImageList((CImageList *)local_58);
                }
              }
              CDC::SelectObject(param_1,local_2c);
              if (param_9[0x4d] == 0) {
                if (param_8 == 0) {
                  iVar2 = *(int *)(this + 0xc4);
                }
                else {
                  pAVar3 = GetGlobalData();
                  iVar2 = *(int *)(pAVar3 + 0x68);
                }
              }
              else {
                pAVar3 = GetGlobalData();
                iVar2 = *(int *)(pAVar3 + 0x28);
              }
              pcVar1 = *(code **)(*(int *)this + 0xfc);
              guard_check_icall(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                                iVar2);
              (*pcVar1)();
              local_40[0] = CPen::vftable;
              CImageList::~CImageList((CImageList *)local_40);
              local_48[0] = CPen::vftable;
              CImageList::~CImageList((CImageList *)local_48);
              local_50[0] = CPen::vftable;
              CImageList::~CImageList((CImageList *)local_50);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_1004886a();
          }
        }
      }
    }
  }
  CMFCVisualManager::OnDrawTab
            ((CMFCVisualManager *)local_14,param_1,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9);
  return;
}

