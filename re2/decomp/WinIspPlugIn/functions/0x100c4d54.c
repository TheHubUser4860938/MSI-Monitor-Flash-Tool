// rea decompile_all
// name: CMFCToolBarComboBoxButton::SelectItem
// address: 0x100c4d54
// body: available
// range: 0x100c4d54-0x100c4e67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarComboBoxButton::SelectItem(int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBarComboBoxButton::SelectItem(CMFCToolBarComboBoxButton *this,int param_1,int param_2)

{
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar1;
  CComboBox *this_00;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  LRESULT LVar5;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100c4d60;
  if (param_1 < *(int *)(this + 200)) {
    iVar3 = param_1;
    if (param_1 < -1) {
      iVar3 = -1;
    }
    this_00 = *(CComboBox **)(this + 0xb4);
    *(int *)(this + 0x74) = iVar3;
    if ((this_00 != (CComboBox *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
      pCVar1 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 0xb8);
      if (iVar3 < 0) {
        FUN_10047240();
      }
      else {
        CComboBox::GetLBText(this_00,param_1,pCVar1);
      }
      if (*(int *)(this + 0xb0) != 0) {
        uVar4 = FUN_10049868();
        FUN_100476a0(uVar4);
        local_8 = 0;
        CWnd::GetWindowTextW(*(CWnd **)(this + 0xb0),local_14);
        iVar3 = FUN_1005c824(*(undefined4 *)pCVar1);
        if (iVar3 != 0) {
          FUN_1005979b(*(undefined4 *)pCVar1);
        }
        local_8 = 0xffffffff;
        FUN_100476d0();
      }
      LVar5 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x147,0,0);
      if (LVar5 != param_1) {
        LVar5 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x14e,param_1,0);
        if (LVar5 == -1) goto LAB_100c4d6d;
        if (param_2 != 0) {
          pcVar2 = *(code **)(*(int *)this + 0x40);
          guard_check_icall(9);
          (*pcVar2)();
        }
      }
    }
    iVar3 = 1;
  }
  else {
LAB_100c4d6d:
    iVar3 = 0;
  }
  return iVar3;
}

