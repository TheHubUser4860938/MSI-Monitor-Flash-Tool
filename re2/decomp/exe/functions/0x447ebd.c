// rea decompile_all
// name: _AfxNextControl
// address: 0x447ebd
// body: available
// range: 0x447ebd-0x447f8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    class CWnd * __stdcall _AfxNextControl(class CWnd *,class CWnd *,unsigned int)
   
   Library: Visual Studio 2015 Release */

CWnd * _AfxNextControl(CWnd *param_1,CWnd *param_2,uint param_3)

{
  HWND pHVar1;
  CWnd *pCVar2;
  CWnd *pCVar3;
  uint uVar4;
  BOOL BVar5;
  int iVar6;
  bool bVar7;
  
  bVar7 = param_2 == (CWnd *)0x0;
  pCVar3 = param_2;
  while (!bVar7) {
    pHVar1 = GetWindow(*(HWND *)(pCVar3 + 0x20),2);
    pCVar2 = CWnd::FromHandle(pHVar1);
    if (pCVar2 != (CWnd *)0x0) {
      pHVar1 = GetWindow(*(HWND *)(pCVar3 + 0x20),2);
      pCVar3 = CWnd::FromHandle(pHVar1);
      goto LAB_00447f18;
    }
    pHVar1 = GetParent(*(HWND *)(pCVar3 + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar1);
    pCVar3 = _AfxGetChildControl(param_1,pCVar3);
    if (pCVar3 == (CWnd *)0x0) break;
    bVar7 = pCVar3 == param_1;
  }
  pHVar1 = GetTopWindow(*(HWND *)(param_1 + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar1);
  pCVar2 = param_1;
  if (pCVar3 != (CWnd *)0x0) {
LAB_00447f18:
    pCVar2 = pCVar3;
    uVar4 = GetWindowLongW(*(HWND *)(pCVar2 + 0x20),-0x14);
    if ((uVar4 & 0x10000) != 0) {
      if ((((param_3 & 1) == 0) || (BVar5 = IsWindowVisible(*(HWND *)(pCVar2 + 0x20)), BVar5 != 0))
         && (((param_3 & 2) == 0 || (iVar6 = CWnd::IsWindowEnabled(pCVar2), iVar6 != 0)))) {
        param_1 = pCVar2;
        pCVar2 = (CWnd *)0x0;
      }
      else if (pCVar2 == param_2) {
        return (CWnd *)0x0;
      }
      pCVar2 = _AfxNextControl(param_1,pCVar2,param_3);
    }
  }
  return pCVar2;
}

