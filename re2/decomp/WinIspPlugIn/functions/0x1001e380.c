// rea decompile_all
// name: FUN_1001e380
// address: 0x1001e380
// body: available
// range: 0x1001e380-0x1001e4b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e380(undefined4 param_1)

{
  int *in_ECX;
  int iVar1;
  undefined4 *in_EDX;
  undefined4 *puVar2;
  undefined4 auStack_530 [303];
  undefined4 uStack_74;
  undefined *puStack_70;
  wchar_t *pwStack_6c;
  undefined ***pppuStack_68;
  wchar_t *pwStack_64;
  uint uStack_60;
  undefined **local_48;
  undefined2 local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c1da8;
  local_10 = ExceptionList;
  uStack_60 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 7;
  local_34 = 0;
  local_44 = 0;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_8 = 0;
  iVar1 = *in_ECX;
  local_14 = uStack_60;
  if (iVar1 == 1) {
    pppuStack_68 = (undefined ***)(uint)*(ushort *)((int)in_EDX + 0x4ca);
    pwStack_64 = (wchar_t *)param_1;
    pwStack_6c = L"䟫\xf883甂謣좊\x04謀쇁೨╓࿿";
    pwStack_64 = (wchar_t *)FUN_1003e9c0();
LAB_1001e43c:
    if (pwStack_64 == (wchar_t *)0x0) {
      pppuStack_68 = &local_48;
      pwStack_64 = L"ClearFlagBaseOnEraseType Success";
      pwStack_6c = L"쒃贈뱍⻫嶾\r嘀㟿ࡨ℗栐ꄼဤ\xe1e8ʞ茀Ⴤƺ";
      FUN_10048350();
      goto LAB_1001e486;
    }
  }
  else {
    if (iVar1 == 2) {
      pwStack_64 = (wchar_t *)param_1;
      pppuStack_68 = (undefined ***)((uint)in_EDX[0x132] >> 0xc & 0xfff);
      pwStack_6c = (wchar_t *)(((uint)in_EDX[0x132] >> 0x10) * 0xffff);
      puStack_70 = (undefined *)0x1001e41b;
      pwStack_64 = (wchar_t *)FUN_1003e610();
      goto LAB_1001e43c;
    }
    if (iVar1 == 3) {
      puVar2 = auStack_530;
      for (iVar1 = 0x134; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = *in_EDX;
        in_EDX = in_EDX + 1;
        puVar2 = puVar2 + 1;
      }
      pwStack_64 = (wchar_t *)FUN_1003cde0(param_1);
      goto LAB_1001e43c;
    }
    pwStack_64 = (wchar_t *)0xd5d;
  }
  pppuStack_68 = (undefined ***)*in_ECX;
  pwStack_6c = L"ClearFlagBaseOnEraseType Fail%d, ErrorCode: 0x%x";
  puStack_70 = &DAT_1024a13c;
  uStack_74 = 0x1001e46f;
  FUN_10048350();
  pwStack_64 = L"㲹⒡\xe810菕\xffff䶍\xe8bc鲝\x02욋䶋擴ඉ";
  FUN_1003fc00();
LAB_1001e486:
  pwStack_64 = L"䶍\xe8bc鲝\x02욋䶋擴ඉ";
  FUN_10016860();
  pwStack_64 = L"욋䶋擴ඉ";
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

