// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawBrowseButton
// address: 0x49d3e4
// body: available
// range: 0x49d3e4-0x49d4e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCVisualManagerOfficeXP::OnDrawBrowseButton(class CDC
   *,class CRect,class CMFCEditBrowseCtrl *,enum CMFCVisualManager::AFX_BUTTON_STATE,unsigned long
   &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCVisualManagerOfficeXP::OnDrawBrowseButton
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,LONG param_3,int param_4,int param_5,
          int param_6,undefined4 param_7,int param_8)

{
  AFX_GLOBAL_DATA *pAVar1;
  HBRUSH pHVar2;
  tagRECT *ptVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_18.top = param_4 + -1;
  local_18.left = param_3;
  local_18.right = param_5 + 1;
  local_18.bottom = param_6 + 1;
  if (param_8 == 1) {
    if (this == (CMFCVisualManagerOfficeXP *)0xfffffedc) {
      pHVar2 = (HBRUSH)0x0;
    }
    else {
      pHVar2 = *(HBRUSH *)(this + 0x128);
    }
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,pHVar2);
    CDC::Draw3dRect(param_1,&local_18,*(ulong *)(this + 0xe8),*(ulong *)(this + 0xe8));
    iVar4 = *(int *)param_1;
    pAVar1 = GetGlobalData();
    guard_check_icall(*(undefined4 *)(pAVar1 + 0x6c));
    (**(code **)(iVar4 + 0x30))();
  }
  else {
    if (param_8 == 2) {
      if (this == (CMFCVisualManagerOfficeXP *)0xfffffee4) {
        pHVar2 = (HBRUSH)0x0;
      }
      else {
        pHVar2 = *(HBRUSH *)(this + 0x120);
      }
      FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,pHVar2);
      uVar5 = *(ulong *)(this + 0xe8);
      ptVar3 = &local_18;
      uVar6 = uVar5;
    }
    else {
      pAVar1 = GetGlobalData();
      pHVar2 = (HBRUSH)0x0;
      if (pAVar1 != (AFX_GLOBAL_DATA *)0xffffff68) {
        pHVar2 = *(HBRUSH *)(pAVar1 + 0x9c);
      }
      FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,pHVar2);
      pAVar1 = GetGlobalData();
      uVar6 = *(ulong *)(pAVar1 + 0x5c);
      pAVar1 = GetGlobalData();
      uVar5 = *(ulong *)(pAVar1 + 0x5c);
      ptVar3 = (tagRECT *)&param_3;
    }
    CDC::Draw3dRect(param_1,ptVar3,uVar5,uVar6);
  }
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

