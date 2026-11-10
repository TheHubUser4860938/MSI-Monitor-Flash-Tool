// rea decompile_all
// name: FUN_10023760
// address: 0x10023760
// body: available
// range: 0x10023760-0x100239a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10023896) */
/* WARNING: Removing unreachable block (ram,0x1002389c) */
/* WARNING: Removing unreachable block (ram,0x10023937) */
/* WARNING: Removing unreachable block (ram,0x1002396f) */
/* WARNING: Removing unreachable block (ram,0x100238ac) */
/* WARNING: Removing unreachable block (ram,0x100238b2) */
/* WARNING: Removing unreachable block (ram,0x100238b7) */
/* WARNING: Removing unreachable block (ram,0x100238bf) */
/* WARNING: Removing unreachable block (ram,0x100238c4) */
/* WARNING: Removing unreachable block (ram,0x100238cc) */
/* WARNING: Removing unreachable block (ram,0x100238d1) */
/* WARNING: Removing unreachable block (ram,0x100238d9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10023760(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  
  iVar2 = iRam1024e00c;
  iVar1 = _DAT_1024e008;
  iVar5 = iRam1024e004;
  uVar3 = DAT_1023dfec ^ (uint)&stack0xfffffff0;
  if (((iRam1024e00c != 0) || (iRam1024e004 != 0)) || (_DAT_1024e008 != 0)) {
    iVar4 = (**(code **)(*DAT_10249d10 + 0x14))();
    if ((iVar4 == 3) || (iVar4 = (**(code **)(*DAT_10249d10 + 0x14))(), iVar4 == 0xe)) {
      (**(code **)(*DAT_10249d10 + 0xa0))(2,10);
    }
    if ((iVar2 != 0) || (iVar5 != 0)) {
      iVar5 = FUN_100234a0();
      if (iVar5 != 0) {
        pwVar6 = L"GetBinFileProjectID Fail Error:0x%d";
        goto LAB_10023844;
      }
      if (iVar2 != 0) {
        FUN_10017780();
        iVar5 = FUN_100233d0();
        if (iVar5 != 0) {
          pwVar6 = L"Verify Tool and FW Bin File ProjectID Fail Error:0x%d";
          goto LAB_10023844;
        }
      }
    }
    if (iVar1 != 0) {
      FUN_10017780();
      iVar5 = FUN_100233d0();
      if (iVar5 != 0) {
        pwVar6 = L"Verify Tool and IC ProjectID Fail Error:0x%d";
LAB_10023844:
        FUN_10048350(&DAT_1024a13c,pwVar6,iVar5);
        FUN_1003fc00();
        FUN_10016860();
        __security_check_cookie(uVar3 ^ (uint)&stack0xfffffff0);
        return;
      }
    }
  }
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffff0);
  return;
}

