// rea decompile_all
// name: CSmartDockingGroupGuidesManager::AdjustPos
// address: 0x1016386a
// body: available
// range: 0x1016386a-0x1016395a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CSmartDockingGroupGuidesManager::AdjustPos(class CRect,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CSmartDockingGroupGuidesManager::AdjustPos
          (CSmartDockingGroupGuidesManager *this,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  CSmartDockingGroupGuidesWnd *this_00;
  int iVar1;
  int iVar2;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  this_00 = (CSmartDockingGroupGuidesWnd *)(this + 8);
  local_18.right = 0;
  local_18.bottom = 0;
  if ((this_00 == (CSmartDockingGroupGuidesWnd *)0x0) || (*(int *)(this + 0x28) == 0))
  goto LAB_10163948;
  if (param_6 != -1) {
    if (param_6 == 0) {
      if (*(int *)(this + 0x113c) != 0) {
        *(undefined4 *)(this + 0x113c) = 0;
LAB_101638d2:
        CSmartDockingGroupGuidesWnd::Update(this_00);
      }
    }
    else if ((param_6 == 1) && (*(int *)(this + 0x113c) == 0)) {
      *(undefined4 *)(this + 0x113c) = 1;
      goto LAB_101638d2;
    }
  }
  GetClientRect(*(HWND *)(this + 0x28),&local_18);
  iVar1 = (local_18.left - local_18.right) + param_2 + param_4 >> 1;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  iVar2 = (local_18.top - local_18.bottom) + param_3 + param_5 >> 1;
  ::GetWindowRect(*(HWND *)(this + 0x28),&local_28);
  if ((local_28.left != iVar1) || (local_28.top != iVar2)) {
    CWnd::SetWindowPos((CWnd *)this_00,(CWnd *)&DAT_10245140,iVar1,iVar2,-1,-1,1);
  }
LAB_10163948:
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

