// rea decompile_all
// name: CMFCRibbonPanelMenuBar::OnKey
// address: 0x101563b5
// body: available
// range: 0x101563b5-0x1015646e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonPanelMenuBar::OnKey(unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCRibbonPanelMenuBar::OnKey(CMFCRibbonPanelMenuBar *this,uint param_1)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  CMFCDisableMenuAnimation local_18 [4];
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x101563c1;
  if (((param_1 == 0x79) && (uVar1 = GetKeyState(0x10), (uVar1 & 0x8000) != 0)) || (param_1 == 0x5d)
     ) {
    OnContextMenu(this,this,0xffffffff,0xffffffff);
  }
  else {
    iVar2 = CMFCRibbonBar::ProcessKey(*(CMFCRibbonBar **)(this + 0xea0),param_1);
    if (iVar2 == 0) {
      if (*(int *)(this + 0xea4) == 0) {
        if (*(int *)(this + 0xeb4) == 0) {
          return 0;
        }
        CMFCDisableMenuAnimation::CMFCDisableMenuAnimation(local_18);
        local_8 = 1;
        pcVar3 = *(code **)(**(int **)(this + 0xeb4) + 0xe8);
      }
      else {
        CMFCDisableMenuAnimation::CMFCDisableMenuAnimation(local_18);
        local_8 = 0;
        pcVar3 = *(code **)(**(int **)(this + 0xea4) + 0xdc);
      }
      guard_check_icall(param_1);
      iVar2 = (*pcVar3)();
      DAT_1020f904 = local_14;
      return iVar2;
    }
  }
  return 1;
}

