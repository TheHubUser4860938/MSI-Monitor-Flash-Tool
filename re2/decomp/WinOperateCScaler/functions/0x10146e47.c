// rea decompile_all
// name: CCheckListBox::PreCompareItem
// address: 0x10146e47
// body: available
// range: 0x10146e47-0x10146ea0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CCheckListBox::PreCompareItem(struct tagCOMPAREITEMSTRUCT *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CCheckListBox::PreCompareItem(CCheckListBox *this,tagCOMPAREITEMSTRUCT *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_24 [4];
  int local_14;
  int local_c;
  
  puVar3 = local_24;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    puVar3 = puVar3 + 1;
  }
  if ((local_14 != 0) && (local_14 != -1)) {
    local_14 = *(int *)(local_14 + 8);
  }
  if ((local_c != 0) && (local_c != -1)) {
    local_c = *(int *)(local_c + 8);
  }
  pcVar1 = *(code **)(*(int *)this + 0x170);
  guard_check_icall(local_24);
  iVar2 = (*pcVar1)();
  return iVar2;
}

