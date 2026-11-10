// rea decompile_all
// name: AfxUnmergeMenus
// address: 0x1001d557
// body: available
// range: 0x1001d557-0x1001d606 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __stdcall AfxUnmergeMenus(struct HMENU__ *,struct HMENU__ *,struct HMENU__ *)
   
   Library: Visual Studio 2015 Release */

void AfxUnmergeMenus(HMENU__ *param_1,HMENU__ *param_2,HMENU__ *param_3)

{
  int iVar1;
  UINT uPosition;
  HMENU hMenu;
  int iVar2;
  HMENU pHVar3;
  UINT uPosition_00;
  
  iVar1 = GetMenuItemCount(param_2);
  uPosition = GetMenuItemCount(param_1);
joined_r0x1001d577:
  do {
    do {
      uPosition = uPosition - 1;
      if ((int)uPosition < 0) {
        return;
      }
      hMenu = GetSubMenu(param_1,uPosition);
    } while (hMenu == (HMENU)0x0);
    if (param_3 != (HMENU)0x0) {
      iVar2 = GetMenuItemCount(hMenu);
      uPosition_00 = 0;
      if (0 < iVar2) {
        do {
          pHVar3 = GetSubMenu(hMenu,uPosition_00);
          if (pHVar3 == param_3) {
            RemoveMenu(hMenu,uPosition_00,0x400);
            param_3 = (HMENU__ *)0x0;
            break;
          }
          uPosition_00 = uPosition_00 + 1;
        } while ((int)uPosition_00 < iVar2);
      }
      goto joined_r0x1001d577;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        pHVar3 = GetSubMenu(param_2,iVar2);
        if (pHVar3 == hMenu) {
          RemoveMenu(param_1,uPosition,0x400);
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
  } while( true );
}

