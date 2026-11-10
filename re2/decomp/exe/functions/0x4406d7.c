// rea decompile_all
// name: COleControlContainer::OnPaint
// address: 0x4406d7
// body: available
// range: 0x4406d7-0x440792 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall COleControlContainer::OnPaint(class CDC *)
   
   Library: Visual Studio 2015 Release */

int __thiscall COleControlContainer::OnPaint(COleControlContainer *this,CDC *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int local_c;
  int *local_8;
  
  local_c = *(int *)(this + 0x44);
  iVar8 = 0;
  piVar4 = local_8;
  while (local_8 = piVar4, local_c != 0) {
    piVar5 = (int *)FUN_004ead48(&local_c);
    iVar7 = *(int *)(*piVar5 + 4);
    piVar4 = local_8;
    if ((iVar7 != 0) && (*(int *)(iVar7 + 0x74) != 0)) {
      local_8 = (int *)0x0;
      puVar1 = *(undefined4 **)(*(int *)(*piVar5 + 4) + 0x50);
      puVar2 = (undefined4 *)*puVar1;
      guard_check_icall(puVar1,&DAT_005db9e0,&local_8);
      (*(code *)*puVar2)();
      piVar4 = (int *)0x0;
      if (local_8 != (int *)0x0) {
        uVar6 = 0;
        if (param_1 != (CDC *)0x0) {
          uVar6 = *(undefined4 *)(param_1 + 4);
        }
        iVar7 = *local_8;
        guard_check_icall(local_8,1,0xffffffff,0,0,0,uVar6,0,0,0,0);
        iVar7 = (**(code **)(iVar7 + 0xc))();
        if (-1 < iVar7) {
          iVar8 = 1;
        }
        pcVar3 = *(code **)(*local_8 + 8);
        guard_check_icall(local_8);
        (*pcVar3)();
        local_8 = (int *)0x0;
        piVar4 = local_8;
      }
    }
  }
  return iVar8;
}

