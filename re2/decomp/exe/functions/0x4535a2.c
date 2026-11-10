// rea decompile_all
// name: FUN_004535a2
// address: 0x4535a2
// body: available
// range: 0x4535a2-0x45365d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004535a2(void)

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
      iVar4 = DAT_0060c52c;
      if (DAT_0060c52c < 1) {
        iVar4 = DAT_0060c51c;
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
      iVar4 = DAT_0060c52c;
      if (DAT_0060c52c < 1) {
        iVar4 = DAT_0060c51c;
      }
    }
  }
  else {
    iVar4 = *(int *)(in_ECX + 0xbe8);
  }
  return iVar4;
}

