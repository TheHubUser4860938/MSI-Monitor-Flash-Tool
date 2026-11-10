// rea decompile_all
// name: FUN_1003f960
// address: 0x1003f960
// body: available
// range: 0x1003f960-0x1003faa9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f960(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = param_3 & 0xff;
  uVar5 = param_3 >> 8;
  uVar1 = (**(code **)(*DAT_10249d10 + 0x3c))();
  param_3 = param_3 & 0xffffff;
  iVar3 = (**(code **)(*DAT_10249d10 + 0xf0))(0x87,param_1);
  if ((((iVar3 == 0) && (iVar3 = (**(code **)(*DAT_10249d10 + 0xf0))(0x88,param_2 >> 8), iVar3 == 0)
       ) && (iVar3 = (**(code **)(*DAT_10249d10 + 0xf0))(0x89,param_2), iVar3 == 0)) &&
     (((iVar3 = (**(code **)(*DAT_10249d10 + 0xf0))(0x8d,3), iVar3 == 0 &&
       (iVar3 = (**(code **)(*DAT_10249d10 + 0xf4))(0x8f,0x3f,0), iVar3 == 0)) &&
      (iVar3 = (**(code **)(*DAT_10249d10 + 0x78))(uVar1,0x93,1,(int)&param_3 + 3,0), iVar3 == 0))))
  {
    uVar6 = 0;
    iVar3 = param_4;
    if (uVar5 != 0) {
      do {
        iVar4 = (**(code **)(*DAT_10249d10 + 0x78))(uVar1,0x93,0x100,iVar3,0);
        if (iVar4 != 0) {
          return;
        }
        uVar6 = uVar6 + 1;
        iVar3 = iVar3 + 0x100;
      } while (uVar6 < uVar5);
    }
    if (uVar2 != 0) {
      (**(code **)(*DAT_10249d10 + 0x78))(uVar1,0x93,uVar2,uVar6 * 0x100 + param_4,0);
    }
  }
  return;
}

