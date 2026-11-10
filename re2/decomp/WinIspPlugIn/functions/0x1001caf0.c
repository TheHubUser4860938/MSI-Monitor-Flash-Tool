// rea decompile_all
// name: FUN_1001caf0
// address: 0x1001caf0
// body: available
// range: 0x1001caf0-0x1001d553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1001caf0(void)

{
  int iVar1;
  uint in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined8 *in_EDX;
  undefined4 uVar2;
  undefined4 local_8;
  
  local_8 = in_ECX & 0xffff0000;
  if (in_ECX == 0) {
    iVar1 = *DAT_10249d10;
    if (DAT_1024a360 == 0) {
      if (DAT_1024a3bc == 0) {
        iVar1 = (**(code **)(iVar1 + 0xf0))(0x60,0x46);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x61,0x9f);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x60,0x47);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1001c4c0(0,20000);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))(0x67);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))(0x68,(int)in_EDX + 1);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))(0x69,(int)in_EDX + 2);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x60,0x5a);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x61,0xab);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(100,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x65,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x66,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x60,0x5b);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1001c4c0(0,20000);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = 0x67;
      }
      else {
        iVar1 = (**(code **)(iVar1 + 0xf0))(0x83);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x84,0x9f);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x83,0x47);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1001c4c0(0,20000);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))(0x8a);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))(0x8b,(int)in_EDX + 1);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))(0x8c,(int)in_EDX + 2);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x83,0x5a);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x84,0xab);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x87,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x88,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x89,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x83,0x5b);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1001c4c0(0,20000);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = 0x8a;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))(uVar2,(int)in_EDX + 3);
      if (iVar1 == 0) {
        return 0;
      }
      return iVar1;
    }
    iVar1 = (**(code **)(iVar1 + 0xc4))(0x841);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x842,0x9f);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x841,0x47);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_1001c450(0,extraout_ECX);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(0x849);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(0x84a,(int)in_EDX + 1);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(0x84b,(int)in_EDX + 2);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x841,0x5a);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x842,0xab);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x846,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x847,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x848,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x841,0x5b);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_1001c450(0,extraout_ECX_00);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar2 = 0x849;
  }
  else {
    if (in_ECX != 1) {
      *in_EDX = 0;
      return 0;
    }
    iVar1 = *DAT_10249d10;
    if (DAT_1024a360 == 0) {
      if (DAT_1024a3bc == 0) {
        iVar1 = (**(code **)(iVar1 + 0xf0))(0x60,0x46);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x61,0x9f);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x60,0x47);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1001c4c0(0,20000);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))(0x67);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))(0x68,(int)in_EDX + 1);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))(0x69,(int)in_EDX + 2);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x60,0x5c);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x61,0x90);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(100,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x65,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x66,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x60,0x5d);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1001c4c0(0,20000);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))(0x67,&local_8);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = 0x68;
      }
      else {
        iVar1 = (**(code **)(iVar1 + 0xf0))(0x83);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x84,0x9f);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x83,0x47);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1001c4c0(0,600);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))(0x8a);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))(0x8b,(int)in_EDX + 1);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))(0x8c,(int)in_EDX + 2);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x83,0x5c);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x84,0x90);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x87,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x88,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x89,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x83,0x5d);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1001c4c0(0,600);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))(0x8a,&local_8);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = 0x8b;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))(uVar2,(int)&local_8 + 1);
      if (iVar1 == 0) {
        *(undefined1 *)((int)in_EDX + 3) = local_8._1_1_;
        return 0;
      }
      return iVar1;
    }
    iVar1 = (**(code **)(iVar1 + 0xc4))(0x841);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x842,0x9f);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x841,0x47);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_1001c450(0,extraout_ECX_01);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(0x849);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(0x84a,(int)in_EDX + 1);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(0x84b,(int)in_EDX + 2);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x841,0x5c);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x842,0x90);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x846,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x847,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x848,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x841,0x5d);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_1001c450(0,extraout_ECX_02);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(0x849,&local_8);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar2 = 0x84a;
  }
  iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(uVar2,(int)in_EDX + 3);
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1;
}

