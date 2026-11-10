// rea decompile_all
// name: CMFCToolBarComboBoxButton::GetItemData
// address: 0x1009725f
// body: available
// range: 0x1009725f-0x100972d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: unsigned long __thiscall CMFCToolBarComboBoxButton::GetItemData(int)const 
   
   Library: Visual Studio 2015 Release */

ulong __thiscall CMFCToolBarComboBoxButton::GetItemData(CMFCToolBarComboBoxButton *this,int param_1)

{
  int iVar1;
  ulong uVar2;
  __POSITION *p_Var3;
  
  if (param_1 == -1) {
    iVar1 = *(int *)(this + 0xb4);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x20) == 0)) {
      param_1 = *(int *)(this + 0x74);
      if (param_1 == 0xffffffff) {
        return 0;
      }
    }
    else {
      param_1 = SendMessageW(*(HWND *)(iVar1 + 0x20),0x147,0,0);
    }
  }
  iVar1 = *(int *)(this + 0xb4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
    uVar2 = SendMessageW(*(HWND *)(iVar1 + 0x20),0x150,param_1,0);
    return uVar2;
  }
  p_Var3 = CObList::FindIndex((CObList *)(this + 0xd8),param_1);
  if (p_Var3 == (__POSITION *)0x0) {
    return 0;
  }
  return *(ulong *)(p_Var3 + 8);
}

