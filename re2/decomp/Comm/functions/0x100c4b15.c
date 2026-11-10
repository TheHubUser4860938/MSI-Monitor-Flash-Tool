// rea decompile_all
// name: CRecentPaneContainerInfo::StoreDockInfo
// address: 0x100c4b15
// body: available
// range: 0x100c4b15-0x100c4bc2 inclusive
// range: 0x100c4bcb-0x100c4bde inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CRecentPaneContainerInfo::StoreDockInfo(class CPaneContainer
   *,class CDockablePane *,class CDockablePane *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CRecentPaneContainerInfo::StoreDockInfo
          (CRecentPaneContainerInfo *this,CPaneContainer *param_1,CDockablePane *param_2,
          CDockablePane *param_3)

{
  int iVar1;
  undefined4 uVar2;
  CDockablePane *pCVar3;
  
  if (param_1 != (CPaneContainer *)0x0) {
    FUN_10122ab1();
    pCVar3 = param_2;
    if (param_3 != (CDockablePane *)0x0) {
      pCVar3 = param_3;
    }
    iVar1 = CPaneContainer::IsLeftPane(param_1,pCVar3);
    *(int *)(this + 0x18) = iVar1;
  }
  iVar1 = *(int *)(this + 0x38);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) == 0)) {
    *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + -1;
    if (*(int *)(*(int *)(this + 0x38) + 0x30) < 1) {
      CPaneContainer::ReleaseEmptyPaneContainer(*(CPaneContainer **)(*(int *)(iVar1 + 0x1c) + 0x3c))
      ;
    }
    *(undefined4 *)(this + 0x38) = 0;
  }
  iVar1 = *(int *)(this + 0x3c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) == 0)) {
    *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + -1;
    if (*(int *)(*(int *)(this + 0x3c) + 0x30) < 1) {
      CPaneContainer::ReleaseEmptyPaneContainer(*(CPaneContainer **)(*(int *)(iVar1 + 0x1c) + 0x3c))
      ;
    }
    *(undefined4 *)(this + 0x3c) = 0;
  }
  GetWindowRect(*(HWND *)(param_2 + 0x20),(LPRECT)(this + 4));
  if (param_3 == (CDockablePane *)0x0) {
    *(CPaneContainer **)(this + 0x38) = param_1;
    uVar2 = *(undefined4 *)(param_2 + 0x2d0);
  }
  else {
    *(CPaneContainer **)(this + 0x3c) = param_1;
    uVar2 = *(undefined4 *)(param_3 + 0x2d0);
  }
  *(undefined4 *)(this + 0x14) = uVar2;
  return;
}

