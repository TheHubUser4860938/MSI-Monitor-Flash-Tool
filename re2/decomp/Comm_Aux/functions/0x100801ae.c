// rea decompile_all
// name: CPane::CreateDefaultMiniframe
// address: 0x100801ae
// body: available
// range: 0x100801ae-0x10080261 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CPaneFrameWnd * __thiscall CPane::CreateDefaultMiniframe(class CRect)
   
   Library: Visual Studio 2015 Release */

CPaneFrameWnd * __thiscall
CPane::CreateDefaultMiniframe
          (CPane *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  int *piVar2;
  CFrameWnd *pCVar3;
  CWnd *pCVar4;
  CDockingManager *pCVar5;
  int iVar6;
  CPaneFrameWnd *pCVar7;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  uStack_c = param_5;
  piVar2 = (int *)FUN_1004e514();
  if (piVar2 != (int *)0x0) {
    pCVar3 = AFXGetParentFrame((CWnd *)this);
    pcVar1 = *(code **)(*(int *)this + 0x19c);
    guard_check_icall();
    pCVar4 = (CWnd *)(*pcVar1)();
    pCVar5 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10205db4,pCVar4);
    piVar2[0x61] = (int)pCVar5;
    pcVar1 = *(code **)(*piVar2 + 0x204);
    guard_check_icall(0,0x80000000,&local_18,pCVar3,0);
    iVar6 = (*pcVar1)();
    if (iVar6 == 0) {
      pcVar1 = *(code **)(*piVar2 + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
  }
  pCVar7 = (CPaneFrameWnd *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar7;
}

