// rea decompile_all
// name: CMFCToolBar::PrevMenu
// address: 0x458413
// body: available
// range: 0x458413-0x458525 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBar::PrevMenu(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBar::PrevMenu(CMFCToolBar *this)

{
  code *pcVar1;
  CMFCToolBarMenuButton *pCVar2;
  int iVar3;
  CObject *pCVar4;
  ANIMATION_TYPE AVar5;
  CObject *pCVar6;
  CObject *pCVar7;
  CObject *local_8;
  
  local_8 = (CObject *)this;
  pCVar2 = GetDroppedDownMenu(this,(int *)&local_8);
  if (pCVar2 != (CMFCToolBarMenuButton *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar2 + 0xec);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    pCVar6 = local_8;
    if (iVar3 == 0) {
      iVar3 = *(int *)(this + 0xc48);
      pCVar7 = local_8 + -1;
      AVar5 = DAT_00616b28;
      if (pCVar7 != local_8) {
        do {
          if ((int)pCVar7 < 0) {
            pCVar7 = (CObject *)(iVar3 + -1);
          }
          local_8 = (CObject *)FUN_00452f94(pCVar7);
          pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_0060c6d0,local_8
                                     );
        } while (((pCVar4 == (CObject *)0x0) || ((*(uint *)(local_8 + 0x24) & 0x40000) != 0)) &&
                (pCVar7 = pCVar7 + -1, pCVar7 != pCVar6));
        AVar5 = DAT_00616b28;
        if (pCVar7 != pCVar6) {
          AVar5 = CMFCPopupMenu::GetAnimationType(0);
          DAT_00616b28 = 0;
          pcVar1 = *(code **)(*(int *)this + 0x3b0);
          guard_check_icall(pCVar7);
          (*pcVar1)();
          if (-1 < *(int *)(this + 0xbf8)) {
            pCVar6 = (CObject *)FUN_00452f94(*(int *)(this + 0xbf8));
            pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_0060c6d0,
                                        pCVar6);
            if (pCVar6 != (CObject *)0x0) {
              pcVar1 = *(code **)(*(int *)pCVar6 + 0x70);
              guard_check_icall(pCVar7);
              iVar3 = (*pcVar1)();
              if (iVar3 != 0) {
                SendMessageW(*(HWND *)(*(int *)(pCVar6 + 0x8c) + 0x20),0x100,0x24,0);
              }
            }
          }
        }
      }
      DAT_00616b28 = AVar5;
      return 1;
    }
  }
  return 0;
}

