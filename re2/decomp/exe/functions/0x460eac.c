// rea decompile_all
// name: CPaneFrameWnd::RemovePane
// address: 0x460eac
// body: available
// range: 0x460eac-0x460f48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneFrameWnd::RemovePane(class CBasePane *,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CPaneFrameWnd::RemovePane(CPaneFrameWnd *this,CBasePane *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  CPaneFrameWnd *pCVar3;
  
  *(int *)(this + 0x98) = param_3;
  AddRemovePaneFromGlobalList(param_1,0);
  pcVar1 = *(code **)(*(int *)param_1 + 0x218);
  pCVar3 = this;
  guard_check_icall(this);
  (*pcVar1)();
  if (*(int *)(this + 0xd4) == *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(this + 0xd4) = 0;
  }
  pcVar1 = *(code **)(*(int *)this + 0x1f8);
  guard_check_icall(pCVar3);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x1a0);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    if (param_2 == 0) {
      PostMessageW(*(HWND *)(this + 0x20),DAT_00615fa4,0,0);
    }
    else {
      pcVar1 = *(code **)(*(int *)this + 0x60);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  return;
}

