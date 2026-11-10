// rea decompile_all
// name: FUN_1015f29a
// address: 0x1015f29a
// body: available
// range: 0x1015f29a-0x1015f2a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1015f29a(void)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  
  iVar3 = *(int *)(in_ECX + 0x3c);
  if (iVar3 == 0) {
    return 0;
  }
  if (*(CWnd **)(iVar3 + 4) == (CWnd *)0x0) {
LAB_1015a315:
    if (*(CWnd **)(iVar3 + 8) != (CWnd *)0x0) {
      uVar1 = CWnd::GetExStyle(*(CWnd **)(iVar3 + 8));
      if ((uVar1 & 0x10000000) != 0) goto LAB_1015a345;
    }
    if (*(CPaneContainer **)(iVar3 + 0x10) != (CPaneContainer *)0x0) {
      iVar2 = CPaneContainer::IsVisible(*(CPaneContainer **)(iVar3 + 0x10));
      if (iVar2 != 0) goto LAB_1015a345;
    }
    if (*(CPaneContainer **)(iVar3 + 0x14) != (CPaneContainer *)0x0) {
      iVar3 = CPaneContainer::IsVisible(*(CPaneContainer **)(iVar3 + 0x14));
      if (iVar3 != 0) goto LAB_1015a345;
    }
    uVar4 = 0;
  }
  else {
    uVar1 = CWnd::GetExStyle(*(CWnd **)(iVar3 + 4));
    if ((uVar1 & 0x10000000) == 0) goto LAB_1015a315;
LAB_1015a345:
    uVar4 = 1;
  }
  return uVar4;
}

