// rea decompile_all
// name: FUN_1015ea07
// address: 0x1015ea07
// body: available
// range: 0x1015ea07-0x1015eceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1015eceb with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1015ea07(int param_1,int param_2,wchar_t *param_3)

{
  short *psVar1;
  short sVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  wchar_t *pwVar6;
  size_t sVar7;
  int iVar8;
  ushort *puVar9;
  uint uVar10;
  int iVar11;
  short *psVar12;
  ushort *puVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined **ppuVar16;
  bool bVar17;
  int local_1c8;
  int local_1c0;
  undefined1 local_1bc [172];
  ushort local_110 [132];
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if (param_2 != 0) {
    if (param_3 != (wchar_t *)0x0) {
      FUN_1015ecec(param_1,param_2,param_3);
    }
    goto LAB_1015ecc9;
  }
  bVar5 = true;
  iVar15 = 0;
  local_1c0 = 0;
  if (param_3 != (wchar_t *)0x0) {
    if (((*param_3 == L'L') && (param_3[1] == L'C')) && (param_3[2] == L'_')) {
      do {
        pwVar6 = _wcspbrk(param_3,L"=;");
        if (((pwVar6 == (wchar_t *)0x0) || (sVar7 = (int)pwVar6 - (int)param_3 >> 1, sVar7 == 0)) ||
           (*pwVar6 == L';')) goto LAB_1015ecc9;
        ppuVar16 = &PTR_u_LC_COLLATE_101adaa4;
        local_1c8 = 1;
        do {
          iVar15 = _wcsncmp((wchar_t *)*ppuVar16,param_3,sVar7);
          if (iVar15 == 0) {
            psVar12 = (short *)*ppuVar16;
            psVar1 = psVar12 + 1;
            do {
              sVar2 = *psVar12;
              psVar12 = psVar12 + 1;
            } while (sVar2 != 0);
            if (sVar7 == (int)psVar12 - (int)psVar1 >> 1) break;
          }
          local_1c8 = local_1c8 + 1;
          ppuVar16 = ppuVar16 + 3;
        } while ((int)ppuVar16 < 0x101adad5);
        pwVar6 = pwVar6 + 1;
        sVar7 = _wcscspn(pwVar6,L";");
        if ((sVar7 == 0) && (*pwVar6 != L';')) goto LAB_1015ecc9;
        if (local_1c8 < 6) {
          iVar15 = FUN_10153786(local_110,0x83,pwVar6,sVar7);
          if (iVar15 != 0) {
LAB_1015ecdf:
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (0x105 < sVar7 * 2) {
            ___report_rangecheckfailure();
            goto LAB_1015ecdf;
          }
          local_110[sVar7] = 0;
          iVar15 = FUN_1015ecec(param_1,local_1c8,local_110);
          if (iVar15 != 0) {
            local_1c0 = local_1c0 + 1;
          }
        }
      } while ((pwVar6[sVar7] != L'\0') && (param_3 = pwVar6 + sVar7 + 1, *param_3 != L'\0'));
    }
    else {
      iVar8 = FUN_1015e436(param_3,local_110,0x83,local_1bc,0x55,0);
      if (iVar8 == 0) goto LAB_1015ecc9;
      puVar14 = (undefined4 *)(param_1 + 0x20);
      iVar8 = 0;
      do {
        if (iVar8 != 0) {
          puVar13 = (ushort *)*puVar14;
          puVar9 = local_110;
          do {
            bVar17 = *puVar9 < *puVar13;
            if (*puVar9 != *puVar13) {
LAB_1015ec65:
              uVar10 = -(uint)bVar17 | 1;
              goto LAB_1015ec6c;
            }
            if (*puVar9 == 0) break;
            uVar3 = puVar9[1];
            bVar17 = uVar3 < puVar13[1];
            if (uVar3 != puVar13[1]) goto LAB_1015ec65;
            puVar9 = puVar9 + 2;
            puVar13 = puVar13 + 2;
          } while (uVar3 != 0);
          uVar10 = 0;
LAB_1015ec6c:
          if (uVar10 == 0) {
            iVar15 = iVar15 + 1;
          }
          else {
            iVar11 = FUN_1015ecec(param_1,iVar8,local_110);
            if (iVar11 == 0) {
              bVar5 = false;
            }
            else {
              iVar15 = iVar15 + 1;
            }
          }
        }
        iVar8 = iVar8 + 1;
        puVar14 = puVar14 + 4;
      } while (iVar8 < 6);
      local_1c0 = iVar15;
      if (bVar5) goto LAB_1015ecc2;
    }
    if (local_1c0 == 0) goto LAB_1015ecc9;
  }
LAB_1015ecc2:
  FUN_1015e86e(param_1);
LAB_1015ecc9:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

