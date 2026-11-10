// rea decompile_all
// name: FUN_1003f7a0
// address: 0x1003f7a0
// body: available
// range: 0x1003f7a0-0x1003f95c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f7a0(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_5;
  
  uVar2 = param_3 & 0xff;
  uVar6 = param_3 >> 8;
  uVar1 = (**(code **)(*DAT_10249d10 + 0x3c))();
  param_3 = CONCAT13(0x78,(undefined3)param_3);
  iVar3 = (**(code **)(*DAT_10249d10 + 0xf0))(0x841,0x46);
  if (((((iVar3 == 0) && (iVar3 = (**(code **)(*DAT_10249d10 + 0xf0))(0x842,3), iVar3 == 0)) &&
       (iVar3 = (**(code **)(*DAT_10249d10 + 0xc4))(0x846,param_1), iVar3 == 0)) &&
      ((iVar3 = (**(code **)(*DAT_10249d10 + 0xc4))(0x847,param_2 >> 8), iVar3 == 0 &&
       (iVar3 = (**(code **)(*DAT_10249d10 + 0xc4))(0x848,param_2), iVar3 == 0)))) &&
     ((iVar3 = (**(code **)(*DAT_10249d10 + 0xc4))(0x84c,3), iVar3 == 0 &&
      ((iVar3 = (**(code **)(*DAT_10249d10 + 0x54))(uVar1,0xf4,1,(int)&param_3 + 3), iVar3 == 0 &&
       (iVar3 = (**(code **)(*DAT_10249d10 + 0x78))(uVar1,0xf5,1,&local_5,0), iVar3 == 0)))))) {
    uVar5 = 0;
    iVar3 = param_4;
    if (uVar6 != 0) {
      do {
        iVar4 = (**(code **)(*DAT_10249d10 + 0x54))(uVar1,0xf4,1,(int)&param_3 + 3);
        if (iVar4 != 0) {
          return;
        }
        iVar4 = (**(code **)(*DAT_10249d10 + 0x78))(uVar1,0xf5,0x100,iVar3,0);
        if (iVar4 != 0) {
          return;
        }
        uVar5 = uVar5 + 1;
        iVar3 = iVar3 + 0x100;
      } while (uVar5 < uVar6);
    }
    iVar3 = param_4;
    if ((uVar2 != 0) &&
       (iVar4 = (**(code **)(*DAT_10249d10 + 0x54))(uVar1,0xf4,1,(int)&param_3 + 3), iVar4 == 0)) {
      (**(code **)(*DAT_10249d10 + 0x78))(uVar1,0xf5,uVar2,uVar5 * 0x100 + iVar3,0);
    }
  }
  return;
}

