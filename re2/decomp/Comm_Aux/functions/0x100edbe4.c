// rea decompile_all
// name: CMDIChildWndEx::SetTaskbarTabOrder
// address: 0x100edbe4
// body: available
// range: 0x100edbe4-0x100edc54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMDIChildWndEx::SetTaskbarTabOrder(class CMDIChildWndEx *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIChildWndEx::SetTaskbarTabOrder(CMDIChildWndEx *this,CMDIChildWndEx *param_1)

{
  code *pcVar1;
  int iVar2;
  AFX_GLOBAL_DATA *this_00;
  ITaskbarList3 *pIVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = IsTaskbarTabsSupportEnabled(this);
  if ((((iVar2 != 0) && (iVar2 = IsRegisteredWithTaskbarTabs(this), iVar2 != 0)) &&
      (this != (CMDIChildWndEx *)0xfffffbb0)) && (*(int *)(this + 0x470) != 0)) {
    this_00 = GetGlobalData();
    pIVar3 = AFX_GLOBAL_DATA::GetITaskbarList3(this_00);
    uVar4 = 0;
    if ((param_1 == (CMDIChildWndEx *)0x0) || (param_1 == (CMDIChildWndEx *)0xfffffbb0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x470);
    }
    if (pIVar3 != (ITaskbarList3 *)0x0) {
      if (this != (CMDIChildWndEx *)0xfffffbb0) {
        uVar4 = *(undefined4 *)(this + 0x470);
      }
      pcVar1 = *(code **)(*(int *)pIVar3 + 0x34);
      guard_check_icall(pIVar3,uVar4,uVar5);
      (*pcVar1)();
    }
  }
  return;
}

