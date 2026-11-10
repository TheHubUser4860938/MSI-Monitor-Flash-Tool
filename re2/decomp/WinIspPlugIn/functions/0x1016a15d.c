// rea decompile_all
// name: CControlBar::PreTranslateMessage
// address: 0x1016a15d
// body: available
// range: 0x1016a15d-0x1016a3a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CControlBar::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CControlBar::PreTranslateMessage(CControlBar *this,tagMSG *param_1)

{
  uint uVar1;
  code *pcVar2;
  SHORT SVar3;
  int iVar4;
  CFrameWnd *this_00;
  CFrameWnd *pCVar5;
  BOOL BVar6;
  AFX_MODULE_THREAD_STATE *pAVar7;
  tagPOINT local_50;
  tagMSG *local_48;
  int local_44;
  int local_40;
  AFX_MODULE_THREAD_STATE *local_3c;
  undefined4 local_38;
  uint local_34;
  void *local_14;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_48 = param_1;
  iVar4 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  if (iVar4 == 0) {
    uVar1 = param_1->message;
    this_00 = (CFrameWnd *)CWnd::GetOwner((CWnd *)this);
    if ((((((byte)this[0xb0] & 0x20) != 0) || (uVar1 == 0x201)) || (uVar1 == 0x202)) &&
       (((0x1ff < uVar1 && (uVar1 < 0x20a)) || (uVar1 - 0xa0 < 10)))) {
      local_3c = AfxGetModuleThreadState();
      local_50.x = (param_1->pt).x;
      local_50.y = (param_1->pt).y;
      ScreenToClient(*(HWND *)(this + 0x20),&local_50);
      _memset(&local_38,0,0x2c);
      local_38 = 0x30;
      pcVar2 = *(code **)(*(int *)this + 0x74);
      guard_check_icall(local_50.x,local_50.y,&local_38);
      iVar4 = (*pcVar2)();
      local_44 = iVar4;
      if (local_14 != (void *)0xffffffff) {
        FID_conflict__free(local_14);
      }
      if ((uVar1 == 0x201) && ((local_34 & 0x80000000) != 0)) {
        local_40 = 1;
      }
      else {
        local_40 = 0;
        if ((uVar1 != 0x201) && (SVar3 = GetKeyState(1), SVar3 < 0)) {
          iVar4 = *(int *)(local_3c + 0x4c);
          local_44 = iVar4;
        }
      }
      if ((iVar4 < 0) || (local_40 != 0)) {
        SVar3 = GetKeyState(1);
        if ((-1 < SVar3) || (pAVar7 = local_3c, local_40 != 0)) {
          pcVar2 = *(code **)(*(int *)this + 0x1a0);
          guard_check_icall(0xffffffff);
          (*pcVar2)();
          KillTimer(*(HWND *)(this + 0x20),0xec0a);
          pAVar7 = local_3c;
          iVar4 = local_44;
        }
      }
      else if (uVar1 == 0x202) {
        pcVar2 = *(code **)(*(int *)this + 0x1a0);
        guard_check_icall(0xffffffff);
        (*pcVar2)();
        ResetTimer(this,0xec0a,200);
        pAVar7 = local_3c;
        iVar4 = local_44;
      }
      else if ((((byte)this[0xac] & 8) == 0) &&
              (SVar3 = GetKeyState(1), pAVar7 = local_3c, -1 < SVar3)) {
        if (iVar4 != *(int *)(local_3c + 0x4c)) {
          ResetTimer(this,0xec09,300);
        }
      }
      else {
        pcVar2 = *(code **)(*(int *)this + 0x1a0);
        guard_check_icall(iVar4);
        (*pcVar2)();
        pAVar7 = local_3c;
        iVar4 = local_44;
      }
      *(int *)(pAVar7 + 0x4c) = iVar4;
      param_1 = local_48;
    }
    pCVar5 = CWnd::GetTopLevelFrame((CWnd *)this);
    if ((pCVar5 == (CFrameWnd *)0x0) || (*(int *)(pCVar5 + 0x94) == 0)) {
      while (this_00 != (CFrameWnd *)0x0) {
        pcVar2 = *(code **)(*(int *)this_00 + 0x10c);
        guard_check_icall(param_1);
        iVar4 = (*pcVar2)();
        if (iVar4 != 0) goto LAB_1016a398;
        this_00 = CWnd::GetParentFrame((CWnd *)this_00);
        param_1 = local_48;
      }
      BVar6 = IsWindow(*(HWND *)(this + 0x20));
      if (BVar6 != 0) {
        CWnd::PreTranslateInput((CWnd *)this,local_48);
      }
    }
  }
LAB_1016a398:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

