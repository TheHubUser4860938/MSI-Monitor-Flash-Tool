// rea decompile_all
// name: CWnd::InitDynamicLayout
// address: 0x1001db88
// body: available
// range: 0x1001db88-0x1001dcbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CWnd::InitDynamicLayout(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CWnd::InitDynamicLayout(CWnd *this)

{
  code *pcVar1;
  CObject *pCVar2;
  CObject *pCVar3;
  ulong uVar4;
  int iVar5;
  BOOL bMenu;
  ulong dwStyle;
  HMENU hMenu;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x58) == 0) goto LAB_1001dcb0;
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDialog_10180a68,(CObject *)this);
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPropertySheet_1018239c,(CObject *)this);
  uVar4 = GetExStyle(this);
  if ((uVar4 & 0x40000000) == 0) {
    if ((pCVar2 != (CObject *)0x0) || (pCVar3 != (CObject *)0x0)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetClientRect(*(HWND *)(this + 0x20),&local_18);
      ModifyStyle(this,0x80,0x80040000,0);
      pcVar1 = *(code **)(*(int *)this + 0x6c);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      if (iVar5 == 0) {
        hMenu = (HMENU)0x0;
      }
      else {
        hMenu = *(HMENU *)(iVar5 + 4);
      }
      uVar4 = GetExStyle(this);
      bMenu = IsMenu(hMenu);
      dwStyle = GetExStyle(this);
      AdjustWindowRectEx(&local_18,dwStyle,bMenu,uVar4);
      SetWindowPos(this,(CWnd *)0x0,0,0,local_18.right - local_18.left,
                   local_18.bottom - local_18.top,0x236);
      goto LAB_1001dc6b;
    }
  }
  else {
LAB_1001dc6b:
    if (pCVar3 != (CObject *)0x0) goto LAB_1001dcb0;
  }
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPropertyPage_101821c8,(CObject *)this);
  if (pCVar2 == (CObject *)0x0) {
    local_18.left = (LONG)pCVar2;
    local_18.top = (LONG)pCVar2;
    local_18.right = (LONG)pCVar2;
    local_18.bottom = (LONG)pCVar2;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    iVar5 = *(int *)(this + 0x58);
    *(LONG *)(iVar5 + 8) = local_18.right - local_18.left;
    *(LONG *)(iVar5 + 0xc) = local_18.bottom - local_18.top;
  }
LAB_1001dcb0:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

