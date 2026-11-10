// rea decompile_all
// name: FUN_0040b3f0
// address: 0x40b3f0
// body: available
// range: 0x40b3f0-0x40b4f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0040b444) */
/* WARNING: Removing unreachable block (ram,0x0040b44e) */

longlong FUN_0040b3f0(undefined1 *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    lVar1 = 0;
    while( true ) {
      do {
        lVar5 = FUN_00405ec0();
        if (lVar5 < 1) {
          iVar2 = (**(code **)(*in_ECX + 0x1c))();
          if (iVar2 == -1) {
            return lVar1;
          }
          *param_1 = (char)iVar2;
          param_1 = param_1 + 1;
          lVar1 = lVar1 + 1;
          bVar4 = param_2 != 0;
          param_2 = param_2 - 1;
          param_3 = param_3 + -1 + (uint)bVar4;
        }
        else {
          if (CONCAT44(param_3,param_2) < lVar5) {
            lVar5 = CONCAT44(param_3,param_2);
          }
          uVar3 = (uint)lVar5;
          if (uVar3 != 0) {
            FUN_005734b0(param_1,*(undefined4 *)in_ECX[7],uVar3);
          }
          param_1 = param_1 + uVar3;
          lVar1 = lVar5 + lVar1;
          bVar4 = param_2 < uVar3;
          param_2 = param_2 - uVar3;
          param_3 = (param_3 - (int)((ulonglong)lVar5 >> 0x20)) - (uint)bVar4;
          *(int *)in_ECX[0xb] = *(int *)in_ECX[0xb] - uVar3;
          *(int *)in_ECX[7] = *(int *)in_ECX[7] + uVar3;
        }
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

