// rea decompile_all
// name: CTooltipManager::CreateToolTip
// address: 0x100b4ec7
// body: available
// range: 0x100b4ec7-0x100b5044 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static int __stdcall CTooltipManager::CreateToolTip(class CToolTipCtrl * &,class CWnd
   *,unsigned int)
   
   Library: Visual Studio 2015 Release */

int CTooltipManager::CreateToolTip(CToolTipCtrl **param_1,CWnd *param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  CToolTipCtrl *pCVar4;
  ulong uVar5;
  AFX_GLOBAL_DATA *pAVar6;
  __POSITION *p_Var7;
  uint uVar8;
  
  uVar2 = 1;
  uVar8 = 0;
  while (uVar2 != param_3) {
    uVar2 = uVar2 * 2;
    uVar8 = uVar8 + 1;
    if (10 < (int)uVar8) {
      return 0;
    }
  }
  if (uVar8 == 0xffffffff) {
    return 0;
  }
  pCVar4 = *param_1;
  if (pCVar4 != (CToolTipCtrl *)0x0) {
    if (*(int *)(pCVar4 + 0x20) != 0) {
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x60);
      guard_check_icall();
      (*pcVar1)();
    }
    if (*param_1 != (CToolTipCtrl *)0x0) {
      pcVar1 = *(code **)(*(int *)*param_1 + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
    *param_1 = (CToolTipCtrl *)0x0;
  }
  if (DAT_10247084 == (CTooltipManager *)0x0) {
    pCVar4 = (CToolTipCtrl *)FUN_100491ae(0xa0);
    if (pCVar4 == (CToolTipCtrl *)0x0) {
      pCVar4 = (CToolTipCtrl *)0x0;
    }
    else {
      pCVar4 = (CToolTipCtrl *)CToolTipCtrl::CToolTipCtrl(pCVar4);
    }
    *param_1 = pCVar4;
  }
  else {
    iVar3 = CreateToolTipObject(DAT_10247084,param_1,uVar8);
    if (iVar3 == 0) {
      return 0;
    }
  }
  pcVar1 = *(code **)(*(int *)*param_1 + 0x164);
  guard_check_icall(param_2,3);
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    return 0;
  }
  if (((param_2 != (CWnd *)0x0) && (*(int *)(param_2 + 0x20) != 0)) &&
     (uVar5 = CWnd::GetExStyle(param_2), (uVar5 & 0x400000) != 0)) {
    CWnd::ModifyStyleEx((CWnd *)*param_1,0,0x400000,0);
  }
  SendMessageW(*(HWND *)(*param_1 + 0x20),0x401,1,0);
  pAVar6 = GetGlobalData();
  if (*(int *)(pAVar6 + 0x1c4) != -1) {
    pAVar6 = GetGlobalData();
    SendMessageW(*(HWND *)(*param_1 + 0x20),0x418,0,*(LPARAM *)(pAVar6 + 0x1c4));
  }
  if (((param_2 != (CWnd *)0x0) && (*(int *)(param_2 + 0x20) != 0)) &&
     ((DAT_10247084 != (CTooltipManager *)0x0 &&
      (p_Var7 = CList<unsigned_int,unsigned_int>::Find
                          ((CList<unsigned_int,unsigned_int> *)(DAT_10247084 + 0x26c),
                           *(uint *)(param_2 + 0x20),(__POSITION *)0x0), p_Var7 == (__POSITION *)0x0
      )))) {
    CList<HWND__*,HWND__*>::AddTail
              ((CList<HWND__*,HWND__*> *)(DAT_10247084 + 0x26c),*(HWND__ **)(param_2 + 0x20));
  }
  return 1;
}

