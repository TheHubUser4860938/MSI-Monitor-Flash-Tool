// rea decompile_all
// name: CreateWrapper
// address: 0x484dfe
// body: available
// range: 0x484dfe-0x484f8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class CWnd * __thiscall CMFCBaseTabCtrl::CreateWrapper(class CWnd *,char
   const *,int)
    protected: virtual class CWnd * __thiscall CMFCBaseTabCtrl::CreateWrapper(class CWnd *,wchar_t
   const *,int)
   
   Library: Visual Studio 2015 Release */

void CreateWrapper(CWnd *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  CDockablePaneAdapter *this;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  undefined4 uVar7;
  undefined4 uVar8;
  uint local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x484e0a;
  iVar2 = FUN_0043970d(&PTR_s_CDockablePane_0060c780);
  if (((iVar2 == 0) && (param_3 != 0)) && (*(int *)(in_ECX + 0x80) != 0)) {
    if (*(int *)(in_ECX + 0x188) == 0) {
      this = (CDockablePaneAdapter *)FUN_00416408(0x380);
      local_8 = 0;
      if (this == (CDockablePaneAdapter *)0x0) {
        pCVar3 = (CObject *)0x0;
      }
      else {
        pCVar3 = (CObject *)CDockablePaneAdapter::CDockablePaneAdapter(this);
      }
      local_8 = 0xffffffff;
    }
    else {
      pCVar3 = (CObject *)FUN_00439696();
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePaneAdapter_0060ca28,pCVar3);
    }
    local_28 = 0x56000000;
    local_24 = *(int *)(pCVar3 + 0x368);
    iStack_20 = *(int *)(pCVar3 + 0x36c);
    iStack_1c = *(int *)(pCVar3 + 0x370);
    iStack_18 = *(int *)(pCVar3 + 0x374);
    iVar2 = *(int *)(pCVar3 + 0x348);
    iVar4 = FUN_0043970d(&PTR_s_CBasePane_005c4284);
    if (iVar4 == 0) {
      uVar5 = 0xf;
    }
    else {
      pcVar1 = *(code **)(*(int *)param_1 + 0x1c0);
      guard_check_icall();
      local_28 = (*pcVar1)();
      local_28 = local_28 | 0x56000000;
      pcVar1 = *(code **)(*(int *)param_1 + 0x1c4);
      guard_check_icall();
      uVar5 = (*pcVar1)();
    }
    iVar4 = *(int *)pCVar3;
    uVar8 = 0;
    uVar7 = 0x20;
    iVar6 = CWnd::GetDlgCtrlID(param_1);
    pcVar1 = *(code **)(iVar4 + 0x324);
    guard_check_icall(param_2,in_ECX,&local_24,1,iVar6,local_28,uVar7,uVar5,uVar8);
    iVar4 = (*pcVar1)();
    if (iVar4 == 0) {
      pcVar1 = *(code **)(*(int *)pCVar3 + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
    else {
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x1f0);
      guard_check_icall(0);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x3a0);
      guard_check_icall(param_1);
      (*pcVar1)();
      *(int *)(pCVar3 + 0x1e8) = local_24;
      *(int *)(pCVar3 + 0x1ec) = iStack_20;
      *(int *)(pCVar3 + 0x1f0) = iStack_1c;
      *(int *)(pCVar3 + 500) = iStack_18;
      if (iVar2 != 0) {
        *(int *)(pCVar3 + 0x348) = iVar2;
      }
    }
  }
  FUN_0055bae6();
  return;
}

