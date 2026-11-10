// rea decompile_all
// name: CMFCPopupMenuBar::OnDestroy
// address: 0x48ae24
// body: available
// range: 0x48ae24-0x48aef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenuBar::OnDestroy(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPopupMenuBar::OnDestroy(CMFCPopupMenuBar *this)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  CObject *pCVar4;
  int iVar5;
  BOOL BVar6;
  int local_8;
  
  KillTimer(*(HWND *)(this + 0x20),0xec17);
  KillTimer(*(HWND *)(this + 0x20),0xec18);
  local_8 = *(int *)(this + 0xc40);
  *(undefined4 *)(this + 0xdac) = 0;
  *(undefined4 *)(this + 0xdb0) = 0;
  while (local_8 != 0) {
    puVar3 = (undefined4 *)FUN_004ead48(&local_8);
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_0060c6d0,
                                (CObject *)*puVar3);
    if (pCVar4 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x70);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      if (((iVar5 != 0) && (piVar2 = *(int **)(pCVar4 + 0x8c), piVar2 != (int *)0x0)) &&
         (BVar6 = IsWindow((HWND)piVar2[8]), BVar6 != 0)) {
        pcVar1 = *(code **)(*piVar2 + 0x1e0);
        guard_check_icall();
        (*pcVar1)();
        PostMessageW((HWND)piVar2[8],0x10,0,0);
      }
    }
  }
  FUN_0045560f();
  return;
}

