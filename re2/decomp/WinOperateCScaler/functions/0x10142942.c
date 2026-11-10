// rea decompile_all
// name: CMFCToolBarsListPropertyPage::OnCommand
// address: 0x10142942
// body: available
// range: 0x10142942-0x10142a17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBarsListPropertyPage::OnCommand(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBarsListPropertyPage::OnCommand
          (CMFCToolBarsListPropertyPage *this,uint param_1,long param_2)

{
  code *pcVar1;
  WPARAM wParam;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((((short)(param_1 >> 0x10) == 0x28) && ((short)param_1 == 0x40e3)) &&
     (wParam = SendMessageW(*(HWND *)(this + 0x360),0x188,0,0), wParam != 0xffffffff)) {
    piVar2 = (int *)SendMessageW(*(HWND *)(this + 0x360),0x199,wParam,0);
    pcVar1 = *(code **)(*piVar2 + 0x1c8);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      iVar3 = CCheckListBox::GetCheck((CCheckListBox *)(this + 0x340),wParam);
      if (iVar3 == 0) {
        CCheckListBox::SetCheck((CCheckListBox *)(this + 0x340),wParam,1);
        MessageBeep(0xffffffff);
      }
    }
    else {
      uVar6 = 1;
      uVar5 = 0;
      iVar3 = *piVar2;
      iVar4 = CCheckListBox::GetCheck((CCheckListBox *)(this + 0x340),wParam);
      pcVar1 = *(code **)(iVar3 + 0x224);
      guard_check_icall(iVar4,uVar5,uVar6);
      (*pcVar1)();
    }
  }
  iVar3 = FUN_1002936b(param_1,param_2);
  return iVar3;
}

