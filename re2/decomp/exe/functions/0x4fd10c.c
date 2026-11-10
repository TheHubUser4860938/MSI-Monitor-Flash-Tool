// rea decompile_all
// name: CPaneContainer::CheckPaneDividerVisibility
// address: 0x4fd10c
// body: available
// range: 0x4fd10c-0x4fd1ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CPaneContainer::CheckPaneDividerVisibility(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneContainer::CheckPaneDividerVisibility(CPaneContainer *this)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  int local_8;
  
  cVar2 = '\0';
  bVar1 = true;
  local_8 = 0;
  if (*(CWnd **)(this + 4) == (CWnd *)0x0) {
LAB_004fd134:
    bVar3 = false;
  }
  else {
    uVar4 = CWnd::GetExStyle(*(CWnd **)(this + 4));
    bVar3 = true;
    if ((uVar4 & 0x10000000) == 0) goto LAB_004fd134;
  }
  if (*(CWnd **)(this + 8) != (CWnd *)0x0) {
    uVar4 = CWnd::GetExStyle(*(CWnd **)(this + 8));
    if ((uVar4 & 0x10000000) != 0) goto LAB_004fd14c;
  }
  bVar1 = false;
LAB_004fd14c:
  if (*(CPaneContainer **)(this + 0x10) != (CPaneContainer *)0x0) {
    CheckPaneDividerVisibility(*(CPaneContainer **)(this + 0x10));
    local_8 = IsVisible(*(CPaneContainer **)(this + 0x10));
  }
  if (*(CPaneContainer **)(this + 0x14) == (CPaneContainer *)0x0) {
    iVar5 = 0;
  }
  else {
    CheckPaneDividerVisibility(*(CPaneContainer **)(this + 0x14));
    iVar5 = IsVisible(*(CPaneContainer **)(this + 0x14));
  }
  if (*(int *)(this + 0xc) != 0) {
    if ((((bVar3) && ((bVar1 || (iVar5 != 0)))) || ((bVar1 && (local_8 != 0)))) ||
       ((local_8 != 0 && (iVar5 != 0)))) {
      cVar2 = '\x01';
    }
    FUN_004e0e2b(-cVar2 & 5);
  }
  return;
}

