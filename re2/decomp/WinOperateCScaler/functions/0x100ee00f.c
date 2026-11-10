// rea decompile_all
// name: CFrameImpl::StoreWindowPlacement
// address: 0x100ee00f
// body: available
// range: 0x100ee00f-0x100ee0db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CFrameImpl::StoreWindowPlacement(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameImpl::StoreWindowPlacement(CFrameImpl *this)

{
  code *pcVar1;
  AFX_MODULE_STATE *pAVar2;
  CObject *pCVar3;
  HWND hWnd;
  BOOL BVar4;
  int iVar5;
  tagRECT local_54;
  tagWINDOWPLACEMENT local_44;
  int local_18;
  int local_14;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  pAVar2 = AfxGetModuleState();
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CWinAppEx_101b8db0,*(CObject **)(pAVar2 + 4));
  if (pCVar3 != (CObject *)0x0) {
    hWnd = (HWND)0x0;
    if (*(int *)(this + 0xb0) != 0) {
      hWnd = *(HWND *)(*(int *)(this + 0xb0) + 0x20);
    }
    BVar4 = IsWindow(hWnd);
    if (BVar4 != 0) {
      local_44.length = 0x2c;
      iVar5 = CWnd::GetWindowPlacement(*(CWnd **)(this + 0xb0),&local_44);
      if (iVar5 != 0) {
        if (local_44.showCmd != 3) {
          local_44.showCmd = 1;
        }
        SystemParametersInfoW(0x30,0,&local_18,0);
        OffsetRect(&local_44.rcNormalPosition,local_18,local_14);
        CopyRect(&local_54,&local_44.rcNormalPosition);
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x144);
        guard_check_icall(&local_54,local_44.flags,local_44.showCmd);
        (*pcVar1)();
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

