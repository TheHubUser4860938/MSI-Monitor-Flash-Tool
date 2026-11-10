// rea decompile_all
// name: FUN_10021040
// address: 0x10021040
// body: available
// range: 0x10021040-0x10021363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10021040(undefined4 param_1,int *param_2)

{
  int in_ECX;
  int iVar1;
  int in_EDX;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int aiStack_e94 [304];
  undefined4 uStack_9d4;
  undefined *puStack_9d0;
  wchar_t *pwStack_9cc;
  wchar_t *pwStack_9c8;
  undefined4 local_9b4 [306];
  int local_4ec;
  int local_4e4 [309];
  int local_10;
  byte local_9;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  piVar3 = &DAT_1024a654;
  piVar5 = local_4e4;
  local_10 = in_EDX;
  for (iVar1 = 0x134; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar5 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar5 = piVar5 + 1;
  }
  puVar2 = &DAT_1024ab24;
  puVar4 = local_9b4;
  for (iVar1 = 0x134; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  if (DAT_1024a38c == 0) {
    pwStack_9c8 = L"Not need isp flag!";
    pwStack_9cc = (wchar_t *)&DAT_1024a13c;
    puStack_9d0 = (undefined *)0x10021097;
    FUN_10048350();
    pwStack_9c8 = 
    L"쀳幟譛ﱍ촳黨ᗥ謀工菃怽⒣\x10兴㶃\xe45cဤ༁蒅\x02謀ဍ⒝贐ﭕ桒࡚";
    FUN_10016860();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (DAT_1024a360 == 0) {
    if (in_ECX == 4) {
      iVar1 = *param_2;
      if ((((((iVar1 == 0x39) || (iVar1 == 0x36)) ||
            ((iVar1 == 0x33 ||
             (((((iVar1 == 0x38 || (iVar1 == 0x3b)) || (iVar1 == 0x3a)) ||
               ((iVar1 == 0x3c || (iVar1 == 0x42)))) || (iVar1 == 0x44)))))) ||
           ((iVar1 == 0x3e || (iVar1 == 0x3f)))) ||
          ((iVar1 == 0x46 ||
           ((((iVar1 == 0x41 || (iVar1 == 0x47)) || (iVar1 == 0x4a)) ||
            (((iVar1 == 0x48 || (iVar1 == 0x4d)) ||
             ((iVar1 == 0x45 || ((iVar1 == 0x4e || (iVar1 == 0x4f)))))))))))) || (iVar1 == 0x50)) {
        piVar3 = local_4e4;
        piVar5 = aiStack_e94;
        for (iVar1 = 0x134; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar5 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar5 = piVar5 + 1;
        }
        iVar1 = FUN_1003d050(param_1);
        if (iVar1 != 0) {
          pwStack_9cc = L" Write Rom Flag Fail!, ErrorCode: 0x%x";
          pwStack_9c8 = (wchar_t *)iVar1;
LAB_100211b6:
          puStack_9d0 = &DAT_1024a13c;
          uStack_9d4 = 0x100211c0;
          FUN_10048350();
          pwStack_9c8 = (wchar_t *)0x100211cd;
          FUN_10016860();
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        in_EDX = local_10;
        if ((DAT_1024a3d8 != 0) && (local_4ec == 0x17000)) {
          puVar2 = local_9b4;
          piVar3 = aiStack_e94;
          for (iVar1 = 0x134; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            piVar3 = piVar3 + 1;
          }
          iVar1 = FUN_1003d050(param_1);
          in_EDX = local_10;
          if (iVar1 != 0) {
            pwStack_9cc = L" Write XRom Flag Fail!, ErrorCode: 0x%x";
            pwStack_9c8 = (wchar_t *)iVar1;
            goto LAB_100211b6;
          }
        }
      }
      if (((DAT_1024a2f0 == 1) && (in_EDX == 1)) && (DAT_1024a2dc == 4)) {
        pwStack_9c8 = L"幟譛ﱍ촳裡ᗣ謀工菃׸๴\xf883理茉߸蔏\x97";
        FUN_10021370();
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    else if (((in_ECX == 5) || (in_ECX == 6)) || (in_ECX == 7)) {
      if ((DAT_1024a2f0 == 1) && ((in_EDX == 2 || ((in_EDX == 1 && (DAT_1024a2dc == 4)))))) {
        pwStack_9c8 = L"\xf08b\xf685୴桖⋘အჩ\xffff맿Ĵ";
        iVar1 = FUN_10021370();
        if (iVar1 != 0) {
          pwStack_9cc = L" Write Key And Signature After Program Fail!, ErrorCode: 0x%x";
          pwStack_9c8 = (wchar_t *)iVar1;
          goto LAB_100211b6;
        }
      }
      piVar3 = &DAT_1024a654;
      piVar5 = local_4e4;
      for (iVar1 = 0x134; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar5 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar5 = piVar5 + 1;
      }
      if (local_4e4[0] != 0) {
        pwStack_9c8 = L" Write User Flag Start!";
        pwStack_9cc = (wchar_t *)&DAT_1024a13c;
        puStack_9d0 = (undefined *)0x100212d0;
        FUN_10048350();
        puStack_9d0 = (undefined *)0x100212da;
        FUN_10016860();
        piVar3 = local_4e4;
        piVar5 = aiStack_e94;
        for (iVar1 = 0x134; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar5 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar5 = piVar5 + 1;
        }
        iVar1 = FUN_1003d050(param_1);
        if (iVar1 != 0) {
          pwStack_9cc = L" Write User Flag Fail!, ErrorCode: 0x%x";
          pwStack_9c8 = (wchar_t *)iVar1;
          goto LAB_100211b6;
        }
      }
    }
    if ((DAT_1024e45c == 1) && (DAT_1024a360 == 0)) {
      pwStack_9c8 = (wchar_t *)&local_9;
      pwStack_9cc = (wchar_t *)0x77;
      local_9 = 0;
      puStack_9d0 = (undefined *)0x10021330;
      iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))();
      if (iVar1 == 0) {
        pwStack_9c8 = (wchar_t *)(uint)(local_9 & 0xdf);
        pwStack_9cc = (wchar_t *)0x77;
        puStack_9d0 = (undefined *)0x1002134d;
        (**(code **)(*DAT_10249d10 + 0xf0))();
      }
    }
  }
  else if (DAT_1024e45c == 1) {
    pwStack_9c8 = (wchar_t *)&local_9;
    pwStack_9cc = (wchar_t *)0x85a;
    local_9 = 0;
    puStack_9d0 = (undefined *)0x100210e8;
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))();
    if (iVar1 == 0) {
      pwStack_9c8 = (wchar_t *)(uint)(local_9 & 0xdf);
      pwStack_9cc = (wchar_t *)0x85a;
      puStack_9d0 = (undefined *)0x1002110c;
      (**(code **)(*DAT_10249d10 + 0xc4))();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

