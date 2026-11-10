// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnEraseTabsButton
// address: 0x4a08b6
// body: available
// range: 0x4a08b6-0x4a0991 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnEraseTabsButton(class CDC
   *,class CRect,class CMFCButton *,class CMFCBaseTabCtrl *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnEraseTabsButton
          (CMFCVisualManagerOfficeXP *this,int param_1,LONG param_3,LONG param_4,LONG param_5,
          LONG param_6,CMFCButton *param_7,int *param_8)

{
  code *pcVar1;
  CMFCButton *pCVar2;
  int *piVar3;
  int iVar4;
  AFX_GLOBAL_DATA *pAVar5;
  HBRUSH pHVar6;
  
  piVar3 = param_8;
  pcVar1 = *(code **)(*param_8 + 0x280);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  pCVar2 = param_7;
  if (iVar4 == 0) {
    pHVar6 = (HBRUSH)0x0;
    if (piVar3[0x4d] == 0) {
      if (this != (CMFCVisualManagerOfficeXP *)0xfffffeec) {
        pHVar6 = *(HBRUSH *)(this + 0x118);
      }
    }
    else {
      pAVar5 = GetGlobalData();
      if (pAVar5 != (AFX_GLOBAL_DATA *)0xffffff68) {
        pHVar6 = *(HBRUSH *)(pAVar5 + 0x9c);
      }
    }
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,pHVar6);
  }
  else {
    iVar4 = CMFCButton::IsPressed(param_7);
    if (iVar4 == 0) {
      if (*(int *)(pCVar2 + 0xb4) == 0) {
        pAVar5 = GetGlobalData();
        pAVar5 = pAVar5 + 0xd0;
      }
      else {
        pAVar5 = (AFX_GLOBAL_DATA *)(this + 0x11c);
      }
    }
    else {
      pAVar5 = (AFX_GLOBAL_DATA *)(this + 0x124);
    }
    pHVar6 = (HBRUSH)0x0;
    if (pAVar5 != (AFX_GLOBAL_DATA *)0x0) {
      pHVar6 = *(HBRUSH *)(pAVar5 + 4);
    }
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,pHVar6);
    pcVar1 = *(code **)(*(int *)this + 0x314);
    guard_check_icall(param_1,param_3,param_4,param_5,param_6,pAVar5,0);
    (*pcVar1)();
  }
  return;
}

