// rea decompile_all
// name: FUN_0040ab90
// address: 0x40ab90
// body: available
// range: 0x40ab90-0x40aca8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040ab90(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int in_ECX;
  int unaff_EDI;
  bool bVar6;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_c;
  
  local_c = DAT_0060cff4 ^ (uint)&local_1c;
  if (((**(int **)(in_ECX + 0x1c) == in_ECX + 0x3c) && (param_4 == 1)) &&
     (*(int *)(in_ECX + 0x38) == 0)) {
    bVar6 = param_2 != 0;
    param_2 = param_2 + -1;
    param_3 = param_3 + -1 + (uint)bVar6;
  }
  local_1c = param_3;
  if ((((*(int *)(in_ECX + 0x4c) == 0) || (cVar4 = FUN_0040c900(), cVar4 == '\0')) ||
      (((param_2 != 0 || local_1c != 0 || (param_4 != 1)) &&
       (iVar5 = __fseeki64(*(FILE **)(in_ECX + 0x4c),CONCAT44(param_4,local_1c),unaff_EDI),
       iVar5 != 0)))) ||
     (iVar5 = _fgetpos(*(FILE **)(in_ECX + 0x4c),(fpos_t *)&local_18), iVar5 != 0)) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined8 *)(param_1 + 4) = 0;
  }
  else {
    if (**(int **)(in_ECX + 0xc) == in_ECX + 0x3c) {
      iVar5 = *(int *)(in_ECX + 0x54);
      iVar1 = *(int *)(in_ECX + 0x50);
      **(int **)(in_ECX + 0xc) = iVar1;
      **(int **)(in_ECX + 0x1c) = iVar1;
      **(int **)(in_ECX + 0x2c) = iVar5 - iVar1;
    }
    uVar2 = *(undefined4 *)(in_ECX + 0x40);
    uVar3 = *(undefined4 *)(in_ECX + 0x44);
    param_1[2] = local_18;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = local_14;
    param_1[4] = uVar2;
    param_1[5] = uVar3;
  }
  __security_check_cookie(local_c ^ (uint)&local_1c);
  return;
}

