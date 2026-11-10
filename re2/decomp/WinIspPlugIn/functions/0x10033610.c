// rea decompile_all
// name: FUN_10033610
// address: 0x10033610
// body: available
// range: 0x10033610-0x100337d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033610(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void **ppvVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int *in_ECX;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar7;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c2f16;
  local_10 = ExceptionList;
  if (in_ECX != param_1) {
    if (*param_1 == param_1[1]) {
      local_8 = 0;
      puVar1 = (undefined4 *)in_ECX[1];
      ppvVar3 = &local_10;
      for (puVar5 = (undefined4 *)*in_ECX; ExceptionList = ppvVar3, puVar5 != puVar1;
          puVar5 = puVar5 + 0xd) {
        (**(code **)*puVar5)(0);
        ppvVar3 = ExceptionList;
      }
      iVar6 = *in_ECX;
    }
    else {
      local_18 = (param_1[1] - *param_1) / 0x34;
      ExceptionList = &local_10;
      if ((uint)((in_ECX[1] - *in_ECX) / 0x34) < local_18) {
        iVar6 = *in_ECX;
        if ((uint)((in_ECX[2] - iVar6) / 0x34) < local_18) {
          if (iVar6 != 0) {
            FUN_100109f0(iVar6,in_ECX[1]);
            FUN_10010890(*in_ECX,(in_ECX[2] - *in_ECX) / 0x34);
          }
          cVar4 = FUN_10033880((param_1[1] - *param_1) / 0x34);
          if (cVar4 == '\0') {
            ExceptionList = local_10;
            return;
          }
          local_8 = 1;
          iVar6 = *in_ECX;
          uVar7 = extraout_ECX_00;
          param_1 = (int *)extraout_ECX_00;
        }
        else {
          param_1 = (int *)((uint)param_1 & 0xffffff00);
          FUN_10033990(*in_ECX,param_1);
          iVar6 = in_ECX[1];
          uVar7 = extraout_ECX;
        }
        iVar6 = FUN_100339f0(iVar6,uVar7,(uint)piVar2 & 0xffffff00,param_1);
      }
      else {
        local_18 = local_18 & 0xffffff00;
        puVar5 = (undefined4 *)FUN_10033990(*in_ECX,local_18);
        puVar1 = (undefined4 *)in_ECX[1];
        for (; puVar5 != puVar1; puVar5 = puVar5 + 0xd) {
          (**(code **)*puVar5)(0);
        }
        iVar6 = ((param_1[1] - *param_1) / 0x34) * 0x34 + *in_ECX;
      }
    }
    in_ECX[1] = iVar6;
  }
  ExceptionList = local_10;
  return;
}

