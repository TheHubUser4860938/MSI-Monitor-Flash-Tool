// rea decompile_all
// name: CMFCSpinButtonCtrl::OnLButtonDown
// address: 0x10090633
// body: available
// range: 0x10090633-0x100906eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCSpinButtonCtrl::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCSpinButtonCtrl::OnLButtonDown
          (CMFCSpinButtonCtrl *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  POINT pt;
  POINT pt_00;
  ulong uVar1;
  BOOL BVar2;
  RECT local_38;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  local_28.left = local_18.left;
  local_28.top = local_18.top;
  local_28.right = local_18.right;
  local_28.bottom = local_18.bottom;
  local_38.left = local_18.left;
  local_38.top = local_18.top;
  local_38.right = local_18.right;
  local_38.bottom = local_18.bottom;
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar1 & 0x40) == 0) {
    local_38.top = (local_18.bottom + local_18.top) / 2;
    local_28.bottom = local_38.top;
  }
  else {
    local_38.right = (local_18.right + local_18.left) / 2;
    local_28.left = local_38.right;
  }
  pt.y = param_4;
  pt.x = param_3;
  BVar2 = PtInRect(&local_28,pt);
  *(BOOL *)(this + 0x80) = BVar2;
  pt_00.y = param_4;
  pt_00.x = param_3;
  BVar2 = PtInRect(&local_38,pt_00);
  *(BOOL *)(this + 0x84) = BVar2;
  FUN_1001d029();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

