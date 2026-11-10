// rea decompile_all
// name: CSmartDockingManager::Show
// address: 0x100c7a8e
// body: available
// range: 0x100c7a8e-0x100c7b5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CSmartDockingManager::Show(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CSmartDockingManager::Show(CSmartDockingManager *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  CSmartDockingManager *pCVar3;
  int local_8;
  
  if ((*(int *)(this + 4) != 0) && (*(int *)(this + 0xc) != param_1)) {
    *(int *)(this + 0xc) = param_1;
    if (*(int *)(this + 0x10) != 0) {
      pcVar1 = *(code **)(**(int **)(this + 0x10c) + 0x14);
      guard_check_icall(param_1);
      (*pcVar1)();
    }
    pCVar3 = this + 0xe8;
    local_8 = 0;
    do {
      uVar2 = *(uint *)(this + 0x1c);
      if ((((((uVar2 & 0x1000) != 0) && (local_8 == 0)) ||
           (((uVar2 & 0x4000) != 0 && (local_8 == 1)))) ||
          (((uVar2 & 0x2000) != 0 && (local_8 == 2)))) ||
         (((uVar2 & 0x8000) != 0 && (local_8 == 3)))) {
        pcVar1 = *(code **)(**(int **)pCVar3 + 0x14);
        guard_check_icall(param_1);
        (*pcVar1)();
      }
      local_8 = local_8 + 1;
      pCVar3 = pCVar3 + 4;
    } while (local_8 < 4);
    if ((param_1 == 0) && (*(int *)(this + 0xd8) == 0)) {
      CSmartDockingHighlighterWnd::Hide((CSmartDockingHighlighterWnd *)(this + 0x30));
    }
  }
  return;
}

