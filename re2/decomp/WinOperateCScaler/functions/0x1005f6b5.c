// rea decompile_all
// name: CMFCBaseVisualManager::DrawPushButton
// address: 0x1005f6b5
// body: available
// range: 0x1005f6b5-0x1005f796 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseVisualManager::DrawPushButton(class CDC *,class
   CRect,class CMFCButton *,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCBaseVisualManager::DrawPushButton
          (CMFCBaseVisualManager *this,int param_1,LONG param_3,LONG param_4,LONG param_5,
          LONG param_6,CWnd *param_7)

{
  code *pcVar1;
  CWnd *this_00;
  int iVar2;
  LRESULT LVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  HDC hdc;
  int local_8;
  
  this_00 = param_7;
  if (*(int *)(this + 0x10) != 0) {
    local_8 = 1;
    iVar2 = CWnd::IsWindowEnabled(param_7);
    if (iVar2 == 0) {
      local_8 = 4;
    }
    else {
      iVar2 = CMFCButton::IsPressed((CMFCButton *)this_00);
      if ((iVar2 == 0) && (LVar3 = SendMessageW(*(HWND *)(this_00 + 0x20),0xf0,0,0), LVar3 == 0)) {
        if (*(int *)(this_00 + 0xb4) == 0) {
          pHVar4 = GetFocus();
          pCVar5 = CWnd::FromHandle(pHVar4);
          if (pCVar5 == this_00) {
            local_8 = 5;
          }
        }
        else {
          local_8 = 2;
        }
      }
      else {
        local_8 = 3;
      }
    }
    pcVar1 = *(code **)(*(int *)this_00 + 0x174);
    guard_check_icall(param_1,param_3,param_4,param_5,param_6);
    (*pcVar1)();
    if (param_1 == 0) {
      hdc = (HDC)0x0;
    }
    else {
      hdc = *(HDC *)(param_1 + 4);
    }
    DrawThemeBackground(*(HTHEME *)(this + 0x10),hdc,1,local_8,(LPCRECT)&param_3,(LPCRECT)0x0);
    return 1;
  }
  return 0;
}

