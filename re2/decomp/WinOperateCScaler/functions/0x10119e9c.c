// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawRibbonStatusBarPane
// address: 0x10119e9c
// body: available
// range: 0x10119e9c-0x10119fc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual unsigned long __thiscall
   CMFCVisualManagerOfficeXP::OnDrawRibbonStatusBarPane(class CDC *,class CMFCRibbonStatusBar
   *,class CMFCRibbonStatusBarPane *)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOfficeXP::OnDrawRibbonStatusBarPane
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,CMFCRibbonStatusBar *param_2,
          CMFCRibbonStatusBarPane *param_3)

{
  LONG LVar1;
  LONG LVar2;
  LONG LVar3;
  code *pcVar4;
  int iVar5;
  AFX_GLOBAL_DATA *pAVar6;
  int iVar7;
  ulong uVar8;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  LVar1 = *(LONG *)(param_3 + 0x74);
  LVar2 = *(LONG *)(param_3 + 0x78);
  iVar7 = *(int *)(param_3 + 0x7c);
  LVar3 = *(LONG *)(param_3 + 0x80);
  pcVar4 = *(code **)(*(int *)param_3 + 0xd0);
  guard_check_icall();
  iVar5 = (*pcVar4)();
  if (iVar5 != 0) {
    local_28.left = LVar1;
    local_28.top = LVar2;
    local_28.right = iVar7;
    local_28.bottom = LVar3;
    InflateRect(&local_28,-1,-1);
    pcVar4 = *(code **)(*(int *)param_3 + 0xd8);
    guard_check_icall();
    iVar5 = (*pcVar4)();
    pcVar4 = *(code **)(*(int *)this + 0x314);
    guard_check_icall(param_1,local_28.left,local_28.top,local_28.right,local_28.bottom,
                      this + (-(uint)(iVar5 != 0) & 8) + 0x11c,0);
    (*pcVar4)();
    CDC::Draw3dRect(param_1,&local_28,*(ulong *)(this + 0xe8),*(ulong *)(this + 0xe8));
  }
  local_18.left = LVar1;
  local_18.top = LVar2;
  local_18.right = iVar7;
  local_18.bottom = LVar3;
  InflateRect(&local_18,0,-2);
  local_18.left = local_18.right + -1;
  pAVar6 = GetGlobalData();
  uVar8 = *(ulong *)(pAVar6 + 0x58);
  pAVar6 = GetGlobalData();
  CDC::Draw3dRect(param_1,&local_18,*(ulong *)(pAVar6 + 0x58),uVar8);
  pAVar6 = GetGlobalData();
  iVar7 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar6);
  if (iVar7 != 0) {
    GetGlobalData();
  }
  uVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar8;
}

