// rea decompile_all
// name: FUN_10011aa0
// address: 0x10011aa0
// body: available
// range: 0x10011aa0-0x10011bcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011aa0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1016daf2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((param_1 < DAT_101def34) && (in_ECX = DAT_101def30, DAT_101def30 <= param_1)) {
    iVar1 = (int)param_1 - (int)DAT_101def30;
    if (DAT_101def34 == DAT_101def38) {
      FUN_10011bd0(DAT_101def30);
    }
    param_1 = DAT_101def30 + (iVar1 / 0x244) * 0x91;
    local_8 = 0;
  }
  else {
    if (DAT_101def34 == DAT_101def38) {
      FUN_10011bd0(in_ECX);
    }
    local_8 = 1;
  }
  puVar3 = DAT_101def34;
  if (DAT_101def34 != (undefined4 *)0x0) {
    puVar2 = DAT_101def34 + 1;
    DAT_101def34[6] = 7;
    puVar3[5] = 0;
    *(undefined2 *)puVar2 = 0;
    FUN_1000fed0(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 1),0,0xffffffff);
    *puVar3 = CCpRsString::vftable;
    puVar3[0xc] = 0xf;
    puVar3[0xb] = 0;
    *(undefined1 *)(puVar3 + 7) = 0;
    *(undefined2 *)(puVar3 + 0xd) = *(undefined2 *)(param_1 + 0xd);
    puVar3[0xe] = param_1[0xe];
    puVar2 = param_1 + 0xf;
    puVar3 = puVar3 + 0xf;
    for (iVar1 = 0x82; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  DAT_101def34 = DAT_101def34 + 0x91;
  ExceptionList = local_10;
  return;
}

