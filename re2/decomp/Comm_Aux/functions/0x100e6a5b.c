// rea decompile_all
// name: CFrameWndEx::AdjustClientArea
// address: 0x100e6a5b
// body: available
// range: 0x100e6a5b-0x100e6b38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CFrameWndEx::AdjustClientArea(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameWndEx::AdjustClientArea(CFrameWndEx *this)

{
  code *pcVar1;
  CWnd *this_00;
  int iVar2;
  ulong uVar3;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  this_00 = CWnd::GetDlgItem((CWnd *)this,0xe900);
  if (this_00 == (CWnd *)0x0) goto LAB_100e6b2a;
  local_18 = *(int *)(this + 0x330) + *(int *)(this + 0x9c);
  local_14 = *(int *)(this + 0x334) + *(int *)(this + 0xa0);
  local_10 = *(int *)(this + 0x338) - *(int *)(this + 0xa4);
  local_c = *(int *)(this + 0x33c) - *(int *)(this + 0xa8);
  pcVar1 = *(code **)(*(int *)this_00 + 0x68);
  guard_check_icall(&local_18,0);
  (*pcVar1)();
  iVar2 = FUN_1004e58b(&PTR_s_CSplitterWnd_101bdd80);
  if (iVar2 == 0) {
    iVar2 = FUN_1004e58b(&PTR_s_CFormView_101b5ef8);
    if (iVar2 != 0) goto LAB_100e6af8;
    uVar3 = 0x6000000;
  }
  else {
LAB_100e6af8:
    uVar3 = 0x4000000;
  }
  CWnd::ModifyStyle(this_00,0,uVar3,0);
  CWnd::SetWindowPos(this_00,(CWnd *)&DAT_1020d670,local_18,local_14,local_10 - local_18,
                     local_c - local_14,0x10);
LAB_100e6b2a:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

