// rea decompile_all
// name: CMDIFrameWndEx::RecalcLayout
// address: 0x100bea54
// body: available
// range: 0x100bea54-0x100bec0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMDIFrameWndEx::RecalcLayout(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIFrameWndEx::RecalcLayout(CMDIFrameWndEx *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  CWnd *this_00;
  ulong uVar5;
  
  if (*(int *)(this + 0xf4) != 0) {
    return;
  }
  iVar1 = *(int *)(this + 0x37c);
  *(undefined4 *)(this + 0xf4) = 1;
  *(undefined4 *)(this + 0x37c) = 0;
  pcVar2 = *(code **)(*(int *)this + 0x22c);
  guard_check_icall();
  iVar3 = (*pcVar2)();
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x60) != 0)) && (*(int *)(iVar3 + 0x50) == 4)) {
    *(undefined4 *)(this + 0x37c) = 1;
    uVar4 = CWnd::GetExStyle((CWnd *)this);
    *(uint *)(this + 0x380) = (uint)((uVar4 & 0xc00000) != 0);
  }
  if (*(int *)(this + 0x150) != 0) goto LAB_100bebb2;
  this_00 = (CWnd *)FUN_100903fd();
  if (*(int *)(this + 0x290) == 0) {
    iVar3 = CDockingManager::IsOLEContainerMode((CDockingManager *)(this + 0x160));
    if (iVar3 != 0) goto LAB_100beb15;
    pcVar2 = *(code **)(*(int *)(this + 0x160) + 0x34);
    guard_check_icall(param_1);
    (*pcVar2)();
  }
  else {
LAB_100beb15:
    if ((this_00 != (CWnd *)0x0) &&
       (iVar3 = FUN_100250d6(&PTR_s_CPreviewViewEx_101cd000), iVar3 != 0)) {
      pcVar2 = *(code **)(*(int *)(this + 0x160) + 0x34);
      guard_check_icall(param_1);
      (*pcVar2)();
      CWnd::SetWindowPos(this_00,(CWnd *)0x0,*(int *)(this + 600),*(int *)(this + 0x25c),
                         *(int *)(this + 0x260) - *(int *)(this + 600),
                         *(int *)(this + 0x264) - *(int *)(this + 0x25c),0x14);
      goto LAB_100bebb2;
    }
    if ((param_1 != 0) &&
       (iVar3 = CDockingManager::IsOLEContainerMode((CDockingManager *)(this + 0x160)), iVar3 != 0))
    {
      ActiveItemRecalcLayout(this);
      goto LAB_100bebb2;
    }
    *(undefined4 *)(this + 0xf4) = 0;
    CFrameWnd::RecalcLayout((CFrameWnd *)this,param_1);
  }
  pcVar2 = *(code **)(*(int *)this + 0x210);
  guard_check_icall();
  (*pcVar2)();
LAB_100bebb2:
  *(undefined4 *)(this + 0xf4) = 0;
  if (iVar1 != *(int *)(this + 0x37c)) {
    if (*(int *)(this + 0x380) == 0) {
      if (*(int *)(this + 0x37c) == 0) {
        uVar5 = 0;
        uVar4 = 0xc00000;
      }
      else {
        uVar5 = 0xc00000;
        uVar4 = 0;
      }
      CWnd::ModifyStyle((CWnd *)this,uVar4,uVar5,0);
    }
    CFrameImpl::OnChangeVisualManager((CFrameImpl *)(this + 0x350));
    CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,-1,-1,-1,-1,0x37);
  }
  return;
}

