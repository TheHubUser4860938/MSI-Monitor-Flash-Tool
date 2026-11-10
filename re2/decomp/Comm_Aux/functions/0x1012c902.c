// rea decompile_all
// name: CDockablePane::OnPressCloseButton
// address: 0x1012c902
// body: available
// range: 0x1012c902-0x1012c9a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CDockablePane::OnPressCloseButton(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockablePane::OnPressCloseButton(CDockablePane *this)

{
  code *pcVar1;
  CFrameWnd *pCVar2;
  CObject *pCVar3;
  LRESULT LVar4;
  int iVar5;
  undefined4 uVar6;
  
  pCVar2 = AFXGetParentFrame((CWnd *)this);
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_101bf4c8,(CObject *)pCVar2);
  if ((pCVar3 != (CObject *)0x0) &&
     (LVar4 = SendMessageW(*(HWND *)(pCVar3 + 0x20),DAT_10210694,0,(LPARAM)this), LVar4 != 0)) {
    return;
  }
  pcVar1 = *(code **)(*(int *)this + 0x1dc);
  guard_check_icall();
  iVar5 = (*pcVar1)();
  if (iVar5 != 0) {
    iVar5 = *(int *)this;
    pcVar1 = *(code **)(iVar5 + 0x194);
    guard_check_icall(0,1);
    uVar6 = (*pcVar1)();
    pcVar1 = *(code **)(iVar5 + 0x368);
    guard_check_icall(0,uVar6);
    (*pcVar1)();
  }
  pcVar1 = *(code **)(*(int *)this + 0x224);
  guard_check_icall(0,0,0);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x268);
  guard_check_icall(0);
  (*pcVar1)();
  return;
}

