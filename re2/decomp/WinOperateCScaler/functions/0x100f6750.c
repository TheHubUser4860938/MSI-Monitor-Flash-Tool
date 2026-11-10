// rea decompile_all
// name: CMFCToolBarsCustomizeDialog::FillCategoriesComboBox
// address: 0x100f6750
// body: available
// range: 0x100f6750-0x100f6870 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCToolBarsCustomizeDialog::FillCategoriesComboBox(class CComboBox
   &,int)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarsCustomizeDialog::FillCategoriesComboBox
          (CMFCToolBarsCustomizeDialog *this,CComboBox *param_1,int param_2)

{
  int *piVar1;
  CStringData *this_00;
  WPARAM WVar2;
  int local_1c;
  CMFCToolBarsCustomizeDialog *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100f675c;
  local_1c = *(int *)(this + 0x100);
  if (local_1c != 0) {
    local_18 = this + 0xfc;
    do {
      piVar1 = (int *)FUN_100972dc(&local_1c);
      this_00 = (CStringData *)FUN_100187a0(*piVar1 + -0x10);
      local_8 = 0;
      Lookup(this_00 + 0x10,local_14);
      if (param_2 == 0) {
        local_18 = *(CMFCToolBarsCustomizeDialog **)(local_14[0] + 4);
        do {
          if (local_18 == (CMFCToolBarsCustomizeDialog *)0x0) goto LAB_100f6813;
          piVar1 = (int *)FUN_100972dc(&local_18);
        } while ((*(int *)(*piVar1 + 0x20) == 0) || (*(int *)(*piVar1 + 0x20) == -1));
      }
      WVar2 = SendMessageW(*(HWND *)(param_1 + 0x20),0x143,0,(LPARAM)(this_00 + 0x10));
      SendMessageW(*(HWND *)(param_1 + 0x20),0x151,WVar2,local_14[0]);
LAB_100f6813:
      local_8 = 0xffffffff;
      ATL::CStringData::Release(this_00);
    } while (local_1c != 0);
  }
  Lookup(*(undefined4 *)(this + 0x150),local_14);
  WVar2 = SendMessageW(*(HWND *)(param_1 + 0x20),0x143,0,*(LPARAM *)(this + 0x150));
  SendMessageW(*(HWND *)(param_1 + 0x20),0x151,WVar2,local_14[0]);
  return;
}

