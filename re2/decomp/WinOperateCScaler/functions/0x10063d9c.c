// rea decompile_all
// name: CMFCVisualManager::OnDrawStatusBarSizeBox
// address: 0x10063d9c
// body: available
// range: 0x10063d9c-0x10063e6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10063dcf to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawStatusBarSizeBox(class CDC *,class
   CMFCStatusBar *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCVisualManager::OnDrawStatusBarSizeBox(undefined4 param_1_00,CDC *param_1)

{
  int iVar1;
  code *pcVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_stack_00000014;
  int in_stack_00000018;
  LPCWSTR local_18;
  
  iVar4 = *(int *)param_1;
  pAVar3 = GetGlobalData();
  guard_check_icall(pAVar3 + 0x164);
  iVar4 = (**(code **)(iVar4 + 0x28))();
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
  }
  FUN_100185a0(&DAT_101b3288);
  uVar5 = CDC::SetTextAlign(param_1,10);
  iVar1 = *(int *)param_1;
  pAVar3 = GetGlobalData();
  guard_check_icall(*(undefined4 *)(pAVar3 + 0x58));
  uVar6 = (**(code **)(iVar1 + 0x30))();
  ExtTextOutW(*(HDC *)(param_1 + 4),in_stack_00000014,in_stack_00000018,4,(RECT *)&stack0x0000000c,
              local_18,*(UINT *)(local_18 + -6),(INT *)0x0);
  pcVar2 = *(code **)(*(int *)param_1 + 0x28);
  guard_check_icall(iVar4);
  (*pcVar2)();
  pcVar2 = *(code **)(*(int *)param_1 + 0x30);
  guard_check_icall(uVar6);
  (*pcVar2)();
  CDC::SetTextAlign(param_1,uVar5);
  ATL::CStringData::Release((CStringData *)(local_18 + -8));
  return;
}

