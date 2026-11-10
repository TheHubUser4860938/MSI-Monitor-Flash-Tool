// rea decompile_all
// name: CDockingPanesRow::UpdateVisibleState
// address: 0x100f5beb
// body: available
// range: 0x100f5beb-0x100f5cc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockingPanesRow::UpdateVisibleState(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingPanesRow::UpdateVisibleState(CDockingPanesRow *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  BOOL BVar5;
  undefined4 *puVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int local_c;
  CWnd *local_8;
  
  pHVar3 = GetParent(*(HWND *)(*(int *)(this + 0x44) + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  BVar5 = IsWindowVisible(*(HWND *)(pCVar4 + 0x20));
  iVar1 = *(int *)(this + 8);
  local_c = *(int *)(this + 0x28);
  iVar9 = 0;
joined_r0x100f5c2b:
  do {
    if (local_c == 0) goto LAB_100f5c9c;
    puVar6 = (undefined4 *)FUN_100c321b(&local_c);
    local_8 = (CWnd *)*puVar6;
    if (BVar5 == 0) {
      pcVar2 = *(code **)(*(int *)local_8 + 0x1b0);
      guard_check_icall();
      iVar7 = (*pcVar2)();
      if (iVar7 != 0) {
        pcVar2 = *(code **)(*(int *)local_8 + 0x1ac);
        guard_check_icall();
        iVar9 = (*pcVar2)();
        if (iVar9 != 0) goto LAB_100f5c9c;
        goto joined_r0x100f5c2b;
      }
    }
    uVar8 = CWnd::GetExStyle(local_8);
    if ((uVar8 & 0x10000000) != 0) {
      iVar9 = 1;
LAB_100f5c9c:
      if (iVar1 != iVar9) {
        pcVar2 = *(code **)(*(int *)this + 0x48);
        guard_check_icall(iVar9,param_1);
        (*pcVar2)();
      }
      *(int *)(this + 8) = iVar9;
      return;
    }
  } while( true );
}

