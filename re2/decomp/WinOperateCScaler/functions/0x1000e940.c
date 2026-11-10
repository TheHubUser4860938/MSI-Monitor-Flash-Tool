// rea decompile_all
// name: FUN_1000e940
// address: 0x1000e940
// body: available
// range: 0x1000e940-0x1000ea9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1000e9ba) */

void FUN_1000e940(void)

{
  int iVar1;
  undefined8 *puVar2;
  size_t sVar3;
  int *in_ECX;
  size_t _Count;
  int local_30;
  undefined8 local_2c;
  undefined1 local_24;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10195ad8;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((in_ECX[0xe] != 0) && (*(char *)((int)in_ECX + 0x3d) != '\0')) &&
     (iVar1 = (**(code **)(*in_ECX + 0xc))(0xffffffff,local_14), iVar1 != -1)) {
    local_18 = 0xf;
    local_2c = 0;
    local_1c = 8;
    local_24 = 0;
    local_8 = 0;
LAB_1000e9d0:
    puVar2 = &local_2c;
    if (0xf < local_18) {
      puVar2 = (undefined8 *)local_2c;
    }
    iVar1 = (**(code **)(*(int *)in_ECX[0xe] + 0x20))
                      (in_ECX + 0x10,puVar2,local_1c + (int)puVar2,&local_30);
    if (iVar1 == 0) {
      *(undefined1 *)((int)in_ECX + 0x3d) = 0;
    }
    else if (iVar1 != 1) goto LAB_1000ea67;
    puVar2 = &local_2c;
    if (0xf < local_18) {
      puVar2 = (undefined8 *)local_2c;
    }
    _Count = local_30 - (int)puVar2;
    if (_Count != 0) {
      puVar2 = &local_2c;
      if (0xf < local_18) {
        puVar2 = (undefined8 *)local_2c;
      }
      sVar3 = _fwrite(puVar2,1,_Count,(FILE *)in_ECX[0x13]);
      if (_Count != sVar3) goto LAB_1000ea67;
    }
    if (*(char *)((int)in_ECX + 0x3d) == '\0') goto LAB_1000ea67;
    if (_Count == 0) {
      FUN_1000f7d0(8,0);
    }
    goto LAB_1000e9d0;
  }
LAB_1000ea7f:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
LAB_1000ea67:
  if (0xf < local_18) {
    FUN_10003d70((undefined8 *)local_2c,local_18 + 1);
  }
  goto LAB_1000ea7f;
}

