// rea decompile_all
// name: FUN_10008170
// address: 0x10008170
// body: available
// range: 0x10008170-0x1000839a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008170(int param_1,undefined4 *param_2)

{
  if (param_1 < 0x2001) {
    if (param_1 == 0x2000) {
      *param_2 = 0xe;
      return;
    }
    if (param_1 < 0x41) {
      if (param_1 == 0x40) {
        *param_2 = 7;
        return;
      }
      switch(param_1) {
      case 1:
        *param_2 = 1;
        return;
      case 2:
        *param_2 = 2;
        return;
      case 4:
        *param_2 = 3;
        return;
      case 8:
        *param_2 = 4;
        return;
      case 0x10:
        *param_2 = 5;
        return;
      case 0x20:
        *param_2 = 6;
        return;
      }
    }
    else if (param_1 < 0x401) {
      if (param_1 == 0x400) {
        *param_2 = 0xb;
        return;
      }
      if (param_1 == 0x80) {
        *param_2 = 8;
        return;
      }
      if (param_1 == 0x100) {
        *param_2 = 9;
        return;
      }
      if (param_1 == 0x200) {
        *param_2 = 10;
        return;
      }
    }
    else {
      if (param_1 == 0x800) {
        *param_2 = 0xc;
        return;
      }
      if (param_1 == 0x1000) {
        *param_2 = 0xd;
        return;
      }
    }
  }
  else if (param_1 < 0x200001) {
    if (param_1 == 0x200000) {
      *param_2 = 0x16;
      return;
    }
    if (param_1 < 0x40001) {
      if (param_1 == 0x40000) {
        *param_2 = 0x13;
        return;
      }
      if (param_1 == 0x4000) {
        *param_2 = 0xf;
        return;
      }
      if (param_1 == 0x8000) {
        *param_2 = 0x10;
        return;
      }
      if (param_1 == 0x20000) {
        *param_2 = 0x12;
        return;
      }
    }
    else {
      if (param_1 == 0x80000) {
        *param_2 = 0x14;
        return;
      }
      if (param_1 == 0x100000) {
        *param_2 = 0x15;
        return;
      }
    }
  }
  else if (param_1 < 0x1000001) {
    if (param_1 == 0x1000000) {
      *param_2 = 0x19;
      return;
    }
    if (param_1 == 0x400000) {
      *param_2 = 0x17;
      return;
    }
    if (param_1 == 0x800000) {
      *param_2 = 0x18;
      return;
    }
  }
  else {
    if (param_1 == 0x2000000) {
      *param_2 = 0x1a;
      return;
    }
    if (param_1 == 0x4000000) {
      *param_2 = 0x1b;
      return;
    }
  }
  *param_2 = 0;
  return;
}

