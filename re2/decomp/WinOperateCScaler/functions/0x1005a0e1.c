// rea decompile_all
// name: FUN_1005a0e1
// address: 0x1005a0e1
// body: available
// range: 0x1005a0e1-0x1005a18b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005a0e1(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x28) == 0) {
    FUN_1002f6d2((undefined4 *)(in_ECX + 0x8c));
    *(undefined4 *)(in_ECX + 0x8c) = 0;
    FUN_1002f6d2((undefined4 *)(in_ECX + 0x90));
    *(undefined4 *)(in_ECX + 0x90) = 0;
    FUN_1002f6d2((undefined4 *)(in_ECX + 0x94));
    *(undefined4 *)(in_ECX + 0x94) = 0;
    CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(in_ECX + 0xc0));
    CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(in_ECX + 0xf8));
    CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(in_ECX + 0xdc));
    FUN_10018940();
    *(undefined4 *)(in_ECX + 0x18) = 0;
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 0x1c) = 0;
    *(undefined4 *)(in_ECX + 0x30) = 0;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    if (*(double *)(in_ECX + 0xb8) != 1.0) {
      *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(in_ECX + 0x5c);
      *(undefined8 *)(in_ECX + 0xb8) = 0x3ff0000000000000;
      *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(in_ECX + 0x60);
      *(undefined4 *)(in_ECX + 0x5c) = 0;
      *(undefined4 *)(in_ECX + 0x60) = 0;
    }
  }
  return;
}

