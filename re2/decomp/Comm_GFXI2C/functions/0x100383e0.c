// rea decompile_all
// name: FUN_100383e0
// address: 0x100383e0
// body: available
// range: 0x100383e0-0x100387ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined4 __cdecl FUN_100383e0(LPCWSTR param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t local_1ac [130];
  int local_a8;
  int local_a4 [5];
  undefined4 local_90;
  wchar_t local_8c [40];
  ushort local_3c [4];
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  wchar_t local_24 [2];
  wchar_t local_20 [8];
  wchar_t local_10 [2];
  uint local_c;
  int local_8;
  
  local_c = DAT_10066d04;
  local_24 = (wchar_t  [2])u_0x00000000_100632b4._0_4_;
  local_20._0_4_ = u_0x00000000_100632b4._4_4_;
  local_20._4_4_ = u_0x00000000_100632b4._8_4_;
  local_20._8_4_ = u_0x00000000_100632b4._12_4_;
  local_20._12_4_ = u_0x00000000_100632b4._16_4_;
  local_10 = (wchar_t  [2])u_0x00000000_100632b4._20_4_;
  OutputDebugStringW(u_____WARNING___PE_SIGNATURE_VERIF_100632d0);
  OutputDebugStringW(param_1);
  OutputDebugStringW(u_____Error__10063354);
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    local_20[local_8] = (ushort)(param_2 >> (('\a' - (char)local_8) * '\x04' & 0x1fU)) & 0xf;
    local_20[local_8] = local_20[local_8] + ((9 < (ushort)local_20[local_8]) - 1 & 0xfff9) + 0x37;
  }
  OutputDebugStringW(local_24);
  if ((local_c == 0) && (DAT_100632b0 != 0)) {
    local_3c[0] = 0x100;
    local_3c[1] = 0x200;
    local_3c[2] = 0;
    local_34 = 0x41fcc608;
    local_30 = 0x8496;
    local_2e = 0x4def;
    local_2c = 0xb4;
    local_2b = 0x3e;
    local_2a = 0x7d;
    local_29 = 0x9b;
    local_28 = 0xd6;
    local_27 = 0x75;
    local_26 = 0xa6;
    local_25 = 0xff;
    DAT_100632b0 = 0;
    if ((DAT_10066bc0 == (HMODULE)0x0) &&
       (DAT_10066bc0 = FUN_10036a00(u_Advapi32_dll_10063370,0), DAT_10066bc0 != (HMODULE)0x0)) {
      DAT_10066bc4 = GetProcAddress(DAT_10066bc0,s_RegOpenKeyExW_1006338c);
      DAT_10066bc8 = GetProcAddress(DAT_10066bc0,s_RegEnumValueW_1006339c);
      DAT_10066bcc = GetProcAddress(DAT_10066bc0,s_RegCloseKey_100633ac);
    }
    if (((DAT_10066bc4 == (FARPROC)0x0) || (DAT_10066bc8 == (FARPROC)0x0)) ||
       (DAT_10066bcc == (FARPROC)0x0)) {
      return 0;
    }
    if ((DAT_10066bd0 == (HMODULE)0x0) &&
       (DAT_10066bd0 = FUN_10036a00(u_Ole32_dll_100633b8,0), DAT_10066bd0 != (HMODULE)0x0)) {
      DAT_10066bd4 = GetProcAddress(DAT_10066bd0,s_StringFromGUID2_100633cc);
    }
    if (DAT_10066bd4 == (FARPROC)0x0) {
      return 0;
    }
    pwVar3 = local_8c;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      pwVar3[0] = L'\0';
      pwVar3[1] = L'\0';
      pwVar3 = pwVar3 + 2;
    }
    *pwVar3 = L'\0';
    iVar2 = (*DAT_10066bd4)(&local_34,local_8c,0x27);
    if (iVar2 != 0x27) {
      return 0;
    }
    for (local_8 = 0; (local_c == 0 && (local_3c[local_8] != 0)); local_8 = local_8 + 1) {
      local_90 = 0;
      local_a4[4] = (*DAT_10066bc4)(0x80000002,u_SOFTWARE_NVIDIA_Corporation_Glob_100633e0,0,
                                    local_3c[local_8] | 0x20019,&local_90);
      if (local_a4[4] == 0) {
        local_a4[2] = 0;
        local_a4[3] = 0;
        local_a4[4] = 0;
        do {
          local_a4[0] = 0x80;
          local_a4[1] = 4;
          pwVar3 = local_1ac;
          for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
            pwVar3[0] = L'\0';
            pwVar3[1] = L'\0';
            pwVar3 = pwVar3 + 2;
          }
          local_a4[4] = (*DAT_10066bc8)(local_90,local_a4[2],local_1ac,local_a4,0,0,&local_a8,
                                        local_a4 + 1);
          local_a4[2] = local_a4[2] + 1;
          if (((local_a4[4] == 0) && (iVar2 = FUN_10047adf(local_8c), iVar2 == local_a4[0])) &&
             (iVar2 = _wcscmp(local_8c,local_1ac), iVar2 == 0)) {
            local_a4[3] = (uint)(local_a8 != 0) | local_a4[3];
          }
        } while (local_a4[4] != 0x103);
        (*DAT_10066bcc)(local_90);
        DAT_10066d04 = (uint)(local_a4[3] != 0);
        local_c = DAT_10066d04;
      }
    }
  }
  if ((local_c == 0) && (DAT_10066d04 == 0)) {
    SetLastError(param_2);
    uVar1 = 0;
  }
  else {
    OutputDebugStringW(u_____Signature_override_detected__10063428);
    SetLastError(0);
    uVar1 = 1;
  }
  return uVar1;
}

