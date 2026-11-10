// rea decompile_all
// name: CMDIFrameWnd::GetWindowMenuPopup
// address: 0x101422d0
// body: available
// range: 0x101422d0-0x10142347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual struct HMENU__ * __thiscall CMDIFrameWnd::GetWindowMenuPopup(struct HMENU__ *)
   
   Library: Visual Studio 2015 Release */

HMENU__ * __thiscall CMDIFrameWnd::GetWindowMenuPopup(CMDIFrameWnd *this,HMENU__ *param_1)

{
  int nPos;
  HMENU hMenu;
  int iVar1;
  UINT UVar2;
  int local_8;
  
  if (param_1 != (HMENU__ *)0x0) {
    nPos = GetMenuItemCount(param_1);
    while (nPos != 0) {
      nPos = nPos + -1;
      hMenu = GetSubMenu(param_1,nPos);
      if (hMenu != (HMENU)0x0) {
        iVar1 = GetMenuItemCount(hMenu);
        local_8 = 0;
        if (0 < iVar1) {
          do {
            UVar2 = GetMenuItemID(hMenu,local_8);
            if ((0xe12f < UVar2) && (UVar2 < 0xe140)) {
              return hMenu;
            }
            local_8 = local_8 + 1;
          } while (local_8 < iVar1);
        }
      }
    }
  }
  return (HMENU__ *)0x0;
}

