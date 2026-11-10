// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawTearOffCaption
// address: 0x1011ff73
// body: available
// range: 0x1011ff73-0x10120085 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnDrawTearOffCaption(class CDC
   *,class CRect,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnDrawTearOffCaption
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,LONG param_3,LONG param_4,LONG param_5,
          LONG param_6,int param_7)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  int iVar3;
  HBRUSH pHVar4;
  
  pAVar2 = GetGlobalData();
  if (8 < *(int *)(pAVar2 + 0x1ac)) {
    pAVar2 = GetGlobalData();
    iVar3 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar2);
    if (iVar3 == 0) {
      pHVar4 = (HBRUSH)0x0;
      if (this != (CMFCVisualManagerOffice2003 *)0xfffffef4) {
        pHVar4 = *(HBRUSH *)(this + 0x110);
      }
      FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,pHVar4);
      InflateRect((LPRECT)&param_3,-1,-1);
      if (param_7 == 0) {
        pHVar4 = (HBRUSH)0x0;
        if (this != (CMFCVisualManagerOffice2003 *)0xfffffe08) {
          pHVar4 = *(HBRUSH *)(this + 0x1fc);
        }
        FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,pHVar4);
      }
      else {
        pcVar1 = *(code **)(*(int *)this + 0x314);
        guard_check_icall(param_1,param_3,param_4,param_5,param_6,this + 0x11c,0);
        (*pcVar1)();
      }
      iVar3 = *(int *)this;
      guard_check_icall(param_1,param_3,param_4,param_5,param_6,0,0);
      (**(code **)(iVar3 + 0x44))();
      if (param_7 == 0) {
        return;
      }
      CDC::Draw3dRect(param_1,(tagRECT *)&param_3,*(ulong *)(this + 0xe4),*(ulong *)(this + 0xe4));
      return;
    }
  }
  CMFCVisualManagerOfficeXP::OnDrawTearOffCaption
            ((CMFCVisualManagerOfficeXP *)this,param_1,param_3,param_4,param_5,param_6,param_7);
  return;
}

