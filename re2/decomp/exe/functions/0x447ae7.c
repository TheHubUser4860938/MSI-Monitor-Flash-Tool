// rea decompile_all
// name: _AfxFindDlgItem
// address: 0x447ae7
// body: available
// range: 0x447ae7-0x447b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    class CWnd * __stdcall _AfxFindDlgItem(class CWnd *,unsigned long)
   
   Library: Visual Studio 2015 Release */

CWnd * _AfxFindDlgItem(CWnd *param_1,ulong param_2)

{
  CWnd *pCVar1;
  ulong uVar2;
  CWnd *this;
  
  pCVar1 = CWnd::GetDlgItem(param_1,param_2);
  if (pCVar1 == (CWnd *)0x0) {
    pCVar1 = _AfxNextControl(param_1,(CWnd *)0x0,1);
    if ((pCVar1 == param_1) || (this = pCVar1, pCVar1 == (CWnd *)0x0)) {
      pCVar1 = (CWnd *)0x0;
    }
    else {
      do {
        uVar2 = CWnd::GetDlgCtrlID(this);
        if (uVar2 == param_2) {
          return this;
        }
        this = _AfxNextControl(param_1,this,1);
      } while ((this != (CWnd *)0x0) && (this != pCVar1));
      pCVar1 = (CWnd *)0x0;
    }
  }
  return pCVar1;
}

