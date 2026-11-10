// rea decompile_all
// name: setSBUpLow
// address: 0x1018c52b
// body: available
// range: 0x1018c52b-0x1018c6be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl setSBUpLow(struct __crt_multibyte_data *)
   
   Library: Visual Studio 2015 Release */

void __cdecl setSBUpLow(__crt_multibyte_data *param_1)

{
  byte bVar1;
  __crt_multibyte_data _Var2;
  BOOL BVar3;
  uint uVar4;
  BYTE *pBVar5;
  __crt_multibyte_data *p_Var6;
  _cpinfo local_71c;
  ushort local_708 [512];
  __crt_multibyte_data local_308 [256];
  __crt_multibyte_data local_208 [256];
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),&local_71c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      p_Var6 = param_1 + uVar4 + 0x119;
      if (p_Var6 + (-0x61 - (int)(param_1 + 0x119)) + 0x20 < (__crt_multibyte_data *)0x1a) {
        param_1[uVar4 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar4 + 0x19] | 0x10);
        _Var2 = (__crt_multibyte_data)((char)uVar4 + ' ');
LAB_1018c697:
        *p_Var6 = _Var2;
      }
      else {
        if (p_Var6 + (-0x61 - (int)(param_1 + 0x119)) < (__crt_multibyte_data *)0x1a) {
          param_1[uVar4 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar4 + 0x19] | 0x20);
          _Var2 = (__crt_multibyte_data)((char)uVar4 + -0x20);
          goto LAB_1018c697;
        }
        *p_Var6 = (__crt_multibyte_data)0x0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    do {
      local_108[uVar4] = (char)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    pBVar5 = local_71c.LeadByte;
    local_108[0] = 0x20;
    while (local_71c.LeadByte[0] != 0) {
      bVar1 = pBVar5[1];
      for (uVar4 = (uint)local_71c.LeadByte[0]; (uVar4 <= bVar1 && (uVar4 < 0x100));
          uVar4 = uVar4 + 1) {
        local_108[uVar4] = 0x20;
      }
      pBVar5 = pBVar5 + 2;
      local_71c.LeadByte[0] = *pBVar5;
    }
    ___acrt_GetStringTypeA(0,1,local_108,0x100,local_708,*(undefined4 *)(param_1 + 4),0);
    ___acrt_LCMapStringA
              (0,*(undefined4 *)(param_1 + 0x21c),0x100,local_108,0x100,local_208,0x100,
               *(undefined4 *)(param_1 + 4),0);
    ___acrt_LCMapStringA
              (0,*(undefined4 *)(param_1 + 0x21c),0x200,local_108,0x100,local_308,0x100,
               *(undefined4 *)(param_1 + 4),0);
    uVar4 = 0;
    do {
      if ((local_708[uVar4] & 1) == 0) {
        if ((local_708[uVar4] & 2) != 0) {
          param_1[uVar4 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar4 + 0x19] | 0x20);
          _Var2 = local_308[uVar4];
          goto LAB_1018c63e;
        }
        param_1[uVar4 + 0x119] = (__crt_multibyte_data)0x0;
      }
      else {
        param_1[uVar4 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar4 + 0x19] | 0x10);
        _Var2 = local_208[uVar4];
LAB_1018c63e:
        param_1[uVar4 + 0x119] = _Var2;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

