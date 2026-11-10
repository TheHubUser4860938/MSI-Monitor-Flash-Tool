// rea decompile_all
// name: CMFCToolBarComboBoxButton::CopyFrom
// address: 0x100c20c8
// body: available
// range: 0x100c20c8-0x100c21a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarComboBoxButton::CopyFrom(class CMFCToolBarButton
   const &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarComboBoxButton::CopyFrom(CMFCToolBarComboBoxButton *this,CMFCToolBarButton *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  CMFCToolBarComboBoxButton *local_8;
  
  local_8 = this;
  CMFCToolBarButton::CopyFrom((CMFCToolBarButton *)this,param_1);
  FUN_1004a7fc();
  local_8 = *(CMFCToolBarComboBoxButton **)(param_1 + 0xc0);
  while (local_8 != (CMFCToolBarComboBoxButton *)0x0) {
    uVar4 = FUN_10034920(&local_8);
    AddTail(uVar4);
  }
  pcVar2 = *(code **)(*(int *)this + 0xe4);
  guard_check_icall();
  (*pcVar2)();
  CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0xd8));
  puVar3 = *(undefined4 **)(param_1 + 0xdc);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = puVar3 + 2;
    puVar3 = (undefined4 *)*puVar3;
    CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(this + 0xd8),(HWND__ *)*puVar1);
  }
  pcVar2 = *(code **)(*(int *)this + 0xe0);
  guard_check_icall();
  (*pcVar2)();
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  return;
}

