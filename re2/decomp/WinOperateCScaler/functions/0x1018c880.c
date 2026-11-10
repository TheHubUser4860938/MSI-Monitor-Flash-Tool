// rea decompile_all
// name: __setmbcp_nolock
// address: 0x1018c880
// body: available
// range: 0x1018c880-0x1018ca70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __setmbcp_nolock
   
   Library: Visual Studio 2015 Release */

void __setmbcp_nolock(int param_1,__crt_multibyte_data *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  BOOL BVar5;
  BYTE *pBVar6;
  __crt_multibyte_data *p_Var7;
  wchar_t *pwVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  undefined2 *puVar12;
  uint uVar13;
  int local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  uVar3 = getSystemCP(param_1);
  if (uVar3 != 0) {
    uVar13 = 0;
    uVar4 = 0;
    local_20 = 0;
LAB_1018c8be:
    if (*(uint *)((int)&DAT_10202468 + uVar4) != uVar3) goto code_r0x1018c8ca;
    _memset(param_2 + 0x18,0,0x101);
    pbVar9 = (byte *)(local_20 * 0x30 + 0x10202478);
    do {
      bVar1 = *pbVar9;
      pbVar11 = pbVar9;
      while ((bVar1 != 0 && (bVar1 = pbVar11[1], bVar1 != 0))) {
        for (uVar4 = (uint)*pbVar11; (uVar4 <= bVar1 && (uVar4 < 0x100)); uVar4 = uVar4 + 1) {
          param_2[uVar4 + 0x19] =
               (__crt_multibyte_data)((byte)param_2[uVar4 + 0x19] | (&DAT_10202460)[uVar13]);
          bVar1 = pbVar11[1];
        }
        pbVar11 = pbVar11 + 2;
        bVar1 = *pbVar11;
      }
      uVar13 = uVar13 + 1;
      pbVar9 = pbVar9 + 8;
    } while (uVar13 < 4);
    *(uint *)(param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 8) = 1;
    pwVar8 = CPtoLocaleName(uVar3);
    *(wchar_t **)(param_2 + 0x21c) = pwVar8;
    p_Var7 = param_2 + 0xc;
    puVar12 = (undefined2 *)(local_20 * 0x30 + 0x1020246c);
    iVar10 = 6;
    do {
      uVar2 = *puVar12;
      puVar12 = puVar12 + 1;
      *(undefined2 *)p_Var7 = uVar2;
      p_Var7 = p_Var7 + 2;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    goto LAB_1018ca57;
  }
  setSBCS(param_2);
LAB_1018ca61:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x1018c8ca:
  local_20 = local_20 + 1;
  uVar4 = uVar4 + 0x30;
  if (0xef < uVar4) goto code_r0x1018c8d8;
  goto LAB_1018c8be;
code_r0x1018c8d8:
  if (((uVar3 != 65000) && (uVar3 != 0xfde9)) &&
     (BVar5 = IsValidCodePage(uVar3 & 0xffff), BVar5 != 0)) {
    BVar5 = GetCPInfo(uVar3,&local_1c);
    if (BVar5 == 0) {
      if (DAT_1020dc38 != 0) {
        setSBCS(param_2);
      }
    }
    else {
      _memset(param_2 + 0x18,0,0x101);
      *(uint *)(param_2 + 4) = uVar3;
      *(undefined4 *)(param_2 + 0x21c) = 0;
      if (local_1c.MaxCharSize < 2) {
        *(undefined4 *)(param_2 + 8) = 0;
      }
      else {
        pBVar6 = local_1c.LeadByte;
        while ((local_1c.LeadByte[0] != 0 && (bVar1 = pBVar6[1], bVar1 != 0))) {
          for (uVar3 = (uint)*pBVar6; uVar3 <= bVar1; uVar3 = uVar3 + 1) {
            param_2[uVar3 + 0x19] = (__crt_multibyte_data)((byte)param_2[uVar3 + 0x19] | 4);
          }
          pBVar6 = pBVar6 + 2;
          local_1c.LeadByte[0] = *pBVar6;
        }
        p_Var7 = param_2 + 0x1a;
        iVar10 = 0xfe;
        do {
          *p_Var7 = (__crt_multibyte_data)((byte)*p_Var7 | 8);
          p_Var7 = p_Var7 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        pwVar8 = CPtoLocaleName(*(int *)(param_2 + 4));
        *(wchar_t **)(param_2 + 0x21c) = pwVar8;
        *(undefined4 *)(param_2 + 8) = 1;
      }
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x14) = 0;
LAB_1018ca57:
      setSBUpLow(param_2);
    }
  }
  goto LAB_1018ca61;
}

