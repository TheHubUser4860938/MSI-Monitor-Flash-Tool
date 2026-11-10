// rea decompile_all
// name: FUN_10044b10
// address: 0x10044b10
// body: available
// range: 0x10044b10-0x10044c27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10044b64) */
/* WARNING: Removing unreachable block (ram,0x10044b6e) */

longlong FUN_10044b10(short *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  short sVar2;
  int *in_ECX;
  int iVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    lVar1 = 0;
    while( true ) {
      do {
        lVar6 = FUN_1000b4b0();
        if (lVar6 < 1) {
          sVar2 = (**(code **)(*in_ECX + 0x1c))();
          if (sVar2 == -1) {
            return lVar1;
          }
          iVar3 = 2;
          lVar1 = lVar1 + 1;
          bVar5 = param_2 != 0;
          param_2 = param_2 - 1;
          param_3 = param_3 + -1 + (uint)bVar5;
          *param_1 = sVar2;
        }
        else {
          if (CONCAT44(param_3,param_2) < lVar6) {
            lVar6 = CONCAT44(param_3,param_2);
          }
          uVar4 = (uint)lVar6;
          if (uVar4 != 0) {
            FUN_10197c50(param_1,*(undefined4 *)in_ECX[7],uVar4 * 2);
          }
          lVar1 = lVar6 + lVar1;
          iVar3 = uVar4 * 2;
          bVar5 = param_2 < uVar4;
          param_2 = param_2 - uVar4;
          param_3 = (param_3 - (int)((ulonglong)lVar6 >> 0x20)) - (uint)bVar5;
          *(int *)in_ECX[0xb] = *(int *)in_ECX[0xb] - uVar4;
          *(int *)in_ECX[7] = *(int *)in_ECX[7] + iVar3;
        }
        param_1 = (short *)((int)param_1 + iVar3);
      } while (0 < param_3);
      if (param_3 < 0) break;
      if (param_2 == 0) {
        return lVar1;
      }
    }
    return lVar1;
  }
  return 0;
}

