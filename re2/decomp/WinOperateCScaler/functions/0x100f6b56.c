// rea decompile_all
// name: CMFCToolBarsCustomizeDialog::OnCommand
// address: 0x100f6b56
// body: available
// range: 0x100f6b56-0x100f6bfc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBarsCustomizeDialog::OnCommand(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBarsCustomizeDialog::OnCommand(CMFCToolBarsCustomizeDialog *this,uint param_1,long param_2)

{
  code *pcVar1;
  CPropertyPage *pCVar2;
  int iVar3;
  WPARAM wParam;
  CPropertyPage *pCVar4;
  
  if ((param_1 & 0xffff) == 2) {
    if ((DAT_1020b6c8 != 0) && (*(int *)(this + 0x130) != 0)) {
      pcVar1 = *(code **)(*(int *)this + 0x18c);
      guard_check_icall(DAT_1020b6c8 + 4);
      iVar3 = (*pcVar1)();
      if (iVar3 == 0) {
        pCVar2 = *(CPropertyPage **)(this + 0x130);
        pCVar4 = CPropertySheet::GetActivePage((CPropertySheet *)this);
        if (pCVar4 == pCVar2) {
          return 1;
        }
        FUN_10039207(pCVar2);
        return 1;
      }
    }
    pcVar1 = *(code **)(*(int *)this + 0x60);
    guard_check_icall();
    (*pcVar1)();
  }
  else {
    if ((param_1 & 0xffff) != 9) {
      iVar3 = CPropertySheet::OnCommand((CPropertySheet *)this,param_1,param_2);
      return iVar3;
    }
    wParam = CPropertySheet::GetActiveIndex((CPropertySheet *)this);
    SendMessageW(*(HWND *)(*(int *)(this + 0x154) + 0x20),DAT_10209d34,wParam,(LPARAM)this);
  }
  return 1;
}

