// rea decompile_all
// name: __control87
// address: 0x5968a5
// body: available
// range: 0x5968a5-0x596ba6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2015 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort in_FPUControlWord;
  
  uVar4 = 0;
  if ((in_FPUControlWord & 1) != 0) {
    uVar4 = 0x10;
  }
  if ((in_FPUControlWord & 4) != 0) {
    uVar4 = uVar4 | 8;
  }
  if ((in_FPUControlWord & 8) != 0) {
    uVar4 = uVar4 | 4;
  }
  if ((in_FPUControlWord & 0x10) != 0) {
    uVar4 = uVar4 | 2;
  }
  if ((in_FPUControlWord & 0x20) != 0) {
    uVar4 = uVar4 | 1;
  }
  if ((in_FPUControlWord & 2) != 0) {
    uVar4 = uVar4 | 0x80000;
  }
  uVar1 = in_FPUControlWord & 0xc00;
  if ((in_FPUControlWord & 0xc00) != 0) {
    if (uVar1 == 0x400) {
      uVar4 = uVar4 | 0x100;
    }
    else if (uVar1 == 0x800) {
      uVar4 = uVar4 | 0x200;
    }
    else if (uVar1 == 0xc00) {
      uVar4 = uVar4 | 0x300;
    }
  }
  if ((in_FPUControlWord & 0x300) == 0) {
    uVar4 = uVar4 | 0x20000;
  }
  else if ((in_FPUControlWord & 0x300) == 0x200) {
    uVar4 = uVar4 | 0x10000;
  }
  if ((in_FPUControlWord & 0x1000) != 0) {
    uVar4 = uVar4 | 0x40000;
  }
  uVar6 = ~_Mask & uVar4 | _NewValue & _Mask;
  if (uVar6 != uVar4) {
    uVar1 = __hw_cw(uVar6);
    uVar6 = 0;
    if ((uVar1 & 1) != 0) {
      uVar6 = 0x10;
    }
    if ((uVar1 & 4) != 0) {
      uVar6 = uVar6 | 8;
    }
    if ((uVar1 & 8) != 0) {
      uVar6 = uVar6 | 4;
    }
    if ((uVar1 & 0x10) != 0) {
      uVar6 = uVar6 | 2;
    }
    if ((uVar1 & 0x20) != 0) {
      uVar6 = uVar6 | 1;
    }
    if ((uVar1 & 2) != 0) {
      uVar6 = uVar6 | 0x80000;
    }
    uVar3 = uVar1 & 0xc00;
    if ((uVar1 & 0xc00) != 0) {
      if (uVar3 == 0x400) {
        uVar6 = uVar6 | 0x100;
      }
      else if (uVar3 == 0x800) {
        uVar6 = uVar6 | 0x200;
      }
      else if (uVar3 == 0xc00) {
        uVar6 = uVar6 | 0x300;
      }
    }
    if ((uVar1 & 0x300) == 0) {
      uVar6 = uVar6 | 0x20000;
    }
    else if ((uVar1 & 0x300) == 0x200) {
      uVar6 = uVar6 | 0x10000;
    }
    if ((uVar1 & 0x1000) != 0) {
      uVar6 = uVar6 | 0x40000;
    }
  }
  uVar4 = uVar6;
  if (0 < DAT_00618734) {
    uVar5 = 0;
    if ((char)MXCSR < '\0') {
      uVar5 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar5 = uVar5 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar5 = uVar5 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar5 = uVar5 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar5 = uVar5 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar5 = uVar5 | 0x80000;
    }
    uVar4 = MXCSR & 0x6000;
    if (uVar4 != 0) {
      if (uVar4 == 0x2000) {
        uVar5 = uVar5 | 0x100;
      }
      else if (uVar4 == 0x4000) {
        uVar5 = uVar5 | 0x200;
      }
      else if (uVar4 == 0x6000) {
        uVar5 = uVar5 | 0x300;
      }
    }
    uVar4 = MXCSR & 0x8040;
    if (uVar4 == 0x40) {
      uVar5 = uVar5 | 0x2000000;
    }
    else if (uVar4 == 0x8000) {
      uVar5 = uVar5 | 0x3000000;
    }
    else if (uVar4 == 0x8040) {
      uVar5 = uVar5 | 0x1000000;
    }
    uVar4 = ~(_Mask & 0x308031f) & uVar5 | _Mask & 0x308031f & _NewValue;
    if (uVar4 != uVar5) {
      uVar2 = ___hw_cw_sse2(uVar4);
      ___set_fpsr_sse2(uVar2);
      uVar5 = 0;
      if ((char)MXCSR < '\0') {
        uVar5 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar5 = uVar5 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar5 = uVar5 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar5 = uVar5 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar5 = uVar5 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar5 = uVar5 | 0x80000;
      }
      uVar4 = MXCSR & 0x6000;
      if (uVar4 != 0) {
        if (uVar4 == 0x2000) {
          uVar5 = uVar5 | 0x100;
        }
        else if (uVar4 == 0x4000) {
          uVar5 = uVar5 | 0x200;
        }
        else if (uVar4 == 0x6000) {
          uVar5 = uVar5 | 0x300;
        }
      }
      uVar4 = MXCSR & 0x8040;
      if (uVar4 == 0x40) {
        uVar5 = uVar5 | 0x2000000;
      }
      else if (uVar4 == 0x8000) {
        uVar5 = uVar5 | 0x3000000;
      }
      else if (uVar4 == 0x8040) {
        uVar5 = uVar5 | 0x1000000;
      }
    }
    uVar4 = uVar5 | uVar6;
    if (((uVar5 ^ uVar6) & 0x8031f) != 0) {
      uVar4 = uVar4 | 0x80000000;
    }
  }
  return uVar4;
}

