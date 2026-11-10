// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnFillCaptionBarButton
// address: 0x10147526
// body: available
// range: 0x10147526-0x10147601 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual unsigned long __thiscall
   CMFCVisualManagerOfficeXP::OnFillCaptionBarButton(class CDC *,class CMFCCaptionBar *,class
   CRect,int,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOfficeXP::OnFillCaptionBarButton
          (CMFCVisualManagerOfficeXP *this,int param_1,int param_2,LONG param_4,LONG param_5,
          LONG param_6,LONG param_7,undefined4 param_8,int param_9,int param_10,undefined4 param_11,
          int param_12)

{
  code *pcVar1;
  ulong uVar2;
  AFX_GLOBAL_DATA *pAVar3;
  HBRUSH hbr;
  
  hbr = (HBRUSH)0x0;
  if (*(int *)(param_2 + 0x2c4) == 0) {
    uVar2 = CMFCVisualManager::OnFillCaptionBarButton
                      ((CMFCVisualManager *)this,param_1,param_2,param_4,param_5,param_6,param_7,
                       param_8,param_9,param_10,param_11,param_12);
  }
  else if (param_10 == 0) {
    pAVar3 = GetGlobalData();
    uVar2 = *(ulong *)(pAVar3 + 0x68);
    if (param_9 == 0) {
      if (param_12 == 0) {
        if (this != (CMFCVisualManagerOfficeXP *)0xfffffef4) {
          hbr = *(HBRUSH *)(this + 0x110);
        }
        FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_4,hbr);
      }
    }
    else {
      pcVar1 = *(code **)(*(int *)this + 0x314);
      guard_check_icall(param_1,param_4,param_5,param_6,param_7,this + 0x11c,0);
      (*pcVar1)();
      if ((((byte)this[200] < 0x81) || ((byte)this[0xc9] < 0x81)) || ((byte)this[0xca] < 0x81)) {
        uVar2 = 0xffffff;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

