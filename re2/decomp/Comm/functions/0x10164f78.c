// rea decompile_all
// name: translate_text_mode_nolock<char>
// address: 0x10164f78
// body: available
// range: 0x10164f78-0x101650ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl translate_text_mode_nolock<char>(int,char * const,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __cdecl translate_text_mode_nolock<char>(int param_1,char *param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  BOOL BVar5;
  char *pcVar6;
  char *pcVar7;
  int unaff_EDI;
  int iVar8;
  DWORD local_1c;
  HANDLE local_18;
  int local_14;
  char *local_10;
  char *local_c;
  char local_5;
  
  local_14 = param_1 >> 6;
  iVar8 = (param_1 & 0x3fU) * 0x30;
  iVar4 = (&DAT_101de9c8)[local_14];
  local_18 = *(HANDLE *)(iVar4 + 0x18 + iVar8);
  if ((param_3 == 0) || (*param_2 != '\n')) {
    pbVar1 = (byte *)(iVar4 + 0x28 + iVar8);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  else {
    pbVar1 = (byte *)(iVar4 + 0x28 + iVar8);
    *pbVar1 = *pbVar1 | 4;
  }
  local_c = param_2 + param_3;
  pcVar7 = param_2;
  if (param_2 < local_c) {
    local_10 = param_2 + 1;
    pcVar6 = param_2;
    do {
      cVar2 = *pcVar6;
      if (cVar2 == '\x1a') {
        bVar3 = *(byte *)((&DAT_101de9c8)[local_14] + 0x28 + iVar8);
        if ((bVar3 & 0x40) == 0) {
          *(byte *)((&DAT_101de9c8)[local_14] + 0x28 + iVar8) = bVar3 | 2;
        }
        else {
          *pcVar7 = *pcVar6;
          pcVar7 = pcVar7 + 1;
        }
        break;
      }
      if (cVar2 == '\r') {
        if (local_c <= local_10) {
          local_10 = local_10 + 1;
          BVar5 = ReadFile(local_18,&local_5,1,&local_1c,(LPOVERLAPPED)0x0);
          if ((BVar5 == 0) || (local_1c == 0)) {
LAB_1016508e:
            *pcVar7 = '\r';
            pcVar7 = pcVar7 + 1;
          }
          else if ((*(byte *)((&DAT_101de9c8)[local_14] + 0x28 + iVar8) & 0x48) == 0) {
            if ((local_5 == '\n') && (pcVar7 == param_2)) {
              *pcVar7 = '\n';
              pcVar7 = pcVar7 + 1;
            }
            else {
              __lseeki64_nolock(param_1,0x1ffffffff,unaff_EDI);
              if (local_5 != '\n') goto LAB_1016508e;
            }
          }
          else if (local_5 == '\n') {
            *pcVar7 = '\n';
          }
          else {
            *pcVar7 = '\r';
            *(char *)((&DAT_101de9c8)[local_14] + 0x2a + iVar8) = local_5;
          }
          goto LAB_10165098;
        }
        if (*local_10 == '\n') {
          pcVar6 = pcVar6 + 2;
          *pcVar7 = '\n';
          local_10 = local_10 + 2;
          pcVar7 = pcVar7 + 1;
        }
        else {
          *pcVar7 = '\r';
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
          local_10 = local_10 + 1;
        }
      }
      else {
        *pcVar7 = cVar2;
        pcVar7 = pcVar7 + 1;
        local_10 = local_10 + 1;
LAB_10165098:
        pcVar6 = pcVar6 + 1;
      }
    } while (pcVar6 < local_c);
  }
  return (int)pcVar7 - (int)param_2;
}

