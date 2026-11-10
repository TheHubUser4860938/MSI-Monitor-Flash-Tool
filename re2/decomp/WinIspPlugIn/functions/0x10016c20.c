// rea decompile_all
// name: FUN_10016c20
// address: 0x10016c20
// body: available
// range: 0x10016c20-0x10016e96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10016c20(void)

{
  byte in_CL;
  byte bVar1;
  byte in_DL;
  
  if (in_CL == 0xff) {
    if ((in_DL & 0xf0) == 0x70) {
      return 0x29;
    }
    if ((in_DL & 0xf0) == 0x90) {
      return 0x2a;
    }
    return 0;
  }
  if (in_CL == 0xd3) {
    if (in_DL == 0x10) {
      return 0x41;
    }
    if (in_DL == 0) {
      return 0x3f;
    }
  }
  else if (in_CL == 0) {
    if ((in_DL == 1) || (in_DL == 2)) {
      return 0x30;
    }
  }
  else if (in_CL == 0xd4) {
    if (in_DL == 0) {
      return 0x48;
    }
  }
  else if (in_CL == 0x14) {
    if (in_DL == 0x30) {
      return 0x45;
    }
  }
  else if (in_CL == 0xc0) {
    if (in_DL == 1) {
      return 0x39;
    }
  }
  else if ((in_CL == 0x13) && (in_DL == 0x10)) {
    return 0x3e;
  }
  if ((in_CL & 0xc0) != 0xc0) {
    if ((in_CL & 0xc0) != 0) {
      return 0;
    }
    bVar1 = in_CL & 0x3f;
    if (bVar1 == 0xe) {
      if ((in_DL & 0xf0) == 0) {
        return 4;
      }
    }
    else {
      if (bVar1 != 0x10) goto LAB_10016e11;
      if ((in_DL & 0xf0) == 0) {
        return 0x34;
      }
    }
    if (bVar1 == 0x10) {
      if ((in_DL & 0xf0) == 0x10) {
        return 0x36;
      }
      if ((in_DL & 0xf0) == 0x20) {
        return 0x38;
      }
    }
LAB_10016e11:
    if (bVar1 == 0x12) {
      if ((in_DL & 0xf0) == 0) {
        return 0x3b;
      }
    }
    else if ((bVar1 == 0x13) && ((in_DL & 0xf0) == 0x30)) {
      return 0x42;
    }
    if (bVar1 == 0x14) {
      if ((in_DL & 0xf0) == 0) {
        return 0x44;
      }
      if ((in_DL & 0xf0) == 0x40) {
        return 0x46;
      }
    }
    if (bVar1 == 0x15) {
      if ((in_DL & 0xf0) == 0) {
        return 0x4a;
      }
    }
    else if ((bVar1 == 0x16) && ((in_DL & 0xf0) == 0x20)) {
      return 0x4d;
    }
    if (bVar1 != 0x17) {
      return 0;
    }
    if ((in_DL & 0xf0) != 0) {
      if ((in_DL & 0xf0) != 0x10) {
        return 0;
      }
      return 0x51;
    }
    return 0x4f;
  }
  bVar1 = in_CL & 0x3f;
  if (bVar1 == 0xe) {
    if ((in_DL & 0xf0) == 0) {
      return 0x2c;
    }
    if ((in_DL & 0xf0) == 0x10) {
      return 0x2d;
    }
    if ((in_DL & 0xf0) == 0x20) {
      return 0x2f;
    }
LAB_10016d18:
    if (bVar1 != 0xf) goto LAB_10016d2c;
    if ((in_DL & 0xf0) == 0x10) {
      return 0x32;
    }
LAB_10016d3d:
    if (bVar1 != 0x10) goto LAB_10016d51;
    if ((in_DL & 0xf0) == 0x10) {
      return 0x37;
    }
LAB_10016d62:
    if (bVar1 == 0x12) {
      if ((in_DL & 0xf0) == 0x10) {
        return 0x3c;
      }
      goto LAB_10016d8a;
    }
  }
  else {
    if (bVar1 == 0xf) {
      if ((in_DL & 0xf0) == 0x20) {
        return 0x31;
      }
      goto LAB_10016d18;
    }
LAB_10016d2c:
    if (bVar1 == 0x10) {
      if ((in_DL & 0xf0) == 0) {
        return 0x33;
      }
      goto LAB_10016d3d;
    }
LAB_10016d51:
    if (bVar1 == 0x12) {
      if ((in_DL & 0xf0) == 0) {
        return 0x3a;
      }
      goto LAB_10016d62;
    }
  }
  if ((bVar1 == 0x14) && ((in_DL & 0xf0) == 0x10)) {
    return 0x47;
  }
LAB_10016d8a:
  if (bVar1 == 0x15) {
    if ((in_DL & 0xf0) == 0) {
      return 0x49;
    }
  }
  else if ((bVar1 == 0x16) && ((in_DL & 0xf0) == 0)) {
    return 0x4e;
  }
  if ((bVar1 == 0x17) && ((in_DL & 0xf0) == 0)) {
    return 0x50;
  }
  return 0;
}

