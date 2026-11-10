// rea decompile_all
// name: CDockSite::ResizeRow
// address: 0x100fd50f
// body: available
// range: 0x100fd50f-0x100fd5e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CDockSite::ResizeRow(class CDockingPanesRow *,int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDockSite::ResizeRow(CDockSite *this,CDockingPanesRow *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_14;
  int local_10;
  int local_c;
  CDockSite *local_8;
  
  local_c = param_2 - *(int *)(param_1 + 0xc);
  local_8 = this;
  if (local_c < 0) {
    pcVar1 = *(code **)(*(int *)param_1 + 0x40);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      iVar2 = *(int *)param_1;
      pcVar1 = *(code **)(*(int *)local_8 + 0x164);
      guard_check_icall();
      uVar3 = (*pcVar1)();
      uVar5 = 1;
      piVar4 = &local_14;
      guard_check_icall(piVar4,1,uVar3);
      (**(code **)(iVar2 + 0x18))();
      this = local_8;
      pcVar1 = *(code **)(*(int *)local_8 + 0x164);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if ((iVar2 == 0) || (-1 < param_2 - local_10)) {
        pcVar1 = *(code **)(*(int *)this + 0x164);
        guard_check_icall(piVar4,uVar5,uVar3);
        iVar2 = (*pcVar1)();
        if ((iVar2 != 0) || (-1 < param_2 - local_14)) goto LAB_100fd5b8;
      }
      return 0;
    }
  }
LAB_100fd5b8:
  pcVar1 = *(code **)(*(int *)this + 0x28c);
  guard_check_icall(param_1,local_c);
  iVar2 = (*pcVar1)();
  ResizeDockSiteByOffset(this,iVar2,param_3);
  return iVar2;
}

