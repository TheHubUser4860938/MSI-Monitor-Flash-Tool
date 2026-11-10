// rea decompile_all
// name: CMFCToolBar::RestoreOriginalState
// address: 0x1009be42
// body: available
// range: 0x1009be42-0x1009bfae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBar::RestoreOriginalState(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBar::RestoreOriginalState(CMFCToolBar *this)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  CFrameWnd *pCVar4;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0xd18) != 0) {
    pcVar1 = *(code **)(*(int *)this + 0x330);
    guard_check_icall(*(int *)(this + 0xd18),0,0,0,0,0,0);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)this + 0x20c);
    guard_check_icall();
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)this + 0x170);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      if (*(int *)(this + 0xb8) != 0) {
        iVar2 = *(int *)this;
        pcVar1 = *(code **)(iVar2 + 0x164);
        guard_check_icall();
        uVar3 = (*pcVar1)();
        pcVar1 = *(code **)(iVar2 + 0x260);
        guard_check_icall(&local_20,0,uVar3);
        (*pcVar1)();
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetWindowRect(*(HWND *)(this + 0x20),&local_18);
        if ((local_18.right - local_18.left != local_20) ||
           (local_18.bottom - local_18.top != local_1c)) {
          pcVar1 = *(code **)(*(int *)this + 0x238);
          guard_check_icall(0,0,0,local_20,local_1c,0x16,0);
          (*pcVar1)();
          CPane::UpdateVirtualRect((CPane *)this);
        }
        pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0x28);
        guard_check_icall(this);
        (*pcVar1)();
        pCVar4 = AFXGetParentFrame((CWnd *)this);
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x178);
        guard_check_icall(1);
        (*pcVar1)();
      }
    }
    else {
      pcVar1 = *(code **)(*(int *)this + 0x210);
      guard_check_icall();
      (*pcVar1)();
    }
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

