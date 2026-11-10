// rea decompile_all
// name: FUN_10037860
// address: 0x10037860
// body: available
// range: 0x10037860-0x1003798a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


short * __cdecl FUN_10037860(undefined4 param_1,short *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short local_21c [264];
  int local_c;
  short *local_8;
  
  local_8 = (short *)0x0;
  if (param_2 != (short *)0x0) {
    psVar4 = local_21c;
    for (iVar3 = 0x82; iVar3 != 0; iVar3 = iVar3 + -1) {
      psVar4[0] = 0;
      psVar4[1] = 0;
      psVar4 = psVar4 + 2;
    }
    *psVar4 = 0;
    if ((DAT_10066b88 == (HMODULE)0x0) &&
       (DAT_10066b88 = FUN_10036a00(u_Shell32_dll_10063070,0), DAT_10066b88 != (HMODULE)0x0)) {
      DAT_10066b8c = GetProcAddress(DAT_10066b88,s_SHGetFolderPathW_10063088);
    }
    if (DAT_10066b8c == (FARPROC)0x0) {
      local_8 = (short *)0x0;
    }
    else {
      local_c = (*DAT_10066b8c)(0,param_1,0,0,local_21c);
      if (local_c == 0) {
        iVar3 = FUN_10047adf(local_21c);
        iVar2 = FUN_10047adf(param_2);
        uVar1 = iVar3 + 2 + iVar2;
        local_8 = LocalAlloc(0x40,uVar1 * 2);
        if (local_8 == (short *)0x0) {
          local_8 = (short *)0x0;
        }
        else {
          FUN_10038970(local_8,uVar1,local_21c);
          FUN_100387f0(local_8,uVar1,(short *)&DAT_1006309c);
          FUN_100387f0(local_8,uVar1,param_2);
        }
      }
    }
  }
  return local_8;
}

