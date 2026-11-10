// rea decompile_all
// name: FUN_100380a0
// address: 0x100380a0
// body: available
// range: 0x100380a0-0x1003827c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_100380a0(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int local_48;
  byte *local_40;
  byte *local_3c;
  char *local_20 [4];
  uint local_10;
  int local_c;
  SIZE_T local_8;
  
  local_20[0] = s_NVIDIA_Subordinate_CA_1006321c;
  local_20[1] = s_VeriSign_Class_3_Code_Signing_20_1006325c;
  local_20[2] = (char *)0x0;
  local_20[3] = (char *)0x0;
  local_10 = 0;
  local_8 = (*DAT_10066bb8)(param_1,4,1,0,0,0);
  if (local_8 == 0) {
    GetLastError();
  }
  else {
    local_20[3] = LocalAlloc(0x40,local_8);
    if ((byte *)local_20[3] == (byte *)0x0) {
      GetLastError();
    }
    else {
      iVar2 = (*DAT_10066bb8)(param_1,4,1,0,local_20[3],local_8);
      if (iVar2 == 0) {
        GetLastError();
      }
      else {
        for (local_c = 0; local_20[local_c] != (char *)0x0; local_c = local_c + 1) {
          local_3c = (byte *)local_20[local_c];
          local_40 = (byte *)local_20[3];
          do {
            bVar1 = *local_40;
            bVar3 = bVar1 < *local_3c;
            if (bVar1 != *local_3c) {
LAB_100381b8:
              local_48 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
              goto LAB_100381c0;
            }
            if (bVar1 == 0) break;
            bVar1 = local_40[1];
            bVar3 = bVar1 < local_3c[1];
            if (bVar1 != local_3c[1]) goto LAB_100381b8;
            local_40 = local_40 + 2;
            local_3c = local_3c + 2;
          } while (bVar1 != 0);
          local_48 = 0;
LAB_100381c0:
          if (local_48 == 0) {
            LocalFree(local_20[3]);
            local_20[3] = (char *)0x0;
            local_8 = (*DAT_10066bb8)(param_1,4,0,0,0,0);
            if (local_8 == 0) {
              GetLastError();
            }
            else {
              local_20[3] = LocalAlloc(0x40,local_8);
              if ((byte *)local_20[3] == (byte *)0x0) {
                GetLastError();
              }
              else {
                iVar2 = (*DAT_10066bb8)(param_1,4,0,0,local_20[3],local_8);
                if (iVar2 == 0) {
                  GetLastError();
                }
                else {
                  iVar2 = __stricmp(local_20[3],s_NVIDIA_Corporation_10063284);
                  local_10 = (uint)(iVar2 == 0);
                }
              }
            }
            break;
          }
        }
      }
    }
  }
  LocalFree(local_20[3]);
  return local_10;
}

