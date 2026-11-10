// rea decompile_all
// name: CMFCTasksPaneFrameWnd::OnNcPaint
// address: 0x1014faa3
// body: available
// range: 0x1014faa3-0x1014fbb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTasksPaneFrameWnd::OnNcPaint(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTasksPaneFrameWnd::OnNcPaint(CMFCTasksPaneFrameWnd *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  CObject *pCVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int local_10;
  int local_c;
  int local_8;
  
  pcVar1 = *(code **)(*(int *)this + 0x1a8);
  guard_check_icall();
  pCVar4 = (CObject *)(*pcVar1)();
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTasksPane_1020621c,pCVar4);
  if ((pCVar4 == (CObject *)0x0) || (local_c = 1, *(int *)(pCVar4 + 0x470) < 2)) {
    local_c = 0;
  }
  if ((pCVar4 == (CObject *)0x0) || (local_8 = 1, *(int *)(pCVar4 + 0x36c) == 0)) {
    local_8 = 0;
  }
  iVar3 = local_8;
  local_10 = *(int *)(this + 0x10c);
  while (local_10 != 0) {
    piVar5 = (int *)FUN_10034920(&local_10);
    iVar2 = *piVar5;
    iVar6 = FUN_1014d4d1();
    if (iVar6 - 0x17U < 3) {
      if ((local_c == 0) || (iVar3 != 0)) {
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
      *(undefined4 *)(iVar2 + 0xc) = uVar7;
    }
    iVar6 = FUN_1014d4d1();
    if (iVar6 == 0x17) {
      if ((pCVar4 == (CObject *)0x0) || (*(int *)(pCVar4 + 0x38c) < 1)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      *(undefined4 *)(iVar2 + 0x10) = uVar7;
    }
    iVar6 = FUN_1014d4d1();
    if (iVar6 == 0x18) {
      if ((pCVar4 == (CObject *)0x0) || (*(int *)(pCVar4 + 0x530) + -1 <= *(int *)(pCVar4 + 0x38c)))
      {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      *(undefined4 *)(iVar2 + 0x10) = uVar7;
    }
  }
  CPaneFrameWnd::UpdateTooltips((CPaneFrameWnd *)this);
  CPaneFrameWnd::OnNcPaint((CPaneFrameWnd *)this);
  return;
}

