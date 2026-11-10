// rea decompile_all
// name: FUN_1002e6b0
// address: 0x1002e6b0
// body: available
// range: 0x1002e6b0-0x1002e7e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e6b0(int param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined1 uVar6;
  undefined4 local_2c;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_101c2b4b;
  local_1c = ExceptionList;
  uVar3 = DAT_1023dfec ^ (uint)&stack0xfffffff0;
  local_14 = 0;
  puVar5 = (uint *)0x0;
  ppvVar2 = &local_1c;
  iVar1 = param_1;
  if ((uint)((param_2 - param_1) / 0x18) < 0x11) {
    for (; ExceptionList = ppvVar2, iVar1 != param_2; iVar1 = iVar1 + 0x18) {
      uVar6 = 0;
      FUN_1000ab60(iVar1,0,0xffffffff);
      iVar4 = FUN_100406e0(uVar6);
      if (iVar4 == 0) {
        *(undefined1 *)((int)(param_4 + 1) + (int)puVar5) = 0;
      }
      else {
        *(undefined1 *)((int)(param_4 + 1) + (int)puVar5) = 0;
      }
      puVar5 = (uint *)((int)puVar5 + 1);
      ppvVar2 = ExceptionList;
    }
    *param_4 = (uint)puVar5 & 0xff;
    puVar5 = param_4;
  }
  else {
    ExceptionList = &local_1c;
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    param_4[4] = 0;
  }
  if (param_1 != 0) {
    FUN_1002d300(puVar5,local_2c,uVar3);
    FUN_1002c430(param_1,(param_3 - param_1) / 0x18);
  }
  ExceptionList = local_1c;
  return;
}

