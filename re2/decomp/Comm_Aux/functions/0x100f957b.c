// rea decompile_all
// name: CBaseTabbedPane::FloatPane
// address: 0x100f957b
// body: available
// range: 0x100f957b-0x100f9610 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CBaseTabbedPane::FloatPane(class CRect,enum
   AFX_DOCK_METHOD,bool)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CBaseTabbedPane::FloatPane
          (CBaseTabbedPane *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  LPARAM lParam;
  undefined4 uVar4;
  
  iVar2 = CPane::FloatPane((CPane *)this,param_2,param_3,param_4,param_5,param_6,param_7);
  iVar3 = 0;
  if (iVar2 != 0) {
    uVar4 = 0;
    pcVar1 = *(code **)(*(int *)this + 0x228);
    guard_check_icall(0);
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      iVar2 = **(int **)(this + 0x370);
      pcVar1 = *(code **)(iVar2 + 0x20c);
      guard_check_icall(uVar4);
      uVar4 = (*pcVar1)();
      pcVar1 = *(code **)(iVar2 + 0x1d8);
      guard_check_icall(uVar4);
      lParam = (*pcVar1)();
      SendMessageW(*(HWND *)(iVar3 + 0x20),0x80,0,lParam);
    }
    iVar3 = 1;
  }
  return iVar3;
}

