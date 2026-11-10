// rea decompile_all
// name: CMFCAutoHideBar::RemoveAutoHideWindow
// address: 0x4fbdcf
// body: available
// range: 0x4fbdcf-0x4fbef0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCAutoHideBar::RemoveAutoHideWindow(class CDockablePane *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCAutoHideBar::RemoveAutoHideWindow(CMFCAutoHideBar *this,CDockablePane *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (*(UINT_PTR *)(this + 0x2e0) != 0) {
    KillTimer(*(HWND *)(this + 0x20),*(UINT_PTR *)(this + 0x2e0));
    *(undefined4 *)(this + 0x2e0) = 0;
  }
  local_1c = *(int *)(this + 700);
  do {
    iVar3 = local_1c;
    local_1c = iVar3;
    if (iVar3 == 0) goto LAB_004fbe36;
    piVar2 = (int *)FUN_004ead48(&local_1c);
    piVar2 = (int *)*piVar2;
  } while ((CDockablePane *)piVar2[0xb] != param_1);
  if (*(int **)(this + 0x2d4) == piVar2) {
    *(undefined4 *)(this + 0x2d4) = 0;
  }
  FUN_004d2617(iVar3);
  uVar4 = 1;
  pcVar1 = *(code **)(*piVar2 + 4);
  guard_check_icall(1);
  (*pcVar1)();
  if (*(int *)(this + 0x2c4) == 0) {
    pcVar1 = *(code **)(**(int **)(this + 0xb8) + 0x27c);
    guard_check_icall(this,0);
    (*pcVar1)();
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(*(int *)(this + 0xb8) + 0x20),&local_18);
    pcVar1 = *(code **)(**(int **)(this + 0xb8) + 0x298);
    guard_check_icall(&local_18);
    (*pcVar1)();
  }
  pcVar1 = *(code **)(*(int *)this + 0x60);
  guard_check_icall(uVar4);
  (*pcVar1)();
LAB_004fbe36:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

