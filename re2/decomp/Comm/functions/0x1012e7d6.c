// rea decompile_all
// name: Catch@1012e7d6
// address: 0x1012e7d6
// body: available
// range: 0x1012e7d6-0x1012e8dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void Catch_1012e7d6(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  uint uVar5;
  uint unaff_EDI;
  
  iVar1 = *(int *)(unaff_EBP + 0x14);
  uVar5 = 0;
  if (*(int *)(iVar1 + 8) != 0) {
    unaff_EDI = *(uint *)(unaff_EBP + -0x2c);
    do {
      Ordinal_9(unaff_EDI);
      uVar5 = uVar5 + 1;
      unaff_EDI = unaff_EDI + 0x10;
    } while (uVar5 < *(uint *)(iVar1 + 8));
  }
  __CxxThrowException_8(0,0);
  FUN_1012e930();
  puVar2 = *(undefined4 **)(unaff_EBP + 0x10);
  uVar5 = unaff_EDI & 0xffff;
  if (puVar2 == (undefined4 *)0x0) {
    if (uVar5 == 8) {
      Ordinal_6(*(undefined4 *)(unaff_EBP + -0x1c));
    }
    else {
      if (uVar5 != 9) {
        if (uVar5 == 0xc) {
          Ordinal_9(unaff_EBP + -0x44);
          goto switchD_1012e81e_caseD_e;
        }
        if (uVar5 != 0xd) goto switchD_1012e81e_caseD_e;
      }
      piVar3 = *(int **)(unaff_EBP + -0x1c);
      if (piVar3 != (int *)0x0) {
        pcVar4 = *(code **)(*piVar3 + 8);
        guard_check_icall(piVar3);
        (*pcVar4)();
      }
    }
  }
  else {
    *(short *)puVar2 = (short)unaff_EDI;
    switch(uVar5) {
    case 2:
    case 0x12:
      *(short *)(puVar2 + 2) = (short)*(undefined4 *)(unaff_EBP + -0x1c);
      break;
    case 3:
    case 8:
    case 9:
    case 10:
    case 0xd:
    case 0x13:
      puVar2[2] = *(undefined4 *)(unaff_EBP + -0x1c);
      break;
    case 4:
      puVar2[2] = *(undefined4 *)(unaff_EBP + -0x44);
      break;
    case 5:
    case 7:
      *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(unaff_EBP + -0x44);
      break;
    case 6:
    case 0x14:
    case 0x15:
      puVar2[2] = *(undefined4 *)(unaff_EBP + -0x44);
      puVar2[3] = *(undefined4 *)(unaff_EBP + -0x40);
      break;
    case 0xb:
      *(ushort *)(puVar2 + 2) = ((short)*(undefined4 *)(unaff_EBP + -0x1c) == 0) - 1;
      break;
    case 0xc:
      *puVar2 = *(undefined4 *)(unaff_EBP + -0x44);
      puVar2[1] = *(undefined4 *)(unaff_EBP + -0x40);
      puVar2[2] = *(undefined4 *)(unaff_EBP + -0x3c);
      puVar2[3] = *(undefined4 *)(unaff_EBP + -0x38);
      break;
    case 0x10:
    case 0x11:
      *(char *)(puVar2 + 2) = (char)*(undefined4 *)(unaff_EBP + -0x1c);
    }
  }
switchD_1012e81e_caseD_e:
  CArray<CVariantBoolPair,CVariantBoolPair_const&>::
  ~CArray<CVariantBoolPair,CVariantBoolPair_const&>
            ((CArray<CVariantBoolPair,CVariantBoolPair_const&> *)(unaff_EBP + -0x5c));
  guard_check_icall();
  *(undefined4 *)(unaff_EBP + -0x74) = 0x1012e8db;
  FUN_1014910f();
  return;
}

