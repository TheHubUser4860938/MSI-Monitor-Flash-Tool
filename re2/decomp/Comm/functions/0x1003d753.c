// rea decompile_all
// name: CMFCPropertyGridCtrl::Init
// address: 0x1003d753
// body: available
// range: 0x1003d753-0x1003d982 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCPropertyGridCtrl::Init(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPropertyGridCtrl::Init(CMFCPropertyGridCtrl *this)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  AFX_MODULE_STATE *pAVar3;
  HCURSOR pHVar4;
  int iVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  undefined4 uVar8;
  undefined4 local_4c [2];
  wchar_t *local_44;
  undefined4 local_3c;
  undefined4 local_38;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  uVar8 = 0;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  pAVar2 = GetGlobalData();
  if (*(int *)(pAVar2 + 0xf0) == 0) {
    AfxGetModuleState();
    pAVar3 = AfxGetModuleState();
    pHVar4 = LoadCursorW(*(HINSTANCE *)(pAVar3 + 0xc),(LPCWSTR)0x7904);
    pAVar2 = GetGlobalData();
    *(HCURSOR *)(pAVar2 + 0xf0) = pHVar4;
  }
  pAVar2 = GetGlobalData();
  if (*(int *)(pAVar2 + 0xf4) == 0) {
    AfxGetModuleState();
    pAVar3 = AfxGetModuleState();
    pHVar4 = LoadCursorW(*(HINSTANCE *)(pAVar3 + 0xc),(LPCWSTR)0x7905);
    pAVar2 = GetGlobalData();
    *(HCURSOR *)(pAVar2 + 0xf4) = pHVar4;
  }
  pcVar1 = *(code **)(*(int *)this + 0x194);
  guard_check_icall();
  (*pcVar1)();
  local_4c[0] = 6;
  local_38 = 0;
  local_44 = L"Property";
  pcVar1 = *(code **)(*(int *)this + 0x164);
  local_3c = 100;
  guard_check_icall();
  iVar5 = (*pcVar1)();
  SendMessageW(*(HWND *)(iVar5 + 0x20),0x120a,0,(LPARAM)local_4c);
  local_44 = L"Value";
  local_3c = 100;
  pcVar1 = *(code **)(*(int *)this + 0x164);
  guard_check_icall();
  iVar5 = (*pcVar1)();
  SendMessageW(*(HWND *)(iVar5 + 0x20),0x120a,1,(LPARAM)local_4c);
  pcVar1 = *(code **)(*(int *)(this + 0x278) + 0x164);
  guard_check_icall(0x50000001,&local_18,this,2);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)(this + 0x80) + 0x164);
  guard_check_icall(this,1);
  (*pcVar1)();
  SendMessageW(*(HWND *)(this + 0xa0),0x401,1,0);
  pAVar2 = GetGlobalData();
  if (*(int *)(pAVar2 + 0x1c4) != -1) {
    pAVar2 = GetGlobalData();
    SendMessageW(*(HWND *)(this + 0xa0),0x418,0,*(LPARAM *)(pAVar2 + 0x1c4));
  }
  CWnd::SetWindowPos((CWnd *)(this + 0x80),(CWnd *)&DAT_101da328,-1,-1,-1,-1,0x13);
  pcVar1 = *(code **)(*(int *)(this + 0x1d8) + 0x164);
  guard_check_icall(this);
  (*pcVar1)();
  pHVar6 = GetParent(*(HWND *)(this + 0x20));
  pCVar7 = CWnd::FromHandle(pHVar6);
  if (pCVar7 != (CWnd *)0x0) {
    iVar5 = FUN_10019d4f(&PTR_s_CDialog_10180a68);
    if (iVar5 != 0) goto LAB_1003d94b;
  }
  uVar8 = 1;
LAB_1003d94b:
  *(undefined4 *)(this + 0x394) = uVar8;
  pcVar1 = *(code **)(*(int *)this + 0x170);
  guard_check_icall();
  (*pcVar1)();
  CreateBoldFont(this);
  CalcEditMargin(this);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

