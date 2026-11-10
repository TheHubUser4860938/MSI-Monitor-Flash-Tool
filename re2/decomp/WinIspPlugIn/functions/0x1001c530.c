// rea decompile_all
// name: FUN_1001c530
// address: 0x1001c530
// body: available
// range: 0x1001c530-0x1001c909 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001c530(undefined4 param_1)

{
  int iVar1;
  uint in_ECX;
  undefined4 extraout_ECX;
  int in_EDX;
  uint uVar2;
  
  if (DAT_1024a360 == 0) {
    if (DAT_1024a3bc == 0) {
      if ((DAT_1024e45c == 1) &&
         (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(1,in_ECX >> 0x18), iVar1 != 0)) {
        return;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(100,in_ECX >> 0x10);
      if (((iVar1 == 0) &&
          (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x65,in_ECX >> 8), iVar1 == 0)) &&
         (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x66), iVar1 == 0)) {
        uVar2 = (in_ECX - 1) + in_EDX;
        if ((DAT_1024e45c == 1) &&
           (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0xa3,uVar2 >> 0x18), iVar1 != 0)) {
          return;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x72,uVar2 >> 0x10);
        if (((iVar1 == 0) &&
            (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x73,uVar2 >> 8), iVar1 == 0)) &&
           ((iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x74,uVar2), iVar1 == 0 &&
            ((iVar1 = (**(code **)(*DAT_10249d10 + 0xf4))(0x6f,0xff,4), iVar1 == 0 &&
             (iVar1 = FUN_1001c4c0(0,20000), iVar1 == 0)))))) {
          (**(code **)(*DAT_10249d10 + 0xf8))(0x75,param_1);
        }
      }
    }
    else {
      iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x87,in_ECX >> 0x10);
      if (((iVar1 == 0) &&
          (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x88,in_ECX >> 8), iVar1 == 0)) &&
         (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x89), iVar1 == 0)) {
        uVar2 = (in_ECX - 1) + in_EDX;
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x95,uVar2 >> 0x10);
        if (((iVar1 == 0) &&
            (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x96,uVar2 >> 8), iVar1 == 0)) &&
           ((iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x97,uVar2), iVar1 == 0 &&
            ((iVar1 = (**(code **)(*DAT_10249d10 + 0xf4))(0x92,0xff,4), iVar1 == 0 &&
             (iVar1 = FUN_1001c4c0(0,20000), iVar1 == 0)))))) {
          (**(code **)(*DAT_10249d10 + 0xf8))(0x98,param_1);
          return;
        }
      }
    }
  }
  else {
    if ((DAT_1024e45c == 1) &&
       (iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x845,in_ECX >> 0x18), iVar1 != 0)) {
      return;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x846,in_ECX >> 0x10);
    if (((iVar1 == 0) &&
        (iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x847,in_ECX >> 8), iVar1 == 0)) &&
       (iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x848), iVar1 == 0)) {
      uVar2 = (in_ECX - 1) + in_EDX;
      if ((DAT_1024e45c == 1) &&
         (iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x854,uVar2 >> 0x18), iVar1 != 0)) {
        return;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x855,uVar2 >> 0x10);
      if (((iVar1 == 0) &&
          (iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x856,uVar2 >> 8), iVar1 == 0)) &&
         ((iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x857,uVar2), iVar1 == 0 &&
          ((iVar1 = (**(code **)(*DAT_10249d10 + 0xd0))(0x851,0xff,4), iVar1 == 0 &&
           (iVar1 = FUN_1001c450(0,extraout_ECX), iVar1 == 0)))))) {
        (**(code **)(*DAT_10249d10 + 0xc0))(0x858,param_1);
        return;
      }
    }
  }
  return;
}

