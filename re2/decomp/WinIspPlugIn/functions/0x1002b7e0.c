// rea decompile_all
// name: FUN_1002b7e0
// address: 0x1002b7e0
// body: available
// range: 0x1002b7e0-0x1002b893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1002b7e0(void)

{
  int iVar1;
  undefined2 uVar2;
  int in_ECX;
  undefined4 uVar3;
  
  uVar3 = 0x100;
  uVar2 = 0;
  FUN_10048350(&DAT_1024a13c,L"LNV Background Send BB Cmd UD Mode: %d",*(undefined4 *)(in_ECX + 4));
  FUN_10016860();
  switch(*(undefined4 *)(in_ECX + 4)) {
  case 0:
    break;
  case 1:
    uVar3 = 0x101;
    uVar2 = CONCAT11(*(undefined1 *)(in_ECX + 8),*(undefined1 *)(in_ECX + 9));
    break;
  case 2:
    uVar3 = 0x102;
    break;
  case 3:
    uVar3 = 0x103;
    break;
  default:
    return 0xdbd;
  }
  iVar1 = (**(code **)(*DAT_10249d10 + 0x21c))(0x4c,uVar3,uVar2,0,0);
  if (iVar1 != 0) {
    FUN_10048350(&DAT_1024a13c,L"LNV Background Send BB Cmd UD Mode Fail: 0x%X",iVar1);
    FUN_10016860();
  }
  return iVar1;
}

