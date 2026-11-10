// rea decompile_all
// name: CDockablePaneAdapter::SetWrappedWnd
// address: 0x50bf75
// body: available
// range: 0x50bf75-0x50c058 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDockablePaneAdapter::SetWrappedWnd(class CWnd *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDockablePaneAdapter::SetWrappedWnd(CDockablePaneAdapter *this,CWnd *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  CWnd::SetParent(param_1,(CWnd *)this);
  *(CWnd **)(this + 0x37c) = param_1;
  iVar2 = FUN_0043970d(&PTR_s_CBasePane_005c4284);
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x1ec);
    guard_check_icall(*(undefined4 *)(this + 0x378));
    (*pcVar1)();
  }
  else {
    iVar2 = *(int *)this;
    pcVar1 = *(code **)(*(int *)param_1 + 0x198);
    guard_check_icall();
    uVar3 = (*pcVar1)();
    pcVar1 = *(code **)(iVar2 + 0x1ec);
    guard_check_icall(uVar3);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)param_1 + 0x1ac);
    guard_check_icall();
    uVar3 = (*pcVar1)();
    iVar2 = *(int *)this;
    *(undefined4 *)(this + 0x84) = uVar3;
    pcVar1 = *(code **)(*(int *)param_1 + 0x1b0);
    guard_check_icall();
    uVar3 = (*pcVar1)();
    pcVar1 = *(code **)(iVar2 + 0x1b4);
    guard_check_icall(uVar3);
    (*pcVar1)();
    iVar2 = FUN_0043970d(&PTR_s_CPane_005b83cc);
    if (iVar2 != 0) {
      *(undefined4 *)(this + 0x298) = *(undefined4 *)(param_1 + 0x298);
      *(undefined4 *)(this + 0x29c) = *(undefined4 *)(param_1 + 0x29c);
      *(undefined4 *)(this + 0x2a0) = *(undefined4 *)(param_1 + 0x2a0);
      *(undefined4 *)(this + 0x2a4) = *(undefined4 *)(param_1 + 0x2a4);
    }
  }
  return 1;
}

