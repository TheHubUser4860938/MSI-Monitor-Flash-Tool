// rea decompile_all
// name: CDockingPanesRow::FixupVirtualRects
// address: 0x4ee65a
// body: available
// range: 0x4ee65a-0x4ee757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDockingPanesRow::FixupVirtualRects(bool,class CPane *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockingPanesRow::FixupVirtualRects(CDockingPanesRow *this,bool param_1,CPane *param_2)

{
  CPane *this_00;
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  BOOL BVar4;
  HDWP hWinPosInfo;
  undefined1 local_38 [4];
  CDockingPanesRow *local_34;
  CPane *local_30;
  int local_2c;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_2c = *(int *)(this + 0x28);
  local_34 = this;
  while (local_2c != 0) {
    puVar2 = (undefined4 *)FUN_004ead48(&local_2c);
    this_00 = (CPane *)*puVar2;
    pcVar1 = *(code **)(*(int *)this_00 + 0x17c);
    local_30 = this_00;
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (((iVar3 != 0) || (*(int *)(this + 4) != 0)) && (this_00 != param_2)) {
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      ::GetWindowRect(*(HWND *)(this_00 + 0x20),&local_28);
      if (param_1) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        CPane::GetVirtualRect(this_00,(CRect *)&local_18);
        BVar4 = EqualRect(&local_18,&local_28);
        if (BVar4 == 0) {
          hWinPosInfo = BeginDeferWindowPos(*(int *)(this + 0x30));
          this = local_34;
          MovePane(local_34,local_30,local_18.left,local_18.top,local_18.right,local_18.bottom,
                   local_38);
          EndDeferWindowPos(hWinPosInfo);
        }
      }
      else {
        CPane::UpdateVirtualRect(this_00);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

