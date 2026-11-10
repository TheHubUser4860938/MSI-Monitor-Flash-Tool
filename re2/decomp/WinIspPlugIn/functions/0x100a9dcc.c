// rea decompile_all
// name: CMFCTabCtrl::OnUpdateToolTips
// address: 0x100a9dcc
// body: available
// range: 0x100a9dcc-0x100a9eb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CMFCTabCtrl::OnUpdateToolTips(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall CMFCTabCtrl::OnUpdateToolTips(CMFCTabCtrl *this,uint param_1,long param_2)

{
  CMFCTabCtrl *pCVar1;
  CToolTipCtrl *this_00;
  code *pcVar2;
  int *piVar3;
  wchar_t *pwVar4;
  long lVar5;
  int iVar6;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if ((param_1 & 4) != 0) {
    pCVar1 = this + 0xf8;
    CTooltipManager::CreateToolTip((CToolTipCtrl **)pCVar1,(CWnd *)this,4);
    if ((*(CToolTipCtrl **)pCVar1 != (CToolTipCtrl *)0x0) &&
       (*(int *)(*(CToolTipCtrl **)pCVar1 + 0x20) != 0)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      CTooltipManager::CreateToolTip((CToolTipCtrl **)(this + 0xfc),(CWnd *)this,4);
      this_00 = *(CToolTipCtrl **)(this + 0xfc);
      if ((this_00 != (CToolTipCtrl *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
        CToolTipCtrl::AddTool(this_00,(CWnd *)this,(wchar_t *)0xffffffff,&local_18,1);
      }
      iVar6 = 0;
      if (0 < *(int *)(this + 0xbc)) {
        do {
          piVar3 = (int *)FUN_100efaed(iVar6);
          if (*(int *)(this + 0x100) == 0) {
            pwVar4 = *(wchar_t **)(*piVar3 + 4);
          }
          else {
            pwVar4 = (wchar_t *)0xffffffff;
          }
          CToolTipCtrl::AddTool
                    (*(CToolTipCtrl **)pCVar1,(CWnd *)this,pwVar4,&local_18,
                     *(uint *)(*piVar3 + 0x28));
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(this + 0xbc));
      }
      pcVar2 = *(code **)(*(int *)this + 0x184);
      guard_check_icall();
      (*pcVar2)();
    }
  }
  lVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar5;
}

