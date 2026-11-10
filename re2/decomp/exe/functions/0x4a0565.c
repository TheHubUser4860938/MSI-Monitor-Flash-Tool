// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawTearOffCaption
// address: 0x4a0565
// body: available
// range: 0x4a0565-0x4a0727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnDrawTearOffCaption(class CDC
   *,class CRect,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnDrawTearOffCaption
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,int param_3,LONG param_4,int param_5,
          LONG param_6,int param_7)

{
  CMFCVisualManagerOfficeXP *pCVar1;
  code *pcVar2;
  CMFCVisualManagerOfficeXP *pCVar3;
  HBRUSH pHVar4;
  int *piVar5;
  AFX_GLOBAL_DATA *pAVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined1 local_24 [4];
  undefined4 local_20;
  CMFCVisualManagerOfficeXP *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (this == (CMFCVisualManagerOfficeXP *)0xfffffef4) {
    pHVar4 = (HBRUSH)0x0;
  }
  else {
    pHVar4 = *(HBRUSH *)(this + 0x110);
  }
  local_1c = this;
  FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,pHVar4);
  InflateRect((LPRECT)&param_3,-1,-1);
  pcVar2 = *(code **)(*(int *)this + 0x314);
  guard_check_icall(param_1,param_3,param_4,param_5,param_6,
                    this + (-(uint)(param_7 != 0) & 0x20) + 0xfc,0);
  (*pcVar2)();
  piVar5 = (int *)FUN_00453431(local_2c);
  iVar8 = 0x14;
  if (0x13 < *piVar5 * 2) {
    piVar5 = (int *)FUN_00453431(local_24);
    iVar8 = *piVar5 * 2;
  }
  local_18.left = param_3;
  local_18.top = param_4;
  local_18.right = param_5;
  local_18.bottom = param_6;
  InflateRect(&local_18,-(((param_5 - param_3) - iVar8) / 2),-1);
  pCVar3 = local_1c;
  pCVar1 = local_1c + 0xec;
  if ((pCVar1 == (CMFCVisualManagerOfficeXP *)0x0) || (*(int *)(local_1c + 0xf0) == 0)) {
    pcVar2 = *(code **)(*(int *)local_1c + 0x308);
    local_1c = pCVar1;
    guard_check_icall();
    (*pcVar2)();
    pCVar1 = local_1c;
  }
  local_1c = pCVar1;
  pAVar6 = GetGlobalData();
  if (param_7 == 0) {
    uVar7 = *(undefined4 *)(pAVar6 + 0x58);
  }
  else {
    uVar7 = *(undefined4 *)(pAVar6 + 0x60);
  }
  pcVar2 = *(code **)(*(int *)param_1 + 0x30);
  guard_check_icall(uVar7);
  local_20 = (*pcVar2)();
  if (param_7 == 0) {
    iVar8 = *(int *)(pCVar3 + 0xb8);
  }
  else {
    iVar8 = *(int *)(pCVar3 + 200);
  }
  pcVar2 = *(code **)(*(int *)param_1 + 0x2c);
  guard_check_icall(iVar8);
  local_28 = (*pcVar2)();
  iVar8 = param_7;
  pHVar4 = (HBRUSH)0x0;
  if (param_7 != 0) {
    InflateRect(&local_18,0,-1);
  }
  if (local_1c != (CMFCVisualManagerOfficeXP *)0x0) {
    pHVar4 = *(HBRUSH *)(local_1c + 4);
  }
  FillRect(*(HDC *)(param_1 + 4),&local_18,pHVar4);
  pcVar2 = *(code **)(*(int *)param_1 + 0x30);
  guard_check_icall(local_20);
  (*pcVar2)();
  pcVar2 = *(code **)(*(int *)param_1 + 0x2c);
  guard_check_icall(local_28);
  (*pcVar2)();
  if (iVar8 != 0) {
    pAVar6 = GetGlobalData();
    uVar9 = *(ulong *)(pAVar6 + 0x60);
    pAVar6 = GetGlobalData();
    CDC::Draw3dRect(param_1,(tagRECT *)&param_3,*(ulong *)(pAVar6 + 0x60),uVar9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

