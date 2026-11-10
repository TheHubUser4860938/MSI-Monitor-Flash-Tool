// rea decompile_all
// name: FUN_1002f230
// address: 0x1002f230
// body: available
// range: 0x1002f230-0x100329f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1002f230(int param_1,undefined4 *param_2)

{
  char cVar1;
  wchar_t wVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  wchar_t *pwVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  longlong lVar16;
  size_t sVar17;
  undefined4 local_3b2c;
  undefined4 local_3b28;
  undefined4 local_3b24;
  undefined4 local_3b20;
  undefined4 local_3b1c;
  char *local_3b18;
  char *local_3b14;
  undefined4 local_3b10;
  undefined4 uStack_3b0c;
  int iStack_3b08;
  undefined4 uStack_3b04;
  undefined4 local_3b00;
  undefined4 local_3afc;
  undefined4 local_3af8;
  undefined4 *local_3af4;
  int local_3af0;
  int local_3aec;
  undefined4 *local_3ae8;
  wchar_t *local_3ae4;
  char *local_3ae0;
  char *local_3adc;
  undefined4 local_3ad8;
  undefined4 local_3ad4;
  undefined4 local_3ad0;
  int local_3acc;
  byte local_3ac8;
  undefined4 local_3ac4;
  undefined4 local_3ac0;
  wchar_t local_3abc [2602];
  int local_2668;
  char local_2664 [1220];
  undefined4 local_21a0;
  undefined4 local_219c;
  undefined4 local_2198 [2];
  wchar_t local_2190 [260];
  undefined4 local_1f88 [4];
  undefined4 local_1f78;
  undefined4 local_1f74;
  undefined4 local_1f70;
  undefined4 local_1f6c;
  undefined4 local_1f68;
  undefined4 local_1f64;
  undefined4 local_1f60;
  undefined4 local_1f5c;
  undefined4 local_1f58;
  undefined4 local_1f54;
  undefined4 local_1f50;
  uint local_1f4c;
  uint local_1f48;
  undefined1 local_1f44;
  uint local_1f40;
  undefined1 local_1f3c;
  undefined1 local_1f3b;
  uint local_1f38;
  undefined1 local_1f34;
  undefined1 local_1f33;
  uint local_1f30;
  undefined1 local_1f2c;
  undefined1 local_1f2b;
  uint local_1f28;
  undefined1 local_1f24;
  undefined1 local_1f23;
  undefined4 local_12f0;
  undefined1 local_12ec;
  uint local_12e8;
  wchar_t local_12e4 [260];
  uint local_10dc;
  wchar_t local_10d8 [260];
  uint local_ed0;
  uint local_ecc;
  uint local_ec8;
  uint local_ec4;
  undefined4 local_ebc;
  uint local_eb8;
  undefined **local_e48;
  undefined2 local_e44;
  undefined4 local_e34;
  undefined4 local_e30;
  undefined1 local_e2c;
  undefined4 local_e1c;
  undefined4 local_e18;
  undefined4 local_e14;
  undefined4 local_e10;
  undefined4 uStack_e0c;
  undefined4 uStack_e08;
  undefined4 uStack_e04;
  undefined **local_e00;
  undefined2 local_dfc [8];
  undefined4 local_dec;
  undefined4 local_de8;
  undefined1 local_de4;
  undefined4 local_dd4;
  undefined4 local_dd0;
  undefined4 local_dcc;
  undefined4 local_dc8;
  undefined **local_dc4;
  undefined2 local_dc0;
  undefined4 local_db0;
  undefined4 local_dac;
  undefined1 local_da8;
  undefined4 local_d98;
  undefined4 local_d94;
  undefined4 local_d90;
  undefined4 uStack_d8c;
  undefined4 uStack_d88;
  undefined4 uStack_d84;
  undefined4 local_d80;
  undefined4 uStack_d7c;
  undefined4 uStack_d78;
  undefined4 uStack_d74;
  undefined4 local_d70;
  undefined4 uStack_d6c;
  undefined4 uStack_d68;
  undefined4 uStack_d64;
  undefined4 local_d60;
  undefined4 uStack_d5c;
  undefined4 uStack_d58;
  undefined4 uStack_d54;
  undefined **local_d4c;
  undefined4 local_d48;
  undefined4 local_d38;
  uint local_d34;
  uint local_d30;
  undefined4 local_d20;
  uint local_d1c;
  undefined **local_d18;
  undefined4 local_d14;
  undefined4 local_d04;
  uint local_d00;
  uint local_cfc;
  undefined4 local_cec;
  uint local_ce8;
  undefined **local_ce4;
  undefined2 local_ce0;
  int local_cd0;
  undefined4 local_ccc;
  undefined1 local_cc8;
  undefined4 local_cb8;
  undefined4 local_cb4;
  undefined4 local_c90;
  undefined4 uStack_c8c;
  uint uStack_c88;
  uint uStack_c84;
  uint uStack_c80;
  undefined4 uStack_c7c;
  undefined1 uStack_c78;
  undefined1 uStack_c77;
  undefined2 uStack_c76;
  uint uStack_c74;
  undefined **local_c6c;
  undefined2 local_c68;
  undefined4 local_c58;
  undefined4 local_c54;
  undefined1 local_c50;
  undefined4 local_c40;
  undefined4 local_c3c;
  wchar_t local_c38 [260];
  wchar_t local_a30 [260];
  wchar_t local_828 [1026];
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined1 local_14;
  undefined3 uStack_13;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_101c2da0;
  local_1c = ExceptionList;
  local_24 = DAT_1023dfec ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_3aec = param_1;
  local_3ae8 = param_2;
  local_3b20 = 0;
  local_3b2c = 0;
  local_3af4 = (undefined4 *)0x0;
  local_3b28 = 0;
  local_3adc = (char *)0x0;
  local_3b24 = 0;
  local_14 = 1;
  uStack_13 = 0;
  local_2668 = 0;
  local_219c = 0;
  _memset(local_2664,0xff,0x4c4);
  local_3afc = 0;
  local_3af8 = 0;
  local_3afc = FUN_1000c2b0();
  local_14 = 2;
  local_dcc = 0;
  local_dc8 = 0;
  local_dac = 7;
  local_db0 = 0;
  local_dc0 = 0;
  FUN_10045540();
  local_dc4 = CCpRsString::vftable;
  local_d94 = 0xf;
  local_d98 = 0;
  local_da8 = 0;
  local_ccc = 7;
  local_cd0 = 0;
  local_ce0 = 0;
  local_ce4 = CCpRsString::vftable;
  local_cb4 = 0xf;
  local_cb8 = 0;
  local_cc8 = 0;
  local_c54 = 7;
  local_c58 = 0;
  local_c68 = 0;
  local_c6c = CCpRsString::vftable;
  local_c3c = 0xf;
  local_c40 = 0;
  local_c50 = 0;
  FUN_1002dca0();
  _memset(local_a30,0,0x208);
  FUN_1002db10();
  FUN_1002da70();
  local_2198[0] = 0;
  local_2198[1] = 0;
  _memset(local_c38,0,0x208);
  _wcsncpy(local_2190,local_c38,0x104);
  FUN_10007520();
  local_e14 = 0;
  local_e30 = 7;
  local_e10 = 0;
  uStack_e0c = 0;
  uStack_e08 = 0;
  uStack_e04 = 0;
  local_e34 = 0;
  local_e44 = 0;
  local_e48 = CCpRsString::vftable;
  local_e18 = 0xf;
  local_e1c = 0;
  local_e2c = 0;
  local_3b1c = 0;
  local_3b18 = (char *)0x0;
  local_3b14 = (char *)0x0;
  local_3af0 = param_1 + 4;
  _local_14 = CONCAT31(uStack_13,7);
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  *param_2 = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 4;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x37] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x3d] = uVar8;
  FUN_10041810();
  local_de8 = 7;
  local_dec = 0;
  local_dfc[0] = 0;
  if (local_a30[0] != L'\0') {
    pwVar9 = local_a30;
    do {
      wVar2 = *pwVar9;
      pwVar9 = pwVar9 + 1;
    } while (wVar2 != L'\0');
  }
  FUN_10045540();
  local_e00 = CCpRsString::vftable;
  local_dd0 = 0xf;
  local_dd4 = 0;
  local_de4 = 0;
  local_14 = 8;
  if (((undefined ***)(param_2 + 0x40) != &local_e00) && (param_2 + 0x41 != (undefined4 *)local_dfc)
     ) {
    FUN_10046260();
  }
  _local_14 = CONCAT31(uStack_13,7);
  FUN_10048130();
  FUN_1000b550();
  local_3ae4 = (wchar_t *)0x0;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar10 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar10 = (uint)lVar16;
    local_3ae4 = (wchar_t *)uVar10;
  }
  if (uVar10 != 0) {
    uVar10 = 0;
    do {
      FUN_10048350();
      FUN_100485b0();
      iVar5 = FUN_10041810();
      if (iVar5 == 0) {
        local_3ae0 = (char *)0x0;
      }
      else {
        lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
        local_3ae0 = (char *)lVar16;
      }
      FUN_10048350();
      FUN_100485b0();
      iVar5 = FUN_10041810();
      if (iVar5 == 0) {
        local_dc8 = 0;
      }
      else {
        lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
        local_dc8 = (undefined4)lVar16;
      }
      FUN_10048350();
      FUN_100485b0();
      FUN_10041810();
      if (local_a30[0] != L'\0') {
        pwVar9 = local_a30;
        do {
          wVar2 = *pwVar9;
          pwVar9 = pwVar9 + 1;
        } while (wVar2 != L'\0');
      }
      FUN_10045540();
      FUN_1000c6d0();
      local_14 = 9;
      FUN_1000cb30();
      FUN_1000cb60();
      _local_14 = CONCAT31(uStack_13,7);
      FUN_10048130();
      uVar10 = uVar10 + 1;
      param_2 = local_3ae8;
    } while (uVar10 < local_3ae4);
  }
  if (param_2 + 0x35 != &local_3afc) {
    FUN_1000b550();
    FUN_1000c880();
  }
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 1;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x3a] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 4;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x109b] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x10aa] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x10a9] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 2;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x10af] = uVar8;
  FUN_10041810();
  local_d34 = 7;
  local_d38 = 0;
  local_d48 = (uint)local_d48._2_2_ << 0x10;
  if (local_a30[0] != L'\0') {
    pwVar9 = local_a30;
    do {
      wVar2 = *pwVar9;
      pwVar9 = pwVar9 + 1;
    } while (wVar2 != L'\0');
  }
  FUN_10045540();
  local_d4c = CCpRsString::vftable;
  local_d1c = 0xf;
  local_d20 = 0;
  local_d30 = local_d30 & 0xffffff00;
  local_14 = 10;
  if (((undefined ***)(param_2 + 0x109c) != &local_d4c) && (param_2 + 0x109d != &local_d48)) {
    FUN_10046260();
  }
  _local_14 = CONCAT31(uStack_13,7);
  local_d4c = CCpRsString::vftable;
  if (0xf < local_d1c) {
    FUN_1000b630();
  }
  local_d1c = 0xf;
  local_d20 = 0;
  local_d30 = local_d30 & 0xffffff00;
  if (7 < local_d34) {
    FUN_1000b5d0();
  }
  if (local_a30[0] != L'\0') {
    pwVar9 = local_a30;
    do {
      wVar2 = *pwVar9;
      pwVar9 = pwVar9 + 1;
    } while (wVar2 != L'\0');
  }
  FUN_10045540();
  pcVar6 = (char *)FUN_100486d0();
  uStack_c74 = 0xf;
  uStack_c78 = 0;
  uStack_c77 = 0;
  uStack_c76 = 0;
  uStack_c88 = uStack_c88 & 0xffffff00;
  if (*pcVar6 != '\0') {
    local_3ae0 = pcVar6 + 1;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
  }
  FUN_1000aa60();
  _local_14 = CONCAT31(uStack_13,0xb);
  puVar7 = (undefined4 *)FUN_100409e0();
  if (&local_3b2c != puVar7) {
    local_3b20 = *puVar7;
    local_3af4 = (undefined4 *)puVar7[1];
    local_3adc = (char *)puVar7[2];
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
  }
  if (iStack_3b08 != 0) {
    FUN_1002d300();
    FUN_1002c430();
    iStack_3b08 = 0;
    uStack_3b04 = 0;
    local_3b00 = 0;
    param_2 = local_3ae8;
  }
  _local_14 = CONCAT31(uStack_13,7);
  if (0xf < uStack_c74) {
    FUN_1000b630();
  }
  local_3b2c = 0;
  local_3b28 = 0;
  local_3b24 = 0;
  FUN_1002e6b0();
  param_2[0x10ab] = local_e10;
  param_2[0x10ac] = uStack_e0c;
  param_2[0x10ad] = uStack_e08;
  param_2[0x10ae] = uStack_e04;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x4e] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 1;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x66] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x4d] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x4f] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x50] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x51] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x52] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x53] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x54] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 1;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x55] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar3 = 0x94;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar3 = (undefined1)lVar16;
  }
  *(undefined1 *)(param_2 + 0x56) = uVar3;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x60] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x7c] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x7d] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x61] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x62] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 1;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x57] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0x9c4;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x58] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 1;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x59] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x5a] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 200;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x5b] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 800;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x7b] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 1;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x5c] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 1;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x5d] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x5e] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 1;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[99] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 1;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[100] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uStack_c7c = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uStack_c7c = (undefined4)lVar16;
  }
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uStack_c88 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uStack_c88 = (uint)lVar16;
  }
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar10 = 10;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar10 = (uint)lVar16;
  }
  if ((uVar10 == 0) || (1000 < uVar10)) {
    uVar10 = 10;
  }
  uStack_c78 = (undefined1)uVar10;
  uStack_c77 = (undefined1)(uVar10 >> 8);
  uStack_c76 = (undefined2)(uVar10 >> 0x10);
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uStack_c84 = 0x14;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uStack_c84 = (uint)lVar16;
  }
  if ((uStack_c84 == 0) || (1000 < uStack_c84)) {
    uStack_c84 = 0x14;
  }
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uStack_c74 = 200;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uStack_c74 = (uint)lVar16;
  }
  if ((uStack_c74 == 0) || (100000 < uStack_c74)) {
    uStack_c74 = 200;
  }
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uStack_c80 = 10;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uStack_c80 = (uint)lVar16;
  }
  if ((uStack_c80 == 0) || (1000 < uStack_c80)) {
    uStack_c80 = 0x14;
  }
  param_2[0x67] = uStack_c88;
  param_2[0x68] = uStack_c84;
  param_2[0x69] = uStack_c80;
  param_2[0x6a] = uStack_c7c;
  *(ulonglong *)(param_2 + 0x6b) =
       CONCAT44(uStack_c74,CONCAT22(uStack_c76,CONCAT11(uStack_c77,uStack_c78)));
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uStack_3b0c = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uStack_3b0c = (undefined4)lVar16;
  }
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    iStack_3b08 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    iStack_3b08 = (int)lVar16;
  }
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uStack_3b04 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uStack_3b04 = (undefined4)lVar16;
  }
  local_3adc = (char *)0x0;
  iVar5 = FUN_10041810();
  if (iVar5 != 0) {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    local_3adc = (char *)lVar16;
  }
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    local_3b10 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    local_3b10 = (undefined4)lVar16;
  }
  param_2[0x733] = local_3b10;
  param_2[0x734] = uStack_3b0c;
  param_2[0x735] = iStack_3b08;
  param_2[0x736] = uStack_3b04;
  param_2[0x737] = local_3adc;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 1;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x6d] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x6e] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar4 = (undefined2)lVar16;
  }
  *(undefined2 *)(param_2 + 0x6f) = uVar4;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x70] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x71] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x72] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x7a] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 1000;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x73] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    iVar5 = (int)lVar16;
  }
  param_2[0x74] = iVar5;
  local_3b18 = (char *)0x0;
  local_3ae4 = (wchar_t *)0x0;
  if (iVar5 != 0) {
    do {
      local_14 = 7;
      _memset(local_a30,0,0x208);
      FUN_10048350();
      FUN_100485b0();
      FUN_10041810();
      if (local_a30[0] != L'\0') {
        pwVar9 = local_a30;
        do {
          wVar2 = *pwVar9;
          pwVar9 = pwVar9 + 1;
        } while (wVar2 != L'\0');
      }
      FUN_10045540();
      if (local_3b18 == local_3b14) {
        FUN_1000fb80();
      }
      local_3ae0 = local_3b18;
      local_3adc = local_3b18;
      local_14 = 0xd;
      if (local_3b18 != (char *)0x0) {
        pcVar6 = local_3b18 + 4;
        local_3b18[0x14] = '\0';
        local_3b18[0x15] = '\0';
        local_3b18[0x16] = '\0';
        local_3b18[0x17] = '\0';
        local_3b18[0x18] = '\0';
        local_3b18[0x19] = '\0';
        local_3b18[0x1a] = '\0';
        local_3b18[0x1b] = '\0';
        local_3b18[0x18] = '\a';
        local_3b18[0x19] = '\0';
        local_3b18[0x1a] = '\0';
        local_3b18[0x1b] = '\0';
        uVar10 = *(uint *)(local_3b18 + 0x18);
        local_3b18[0x14] = '\0';
        local_3b18[0x15] = '\0';
        local_3b18[0x16] = '\0';
        local_3b18[0x17] = '\0';
        if (7 < uVar10) {
          pcVar6 = *(char **)pcVar6;
        }
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        FUN_10046260();
        pcVar6 = local_3b18 + 0x1c;
        *(undefined ***)local_3b18 = CCpRsString::vftable;
        local_3b18[0x2c] = '\0';
        local_3b18[0x2d] = '\0';
        local_3b18[0x2e] = '\0';
        local_3b18[0x2f] = '\0';
        local_3b18[0x30] = '\0';
        local_3b18[0x31] = '\0';
        local_3b18[0x32] = '\0';
        local_3b18[0x33] = '\0';
        local_3b18[0x30] = '\x0f';
        local_3b18[0x31] = '\0';
        local_3b18[0x32] = '\0';
        local_3b18[0x33] = '\0';
        uVar10 = *(uint *)(local_3b18 + 0x30);
        local_3b18[0x2c] = '\0';
        local_3b18[0x2d] = '\0';
        local_3b18[0x2e] = '\0';
        local_3b18[0x2f] = '\0';
        if (0xf < uVar10) {
          pcVar6 = *(char **)pcVar6;
        }
        *pcVar6 = '\0';
      }
      local_3b18 = local_3b18 + 0x34;
      local_3ae4 = (wchar_t *)((int)local_3ae4 + 1);
    } while (local_3ae4 < (wchar_t *)param_2[0x74]);
  }
  local_3af4 = param_2 + 0x75;
  local_14 = 0xe;
  puVar7 = (undefined4 *)param_2[0x76];
  puVar12 = (undefined4 *)*local_3af4;
  local_3adc = (char *)puVar7;
  local_3ae0 = (char *)puVar12;
  for (; puVar12 != puVar7; puVar12 = puVar12 + 0xd) {
    (**(code **)*puVar12)();
    param_2 = local_3ae8;
  }
  local_3af4[1] = *local_3af4;
  _local_14 = CONCAT31(uStack_13,7);
  FUN_10033610();
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x78] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 1;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x79] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 1;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x7f] = uVar8;
  FUN_10041810();
  local_d00 = 7;
  local_d04 = 0;
  local_d14 = (uint)local_d14._2_2_ << 0x10;
  if (local_a30[0] != L'\0') {
    pwVar9 = local_a30;
    do {
      wVar2 = *pwVar9;
      pwVar9 = pwVar9 + 1;
    } while (wVar2 != L'\0');
  }
  FUN_10045540();
  local_d18 = CCpRsString::vftable;
  local_ce8 = 0xf;
  local_cec = 0;
  local_cfc = local_cfc & 0xffffff00;
  local_14 = 0xf;
  if (((undefined ***)(param_2 + 0x80) != &local_d18) && (param_2 + 0x81 != &local_d14)) {
    FUN_10046260();
  }
  _local_14 = CONCAT31(uStack_13,7);
  local_d18 = CCpRsString::vftable;
  if (0xf < local_ce8) {
    FUN_1000b630();
  }
  local_ce8 = 0xf;
  local_cec = 0;
  local_cfc = local_cfc & 0xffffff00;
  if (7 < local_d00) {
    FUN_1000b5d0();
  }
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x8d] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  param_2[0x7e] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    local_2198[0] = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    local_2198[0] = (undefined4)lVar16;
  }
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    local_2198[1] = 10;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    local_2198[1] = (undefined4)lVar16;
  }
  FUN_10041810();
  puVar7 = local_2198;
  puVar12 = param_2 + 0x8e;
  for (iVar5 = 0x84; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar12 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar12 = puVar12 + 1;
  }
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  puVar7 = local_3ae8;
  local_3ae8[0x112] = uVar8;
  iVar5 = FUN_10041810();
  if (iVar5 == 0) {
    uVar8 = 1;
  }
  else {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar8 = (undefined4)lVar16;
  }
  puVar7[0x113] = uVar8;
  uVar10 = 0;
  local_3adc = (char *)0x0;
  iVar5 = FUN_10041810();
  if (iVar5 != 0) {
    lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
    uVar10 = (uint)lVar16;
    local_3adc = (char *)uVar10;
  }
  if (uVar10 != 0) {
    uVar10 = 0;
    do {
      FUN_10048350();
      FUN_100485b0();
      iVar5 = FUN_10041810();
      if (iVar5 == 0) {
        uVar3 = 0;
      }
      else {
        lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
        uVar3 = (undefined1)lVar16;
      }
      uStack_c88 = CONCAT31(uStack_c88._1_3_,uVar3);
      FUN_10048350();
      FUN_100485b0();
      iVar5 = FUN_10041810();
      if (iVar5 == 0) {
        uStack_c84 = 0;
      }
      else {
        lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
        uStack_c84 = (uint)lVar16;
      }
      FUN_10048350();
      FUN_100485b0();
      iVar5 = FUN_10041810();
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
        uVar4 = (undefined2)lVar16;
      }
      uStack_c80 = CONCAT22(uStack_c80._2_2_,uVar4);
      FUN_10048350();
      FUN_100485b0();
      iVar5 = FUN_10041810();
      if (iVar5 == 0) {
        uStack_c7c = 0;
      }
      else {
        lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
        uStack_c7c = (undefined4)lVar16;
      }
      FUN_10048350();
      FUN_100485b0();
      iVar5 = FUN_10041810();
      if (iVar5 == 0) {
        uStack_c78 = 0;
      }
      else {
        lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
        uStack_c78 = (undefined1)lVar16;
      }
      FUN_10048350();
      FUN_100485b0();
      iVar5 = FUN_10041810();
      if (iVar5 == 0) {
        uStack_c74 = 0;
      }
      else {
        lVar16 = FID_conflict___wcstoi64(local_828,(wchar_t **)0x0,0);
        uStack_c74 = (uint)lVar16;
      }
      FUN_10033580();
      uVar10 = uVar10 + 1;
      puVar7 = local_3ae8;
    } while (uVar10 < local_3adc);
  }
  FUN_1002dd70();
  FUN_100485b0();
  local_21a0 = FUN_100417a0();
  FUN_100485b0();
  uVar8 = FUN_100417a0();
  local_2664[3] = (char)uVar8;
  local_2664[2] = (char)((uint)uVar8 >> 8);
  local_2664[1] = (char)((uint)uVar8 >> 0x10);
  local_2664[0] = (char)((uint)uVar8 >> 0x18);
  FUN_100485b0();
  uVar8 = FUN_100417a0();
  local_2664[7] = (char)uVar8;
  local_2664[6] = (char)((uint)uVar8 >> 8);
  local_2664[4] = (char)((uint)uVar8 >> 0x18);
  uVar10 = 7;
  local_2664[5] = (char)((uint)uVar8 >> 0x10);
  do {
    if (local_2664[uVar10] != -1) break;
    uVar10 = uVar10 - 1;
  } while (uVar10 < 8);
  local_2668 = uVar10 + 1;
  piVar11 = &local_2668;
  piVar14 = puVar7 + 0x117;
  for (iVar5 = 0x134; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar14 = *piVar11;
    piVar11 = piVar11 + 1;
    piVar14 = piVar14 + 1;
  }
  FUN_100485b0();
  uVar8 = FUN_100417a0();
  puVar7 = local_3ae8;
  local_3ae8[0x71b] = uVar8;
  FUN_100485b0();
  uVar8 = FUN_100417a0();
  puVar7[0x71c] = uVar8;
  FUN_100485b0();
  uVar8 = FUN_100417a0();
  puVar7[0x71d] = uVar8;
  FUN_100485b0();
  uVar8 = FUN_100417a0();
  puVar7[0x38] = uVar8;
  FUN_100485b0();
  uVar8 = FUN_100417a0();
  puVar7[0x39] = uVar8;
  FUN_100485b0();
  uVar8 = FUN_100417a0();
  puVar7[0x3e] = uVar8;
  FUN_100485b0();
  uVar8 = FUN_100417a0();
  puVar7[0x3f] = uVar8;
  FUN_100485b0();
  uVar8 = FUN_100417a0();
  puVar7[0x71e] = uVar8;
  FUN_100485b0();
  uVar8 = FUN_100417a0();
  puVar7[0x71f] = uVar8;
  FUN_100485b0();
  uVar8 = FUN_100417a0();
  puVar7[0x5f] = uVar8;
  FUN_100485b0();
  uVar8 = FUN_100417a0();
  puVar7[0x721] = uVar8;
  FUN_100485b0();
  uVar8 = FUN_100417a0();
  puVar7[0x722] = uVar8;
  FUN_100485b0();
  uVar8 = FUN_100417a0();
  puVar7[0x723] = uVar8;
  FUN_100485b0();
  uVar8 = FUN_100417a0();
  puVar7[0x724] = uVar8;
  FUN_100485b0();
  FUN_10041810();
  FUN_10048240();
  FUN_1002dd80();
  FUN_100485b0();
  uVar8 = FUN_100417a0();
  puVar7[0x732] = uVar8;
  FUN_100485b0();
  local_d90 = FUN_100417a0();
  FUN_100485b0();
  uStack_d8c = FUN_100417a0();
  FUN_100485b0();
  uStack_d84 = FUN_100417a0();
  FUN_100485b0();
  uStack_d88 = FUN_100417a0();
  FUN_100485b0();
  local_d80 = FUN_100417a0();
  FUN_100485b0();
  uStack_d74 = FUN_100417a0();
  FUN_100485b0();
  local_d70 = FUN_100417a0();
  FUN_100485b0();
  uStack_d6c = FUN_100417a0();
  FUN_100485b0();
  uStack_d58 = FUN_100417a0();
  FUN_100485b0();
  uStack_d54 = FUN_100417a0();
  FUN_100485b0();
  uVar3 = FUN_100417a0();
  uStack_d5c = CONCAT31(uStack_d5c._1_3_,uVar3);
  _memset(local_a30,0,0x208);
  FUN_100485b0();
  FUN_10041810();
  FUN_10048240();
  uVar8 = FUN_100486d0();
  FUN_10009140(uVar8);
  FUN_10040f20();
  FUN_100485b0();
  uStack_d7c = FUN_100417a0();
  FUN_100485b0();
  uStack_d78 = FUN_100417a0();
  puVar7[0xf7c] = local_d90;
  puVar7[0xf7d] = uStack_d8c;
  puVar7[0xf7e] = uStack_d88;
  puVar7[0xf7f] = uStack_d84;
  puVar7[0xf80] = local_d80;
  puVar7[0xf81] = uStack_d7c;
  puVar7[0xf82] = uStack_d78;
  puVar7[0xf83] = uStack_d74;
  puVar7[0xf84] = local_d70;
  puVar7[0xf85] = uStack_d6c;
  puVar7[0xf86] = uStack_d68;
  puVar7[0xf87] = uStack_d64;
  puVar7[0xf88] = local_d60;
  puVar7[0xf89] = uStack_d5c;
  puVar7[0xf8a] = uStack_d58;
  puVar7[0xf8b] = uStack_d54;
  FUN_100485b0();
  local_1f88[1] = FUN_100417a0();
  FUN_100485b0();
  local_1f88[2] = FUN_100417a0();
  FUN_100485b0();
  local_1f88[3] = FUN_100417a0();
  FUN_100485b0();
  local_1f78 = FUN_100417a0();
  FUN_100485b0();
  local_1f74 = FUN_100417a0();
  FUN_100485b0();
  local_1f5c = FUN_100417a0();
  FUN_100485b0();
  local_1f58 = FUN_100417a0();
  FUN_100485b0();
  local_1f54 = FUN_100417a0();
  FUN_100485b0();
  local_1f50 = FUN_100417a0();
  FUN_100485b0();
  uVar10 = FUN_100417a0();
  if (uVar10 < 2) {
    local_1f48 = uVar10;
  }
  FUN_100485b0();
  uVar10 = FUN_100417a0();
  if (uVar10 < 3) {
    local_1f40 = uVar10;
  }
  FUN_100485b0();
  uVar10 = FUN_100417a0();
  if (uVar10 < 3) {
    local_1f38 = uVar10;
  }
  FUN_100485b0();
  uVar10 = FUN_100417a0();
  if (uVar10 < 3) {
    local_1f30 = uVar10;
  }
  FUN_100485b0();
  uVar10 = FUN_100417a0();
  if (uVar10 < 3) {
    local_1f28 = uVar10;
  }
  FUN_100485b0();
  uVar10 = FUN_100417a0();
  if (uVar10 < 2) {
    local_1f4c = uVar10;
  }
  FUN_100485b0();
  local_1f3c = FUN_100417a0();
  FUN_100485b0();
  local_1f34 = FUN_100417a0();
  FUN_100485b0();
  local_1f2c = FUN_100417a0();
  FUN_100485b0();
  local_1f24 = FUN_100417a0();
  FUN_100485b0();
  local_1f44 = FUN_100417a0();
  FUN_100485b0();
  local_1f3b = FUN_100417a0();
  FUN_100485b0();
  local_1f33 = FUN_100417a0();
  FUN_100485b0();
  local_1f2b = FUN_100417a0();
  FUN_100485b0();
  local_1f23 = FUN_100417a0();
  FUN_100485b0();
  local_12f0 = FUN_100417a0();
  FUN_100485b0();
  local_1f88[0] = FUN_100417a0();
  FUN_100485b0();
  FUN_10041810();
  FUN_100485b0();
  FUN_10041810();
  FUN_100485b0();
  FUN_10041810();
  FUN_100485b0();
  FUN_10041810();
  FUN_100485b0();
  FUN_10041810();
  FUN_100485b0();
  FUN_10041810();
  FUN_100485b0();
  local_12ec = FUN_100417a0();
  FUN_100485b0();
  local_1f70 = FUN_100417a0();
  FUN_100485b0();
  local_1f6c = FUN_100417a0();
  FUN_100485b0();
  local_1f68 = FUN_100417a0();
  FUN_100485b0();
  local_1f64 = FUN_100417a0();
  FUN_100485b0();
  local_1f60 = FUN_100417a0();
  puVar12 = local_1f88;
  puVar7 = puVar7 + 0x739;
  for (iVar5 = 0x328; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_100485b0();
  local_3ad8 = FUN_100417a0();
  FUN_100485b0();
  local_3ad4 = FUN_100417a0();
  FUN_100485b0();
  local_3ad0 = FUN_100417a0();
  FUN_100485b0();
  local_3acc = FUN_100417a0();
  FUN_100485b0();
  local_3ac8 = FUN_100417a0();
  FUN_100485b0();
  local_3ac4 = FUN_100417a0();
  FUN_100485b0();
  local_3ac0 = FUN_100417a0();
  FUN_10048060();
  FUN_10048060();
  local_14 = 0x11;
  if ((local_3acc != 0) && (local_3adc = (char *)(uint)local_3ac8, local_3adc != (char *)0x0)) {
    if (10 < local_3adc) {
      local_3adc = (char *)0xa;
    }
    if (local_3adc != (char *)0x0) {
      local_3ae4 = local_3abc;
      uVar10 = 0;
      do {
        FUN_10048350();
        FUN_10048240();
        FUN_1002c190();
        FUN_1000a750();
        FUN_1000a750();
        FUN_10041810();
        _wcsncpy(local_3ae4,local_a30,0x104);
        local_3ae4 = local_3ae4 + 0x104;
        uVar10 = uVar10 + 1;
      } while (uVar10 < local_3adc);
    }
  }
  puVar7 = local_3ae8;
  FUN_1002de10();
  FUN_100485b0();
  uVar8 = FUN_100417a0();
  puVar7[0x738] = uVar8;
  FUN_100485b0();
  iVar5 = FUN_100417a0();
  local_12e8 = (uint)(iVar5 != 0);
  FUN_100485b0();
  iVar5 = FUN_100417a0();
  local_10dc = (uint)(iVar5 != 0);
  FUN_100485b0();
  iVar5 = FUN_100417a0();
  local_eb8 = (uint)(iVar5 != 0);
  FUN_100485b0();
  iVar5 = FUN_100417a0();
  if (iVar5 == 1) {
    local_ebc = 1;
  }
  else if (iVar5 == 2) {
    local_ebc = 2;
  }
  FUN_100485b0();
  uVar10 = FUN_100417a0();
  if (uVar10 < 9) {
    local_ecc = uVar10;
  }
  FUN_100485b0();
  uVar10 = FUN_100417a0();
  if (uVar10 < 9) {
    local_ec8 = uVar10;
  }
  FUN_100485b0();
  iVar5 = FUN_100417a0();
  local_eb8 = (uint)(iVar5 != 0);
  FUN_100485b0();
  uVar10 = FUN_100417a0();
  if (uVar10 < 10) {
    local_ec4 = uVar10;
  }
  FUN_100485b0();
  local_ed0 = FUN_100417a0();
  if (100 < local_ed0) {
    local_ed0 = 1;
  }
  FUN_100485b0();
  FUN_10041810();
  FUN_10048240();
  if (local_cd0 != 0) {
    FUN_10013500();
    local_14 = 0x12;
    uVar8 = FUN_100486d0();
    local_3ae0 = &stack0xffffc4a4;
    FUN_10009140(uVar8);
    local_14 = 0x13;
    uVar8 = FUN_100486d0();
    FUN_10009140(uVar8);
    local_14 = 0x12;
    FUN_100408b0();
    local_14 = 0x14;
    FUN_100482a0();
    FUN_10009080();
    local_14 = 0x11;
    FUN_10048130();
    sVar17 = 0x104;
    pwVar9 = (wchar_t *)FUN_100485b0();
    _wcsncpy(local_12e4,pwVar9,sVar17);
  }
  FUN_100485b0();
  FUN_10041810();
  FUN_10048240();
  if (local_cd0 != 0) {
    FUN_10013500();
    local_14 = 0x15;
    uVar8 = FUN_100486d0();
    local_3ae0 = &stack0xffffc4a4;
    FUN_10009140(uVar8);
    local_14 = 0x16;
    uVar8 = FUN_100486d0();
    FUN_10009140(uVar8);
    local_14 = 0x15;
    FUN_100408b0();
    local_14 = 0x17;
    FUN_100482a0();
    FUN_10009080();
    local_14 = 0x11;
    FUN_10048130();
    sVar17 = 0x104;
    pwVar9 = (wchar_t *)FUN_100485b0();
    _wcsncpy(local_10d8,pwVar9,sVar17);
  }
  puVar13 = &local_12e8;
  puVar15 = puVar7 + 0xf8c;
  for (iVar5 = 0x10d; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar15 = puVar15 + 1;
  }
  FUN_1002dd10();
  FUN_100485b0();
  uStack_3b0c = FUN_100417a0();
  FUN_100485b0();
  iStack_3b08 = FUN_100417a0();
  FUN_100485b0();
  uStack_3b04 = FUN_100417a0();
  FUN_100485b0();
  uVar3 = FUN_100417a0();
  local_3b00 = CONCAT31(local_3b00._1_3_,uVar3);
  FUN_100485b0();
  uVar3 = FUN_100417a0();
  puVar7 = local_3ae8;
  local_3b00._0_2_ = CONCAT11(uVar3,(undefined1)local_3b00);
  local_3ae8[0x10b0] = uStack_3b0c;
  local_3ae8[0x10b1] = iStack_3b08;
  local_3ae8[0x10b2] = uStack_3b04;
  local_3ae8[0x10b3] = local_3b00;
  FUN_100485b0();
  iVar5 = FUN_100417a0();
  puVar7[0x10b4] = (uint)(iVar5 != 0);
  FUN_1002dd30();
  FUN_100485b0();
  uStack_c88 = FUN_100417a0();
  FUN_100485b0();
  uStack_c84 = FUN_100417a0();
  FUN_100485b0();
  local_c90 = FUN_100417a0();
  FUN_100485b0();
  uStack_c8c = FUN_100417a0();
  FUN_100485b0();
  uStack_c7c = FUN_100417a0();
  FUN_100485b0();
  uVar4 = FUN_100417a0();
  uStack_c78 = (undefined1)uVar4;
  uStack_c77 = (undefined1)((ushort)uVar4 >> 8);
  FUN_100485b0();
  uStack_c80 = FUN_100417a0();
  FUN_100485b0();
  uStack_c74 = FUN_100417a0();
  puVar7[0x10b5] = local_c90;
  puVar7[0x10b6] = uStack_c8c;
  puVar7[0x10b7] = uStack_c88;
  puVar7[0x10b8] = uStack_c84;
  puVar7[0x10b9] = uStack_c80;
  puVar7[0x10ba] = uStack_c7c;
  puVar7[0x10bb] = CONCAT22(uStack_c76,CONCAT11(uStack_c77,uStack_c78));
  puVar7[0x10bc] = uStack_c74;
  FUN_10048130();
  FUN_10048130();
  _local_14 = CONCAT31(uStack_13,0x18);
  FUN_1000fb20();
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  FUN_10007b30();
  FUN_1002bf60();
  FUN_1002bfa0();
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}

