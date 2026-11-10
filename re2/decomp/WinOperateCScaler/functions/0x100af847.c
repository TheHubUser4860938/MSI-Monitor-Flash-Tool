// rea decompile_all
// name: CPaneFrameWnd::AddPane
// address: 0x100af847
// body: available
// range: 0x100af847-0x100af995 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CPaneFrameWnd::AddPane(class CBasePane *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::AddPane(CPaneFrameWnd *this,CBasePane *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  LRESULT LVar4;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100af853;
  uVar2 = FUN_100250d6(&PTR_s_CMFCToolBar_10201648);
  *(undefined4 *)(this + 0x9c) = uVar2;
  iVar3 = 0;
  if (param_1 != (CBasePane *)0x0) {
    iVar3 = *(int *)(param_1 + 0x20);
  }
  if (*(int *)(this + 0xd4) != iVar3) {
    uVar2 = 0;
    if (param_1 != (CBasePane *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0x20);
    }
    *(undefined4 *)(this + 0xd4) = uVar2;
    uVar2 = FUN_1001e20a();
    FUN_1001d224(uVar2);
    local_8 = 0;
    CWnd::GetWindowTextW
              ((CWnd *)param_1,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
    FUN_1002da47(local_14[0]);
    LVar4 = SendMessageW(*(HWND *)(param_1 + 0x20),0x7f,0,0);
    SendMessageW(*(HWND *)(this + 0x20),0x80,0,LVar4);
    LVar4 = SendMessageW(*(HWND *)(param_1 + 0x20),0x7f,1,0);
    SendMessageW(*(HWND *)(this + 0x20),0x80,1,LVar4);
    AddRemovePaneFromGlobalList(param_1,1);
    pcVar1 = *(code **)(*(int *)param_1 + 0x1c8);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      if (((*(int *)(this + 0x9c) == 0) || (*(int *)(param_1 + 0xd14) == 0)) ||
         (*(int *)(param_1 + 0xbc8) == 0)) {
        uVar2 = 2;
      }
      else {
        uVar2 = 0x12;
      }
      pcVar1 = *(code **)(*(int *)this + 0x18c);
      guard_check_icall(uVar2);
      (*pcVar1)();
    }
    iVar3 = FUN_100250d6(&PTR_s_CMFCMenuBar_10201ae0);
    if ((iVar3 != 0) && (*(int *)(param_1 + 0xd14) != 0)) {
      pcVar1 = *(code **)(*(int *)this + 0x18c);
      guard_check_icall(0x10);
      (*pcVar1)();
    }
    pcVar1 = *(code **)(*(int *)this + 500);
    guard_check_icall();
    (*pcVar1)();
    ATL::CStringData::Release((CStringData *)(local_14[0] + -0x10));
  }
  return;
}

