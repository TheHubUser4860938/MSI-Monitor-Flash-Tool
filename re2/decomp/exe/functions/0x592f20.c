// rea decompile_all
// name: FUN_00592f20
// address: 0x592f20
// body: available
// range: 0x592f20-0x5930ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5930ec with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00592f20(int *param_1,int *param_2)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  code *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (param_2 == (int *)0x0) {
    piVar6 = __errno();
    *piVar6 = 0x16;
    FUN_0057662d();
  }
  else {
    *param_2 = 0;
    local_20 = 0;
    local_2c = (undefined4 *)0x0;
    local_28 = (undefined4 *)0x0;
    local_24 = 0;
    iVar8 = *param_1;
    puVar13 = local_2c;
    puVar5 = local_28;
    while (local_2c = puVar13, local_28 = puVar5, iVar8 != 0) {
      local_10 = 0x3f002a;
      local_c = 0;
      pwVar7 = _wcspbrk((wchar_t *)*param_1,(wchar_t *)&local_10);
      if (pwVar7 == (wchar_t *)0x0) {
        iVar8 = FUN_005930ed(*param_1,0,0,&local_2c);
      }
      else {
        iVar8 = expand_argument_wildcards<>(*param_1,pwVar7,&local_2c);
      }
      if (iVar8 != 0) goto LAB_005930c5;
      param_1 = param_1 + 1;
      puVar13 = local_2c;
      puVar5 = local_28;
      iVar8 = *param_1;
    }
    local_18 = 0;
    local_14 = 0;
    local_1c = ((int)puVar5 - (int)puVar13 >> 2) + 1;
    uVar12 = ~-(uint)(puVar5 < puVar13) & ((int)puVar5 - (int)puVar13) + 3U >> 2;
    if (uVar12 != 0) {
      local_18 = 0;
      puVar11 = puVar13;
      do {
        psVar10 = (short *)*puVar11;
        psVar1 = psVar10 + 1;
        do {
          sVar3 = *psVar10;
          psVar10 = psVar10 + 1;
        } while (sVar3 != (short)local_20);
        puVar11 = puVar11 + 1;
        local_18 = local_18 + 1 + ((int)psVar10 - (int)psVar1 >> 1);
        local_14 = local_14 + 1;
      } while (local_14 != uVar12);
    }
    iVar8 = ___acrt_allocate_buffer_for_argv(local_1c,local_18,2);
    if (iVar8 != 0) {
      iVar2 = iVar8 + local_1c * 4;
      local_1c = iVar2;
      if (puVar13 != puVar5) {
        local_10 = iVar8 - (int)puVar13;
        do {
          psVar10 = (short *)*puVar13;
          psVar1 = psVar10 + 1;
          do {
            sVar3 = *psVar10;
            psVar10 = psVar10 + 1;
          } while (sVar3 != (short)local_20);
          local_14 = ((int)psVar10 - (int)psVar1 >> 1) + 1;
          iVar9 = FUN_0057efe7(local_1c,local_18 - (local_1c - iVar2 >> 1),*puVar13,local_14);
          if (iVar9 != 0) {
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(int *)(local_10 + (int)puVar13) = local_1c;
          puVar13 = puVar13 + 1;
          local_1c = local_1c + local_14 * 2;
        } while (puVar13 != puVar5);
      }
      *param_2 = iVar8;
    }
    FID_conflict__free((void *)0x0);
LAB_005930c5:
    ~argument_list<>();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

