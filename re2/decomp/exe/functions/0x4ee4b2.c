// rea decompile_all
// name: CDockingPanesRow::ExpandStretchedPanes
// address: 0x4ee4b2
// body: available
// range: 0x4ee4b2-0x4ee55c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDockingPanesRow::ExpandStretchedPanes(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingPanesRow::ExpandStretchedPanes(CDockingPanesRow *this)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  if (*(int *)(this + 0x30) != 0) {
    uVar5 = 0;
    pcVar1 = *(code **)(*(int *)this + 0x5c);
    guard_check_icall(0);
    iVar2 = (*pcVar1)();
    local_c = *(int *)(this + 0x28);
    local_10 = 0;
    do {
      do {
        if (local_c == 0) goto LAB_004ee544;
        puVar3 = (undefined4 *)FUN_004ead48(&local_c);
        local_8 = (int *)*puVar3;
        pcVar1 = *(code **)(*local_8 + 0x17c);
        guard_check_icall(uVar5);
        iVar4 = (*pcVar1)();
      } while ((iVar4 == 0) && (*(int *)(this + 4) == 0));
      pcVar1 = *(code **)(*local_8 + 0x2ac);
      guard_check_icall(iVar2,&local_10);
      iVar4 = (*pcVar1)();
      iVar2 = iVar2 - iVar4;
    } while (0 < iVar2);
LAB_004ee544:
    pcVar1 = *(code **)(*(int *)this + 0x28);
    guard_check_icall(0);
    (*pcVar1)();
  }
  return;
}

