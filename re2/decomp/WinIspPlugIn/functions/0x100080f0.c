// rea decompile_all
// name: FUN_100080f0
// address: 0x100080f0
// body: available
// range: 0x100080f0-0x100084e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10008359) */
/* WARNING: Removing unreachable block (ram,0x1000838e) */
/* WARNING: Removing unreachable block (ram,0x100082cf) */
/* WARNING: Removing unreachable block (ram,0x100083aa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100080f0(void)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  LPCWSTR pWVar4;
  BOOL BVar5;
  int in_ECX;
  short *psVar6;
  undefined4 *puVar7;
  short local_21c [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c0db7;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_10045540();
  local_8 = 0;
  FUN_10045540();
  local_8 = CONCAT31(local_8._1_3_,1);
  _memset(local_21c,0,0x208);
  GetModuleHandleW(L"WinOperateCScaler.dll");
  puVar2 = (undefined *)FUN_10046750();
  if (puVar2 != &DAT_1024a174) {
    if (puVar2 == (undefined *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)(puVar2 + 4);
    }
    if (puVar7 != &DAT_1024a178) {
      if (7 < DAT_1024a18c) {
        FUN_1000b5d0();
      }
      DAT_1024a18c = 7;
      _DAT_1024a188 = 0;
      DAT_1024a178 = DAT_1024a178 & 0xffff0000;
      FUN_10045640();
    }
    local_8 = CONCAT31(local_8._1_3_,1);
  }
  FUN_10048130();
  FUN_10046260();
  if (in_ECX == 0) {
    if (DAT_1024e6dc == 0) {
      FUN_10040b70();
      if (local_21c[0] != 0) {
        psVar6 = local_21c;
        do {
          sVar1 = *psVar6;
          psVar6 = psVar6 + 1;
        } while (sVar1 != 0);
      }
      FUN_10045540();
    }
    FUN_10046260(&DAT_1024e6cc,0,0xffffffff);
    iVar3 = FUN_1002e360();
    if (iVar3 != 0) {
      iVar3 = FUN_100075b0();
      iVar3 = *(int *)(iVar3 + 0x14);
      FUN_10048130();
      if (iVar3 == 0) {
        FUN_10046260();
      }
      else {
        iVar3 = FUN_100075b0();
        pWVar4 = (LPCWSTR)(iVar3 + 4);
        if (7 < *(uint *)(iVar3 + 0x18)) {
          pWVar4 = *(LPCWSTR *)pWVar4;
        }
        BVar5 = PathIsDirectoryW(pWVar4);
        FUN_10048130();
        if (BVar5 == 0) {
          iVar3 = FUN_100075b0();
          pWVar4 = (LPCWSTR)(iVar3 + 4);
          if (7 < *(uint *)(iVar3 + 0x18)) {
            pWVar4 = *(LPCWSTR *)pWVar4;
          }
          BVar5 = CreateDirectoryW(pWVar4,(LPSECURITY_ATTRIBUTES)0x0);
          FUN_10048130();
          if (BVar5 == 0) goto LAB_100084ad;
        }
      }
      puVar2 = (undefined *)FUN_100075b0();
      local_8 = CONCAT31(local_8._1_3_,3);
      if ((puVar2 != &DAT_1023e9a8) && ((puVar2 == (undefined *)0x0 || (puVar2 != &DAT_1023e9a8))))
      {
        FUN_10046260();
      }
      FUN_10048130();
      DAT_1023e9a4 = DAT_1024a368;
    }
  }
  else {
    sVar1 = *(short *)(in_ECX + 0x43058);
    psVar6 = (short *)(in_ECX + 0x43058);
    while (sVar1 != 0) {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    }
    FUN_10045540();
  }
LAB_100084ad:
  FUN_10048130();
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

