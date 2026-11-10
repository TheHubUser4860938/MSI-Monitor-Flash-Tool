// rea decompile_all
// name: CMFCToolBarButtonsListButton::OnKeyDown
// address: 0x1013fc60
// body: available
// range: 0x1013fc60-0x1013fd24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarButtonsListButton::OnKeyDown(unsigned int,unsigned
   int,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarButtonsListButton::OnKeyDown
          (CMFCToolBarButtonsListButton *this,uint param_1,uint param_2,uint param_3)

{
  __POSITION *p_Var1;
  CMFCToolBarButtonsListButton *local_8;
  
  local_8 = this;
  if (param_1 == 0x23) {
    if (*(int *)(this + 0x8c) != 0) {
      return;
    }
    p_Var1 = *(__POSITION **)(this + 0x88);
    goto LAB_1013fd15;
  }
  if (param_1 == 0x24) {
LAB_1013fcc0:
    if (*(int *)(this + 0x8c) == 0) {
      return;
    }
    p_Var1 = *(__POSITION **)(this + 0x84);
  }
  else {
    if (param_1 < 0x25) {
LAB_1013fcff:
      FUN_100283ad();
      return;
    }
    if (param_1 < 0x27) {
      if (*(CObject **)(this + 0x128) == (CObject *)0x0) goto LAB_1013fcc0;
      local_8 = (CMFCToolBarButtonsListButton *)
                CObList::Find((CObList *)(this + 0x80),*(CObject **)(this + 0x128),(__POSITION *)0x0
                             );
      if (local_8 == (CMFCToolBarButtonsListButton *)0x0) {
        return;
      }
      FUN_10039e35(&local_8);
    }
    else {
      if (0x28 < param_1) goto LAB_1013fcff;
      if (*(CObject **)(this + 0x128) == (CObject *)0x0) goto LAB_1013fcc0;
      local_8 = (CMFCToolBarButtonsListButton *)
                CObList::Find((CObList *)(this + 0x80),*(CObject **)(this + 0x128),(__POSITION *)0x0
                             );
      if (local_8 == (CMFCToolBarButtonsListButton *)0x0) {
        return;
      }
      FUN_100972dc(&local_8);
    }
    p_Var1 = (__POSITION *)local_8;
    if (local_8 == (CMFCToolBarButtonsListButton *)0x0) {
      return;
    }
  }
LAB_1013fd15:
  FUN_10140239(*(undefined4 *)(p_Var1 + 8));
  return;
}

