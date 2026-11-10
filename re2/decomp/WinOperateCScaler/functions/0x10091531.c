// rea decompile_all
// name: OnCreateHelper
// address: 0x10091531
// body: available
// range: 0x10091531-0x10091599 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CFrameWnd::OnCreateHelper(struct tagCREATESTRUCTA *,struct
   CCreateContext *)
    protected: int __thiscall CFrameWnd::OnCreateHelper(struct tagCREATESTRUCTW *,struct
   CCreateContext *)
   
   Library: Visual Studio 2015 Release */

undefined4 OnCreateHelper(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  iVar2 = FUN_100283ad();
  if (iVar2 == -1) {
    uVar3 = 0xffffffff;
  }
  else {
    pcVar1 = *(code **)(*in_ECX + 0x1a0);
    guard_check_icall(param_1,param_2);
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      PostMessageW((HWND)in_ECX[8],0x362,0xe001,0);
      pcVar1 = *(code **)(*in_ECX + 0x178);
      guard_check_icall(1);
      (*pcVar1)();
      uVar3 = 0;
    }
  }
  return uVar3;
}

