// rea decompile_all
// name: _AfxCheckDefPushButton
// address: 0x4479d6
// body: available
// range: 0x4479d6-0x447ab5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __stdcall _AfxCheckDefPushButton(class CWnd *,class CWnd *,class CWnd *)
   
   Library: Visual Studio 2015 Release */

void _AfxCheckDefPushButton(CWnd *param_1,CWnd *param_2,CWnd *param_3)

{
  HWND hWnd;
  BOOL BVar1;
  uint uVar2;
  ulong uVar3;
  CWnd *pCVar4;
  int iVar5;
  ulong uVar6;
  
  uVar6 = 0;
  hWnd = (HWND)0x0;
  if (param_3 != (CWnd *)0x0) {
    hWnd = *(HWND *)(param_3 + 0x20);
  }
  BVar1 = IsChild(*(HWND *)(param_1 + 0x20),hWnd);
  if (BVar1 == 0) {
    return;
  }
  if (param_3 != (CWnd *)0x0) {
    uVar2 = GetWindowLongW(*(HWND *)(param_3 + 0x20),-0x14);
    if ((uVar2 & 0x10000) != 0) {
      return;
    }
    uVar6 = COccManager::GetDefBtnCode(param_3);
  }
  if (param_2 == param_3) {
    if ((uVar6 & 0x20) == 0) {
      return;
    }
    if (param_2 == (CWnd *)0x0) goto LAB_00447aa3;
    uVar3 = _AfxOriginalDefButton(param_1);
    pCVar4 = _AfxFindDlgItem(param_1,uVar3);
    if (((pCVar4 == (CWnd *)0x0) || (pCVar4 == param_3)) ||
       (uVar3 = COccManager::GetDefBtnCode(pCVar4), (uVar3 & 0x10) == 0)) goto LAB_00447aa3;
LAB_00447a73:
    _AfxRemoveDefaultButton(param_1,pCVar4);
  }
  else {
    pCVar4 = param_3;
    if (((param_2 != (CWnd *)0x0) && (uVar3 = COccManager::GetDefBtnCode(param_2), uVar3 != 0)) ||
       ((param_3 != (CWnd *)0x0 && (uVar6 != 0)))) goto LAB_00447a73;
  }
  if ((uVar6 & 0x30) == 0) {
    uVar6 = _AfxOriginalDefButton(param_1);
    param_3 = _AfxFindDlgItem(param_1,uVar6);
    uVar6 = COccManager::GetDefBtnCode(param_3);
    if ((uVar6 & 0x20) == 0) {
      return;
    }
    iVar5 = CWnd::IsWindowEnabled(param_3);
    if (iVar5 == 0) {
      return;
    }
  }
LAB_00447aa3:
  COccManager::SetDefaultButton(param_3,1);
  return;
}

