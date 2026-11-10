// rea decompile_all
// name: AutoEnterIspMode
// address: 0x1000bfe0
// body: available
// range: 0x1000bfe0-0x1000c146 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 AutoEnterIspMode(ushort param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  ushort uVar4;
  ushort uVar5;
  byte local_5;
  
                    /* 0xbfe0  15  AutoEnterIspMode */
  uVar4 = 0;
  local_5 = 0;
  DAT_101def24 = 0;
  if ((DAT_101def10 == (code *)0x0) || (iVar1 = (*DAT_101def10)(), iVar1 != 8)) {
    if ((DAT_101def00 != (code *)0x0) && (DAT_101deefc != (code *)0x0)) {
      pcVar3 = DAT_101def00;
      if (param_1 != 0) {
        do {
          uVar5 = 0;
          do {
            local_5 = 0x81;
            if (pcVar3 != (code *)0x0) {
              if (DAT_101def2c == 1) {
                iVar1 = FUN_10003c80();
              }
              else {
                iVar1 = (*pcVar3)((&DAT_101b5db4)[(uint)uVar5 * 3],0x6f,1,&local_5);
              }
              pcVar3 = DAT_101def00;
              if (iVar1 == 0) {
                local_5 = 0;
                if (DAT_101deefc != (code *)0x0) {
                  if (DAT_101def2c == 1) {
                    iVar1 = FUN_10003990(0x6f,1,&local_5);
                  }
                  else {
                    iVar1 = (*DAT_101deefc)((&DAT_101b5db4)[(uint)uVar5 * 3],0x6f,1,&local_5);
                  }
                  pcVar3 = DAT_101def00;
                  if ((iVar1 == 0) && ((local_5 & 0x80) != 0)) {
                    iVar1 = (uint)uVar5 * 3;
                    DAT_101d49aa = (&DAT_101b5db6)[iVar1];
                    DAT_101d49a9 = (&DAT_101b5db4)[iVar1];
                    DAT_101d49a8 = (&DAT_101b5db5)[iVar1];
                    return 0;
                  }
                }
              }
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < 6);
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_1);
      }
      return 10;
    }
  }
  else if (DAT_101dee88 != (code *)0x0) {
    uVar2 = (*DAT_101dee88)(0x44,1,0,0,&local_5);
    return uVar2;
  }
  return 6;
}

