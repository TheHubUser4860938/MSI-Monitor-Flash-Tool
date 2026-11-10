// rea decompile_all
// name: translate_ansi_or_utf8_nolock
// address: 0x1016528f
// body: available
// range: 0x1016528f-0x101653de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl translate_ansi_or_utf8_nolock(int,char * const,unsigned int,wchar_t * const,unsigned
   int)
   
   Library: Visual Studio 2015 Release */

int __cdecl
translate_ansi_or_utf8_nolock(int param_1,char *param_2,uint param_3,wchar_t *param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  int unaff_ESI;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  
  iVar3 = translate_text_mode_nolock<char>(param_1,param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  iVar6 = param_1 >> 6;
  iVar10 = (param_1 & 0x3fU) * 0x30;
  iVar2 = (&DAT_101de9c8)[iVar6];
  if (*(char *)(iVar2 + 0x29 + iVar10) != '\0') {
    pbVar8 = (byte *)(param_2 + iVar3 + -1);
    bVar1 = *pbVar8;
    if ((char)bVar1 < '\0') {
      uVar7 = 1;
      while ((((&DAT_101d4360)[bVar1] == '\0' && (uVar7 < 5)) && (param_2 <= pbVar8))) {
        pbVar8 = pbVar8 + -1;
        uVar7 = uVar7 + 1;
        bVar1 = *pbVar8;
      }
      if ((char)(&DAT_101d4360)[*pbVar8] == 0) {
        piVar4 = __errno();
        *piVar4 = 0x2a;
        return -1;
      }
      if ((int)(char)(&DAT_101d4360)[*pbVar8] + 1U == uVar7) {
        pbVar8 = pbVar8 + uVar7;
      }
      else if ((*(byte *)(iVar2 + 0x28 + iVar10) & 0x48) == 0) {
        __lseeki64_nolock(param_1,CONCAT44(1,(int)-uVar7 >> 0x1f),unaff_ESI);
      }
      else {
        pbVar9 = pbVar8 + 1;
        *(byte *)(iVar2 + 0x2a + iVar10) = *pbVar8;
        if (1 < uVar7) {
          bVar1 = *pbVar9;
          pbVar9 = pbVar8 + 2;
          *(byte *)((&DAT_101de9c8)[iVar6] + 0x2b + iVar10) = bVar1;
        }
        if (uVar7 == 3) {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          *(byte *)((&DAT_101de9c8)[iVar6] + 0x2c + iVar10) = bVar1;
        }
        pbVar8 = pbVar9 + -uVar7;
      }
    }
    else {
      pbVar8 = pbVar8 + 1;
    }
    iVar3 = MultiByteToWideChar(0xfde9,0,param_2,(int)pbVar8 - (int)param_2,param_4,param_5);
    if (iVar3 == 0) {
      DVar5 = GetLastError();
      ___acrt_errno_map_os_error(DVar5);
      return -1;
    }
    pbVar9 = (byte *)((&DAT_101de9c8)[iVar6] + 0x2d + iVar10);
    *pbVar9 = *pbVar9 ^ ((iVar3 != (int)pbVar8 - (int)param_2) * '\x02' ^
                        *(byte *)((&DAT_101de9c8)[iVar6] + 0x2d + iVar10)) & 2;
    return iVar3 * 2;
  }
  return iVar3;
}

