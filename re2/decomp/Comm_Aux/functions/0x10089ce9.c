// rea decompile_all
// name: CMFCBaseVisualManager::DrawStatusBarProgress
// address: 0x10089ce9
// body: available
// range: 0x10089ce9-0x10089e19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseVisualManager::DrawStatusBarProgress(class CDC *,class
   CMFCStatusBar *,class CRect,int,int,unsigned long,unsigned long,unsigned long,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCBaseVisualManager::DrawStatusBarProgress
          (CMFCBaseVisualManager *this,int *param_1,undefined4 param_2,int param_4,LONG param_5,
          int param_6,LONG param_7,int param_8,int param_9)

{
  code *pcVar1;
  HDC pHVar2;
  undefined4 uVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int iVar5;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  int in_stack_00000030;
  CMFCBaseVisualManager *local_2c;
  int *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x10089cf5;
  local_28 = param_1;
  local_2c = this;
  if (*(int *)(this + 0x1c) != 0) {
    if (param_1 == (int *)0x0) {
      pHVar2 = (HDC)0x0;
    }
    else {
      pHVar2 = (HDC)param_1[1];
    }
    DrawThemeBackground(*(HTHEME *)(this + 0x1c),pHVar2,1,0,(LPCRECT)&param_4,(LPCRECT)0x0);
    if (param_8 != 0) {
      local_24.left = param_4;
      local_24.top = param_5;
      local_24.right = param_6;
      local_24.bottom = param_7;
      InflateRect(&local_24,-3,-3);
      iVar5 = param_9;
      local_24.right = ((local_24.right - local_24.left) * param_9) / param_8 + local_24.left;
      if (param_1 == (int *)0x0) {
        pHVar2 = (HDC)0x0;
      }
      else {
        pHVar2 = (HDC)param_1[1];
      }
      DrawThemeBackground(*(HTHEME *)(local_2c + 0x1c),pHVar2,3,0,&local_24,(LPCRECT)0x0);
      if (in_stack_00000030 != 0) {
        uVar3 = FUN_10048e90();
        FUN_10034c30(uVar3);
        local_8 = 0;
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this_00,(wchar_t *)&local_2c,L"%d%%",(iVar5 * 100) / param_8);
        iVar5 = *param_1;
        pAVar4 = GetGlobalData();
        guard_check_icall(*(undefined4 *)(pAVar4 + 0x28));
        uVar3 = (**(code **)(iVar5 + 0x30))();
        iVar5 = *local_28;
        guard_check_icall(local_2c,*(undefined4 *)(local_2c + -0xc),&param_4,0x25);
        (**(code **)(iVar5 + 0x68))();
        pcVar1 = *(code **)(*local_28 + 0x30);
        guard_check_icall(uVar3);
        (*pcVar1)();
        FUN_10034f00();
      }
    }
  }
  iVar5 = FUN_1017f5f4();
  return iVar5;
}

