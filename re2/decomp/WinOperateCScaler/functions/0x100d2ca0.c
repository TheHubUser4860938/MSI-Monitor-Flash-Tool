// rea decompile_all
// name: CSmartDockingManager::OnMouseMove
// address: 0x100d2ca0
// body: available
// range: 0x100d2ca0-0x100d2d63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CSmartDockingManager::OnMouseMove(class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CSmartDockingManager::OnMouseMove(CSmartDockingManager *this,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  CSmartDockingManager *pCVar5;
  
  if (*(int *)(this + 4) != 0) {
    *(undefined4 *)(this + 0x110) = 0xffffffff;
    bVar2 = false;
    iVar4 = (*(int *)(*(int *)(this + 0x10c) + 0x113c) != 0) + 7;
    pCVar5 = this + iVar4 * 4 + 0xe8;
    do {
      if (bVar2) {
LAB_100d2d31:
        if (*(int **)pCVar5 != (int *)0x0) {
          pcVar1 = *(code **)(**(int **)pCVar5 + 0x1c);
          guard_check_icall(0);
          (*pcVar1)();
        }
      }
      else if (*(int **)pCVar5 != (int *)0x0) {
        pcVar1 = *(code **)(**(int **)pCVar5 + 0x20);
        guard_check_icall(param_2,param_3);
        iVar3 = (*pcVar1)();
        if (iVar3 == 0) goto LAB_100d2d31;
        bVar2 = true;
        pcVar1 = *(code **)(**(int **)pCVar5 + 0x1c);
        guard_check_icall(1);
        (*pcVar1)();
        *(int *)(this + 0x110) = iVar4;
      }
      pCVar5 = pCVar5 + -4;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return;
}

