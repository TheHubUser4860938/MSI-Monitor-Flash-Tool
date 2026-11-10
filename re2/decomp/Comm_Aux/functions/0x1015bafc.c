// rea decompile_all
// name: CPaneContainer::SaveTabbedPane
// address: 0x1015bafc
// body: available
// range: 0x1015bafc-0x1015bb7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPaneContainer::SaveTabbedPane(class CArchive &,class CDockablePane
   *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CPaneContainer::SaveTabbedPane(CPaneContainer *this,CArchive *param_1,CDockablePane *param_2)

{
  code *pcVar1;
  CObject *this_00;
  int iVar2;
  ulong uVar3;
  
  this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_101c7908,(CObject *)param_2);
  pcVar1 = *(code **)(*(int *)this_00 + 0x3a4);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (0 < iVar2) {
    FUN_1004da8f(0xffffffff);
    pcVar1 = *(code **)(*(int *)this_00 + 0x3dc);
    guard_check_icall(param_1);
    (*pcVar1)();
    FUN_1005cc2d(this_00);
    uVar3 = CWnd::GetExStyle((CWnd *)this_00);
    FUN_1004da8f(uVar3);
    pcVar1 = *(code **)(*(int *)this_00 + 0x3d8);
    guard_check_icall(param_1);
    (*pcVar1)();
  }
  return;
}

