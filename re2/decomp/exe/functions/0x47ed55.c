// rea decompile_all
// name: CPane::AdjustSizeImmediate
// address: 0x47ed55
// body: available
// range: 0x47ed55-0x47ee64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPane::AdjustSizeImmediate(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPane::AdjustSizeImmediate(CPane *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  undefined4 uVar6;
  CFrameWnd *pCVar7;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  pHVar3 = GetParent(*(HWND *)(this + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCReBar_005c60fc,(CObject *)pCVar4);
  if (pCVar5 == (CObject *)0x0) {
    iVar1 = *(int *)this;
    pcVar2 = *(code **)(iVar1 + 0x164);
    guard_check_icall();
    uVar6 = (*pcVar2)();
    pcVar2 = *(code **)(iVar1 + 0x260);
    guard_check_icall(&local_20,0,uVar6);
    (*pcVar2)();
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    if ((local_18.right - local_18.left != local_20) || (local_18.bottom - local_18.top != local_1c)
       ) {
      pcVar2 = *(code **)(*(int *)this + 0x238);
      guard_check_icall(0,0,0,local_20,local_1c,0x16,0);
      (*pcVar2)();
    }
    if ((*(int *)(this + 0xb8) != 0) && (UpdateVirtualRect(this), param_1 != 0)) {
      pcVar2 = *(code **)(**(int **)(this + 0xbc) + 0x28);
      guard_check_icall(this);
      (*pcVar2)();
      pCVar7 = AFXGetParentFrame((CWnd *)this);
      pcVar2 = *(code **)(*(int *)pCVar7 + 0x178);
      guard_check_icall(1);
      (*pcVar2)();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

