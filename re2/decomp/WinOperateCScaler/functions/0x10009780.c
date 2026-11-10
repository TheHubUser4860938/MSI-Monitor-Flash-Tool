// rea decompile_all
// name: FUN_10009780
// address: 0x10009780
// body: available
// range: 0x10009780-0x10009964 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10009824) */
/* WARNING: Removing unreachable block (ram,0x10009908) */
/* WARNING: Removing unreachable block (ram,0x1000990d) */
/* WARNING: Removing unreachable block (ram,0x10009955) */

void FUN_10009780(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(param_1 + 0x128) == 0) {
    if (((*(int *)(param_1 + 0x140) == 0) && (*(int *)(param_1 + 0x158) == 0)) &&
       (*(int *)(param_1 + 0x170) == 0)) goto LAB_100097c3;
    if (*(int *)(param_1 + 0x128) == 0) goto LAB_10009941;
  }
  if ((*(int *)(param_1 + 0x140) == 0) || (*(int *)(param_1 + 0x158) == 0)) goto LAB_10009941;
  FUN_10003b40(param_1 + 0x118,0,0xffffffff);
  iVar3 = FUN_10015430();
  if (iVar3 == 0) goto LAB_10009941;
  param_2[1] = 0;
  FUN_10001d90(param_1 + 0x130);
  iVar3 = FUN_10015430();
  if (iVar3 == 0) goto LAB_10009941;
  param_2[2] = 0;
  FUN_10001d90(param_1 + 0x148);
  iVar3 = FUN_10015430();
  if (iVar3 == 0) goto LAB_10009941;
  param_2[3] = 0;
  if (*(int *)(param_1 + 0x170) == 0) {
    param_2[4] = 0;
  }
  else {
    FUN_10001d90(param_1 + 0x160);
    iVar3 = FUN_10015430();
    if (iVar3 == 0) goto LAB_10009941;
    param_2[4] = 0;
  }
  if (*(int *)(param_1 + 0x188) == 0) {
LAB_10009910:
    *param_2 = 2;
  }
  else {
    FUN_10001d90(param_1 + 0x178);
    iVar3 = FUN_10015430();
    if (iVar3 == 0) goto LAB_10009910;
    *param_2 = 0;
  }
  uVar1 = param_2[2];
  if (((uVar1 < 0x101) && ((uint)(param_2[4] + param_2[3]) <= uVar1)) &&
     ((param_2[3] != 0 && (param_2[1] + uVar1 < 0x1000000)))) {
LAB_100097c3:
    __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_10009941:
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

