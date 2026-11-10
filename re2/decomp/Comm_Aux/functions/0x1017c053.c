// rea decompile_all
// name: CTasksPaneHistoryButton::UpdateMenu
// address: 0x1017c053
// body: available
// range: 0x1017c053-0x1017c11c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CTasksPaneHistoryButton::UpdateMenu(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CTasksPaneHistoryButton::UpdateMenu(CTasksPaneHistoryButton *this)

{
  code *pcVar1;
  HMENU pHVar2;
  undefined4 *puVar3;
  undefined **local_1c;
  HMENU local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x1017c05f;
  if (*(int *)(this + 0xe8) != 0) {
    if (*(int *)(this + 0x20) == 0x427c) {
      FUN_10178714(this + 0xec);
    }
    else if (*(int *)(this + 0x20) == 0x427d) {
      FUN_101786a4(this + 0xec);
    }
    local_18 = (HMENU)0x0;
    local_1c = CMenu::vftable;
    local_8 = 0;
    pHVar2 = CreatePopupMenu();
    CMenu::Attach((CMenu *)&local_1c,pHVar2);
    local_14[0] = *(int *)(this + 0xf0);
    while (local_14[0] != 0) {
      puVar3 = (undefined4 *)FUN_10034920(local_14);
      AppendMenuW(local_18,0,*(UINT_PTR *)(this + 0x20),(LPCWSTR)*puVar3);
    }
    pcVar1 = *(code **)(*(int *)this + 0xd0);
    guard_check_icall(local_18);
    (*pcVar1)();
    local_8 = 1;
    local_1c = CMenu::vftable;
    CMenu::DestroyMenu((CMenu *)&local_1c);
  }
  return;
}

