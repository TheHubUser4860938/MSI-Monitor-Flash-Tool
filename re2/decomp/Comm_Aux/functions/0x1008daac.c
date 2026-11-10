// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonStatusBarPane
// address: 0x1008daac
// body: available
// range: 0x1008daac-0x1008db76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManager::OnDrawRibbonStatusBarPane(class CDC
   *,class CMFCRibbonStatusBar *,class CMFCRibbonStatusBarPane *)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManager::OnDrawRibbonStatusBarPane
          (CMFCVisualManager *this,CDC *param_1,CMFCRibbonStatusBar *param_2,
          CMFCRibbonStatusBarPane *param_3)

{
  LONG LVar1;
  LONG LVar2;
  LONG LVar3;
  LONG LVar4;
  code *pcVar5;
  int iVar6;
  AFX_GLOBAL_DATA *pAVar7;
  ulong uVar8;
  ulong uVar9;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  LVar1 = *(LONG *)(param_3 + 0x74);
  LVar2 = *(LONG *)(param_3 + 0x78);
  LVar3 = *(LONG *)(param_3 + 0x7c);
  LVar4 = *(LONG *)(param_3 + 0x80);
  pcVar5 = *(code **)(*(int *)param_3 + 0xd0);
  guard_check_icall();
  iVar6 = (*pcVar5)();
  if (iVar6 != 0) {
    local_18.left = LVar1;
    local_18.top = LVar2;
    local_18.right = LVar3;
    local_18.bottom = LVar4;
    InflateRect(&local_18,-1,-1);
    pcVar5 = *(code **)(*(int *)param_3 + 0xd8);
    guard_check_icall();
    iVar6 = (*pcVar5)();
    if (iVar6 == 0) {
      pAVar7 = GetGlobalData();
      uVar9 = *(ulong *)(pAVar7 + 0x58);
    }
    else {
      pAVar7 = GetGlobalData();
      uVar9 = *(ulong *)(pAVar7 + 0x5c);
    }
    pcVar5 = *(code **)(*(int *)param_3 + 0xd8);
    guard_check_icall();
    iVar6 = (*pcVar5)();
    if (iVar6 == 0) {
      pAVar7 = GetGlobalData();
      uVar8 = *(ulong *)(pAVar7 + 0x5c);
    }
    else {
      pAVar7 = GetGlobalData();
      uVar8 = *(ulong *)(pAVar7 + 0x58);
    }
    CDC::Draw3dRect(param_1,&local_18,uVar8,uVar9);
  }
  uVar9 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar9;
}

