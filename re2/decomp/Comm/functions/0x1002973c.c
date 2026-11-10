// rea decompile_all
// name: FUN_1002973c
// address: 0x1002973c
// body: available
// range: 0x1002973c-0x1002976e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002973c(DWORD param_1,DWORD param_2,DWORD param_3,DWORD param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  int in_ECX;
  undefined4 uVar3;
  
  BVar1 = UnlockFile(*(HANDLE *)(in_ECX + 4),param_1,param_2,param_3,param_4);
  if (BVar1 == 0) {
    uVar3 = *(undefined4 *)(in_ECX + 0xc);
    DVar2 = GetLastError();
    FUN_1002ee19(DVar2,uVar3);
  }
  return;
}

