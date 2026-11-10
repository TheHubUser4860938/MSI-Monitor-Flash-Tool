// rea decompile_all
// name: CPaneFrameWnd::OnDrawCaptionButtons
// address: 0x100dcd43
// body: available
// range: 0x100dcd43-0x100dcdfc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CPaneFrameWnd::OnDrawCaptionButtons(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::OnDrawCaptionButtons(CPaneFrameWnd *this,CDC *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_c;
  CPaneFrameWnd *local_8;
  
  local_c = *(int *)(this + 0x10c);
  local_8 = this;
  while (local_c != 0) {
    piVar2 = (int *)FUN_10034920(&local_c);
    local_8 = (CPaneFrameWnd *)0x1;
    piVar2 = (int *)*piVar2;
    iVar3 = FUN_1014d4d1();
    if (iVar3 == 9) {
      local_8 = (CPaneFrameWnd *)(~-(uint)(*(int *)(this + 0x94) != 0) & 1);
    }
    if (((DAT_1020e500 == 0) || (iVar3 = FUN_1014d4d1(), iVar3 == 0x14)) ||
       (iVar3 = FUN_1014d4d1(), iVar3 == 0x13)) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
    iVar1 = *piVar2;
    piVar2[4] = iVar3;
    guard_check_icall(param_1,1,1,local_8,iVar3 == 0);
    (**(code **)(iVar1 + 0x10))();
    piVar2[8] = -1;
  }
  return;
}

