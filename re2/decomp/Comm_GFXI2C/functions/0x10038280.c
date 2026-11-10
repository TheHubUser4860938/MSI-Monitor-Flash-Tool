// rea decompile_all
// name: FUN_10038280
// address: 0x10038280
// body: available
// range: 0x10038280-0x100383dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_10038280(int param_1,int *param_2)

{
  int iVar1;
  HLOCAL pvVar2;
  int local_14;
  uint local_10;
  SIZE_T local_c;
  int local_8;
  
  local_8 = 0;
  local_14 = 0;
  *param_2 = 0;
  local_10 = 0;
  do {
    if ((*(uint *)(param_1 + 0x3c) <= local_10) || (local_14 != 0)) goto LAB_100383c6;
    iVar1 = lstrcmpA(*(LPCSTR *)(*(int *)(param_1 + 0x40) + local_10 * 0xc),
                     s_1_2_840_113549_1_9_6_10063298);
    if (iVar1 == 0) {
      iVar1 = (*DAT_10066bbc)(0x10001,500,
                              *(undefined4 *)
                               (*(int *)(*(int *)(param_1 + 0x40) + 8 + local_10 * 0xc) + 4),
                              **(undefined4 **)(*(int *)(param_1 + 0x40) + 8 + local_10 * 0xc),0,0,
                              &local_c);
      if (iVar1 == 0) {
        GetLastError();
LAB_100383c6:
        if (local_8 != 0) {
          (*DAT_10066ba8)(local_8);
        }
        return local_14;
      }
      pvVar2 = LocalAlloc(0x40,local_c);
      *param_2 = (int)pvVar2;
      if (*param_2 == 0) {
        GetLastError();
        goto LAB_100383c6;
      }
      iVar1 = (*DAT_10066bbc)(0x10001,500,
                              *(undefined4 *)
                               (*(int *)(*(int *)(param_1 + 0x40) + 8 + local_10 * 0xc) + 4),
                              **(undefined4 **)(*(int *)(param_1 + 0x40) + 8 + local_10 * 0xc),0,
                              *param_2,&local_c);
      if (iVar1 == 0) {
        GetLastError();
        goto LAB_100383c6;
      }
      local_14 = 1;
    }
    local_10 = local_10 + 1;
  } while( true );
}

