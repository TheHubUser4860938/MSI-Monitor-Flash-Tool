// rea decompile_all
// name: FUN_1001a050
// address: 0x1001a050
// body: available
// range: 0x1001a050-0x1001a6e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1001a050(void)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  
  if ((DAT_1024a3bc != 0) && (iVar1 = FUN_1001fb50(), iVar1 != 0)) {
    return iVar1;
  }
  if (DAT_1024a360 != 0) {
    if ((((in_ECX != 0x49) && (in_ECX != 0x47)) && (in_ECX != 0x48)) &&
       (((in_ECX != 0x41 && (in_ECX != 0x4e)) && (in_ECX != 0x50)))) {
      return 0xd81;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x6a0,0x74);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x1b,2);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x1c,0x30);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x1d,0x1c);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x1e,2);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x1f,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x20,0x1c);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x2c,2);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x2d,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x2e,0x1c);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x843,6);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x844,0x50);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x84c,3);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x84d,0xb);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x84e,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0xed,0x8a);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0xee,4);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0xe9,4);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (in_ECX == 0x49) {
      iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x100c,0x13);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x101a,0x17);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x101b,0x16);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x1002,0x14);
      return iVar1;
    }
    if (in_ECX == 0x47) {
      iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x102e,3);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x1072,0xf);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x107c,0xf);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x107b,0xf);
      return iVar1;
    }
    if (((in_ECX != 0x48) && (in_ECX != 0x4e)) && (in_ECX != 0x50)) {
      return 0;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x107a,8);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x107b,8);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x107c,6);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x107d,8);
    return iVar1;
  }
  if (in_ECX == 0x45) {
    iVar1 = FUN_1001fae0();
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else if (in_ECX == 4) goto LAB_1001a41f;
  iVar1 = (**(code **)(*DAT_10249d10 + 0x234))();
  if (iVar1 == 0) {
    return 0;
  }
LAB_1001a41f:
  iVar1 = FUN_1001a900();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x62,6);
    if (in_ECX == 0x34) {
      if ((((iVar1 == 0) && (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(99,0x50), iVar1 == 0)) &&
          ((iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x6a,3), iVar1 == 0 &&
           (((iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x6b,0xb), iVar1 == 0 &&
             (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x6c,0), iVar1 == 0)) &&
            (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0xe9,0x81), iVar1 == 0)))))) &&
         (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0xed,0xa0), iVar1 == 0)) {
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0xee,4);
        return iVar1;
      }
    }
    else if ((((iVar1 == 0) && (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(99,0x50), iVar1 == 0))
             && (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x6a,3), iVar1 == 0)) &&
            (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x6b,0xb), iVar1 == 0)) {
      if (in_ECX == 0x45) {
        uVar2 = 0x20;
      }
      else {
        uVar2 = 0;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x6c,uVar2);
      if (iVar1 == 0) {
        if (((in_ECX == 0x20) || (in_ECX == 0x21)) ||
           (((in_ECX == 0x22 || ((in_ECX == 0x23 || (in_ECX == 0x24)))) ||
            ((in_ECX == 0x25 ||
             ((((in_ECX == 0x26 || (in_ECX == 0x27)) || (in_ECX == 0x28)) ||
              ((in_ECX == 0x29 || (in_ECX == 0x2b)))))))))) {
          iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0xed,0x84);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0xee,4);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        else if (in_ECX == 4) {
          iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0xec,100);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0xed,0x80);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0xee,0x22);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        else {
          iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0xed,0x84);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0xee,4);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0xe9,0x81);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x6a0,0x74);
      }
    }
  }
  return iVar1;
}

