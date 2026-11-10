// rea decompile_all
// name: CBaseTabbedPane::ShowTab
// address: 0x100c3ff9
// body: available
// range: 0x100c3ff9-0x100c40b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CBaseTabbedPane::ShowTab(class CWnd *,int,int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CBaseTabbedPane::ShowTab(CBaseTabbedPane *this,CWnd *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  if (param_1 == (CWnd *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x20);
  }
  pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x21c);
  guard_check_icall(uVar5);
  uVar5 = (*pcVar1)();
  pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1a8);
  guard_check_icall(uVar5,param_2,param_3 == 0,param_4);
  iVar2 = (*pcVar1)();
  pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1a4);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if ((0 < iVar3 != 0) &&
     (uVar4 = CWnd::GetExStyle(*(CWnd **)(this + 0x370)), (uVar4 & 0x10000000) == 0)) {
    CWnd::ShowWindow(*(CWnd **)(this + 0x370),5);
  }
  CDockablePane::ShowPane((CDockablePane *)this,(uint)(0 < iVar3),param_3,param_4);
  return iVar2;
}

