// rea decompile_all
// name: CMDIClientAreaWnd::TabWndFromPoint
// address: 0x100fc44f
// body: available
// range: 0x100fc44f-0x100fc4dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: class CMFCTabCtrl * __thiscall CMDIClientAreaWnd::TabWndFromPoint(class CPoint)
   
   Library: Visual Studio 2015 Release */

CMFCTabCtrl * __thiscall
CMDIClientAreaWnd::TabWndFromPoint(CMDIClientAreaWnd *this,LONG param_2,LONG param_3)

{
  POINT pt;
  undefined4 *puVar1;
  CObject *pCVar2;
  BOOL BVar3;
  CMFCTabCtrl *pCVar4;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_1c = *(int *)(this + 0x2afc);
  do {
    if (local_1c == 0) break;
    puVar1 = (undefined4 *)FUN_1002466e(&local_1c);
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1018a624,(CObject *)*puVar1);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(pCVar2 + 0x20),&local_18);
    pt.y = param_3;
    pt.x = param_2;
    BVar3 = PtInRect(&local_18,pt);
  } while (BVar3 == 0);
  pCVar4 = (CMFCTabCtrl *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar4;
}

