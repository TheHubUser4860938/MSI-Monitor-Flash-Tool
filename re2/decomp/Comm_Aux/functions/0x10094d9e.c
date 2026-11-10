// rea decompile_all
// name: FUN_10094d9e
// address: 0x10094d9e
// body: available
// range: 0x10094d9e-0x10094e59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10094d9e(void)

{
  uint uVar1;
  AFX_GLOBAL_DATA *pAVar2;
  int iVar3;
  int iVar4;
  CMFCToolBar *in_ECX;
  
  if (*(int *)(in_ECX + 0xb8c) == 0) {
    if (*(int *)(in_ECX + 0xbac) == 0) {
      iVar4 = CMFCToolBar::GetButtonSize(in_ECX);
      iVar4 = *(int *)(iVar4 + 4);
    }
    else {
      iVar4 = DAT_10205a5c;
      if (DAT_10205a5c < 1) {
        iVar4 = DAT_10205a4c;
      }
    }
    uVar1 = *(uint *)(in_ECX + 0x9c);
    pAVar2 = GetGlobalData();
    if ((uVar1 & 0xa000) == 0) {
      iVar3 = *(int *)(pAVar2 + 0x1d0);
    }
    else {
      iVar3 = *(int *)(pAVar2 + 0x1cc);
    }
    if (iVar4 < iVar3) {
      uVar1 = *(uint *)(in_ECX + 0x9c);
      pAVar2 = GetGlobalData();
      if ((uVar1 & 0xa000) == 0) {
        iVar4 = *(int *)(pAVar2 + 0x1d0);
      }
      else {
        iVar4 = *(int *)(pAVar2 + 0x1cc);
      }
    }
    else if (*(int *)(in_ECX + 0xbac) == 0) {
      iVar4 = CMFCToolBar::GetButtonSize(in_ECX);
      iVar4 = *(int *)(iVar4 + 4);
    }
    else {
      iVar4 = DAT_10205a5c;
      if (DAT_10205a5c < 1) {
        iVar4 = DAT_10205a4c;
      }
    }
  }
  else {
    iVar4 = *(int *)(in_ECX + 0xbe8);
  }
  return iVar4;
}

