// rea decompile_all
// name: CBaseTabbedPane::RemovePane
// address: 0x100f9cad
// body: available
// range: 0x100f9cad-0x100f9de6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CBaseTabbedPane::RemovePane(class CWnd *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CBaseTabbedPane::RemovePane(CBaseTabbedPane *this,CWnd *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  if (param_1 == (CWnd *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x20);
  }
  pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x21c);
  guard_check_icall(uVar5);
  iVar2 = (*pcVar1)();
  if (-1 < iVar2) {
    pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1ac);
    guard_check_icall(uVar5);
    iVar3 = (*pcVar1)();
    if (iVar2 < iVar3) {
      uVar5 = 1;
      pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x198);
      guard_check_icall(iVar2,1);
      (*pcVar1)();
      pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1ac);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 == 0) {
        pcVar1 = *(code **)(*(int *)this + 0x3b0);
        guard_check_icall(iVar2,uVar5);
        iVar2 = (*pcVar1)();
        if (iVar2 != 0) {
          pcVar1 = *(code **)(*(int *)this + 0x168);
          guard_check_icall();
          iVar2 = (*pcVar1)();
          uVar5 = 0;
          if (iVar2 == 0) {
            pcVar1 = *(code **)(*(int *)this + 0x228);
            guard_check_icall(0);
            piVar4 = (int *)(*pcVar1)();
            pcVar1 = *(code **)(*piVar4 + 0x17c);
            guard_check_icall(this,0,0);
            (*pcVar1)();
          }
          else {
            pcVar1 = *(code **)(*(int *)this + 0x240);
            guard_check_icall(0);
            (*pcVar1)();
          }
          pcVar1 = *(code **)(*(int *)this + 0x60);
          guard_check_icall(uVar5);
          (*pcVar1)();
          return 0;
        }
        CWnd::ShowWindow(*(CWnd **)(this + 0x370),0);
      }
      return 1;
    }
  }
  return 0;
}

