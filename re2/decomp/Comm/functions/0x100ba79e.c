// rea decompile_all
// name: CMFCPopupMenuBar::OnMouseMove
// address: 0x100ba79e
// body: available
// range: 0x100ba79e-0x100ba8a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenuBar::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCPopupMenuBar::OnMouseMove(CMFCPopupMenuBar *this,WPARAM param_1,LONG param_3,LONG param_4)

{
  CSize *this_00;
  POINT pt;
  int iVar1;
  BOOL BVar2;
  CMFCToolBar *pCVar3;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0xd64) == 0) {
    this_00 = (CSize *)(this + 0xd90);
    iVar1 = CSize::operator!=(this_00,(tagSIZE)0xffffffffffffffff);
    if (iVar1 != 0) {
      local_20.x = 0;
      local_20.y = 0;
      GetCursorPos(&local_20);
      if ((local_20.x == *(int *)this_00) && (local_20.y == *(int *)(this + 0xd94)))
      goto LAB_100ba891;
      *(LONG *)this_00 = local_20.x;
      *(LONG *)(this + 0xd94) = local_20.y;
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    if ((DAT_101daf90 == 0) &&
       (pt.y = param_4, pt.x = param_3, BVar2 = PtInRect(&local_18,pt), BVar2 == 0)) {
      pCVar3 = FindDestintationToolBar(this,param_3,param_4);
      if (pCVar3 != (CMFCToolBar *)0x0) {
        MapWindowPoints(*(HWND *)(this + 0x20),*(HWND *)(pCVar3 + 0x20),(LPPOINT)&param_3,1);
        SendMessageW(*(HWND *)(pCVar3 + 0x20),0x200,param_1,
                     CONCAT22((undefined2)param_4,(undefined2)param_3));
      }
    }
    else {
      CMFCToolBar::OnMouseMove((CMFCToolBar *)this,param_1,param_3,param_4);
    }
  }
  else {
    *(undefined4 *)(this + 0xd64) = 0;
  }
LAB_100ba891:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

