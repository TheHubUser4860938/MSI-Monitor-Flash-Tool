// rea decompile_all
// name: CMFCTabCtrl::OnLButtonDblClk
// address: 0x10071bbc
// body: available
// range: 0x10071bbc-0x10071c9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTabCtrl::OnLButtonDblClk(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCTabCtrl::OnLButtonDblClk(CMFCTabCtrl *this,WPARAM param_1,LONG param_3,LONG param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  POINT pt;
  CWnd *pCVar3;
  BOOL BVar4;
  int iVar5;
  undefined4 *puVar6;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  puVar6 = *(undefined4 **)(this + 0x2a00);
  do {
    if (puVar6 == (undefined4 *)0x0) {
      pcVar2 = *(code **)(*(int *)this + 0x24c);
      guard_check_icall(&param_3);
      iVar5 = (*pcVar2)();
      if (iVar5 == 0) {
        CMFCBaseTabCtrl::OnLButtonDblClk((CMFCBaseTabCtrl *)this,param_1,param_3,param_4);
      }
      else {
        MapWindowPoints(*(HWND *)(this + 0x20),*(HWND *)(iVar5 + 0x20),(LPPOINT)&param_3,1);
        SendMessageW(*(HWND *)(iVar5 + 0x20),0x203,param_1,
                     CONCAT22((undefined2)param_4,(undefined2)param_3));
      }
      break;
    }
    puVar1 = puVar6 + 2;
    puVar6 = (undefined4 *)*puVar6;
    pCVar3 = CWnd::FromHandle((HWND__ *)*puVar1);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(pCVar3 + 0x20),&local_18);
    MapWindowPoints(*(HWND *)(pCVar3 + 0x20),*(HWND *)(this + 0x20),(LPPOINT)&local_18,2);
    pt.y = param_4;
    pt.x = param_3;
    BVar4 = PtInRect(&local_18,pt);
  } while (BVar4 == 0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

