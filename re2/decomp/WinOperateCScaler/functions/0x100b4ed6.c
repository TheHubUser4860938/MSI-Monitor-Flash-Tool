// rea decompile_all
// name: CPaneFrameWnd::SetPreDockState
// address: 0x100b4ed6
// body: available
// range: 0x100b4ed6-0x100b5020 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPaneFrameWnd::SetPreDockState(enum AFX_PREDOCK_STATE,class
   CBasePane *,enum AFX_DOCK_METHOD)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CPaneFrameWnd::SetPreDockState
          (CPaneFrameWnd *this,AFX_PREDOCK_STATE param_1,CBasePane *param_2,AFX_DOCK_METHOD param_3)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  int *piVar4;
  tagPOINT local_1c;
  tagPOINT local_14;
  uint local_c;
  undefined4 local_8;
  
  if (param_1 == 0) {
LAB_100b5015:
    iVar2 = 1;
  }
  else {
    if (param_1 == 2) {
      if (param_2 != (CBasePane *)0x0) {
        pcVar1 = *(code **)(*(int *)param_2 + 0x18c);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if (iVar2 == 0) goto LAB_100b5015;
        goto LAB_100b4f13;
      }
    }
    else {
LAB_100b4f13:
      if (param_2 != (CBasePane *)0x0) {
        pcVar1 = *(code **)(*(int *)param_2 + 0x228);
        guard_check_icall(0);
        iVar2 = (*pcVar1)();
        if (iVar2 != 0) goto LAB_100b5015;
      }
    }
    local_c = (uint)(byte)this[0xa5];
    if (this[0xa5] != (CPaneFrameWnd)0x0) {
      ReleaseCapture();
      this[0xa5] = (CPaneFrameWnd)0x0;
      pcVar1 = *(code **)(*(int *)this + 0x20c);
      guard_check_icall(0);
      (*pcVar1)();
    }
    local_14.x = 0;
    local_14.y = 0;
    GetCursorPos(&local_14);
    local_1c.x = local_14.x;
    local_1c.y = local_14.y;
    pcVar1 = *(code **)(*(int *)this + 0x1a8);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    ScreenToClient(*(HWND *)(iVar2 + 0x20),&local_1c);
    *(AFX_PREDOCK_STATE *)(this + 0x188) = param_1;
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,(CObject *)param_2);
    local_8 = 0;
    *(CObject **)(this + 0x128) = pCVar3;
    pcVar1 = *(code **)(*(int *)this + 0x184);
    guard_check_icall(&local_8);
    piVar4 = (int *)(*pcVar1)();
    if (piVar4 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar4 + 0x268);
      guard_check_icall(0);
      (*pcVar1)();
      if (local_c != 0) {
        pcVar1 = *(code **)(*piVar4 + 0x314);
        guard_check_icall(0);
        (*pcVar1)();
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}

