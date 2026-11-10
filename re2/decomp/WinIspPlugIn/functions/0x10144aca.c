// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawMenuResizeBar
// address: 0x10144aca
// body: available
// range: 0x10144aca-0x10144c47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnDrawMenuResizeBar(class CDC
   *,class CRect,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnDrawMenuResizeBar
          (CMFCVisualManagerOfficeXP *this,int *param_1,int param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  code *pcVar1;
  HBRUSH pHVar2;
  AFX_GLOBAL_DATA *pAVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  CMFCVisualManagerOfficeXP *pCVar10;
  undefined4 uVar11;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (this == (CMFCVisualManagerOfficeXP *)0xfffffef4) {
    pHVar2 = (HBRUSH)0x0;
  }
  else {
    pHVar2 = *(HBRUSH *)(this + 0x110);
  }
  FillRect((HDC)param_1[1],(RECT *)&param_3,pHVar2);
  InflateRect((LPRECT)&param_3,-1,-1);
  pCVar10 = this + 0xfc;
  uVar11 = 0;
  pcVar1 = *(code **)(*(int *)this + 0x314);
  piVar5 = param_1;
  iVar6 = param_3;
  iVar7 = param_4;
  iVar8 = param_5;
  iVar9 = param_6;
  guard_check_icall(param_1,param_3,param_4,param_5,param_6,pCVar10,0);
  (*pcVar1)();
  local_18.top = param_4;
  local_18.right = param_5;
  local_18.bottom = param_6;
  if ((param_7 == 1) || (param_7 == 3)) {
    local_18.left = (param_5 - param_6) + param_4;
  }
  else {
    local_18.left = (param_5 + param_3) / 2 - (param_6 - param_4) / 2;
    local_18.right = (param_6 - param_4) + local_18.left;
  }
  InflateRect(&local_18,-2,-2);
  if ((this == (CMFCVisualManagerOfficeXP *)0xffffff14) || (*(int *)(this + 0xf0) == 0)) {
    pcVar1 = *(code **)(*(int *)this + 0x308);
    guard_check_icall(piVar5,iVar6,iVar7,iVar8,iVar9,pCVar10,uVar11);
    (*pcVar1)();
  }
  iVar6 = *param_1;
  pAVar3 = GetGlobalData();
  guard_check_icall(*(undefined4 *)(pAVar3 + 0x58));
  uVar11 = (**(code **)(iVar6 + 0x30))();
  pcVar1 = *(code **)(*param_1 + 0x2c);
  guard_check_icall(*(undefined4 *)(this + 0xb8));
  uVar4 = (*pcVar1)();
  if (this == (CMFCVisualManagerOfficeXP *)0xffffff14) {
    pHVar2 = (HBRUSH)0x0;
  }
  else {
    pHVar2 = *(HBRUSH *)(this + 0xf0);
  }
  FillRect((HDC)param_1[1],&local_18,pHVar2);
  pcVar1 = *(code **)(*param_1 + 0x30);
  guard_check_icall(uVar11);
  (*pcVar1)();
  pcVar1 = *(code **)(*param_1 + 0x2c);
  guard_check_icall(uVar4);
  (*pcVar1)();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

