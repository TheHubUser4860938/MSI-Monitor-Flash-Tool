// rea decompile_all
// name: CMultiPaneFrameWnd::RemovePane
// address: 0x100f7b56
// body: available
// range: 0x100f7b56-0x100f7c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMultiPaneFrameWnd::RemovePane(class CBasePane *,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMultiPaneFrameWnd::RemovePane(CMultiPaneFrameWnd *this,CBasePane *param_1,int param_2,int param_3)

{
  CPaneContainerManager *this_00;
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  CWnd *pCVar4;
  
  iVar2 = FUN_1004e58b(&PTR_s_CDockablePane_1020600c);
  if (iVar2 != 0) {
    this_00 = (CPaneContainerManager *)(this + 400);
    pcVar1 = *(code **)(*(int *)this_00 + 0x34);
    guard_check_icall(param_1);
    (*pcVar1)();
    iVar2 = CPaneContainerManager::IsEmpty(this_00);
    if (iVar2 == 0) {
      pcVar1 = *(code **)(*(int *)this_00 + 0x70);
      guard_check_icall();
      uVar3 = (*pcVar1)();
      FUN_100df735(param_1,uVar3);
    }
    else {
      CPaneFrameWnd::RemovePane((CPaneFrameWnd *)this,param_1,0,0);
      pCVar4 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xd4));
      if (pCVar4 == (CWnd *)0x0) {
        pcVar1 = *(code **)(*(int *)this_00 + 0x70);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        uVar3 = 0;
        if (iVar2 != 0) {
          uVar3 = *(undefined4 *)(iVar2 + 0x20);
        }
        *(undefined4 *)(this + 0xd4) = uVar3;
      }
    }
  }
  if (param_2 != 0) {
    pcVar1 = *(code **)(*(int *)this + 0x1a0);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      PostMessageW(*(HWND *)(this + 0x20),DAT_1020fd08,0,0);
      goto LAB_100f7c53;
    }
  }
  pcVar1 = *(code **)(*(int *)this + 0x188);
  guard_check_icall();
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x1cc);
  guard_check_icall();
  (*pcVar1)();
  SendMessageW(*(HWND *)(this + 0x20),0x85,0,0);
LAB_100f7c53:
  pcVar1 = *(code **)(*(int *)this + 0x1f8);
  guard_check_icall();
  (*pcVar1)();
  return;
}

