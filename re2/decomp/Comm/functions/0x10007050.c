// rea decompile_all
// name: AutoDetectSlaveAddr
// address: 0x10007050
// body: available
// range: 0x10007050-0x100071b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 AutoDetectSlaveAddr(void)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined1 local_5;
  
                    /* 0x7050  14  AutoDetectSlaveAddr */
  uVar5 = 0;
  local_5 = 0;
  if ((DAT_101def10 == (code *)0x0) || (iVar2 = (*DAT_101def10)(), iVar2 != 8)) {
    if (DAT_101deefc == (code *)0x0) {
      return 6;
    }
    if (DAT_101d49a0 != 0) {
      iVar2 = (*DAT_101def10)();
      if (iVar2 == 4) {
        uVar5 = (*DAT_101deea8)();
        (*DAT_101deeac)(1);
      }
      uVar4 = 0;
      pcVar3 = DAT_101deefc;
      do {
        if (pcVar3 != (code *)0x0) {
          if (DAT_101def2c == 1) {
            iVar2 = FUN_10003990();
          }
          else {
            iVar2 = (*pcVar3)((&DAT_101b5db4)[(uint)uVar4 * 3],0x23,1,&local_5);
          }
          pcVar3 = DAT_101deefc;
          if (iVar2 == 0) {
            iVar2 = (uint)uVar4 * 3;
            DAT_101d49aa = (&DAT_101b5db6)[iVar2];
            DAT_101d49a9 = (&DAT_101b5db4)[iVar2];
            DAT_101d49a8 = (&DAT_101b5db5)[iVar2];
            if (uVar4 < 6) {
              cVar1 = DAT_101d49a9;
              if (DAT_101def20 == DAT_101d49a9) {
                DAT_101def21 = DAT_101def21 + 1;
                cVar1 = DAT_101def20;
              }
              DAT_101def20 = cVar1;
              DAT_101d49a0 = DAT_101d49a0 & -(uint)(DAT_101def21 < 2);
              iVar2 = (*DAT_101def10)();
              if (iVar2 == 4) {
                (*DAT_101deeac)(uVar5);
              }
              return 0;
            }
            goto LAB_1000710a;
          }
        }
        uVar4 = uVar4 + 1;
        if (5 < uVar4) {
LAB_1000710a:
          DAT_101d49a0 = 1;
          DAT_101def21 = 0;
          DAT_101def20 = 0;
          iVar2 = (*DAT_101def10)();
          if (iVar2 == 4) {
            (*DAT_101deeac)(uVar5);
          }
          return 0xc;
        }
      } while( true );
    }
  }
  return 0;
}

