// rea decompile_all
// name: CDockablePane::CreateDefaultPaneDivider
// address: 0x1012aaa4
// body: available
// range: 0x1012aaa4-0x1012ab94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static class CPaneDivider * __stdcall CDockablePane::CreateDefaultPaneDivider(unsigned
   long,class CWnd *,struct CRuntimeClass *)
   
   Library: Visual Studio 2015 Release */

CPaneDivider *
CDockablePane::CreateDefaultPaneDivider(ulong param_1,CWnd *param_2,CRuntimeClass *param_3)

{
  code *pcVar1;
  CObject *pCVar2;
  int iVar3;
  CPaneDivider *pCVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  local_14 = 0;
  local_10 = DAT_1023dce0;
  local_c = DAT_1023dce0;
  if (param_3 == (CRuntimeClass *)0x0) {
    pCVar2 = (CObject *)FUN_10051ddc();
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_101f8380,pCVar2);
    CPaneDivider::Init((CPaneDivider *)pCVar2,1,(CWnd *)0x0);
  }
  else {
    pCVar2 = (CObject *)FUN_10051ddc();
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_101f8380,pCVar2);
    *(undefined4 *)(pCVar2 + 300) = 1;
  }
  pcVar1 = *(code **)(*(int *)pCVar2 + 0x2a8);
  guard_check_icall(0,((param_1 & 0x5000) != 0) + 1 | 0x10000000,&local_18,param_2,0xffffffff,0);
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    pcVar1 = *(code **)(*(int *)pCVar2 + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  else {
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x1e0);
    guard_check_icall(param_1);
    (*pcVar1)();
  }
  pCVar4 = (CPaneDivider *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar4;
}

