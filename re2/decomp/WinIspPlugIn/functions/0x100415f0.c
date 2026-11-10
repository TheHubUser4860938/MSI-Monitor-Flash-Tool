// rea decompile_all
// name: FUN_100415f0
// address: 0x100415f0
// body: available
// range: 0x100415f0-0x1004170e inclusive
// range: 0x10041710-0x10041797 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100415f0(uint param_1,void *param_2)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  uint *in_EDX;
  
  while( true ) {
    uVar5 = *in_EDX;
    sVar2 = *(short *)(in_ECX + uVar5 * 2);
    if ((sVar2 != 9) && (sVar2 != 0x20)) break;
    *in_EDX = uVar5 + 1;
    if (param_1 <= uVar5 + 1) {
      return 0;
    }
  }
  iVar4 = uVar5 * 2;
  sVar2 = *(short *)(iVar4 + in_ECX);
  if ((sVar2 == 0xd) || (sVar2 == 10)) {
    *in_EDX = uVar5 + 1;
    return 3;
  }
  if (sVar2 == 0x2c) {
    *in_EDX = uVar5 + 1;
    return 4;
  }
  if (sVar2 != 0x2f) {
LAB_100416e3:
    if (sVar2 == 0x7b) {
      *in_EDX = uVar5 + 1;
      return 5;
    }
    if (sVar2 == 0x7d) {
      *in_EDX = uVar5 + 1;
      return 6;
    }
    do {
      uVar3 = *(ushort *)(in_ECX + *in_EDX * 2);
      if ((((0x39 < uVar3) || (uVar3 < 0x30)) && ((0x5a < uVar3 || (uVar3 < 0x41)))) &&
         (((0x7a < uVar3 || (uVar3 < 0x61)) && (uVar3 != 0x5f)))) break;
      uVar1 = *in_EDX + 1;
      *in_EDX = uVar1;
    } while (uVar1 < param_1);
    if (*in_EDX != uVar5) {
      _memset(param_2,0,0x200);
      FUN_10197c50(param_2,iVar4 + in_ECX,(*in_EDX - uVar5) * 2);
      return 1;
    }
    *in_EDX = *in_EDX + 1;
    return 0;
  }
  if (*(short *)(iVar4 + 2 + in_ECX) == 0x2a) {
    *in_EDX = uVar5 + 2;
    while ((uVar5 = *in_EDX, *(short *)(in_ECX + uVar5 * 2) != 0x2a ||
           (*(short *)(in_ECX + 2 + uVar5 * 2) != 0x2f))) {
      *in_EDX = uVar5 + 1;
      if (param_1 <= uVar5 + 1) {
        return 0;
      }
    }
    *in_EDX = *in_EDX + 2;
  }
  else {
    if (*(short *)(iVar4 + 2 + in_ECX) != 0x2f) goto LAB_100416e3;
    *in_EDX = uVar5 + 2;
    if (*(short *)(in_ECX + (uVar5 + 2) * 2) != 0xd) {
      while (*(short *)(in_ECX + *in_EDX * 2) != 10) {
        uVar5 = *in_EDX + 1;
        *in_EDX = uVar5;
        if (param_1 <= uVar5) {
          return 2;
        }
        if (*(short *)(in_ECX + uVar5 * 2) == 0xd) {
          return 2;
        }
      }
    }
  }
  return 2;
}

