// rea decompile_all
// name: CControlBar::OnCtlColor
// address: 0x50a835
// body: available
// range: 0x50a835-0x50a893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct HBRUSH__ * __thiscall CControlBar::OnCtlColor(class CDC *,class CWnd *,unsigned
   int)
   
   Library: Visual Studio 2015 Release */

HBRUSH__ * __thiscall
CControlBar::OnCtlColor(CControlBar *this,CDC *param_1,CWnd *param_2,uint param_3)

{
  int iVar1;
  HWND__ *pHVar2;
  CControlBar *pCVar3;
  CControlBar *local_8;
  
  local_8 = this;
  iVar1 = FUN_00431cc0(&local_8);
  pCVar3 = local_8;
  if (iVar1 == 0) {
    if (param_2 == (CWnd *)0x0) {
      pHVar2 = (HWND__ *)0x0;
    }
    else {
      pHVar2 = *(HWND__ **)(param_2 + 0x20);
    }
    iVar1 = CWnd::GrayCtlColor(*(HDC__ **)(param_1 + 4),pHVar2,param_3,(HBRUSH__ *)DAT_006161dc,
                               DAT_006161ec);
    pCVar3 = DAT_006161dc;
    if (iVar1 == 0) {
      pCVar3 = (CControlBar *)FUN_0042ec70();
    }
  }
  return (HBRUSH__ *)pCVar3;
}

