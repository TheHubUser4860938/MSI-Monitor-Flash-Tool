// rea decompile_all
// name: FUN_0059a5ac
// address: 0x59a5ac
// body: available
// range: 0x59a5ac-0x59a727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x59a727 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_0059a5ac(byte *param_1,uint param_2,int param_3,byte param_4)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  int local_8;
  
  uVar2 = param_2 & 3;
  *param_1 = 0;
  if (uVar2 == 0) {
    iVar4 = -0x80000000;
  }
  else if (uVar2 == 1) {
    iVar4 = (-(uint)((param_2 & 0x70000) != 0 && (param_2 & 8) != 0) & 0x80000000) + 0x40000000;
  }
  else if (uVar2 == 2) {
    iVar4 = -0x40000000;
  }
  else {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_0057662d();
    iVar4 = -1;
  }
  *(int *)(param_1 + 4) = iVar4;
  uVar5 = decode_open_create_flags(param_2);
  *(ulong *)(param_1 + 8) = uVar5;
  if (param_3 == 0x10) {
    uVar2 = 0;
  }
  else if (param_3 == 0x20) {
    uVar2 = 1;
  }
  else if (param_3 == 0x30) {
    uVar2 = 2;
  }
  else if (param_3 == 0x40) {
    uVar2 = 3;
  }
  else if (param_3 == 0x80) {
    uVar2 = (uint)(*(int *)(param_1 + 4) == -0x80000000);
  }
  else {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_0057662d();
    uVar2 = 0xffffffff;
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(uint *)(param_1 + 0xc) = uVar2;
  param_1[0x10] = 0x80;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if ((char)param_2 < '\0') {
    *param_1 = *param_1 | 0x10;
  }
  if ((param_2 & 0x8000) == 0) {
    if ((param_2 & 0x74000) == 0) {
      iVar4 = FUN_00589076(&local_8);
      if (iVar4 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        pcVar1 = (code *)swi(3);
        pbVar6 = (byte *)(*pcVar1)();
        return pbVar6;
      }
      if (local_8 == 0x8000) goto LAB_0059a6a9;
    }
    *param_1 = *param_1 | 0x80;
  }
LAB_0059a6a9:
  if (((param_2 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_00619494 & param_4))) {
    param_1[0x10] = 1;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  if ((param_2 & 0x40) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x4000000;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  }
  if ((param_2 & 0x1000) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
  }
  if ((param_2 & 0x2000) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x2000000;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x10000000;
    }
  }
  else {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x8000000;
  }
  return param_1;
}

