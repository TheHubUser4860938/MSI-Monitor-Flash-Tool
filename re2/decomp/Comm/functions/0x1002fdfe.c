// rea decompile_all
// name: CTaskDialog::FillStruct
// address: 0x1002fdfe
// body: available
// range: 0x1002fdfe-0x1002fef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: void __thiscall CTaskDialog::FillStruct(struct _TASKDIALOGCONFIG &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CTaskDialog::FillStruct(CTaskDialog *this,_TASKDIALOGCONFIG *param_1)

{
  uint uVar1;
  _TASKDIALOG_BUTTON *p_Var2;
  
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 8);
  uVar1 = *(uint *)(this + 0x14);
  *(uint *)(param_1 + 0xc) = uVar1;
  if (((uVar1 & 0x30) != 0) && (*(int *)(this + 0x34) == 0)) {
    *(uint *)(param_1 + 0xc) = uVar1 & 0xffffffcf;
  }
  if ((*(int *)(*(int *)(this + 0x60) + -0xc) == 0) && (*(int *)(this + 0x28) != 0)) {
    FUN_10003780(&DAT_1018291c);
  }
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0x5c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(this + 0x58);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(this + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(this + 0x60);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(this + 0x68);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(this + 0x6c);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(this + 0x70);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(this + 0x28);
  if (*(int *)(*(int *)(this + 100) + -0xc) == 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffeff;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    *(int *)(param_1 + 0x3c) = *(int *)(this + 100);
  }
  if (*(int *)(this + 0x48) != 0) {
    p_Var2 = GetButtonData(this,(CArray<CTaskDialog::_CTaskDialogButton,CTaskDialog::_CTaskDialogButton_const&>
                                 *)(this + 0x40));
    *(_TASKDIALOG_BUTTON **)(param_1 + 0x34) = p_Var2;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(this + 0x48);
  }
  if (*(int *)(this + 0x34) != 0) {
    p_Var2 = GetButtonData(this,(CArray<CTaskDialog::_CTaskDialogButton,CTaskDialog::_CTaskDialogButton_const&>
                                 *)(this + 0x2c));
    *(_TASKDIALOG_BUTTON **)(param_1 + 0x28) = p_Var2;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(this + 0x34);
  }
  *(CTaskDialog **)(param_1 + 0x58) = this;
  *(undefined1 **)(param_1 + 0x54) = &LAB_100304b6;
  *(undefined4 *)param_1 = 0x60;
  return;
}

