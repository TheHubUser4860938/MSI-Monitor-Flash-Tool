// rea decompile_all
// name: CMFCTasksPane::CreateMenu
// address: 0x101416ef
// body: available
// range: 0x101416ef-0x1014178f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: struct HMENU__ * __thiscall CMFCTasksPane::CreateMenu(void)const 
   
   Library: Visual Studio 2015 Release */

HMENU__ * __thiscall CMFCTasksPane::CreateMenu(CMFCTasksPane *this)

{
  HMENU pHVar1;
  int iVar2;
  HMENU__ *hMenu;
  UINT uIDCheckItem;
  undefined **local_1c;
  HMENU local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_18 = (HMENU)0x0;
  local_1c = CMenu::vftable;
  local_8 = 0;
  pHVar1 = CreatePopupMenu();
  CMenu::Attach((CMenu *)&local_1c,pHVar1);
  local_14[0] = *(int *)(this + 0x468);
  while (local_14[0] != 0) {
    iVar2 = FUN_1005f4c2(local_14);
    AppendMenuW(local_18,0,0x4280,*(LPCWSTR *)(iVar2 + 4));
  }
  hMenu = CMenu::Detach((CMenu *)&local_1c);
  if (hMenu != (HMENU__ *)0x0) {
    uIDCheckItem = GetActivePage(this);
    CheckMenuItem(hMenu,uIDCheckItem,0x408);
  }
  local_8 = 1;
  local_1c = CMenu::vftable;
  CMenu::DestroyMenu((CMenu *)&local_1c);
  return hMenu;
}

