// rea decompile_all
// name: CPaneFrameWnd::OnDockToRecentPos
// address: 0x100dd8e4
// body: available
// range: 0x100dd8e4-0x100dd985 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneFrameWnd::OnDockToRecentPos(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::OnDockToRecentPos(CPaneFrameWnd *this)

{
  code *pcVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  uint uVar4;
  int iVar5;
  CDockingManager *local_8;
  
  local_8 = *(CDockingManager **)(this + 0x184);
  if (local_8 == (CDockingManager *)0x0) {
    local_8 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_1023d944,(CWnd *)this);
  }
  pCVar2 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xd4));
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101de9e4,(CObject *)pCVar2);
  if (pCVar3 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x198);
    guard_check_icall();
    uVar4 = (*pcVar1)();
    if ((uVar4 & 0xf000) != 0) {
      pcVar1 = *(code **)(*(int *)this + 0x21c);
      guard_check_icall();
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x1f8);
      guard_check_icall(pCVar3,0,2);
      iVar5 = (*pcVar1)();
      if (iVar5 != 0) {
        CGlobalUtils::ForceAdjustLayout((CGlobalUtils *)&PTR_vftable_1023d944,local_8,0,0);
      }
    }
  }
  return;
}

