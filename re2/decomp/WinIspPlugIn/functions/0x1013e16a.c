// rea decompile_all
// name: CScreenWnd::Create
// address: 0x1013e16a
// body: available
// range: 0x1013e16a-0x1013e21b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CScreenWnd::Create(class CMFCColorDialog *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CScreenWnd::Create(CScreenWnd *this,CMFCColorDialog *param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  AFX_MODULE_STATE *pAVar3;
  HCURSOR pHVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x1013e176;
  pHVar1 = GetDesktopWindow();
  pCVar2 = CWnd::FromHandle(pHVar1);
  if (pCVar2 != (CWnd *)0x0) {
    *(CMFCColorDialog **)(this + 0x80) = param_1;
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetWindowRect(*(HWND *)(pCVar2 + 0x20),&local_24);
    AfxGetModuleState();
    pAVar3 = AfxGetModuleState();
    pHVar4 = LoadCursorW(*(HINSTANCE *)(pAVar3 + 0xc),(LPCWSTR)0x3f11);
    uVar5 = AfxRegisterWndClass(0x800,pHVar4,0x10,0);
    FUN_10047180(uVar5);
    local_8 = 0;
    CreateEx(0xa0,local_28,&PTR_1020e6b0,0x90000000,&local_24,0,0,0);
    FUN_100476d0();
  }
  iVar6 = FUN_1018015d();
  return iVar6;
}

