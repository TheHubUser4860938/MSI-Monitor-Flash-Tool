// rea decompile_all
// name: ScalerStop
// address: 0x10006cb0
// body: available
// range: 0x10006cb0-0x10006df1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int ScalerStop(void)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  byte local_5;
  
                    /* 0x6cb0  116  ScalerStop */
  iVar4 = 0;
  local_5 = 0;
  if (DAT_101def10 != (code *)0x0) {
    iVar3 = (*DAT_101def10)();
    if (iVar3 == 8) {
      if (DAT_101dee88 == (code *)0x0) {
        return 6;
      }
      iVar4 = (*DAT_101dee88)(0x44,1,0,0,&local_5);
      return iVar4;
    }
    if ((DAT_101def10 != (code *)0x0) && (iVar3 = (*DAT_101def10)(), iVar3 == 0x11)) {
      return 0;
    }
  }
  DAT_101def24 = 0;
  switch(DAT_101d49a4) {
  case 1:
  case 3:
  case 5:
    bVar2 = 1;
    uVar5 = 0x80;
    uVar1 = DAT_101d49aa;
    break;
  case 2:
    if (DAT_101deefc == (code *)0x0) {
      DAT_101def24 = 0;
      DAT_101d49a0 = 1;
      DAT_101def21 = 0;
      DAT_101def20 = 0;
      return 6;
    }
    if (DAT_101def2c == 1) {
      iVar4 = FUN_10003990(0x6f,1,&local_5);
    }
    else {
      iVar4 = (*DAT_101deefc)(DAT_101d49a9,0x6f,1,&local_5);
    }
    if (iVar4 != 0) {
      DAT_101d49a0 = 1;
      DAT_101def20 = 0;
      DAT_101def21 = 0;
      return iVar4;
    }
    bVar2 = local_5 | 0x80;
    uVar5 = 0x6f;
    uVar1 = DAT_101d49a9;
    break;
  case 4:
  case 6:
    goto switchD_10006d20_caseD_4;
  default:
    iVar4 = 8;
    goto LAB_10006dc9;
  }
  iVar4 = I2CWriteByte(uVar1,uVar5,bVar2);
  if (iVar4 != 0) {
LAB_10006dc9:
    DAT_101d49a0 = 1;
    DAT_101def21 = 0;
    DAT_101def20 = 0;
    DAT_101def24 = 0;
  }
switchD_10006d20_caseD_4:
  return iVar4;
}

