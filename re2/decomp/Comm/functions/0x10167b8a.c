// rea decompile_all
// name: FUN_10167b8a
// address: 0x10167b8a
// body: available
// range: 0x10167b8a-0x10167cb4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10167b8a(int param_1,int param_2,int param_3,int param_4,undefined8 *param_5)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  
  dVar1 = ABS((double)CONCAT44(param_2,param_1));
  if (param_4 == 0x7ff00000) {
    if (param_3 != 0) goto LAB_10167c1e;
    uVar2 = 0x3ff0000000000000;
    if (dVar1 <= 1.0) {
      if (dVar1 < 1.0) {
        uVar2 = 0;
      }
      goto LAB_10167caf;
    }
  }
  else {
    if ((param_4 == -0x100000) && (param_3 == 0)) {
      if (dVar1 <= 1.0) {
        uVar2 = 0x3ff0000000000000;
        if (dVar1 < 1.0) {
          uVar2 = 0x7ff0000000000000;
        }
      }
      else {
        uVar2 = 0;
      }
      goto LAB_10167caf;
    }
LAB_10167c1e:
    if (param_2 != 0x7ff00000) {
      if (param_2 != -0x100000) {
        return 0;
      }
      if (param_1 != 0) {
        return 0;
      }
      iVar3 = FUN_10167b20(CONCAT44(param_4,param_3));
      uVar2 = 0;
      if ((double)CONCAT44(param_4,param_3) <= 0.0) {
        if (0.0 <= (double)CONCAT44(param_4,param_3)) {
          uVar2 = 0x3ff0000000000000;
        }
        else if (iVar3 == 1) {
          uVar2 = 0x8000000000000000;
        }
      }
      else {
        uVar2 = 0x7ff0000000000000;
        if (iVar3 == 1) {
          uVar2 = 0xfff0000000000000;
        }
      }
      goto LAB_10167caf;
    }
    if (param_1 != 0) {
      return 0;
    }
    if ((double)CONCAT44(param_4,param_3) <= 0.0) {
      uVar2 = 0;
      if (0.0 <= (double)CONCAT44(param_4,param_3)) {
        uVar2 = 0x3ff0000000000000;
      }
      goto LAB_10167caf;
    }
  }
  uVar2 = 0x7ff0000000000000;
LAB_10167caf:
  *param_5 = uVar2;
  return 0;
}

