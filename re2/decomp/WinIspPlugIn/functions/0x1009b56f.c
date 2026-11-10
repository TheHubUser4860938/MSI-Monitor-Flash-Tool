// rea decompile_all
// name: CMFCToolBar::PreTranslateMessage
// address: 0x1009b56f
// body: available
// range: 0x1009b56f-0x1009b67a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBar::PreTranslateMessage(CMFCToolBar *this,tagMSG *param_1)

{
  uint uVar1;
  code *pcVar2;
  CMFCToolBarMenuButton *pCVar3;
  int iVar4;
  
  uVar1 = param_1->message;
  if ((uVar1 == 0x100) && (param_1->wParam == 0x1b)) {
    if (*(int *)(this + 0xba4) == 0) {
      pCVar3 = GetDroppedDownMenu(this,(int *)0x0);
      if (pCVar3 != (CMFCToolBarMenuButton *)0x0) goto LAB_1009b66d;
      pcVar2 = *(code **)(*(int *)this + 0x360);
      guard_check_icall();
      (*pcVar2)();
      pcVar2 = *(code **)(*(int *)this + 0x364);
      guard_check_icall();
      (*pcVar2)();
    }
    else {
      FUN_10097ccd();
    }
    return 1;
  }
  if (uVar1 == DAT_10245d04) {
    OnPromptReset(this,0,0);
    return 1;
  }
  if (uVar1 < 0x105) {
    if ((uVar1 != 0x104) &&
       ((uVar1 < 0xa1 ||
        ((0xa2 < uVar1 &&
         ((uVar1 < 0xa4 ||
          ((0xa5 < uVar1 && ((uVar1 < 0xa7 || ((0xa8 < uVar1 && (uVar1 != 0x100))))))))))))))
    goto LAB_1009b66d;
  }
  else if ((uVar1 < 0x200) ||
          ((0x202 < uVar1 && ((uVar1 < 0x204 || ((0x205 < uVar1 && (1 < uVar1 - 0x207))))))))
  goto LAB_1009b66d;
  iVar4 = *(int *)(this + 0xd08);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) {
    SendMessageW(*(HWND *)(iVar4 + 0x20),0x407,0,(LPARAM)param_1);
  }
LAB_1009b66d:
  iVar4 = FUN_10080ac8(param_1);
  return iVar4;
}

