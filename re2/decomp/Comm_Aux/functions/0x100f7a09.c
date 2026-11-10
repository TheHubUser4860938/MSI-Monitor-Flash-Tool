// rea decompile_all
// name: CMultiPaneFrameWnd::OnShowPane
// address: 0x100f7a09
// body: available
// range: 0x100f7a09-0x100f7aba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMultiPaneFrameWnd::OnShowPane(class CDockablePane *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMultiPaneFrameWnd::OnShowPane(CMultiPaneFrameWnd *this,CDockablePane *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  pcVar2 = *(code **)(*(int *)(this + 400) + 0x48);
  iVar3 = param_2;
  guard_check_icall(param_1,param_2);
  (*pcVar2)();
  if (param_2 == 0) {
    pcVar2 = *(code **)(*(int *)(this + 400) + 0x4c);
    guard_check_icall(param_1,iVar3);
    iVar1 = (*pcVar2)();
    if (iVar1 != 0) goto LAB_100f7a7e;
    CWnd::ShowWindow((CWnd *)this,0);
    pcVar2 = *(code **)(*(int *)this + 0x1f8);
  }
  else {
    if (*(int *)(this + 0xa0) == 0) {
      CWnd::ShowWindow((CWnd *)this,4);
    }
    pcVar2 = *(code **)(*(int *)this + 500);
  }
  guard_check_icall(param_1,iVar3);
  (*pcVar2)();
LAB_100f7a7e:
  pcVar2 = *(code **)(*(int *)this + 0x188);
  guard_check_icall();
  (*pcVar2)();
  pcVar2 = *(code **)(*(int *)this + 0x1cc);
  guard_check_icall();
  (*pcVar2)();
  CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,0,0,0,0,0x37);
  return;
}

