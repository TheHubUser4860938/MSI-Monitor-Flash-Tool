// rea decompile_all
// name: CMFCRibbonDefaultPanelButton::OnKey
// address: 0x1010868c
// body: available
// range: 0x1010868c-0x10108709 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonDefaultPanelButton::OnKey(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCRibbonDefaultPanelButton::OnKey(CMFCRibbonDefaultPanelButton *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  
  pcVar1 = *(code **)(*(int *)this + 0xdc);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    BVar3 = IsRectEmpty((RECT *)(*(int *)(this + 0x1c8) + 0xcc));
    if (((BVar3 == 0) &&
        (iVar2 = CMFCRibbonPanel::IsCollapsed(*(CMFCRibbonPanel **)(this + 0x1c8)), iVar2 == 0)) &&
       (*(int *)(this + 0xc4) == 0)) {
      return 0;
    }
    pcVar1 = *(code **)(*(int *)this + 0x13c);
    guard_check_icall();
    (*pcVar1)();
    if (*(int *)(this + 0x9c) != 0) {
      SendMessageW(*(HWND *)(*(int *)(this + 0x9c) + 0x20),0x100,0x28,0);
    }
  }
  return 0;
}

