// rea decompile_all
// name: CMDITabProxyWnd::OnSendIconicLivePreviewBitmap
// address: 0x100b67ae
// body: available
// range: 0x100b67ae-0x100b68b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMDITabProxyWnd::OnSendIconicLivePreviewBitmap(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMDITabProxyWnd::OnSendIconicLivePreviewBitmap(CMDITabProxyWnd *this)

{
  code *pcVar1;
  HBITMAP__ *ho;
  CFrameWnd *pCVar2;
  CObject *this_00;
  int iVar3;
  tagPOINT local_24;
  CMDITabProxyWnd *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_1c = this;
  if (*(int *)(this + 0x80) != 0) {
    iVar3 = IsMDIChildActive(this);
    local_24.x = 0;
    local_24.y = 0;
    pcVar1 = *(code **)(**(int **)(this + 0x80) + 0x1fc);
    guard_check_icall(iVar3,&local_24);
    ho = (HBITMAP__ *)(*pcVar1)();
    if (ho == (HBITMAP__ *)0x0) {
      pCVar2 = CWnd::GetTopLevelFrame(*(CWnd **)(this + 0x80));
      this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10192540,(CObject *)pCVar2
                                  );
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      pcVar1 = *(code **)(**(int **)(local_1c + 0x80) + 0x204);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      GetWindowRect(*(HWND *)(iVar3 + 0x20),&local_18);
      CWnd::ScreenToClient((CWnd *)this_00,&local_18);
      this = local_1c;
      local_24.y = local_18.top;
      local_24.x = local_18.left;
      ho = (HBITMAP__ *)
           FUN_100b5800(local_18.right - local_18.left,local_18.bottom - local_18.top,0);
    }
    _AfxDwmSetIconicLivePreviewBitmap(*(HWND__ **)(this + 0x20),ho,&local_24,0);
    DeleteObject(ho);
  }
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

