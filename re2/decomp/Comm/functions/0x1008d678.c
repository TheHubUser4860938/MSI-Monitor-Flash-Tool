// rea decompile_all
// name: FUN_1008d678
// address: 0x1008d678
// body: available
// range: 0x1008d678-0x1008d6fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1008d678(int param_1)

{
  CWnd *pCVar1;
  code *pcVar2;
  int *in_ECX;
  int iVar3;
  
  pCVar1 = (CWnd *)in_ECX[0x2d];
  if ((pCVar1 != (CWnd *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
    if ((param_1 == 0) || (in_ECX[0x1f] == 0)) {
      CWnd::ShowWindow(pCVar1,0);
    }
    else {
      pcVar2 = *(code **)(*in_ECX + 0x30);
      guard_check_icall();
      (*pcVar2)();
      CWnd::ShowWindow((CWnd *)in_ECX[0x2d],(-(uint)(DAT_101d37fc != 0) & 0xfffffffc) + 4);
    }
  }
  pCVar1 = (CWnd *)in_ECX[0x2c];
  if ((pCVar1 != (CWnd *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
    if ((param_1 == 0) || (in_ECX[0x1f] == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = 4;
    }
    CWnd::ShowWindow(pCVar1,iVar3);
  }
  return;
}

