// rea decompile_all
// name: CMDIFrameWnd::OnUpdateFrameTitle
// address: 0x10116f16
// body: available
// range: 0x10116f16-0x1011702b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMDIFrameWnd::OnUpdateFrameTitle(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIFrameWnd::OnUpdateFrameTitle(CMDIFrameWnd *this,int param_1)

{
  code *pcVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  CMDIChildWnd *this_00;
  char *pcVar5;
  int local_18;
  char *local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10116f22;
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar2 & 0x8000) == 0) {
    return;
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0xac) + 0x68);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      return;
    }
  }
  this_00 = (CMDIChildWnd *)0x0;
  pcVar1 = *(code **)(*(int *)this + 0x16c);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (((param_1 != 0) && (this_00 = MDIGetActive(this,(int *)0x0), this_00 != (CMDIChildWnd *)0x0))
     && (uVar2 = CWnd::GetExStyle((CWnd *)this_00), (uVar2 & 0x1000000) == 0)) {
    if (iVar3 == 0) {
      pcVar1 = *(code **)(*(int *)this_00 + 0x16c);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 == 0) goto LAB_10116fb7;
    }
    CFrameWnd::UpdateFrameTitleForDocument((CFrameWnd *)this,*(char **)(iVar3 + 0x20));
    return;
  }
LAB_10116fb7:
  uVar4 = FUN_1001e20a();
  FUN_1001d224(uVar4);
  local_8 = 0;
  if ((this_00 == (CMDIChildWnd *)0x0) ||
     (uVar2 = CWnd::GetExStyle((CWnd *)this_00), (uVar2 & 0x1000000) != 0)) {
    pcVar5 = (char *)0x0;
  }
  else {
    uVar4 = GetTitle(&local_18);
    local_8._0_1_ = 1;
    FUN_10018680(uVar4);
    local_8 = (uint)local_8._1_3_ << 8;
    ATL::CStringData::Release((CStringData *)(local_18 + -0x10));
    pcVar5 = (char *)0x0;
    if (*(int *)(local_14 + -0xc) != 0) {
      pcVar5 = local_14;
    }
  }
  CFrameWnd::UpdateFrameTitleForDocument((CFrameWnd *)this,pcVar5);
  ATL::CStringData::Release((CStringData *)(local_14 + -0x10));
  return;
}

