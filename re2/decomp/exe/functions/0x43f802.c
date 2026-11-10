// rea decompile_all
// name: COleControlContainer::BroadcastAmbientPropertyChange
// address: 0x43f802
// body: available
// range: 0x43f802-0x43f887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall COleControlContainer::BroadcastAmbientPropertyChange(long)
   
   Library: Visual Studio 2015 Release */

void __thiscall
COleControlContainer::BroadcastAmbientPropertyChange(COleControlContainer *this,long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int *piVar5;
  int local_c;
  COleControlContainer *local_8;
  
  local_c = *(int *)(this + 0x44);
  local_8 = this;
  while (local_c != 0) {
    piVar5 = (int *)FUN_004ead48(&local_c);
    iVar1 = *(int *)(*piVar5 + 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x50) != 0)) {
      local_8 = (COleControlContainer *)0x0;
      puVar2 = *(undefined4 **)(*(int *)(*piVar5 + 4) + 0x50);
      puVar3 = (undefined4 *)*puVar2;
      guard_check_icall(puVar2,&DAT_005dbaf0,&local_8);
      (*(code *)*puVar3)();
      if (local_8 != (COleControlContainer *)0x0) {
        pcVar4 = *(code **)(*(int *)local_8 + 0x14);
        guard_check_icall(local_8,param_1);
        (*pcVar4)();
        pcVar4 = *(code **)(*(int *)local_8 + 8);
        guard_check_icall(local_8);
        (*pcVar4)();
      }
    }
  }
  return;
}

