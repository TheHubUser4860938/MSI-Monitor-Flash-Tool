// rea decompile_all
// name: CDockablePane::DockPaneStandard
// address: 0x1012b1fd
// body: available
// range: 0x1012b1fd-0x1012b38c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CPane * __thiscall CDockablePane::DockPaneStandard(int &)
   
   Library: Visual Studio 2015 Release */

CPane * __thiscall CDockablePane::DockPaneStandard(CDockablePane *this,int *param_1)

{
  code *pcVar1;
  char cVar2;
  SHORT SVar3;
  int iVar4;
  CObject *pCVar5;
  CObject *pCVar6;
  uint uVar7;
  CPane *pCVar8;
  undefined4 uVar9;
  CDockablePane *pCVar10;
  CObject *local_8;
  
  local_8 = (CObject *)0x0;
  pcVar1 = *(code **)(*(int *)this + 0x1b8);
  guard_check_icall();
  cVar2 = (*pcVar1)();
  uVar9 = DAT_1023d904;
  if (cVar2 < '\0') {
    uVar9 = 0xffffffff;
  }
  pcVar1 = *(code **)(*(int *)this + 0x2b4);
  guard_check_icall(uVar9,&local_8);
  iVar4 = (*pcVar1)();
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1023db9c,local_8);
  if ((pCVar5 != (CObject *)this) && (SVar3 = GetAsyncKeyState(0x11), -1 < SVar3)) {
    if (pCVar5 == (CObject *)0x0) {
      pCVar6 = (CObject *)0x0;
    }
    else {
      pcVar1 = *(code **)(*(int *)pCVar5 + 0x228);
      guard_check_icall(0);
      pCVar6 = (CObject *)(*pcVar1)();
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_1023d950,pCVar6);
    }
    if (iVar4 == 2) {
      if (pCVar6 != (CObject *)0x0) {
        pcVar1 = *(code **)(*(int *)this + 0x1c0);
        guard_check_icall();
        uVar7 = (*pcVar1)();
        if ((uVar7 & 0x40) == 0) {
          return (CPane *)0x0;
        }
        if (local_8 != (CObject *)0x0) {
          pcVar1 = *(code **)(*(int *)pCVar6 + 0x24c);
          guard_check_icall(this);
          iVar4 = (*pcVar1)();
          *param_1 = (uint)(iVar4 == 0);
          return (CPane *)this;
        }
      }
      pcVar1 = *(code **)(*(int *)this + 0x1f8);
      guard_check_icall(pCVar5,0,5);
      iVar4 = (*pcVar1)();
      *param_1 = iVar4;
    }
    else if ((iVar4 == 3) && (pCVar5 != (CObject *)0x0)) {
      pcVar1 = *(code **)(*(int *)pCVar5 + 0x184);
      pCVar10 = this;
      guard_check_icall(this);
      iVar4 = (*pcVar1)();
      if (iVar4 != 0) {
        pcVar1 = *(code **)(*(int *)this + 0x18c);
        guard_check_icall(pCVar10);
        iVar4 = (*pcVar1)();
        if (iVar4 != 0) {
          pcVar1 = *(code **)(*(int *)this + 0x240);
          guard_check_icall(0);
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)this + 0x34c);
          guard_check_icall(pCVar5,5,1,0);
          pCVar8 = (CPane *)(*pcVar1)();
          *param_1 = (uint)(pCVar8 != (CPane *)0x0);
          return pCVar8;
        }
      }
    }
  }
  return (CPane *)0x0;
}

