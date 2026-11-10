// rea decompile_all
// name: CPropertySheet::OnInitDialog
// address: 0x10062f2d
// body: available
// range: 0x10062f2d-0x1006314e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPropertySheet::OnInitDialog(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CPropertySheet::OnInitDialog(CPropertySheet *this)

{
  HWND pHVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 0xd0) == 0) &&
     (pHVar1 = GetDlgItem(*(HWND *)(this + 0x20),0x3020), pHVar1 != (HWND)0x0)) {
    CWnd::ModifyStyle(pHVar1,0x200,0,0);
  }
  if ((*(uint *)(this + 0x84) & 0x1000020) == 0) {
    pHVar1 = GetDlgItem(*(HWND *)(this + 0x20),0x3020);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(pHVar1,&local_18);
    CWnd::ScreenToClient((CWnd *)this,&local_18);
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0x20;
    MapDialogRect(*(HWND *)(this + 0x20),&local_28);
    if (local_28.bottom < local_18.bottom) {
      iVar5 = (local_18.bottom - local_18.top) - local_28.bottom;
      SetWindowPos(pHVar1,(HWND)0x0,0,0,local_18.right - local_18.left,local_28.bottom,0x16);
      uVar6 = 0;
      do {
        pHVar1 = GetDlgItem(*(HWND *)(this + 0x20),*(int *)((int)&DAT_102058dc + uVar6));
        if (pHVar1 != (HWND)0x0) {
          GetWindowRect(pHVar1,&local_18);
          CWnd::ScreenToClient((CWnd *)this,&local_18);
          SetWindowPos(pHVar1,(HWND)0x0,local_18.left,local_18.top - iVar5,0,0,0x15);
        }
        uVar6 = uVar6 + 4;
      } while (uVar6 < 0x10);
      GetWindowRect(*(HWND *)(this + 0x20),&local_18);
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,0,0,local_18.right - local_18.left,
                         (local_18.bottom - local_18.top) - iVar5,0x16);
    }
  }
  uVar6 = 0;
  uVar2 = FUN_100509af();
  if ((*(int *)(this + 0xd4) != 0) && ((*(uint *)(this + 0x84) & 0x1000020) == 0)) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_28);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    pHVar1 = GetDlgItem(*(HWND *)(this + 0x20),1);
    if (pHVar1 != (HWND)0x0) {
      GetWindowRect(pHVar1,&local_18);
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,0,0,local_28.right - local_28.left,
                         local_18.top - local_28.top,0x16);
    }
    do {
      pHVar1 = GetDlgItem(*(HWND *)(this + 0x20),*(int *)((int)&DAT_102058dc + uVar6));
      if (pHVar1 != (HWND)0x0) {
        ShowWindow(pHVar1,0);
        EnableWindow(pHVar1,0);
      }
      uVar6 = uVar6 + 4;
    } while (uVar6 < 0x10);
  }
  uVar3 = CWnd::GetExStyle((CWnd *)this);
  uVar4 = extraout_EDX;
  if ((uVar3 & 0x40000000) == 0) {
    CWnd::CenterWindow((CWnd *)this,(CWnd *)0x0);
    uVar4 = extraout_EDX_00;
  }
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar4,uVar2);
  return iVar5;
}

