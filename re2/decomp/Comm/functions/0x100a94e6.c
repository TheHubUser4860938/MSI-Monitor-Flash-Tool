// rea decompile_all
// name: CPaneFrameWnd::Serialize
// address: 0x100a94e6
// body: available
// range: 0x100a94e6-0x100a9684 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CPaneFrameWnd::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::Serialize(CPaneFrameWnd *this,CArchive *param_1)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  ulong uVar4;
  CWnd *this_00;
  CArchive *pCVar5;
  CArchiveException *local_3c;
  CArchive *local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x100a94f2;
  pCVar5 = (CArchive *)0x0;
  local_38 = param_1;
  if (((byte)param_1[0x18] & 1) == 0) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_24);
    if (*(int *)(this + 0x90) != 0) {
      local_24.bottom = *(int *)(this + 0xa8) + local_24.top;
    }
    BVar3 = IsWindowVisible(*(HWND *)(this + 0x20));
    uVar4 = CWnd::GetExStyle((CWnd *)this);
    FUN_1001b086(uVar4);
    FUN_1001aede(&local_24,0x10);
    FUN_1001b086(BVar3);
    this_00 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xd4));
    if (this_00 == (CWnd *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = CWnd::GetDlgCtrlID(this_00);
    }
    FUN_1001b086(iVar2);
    FUN_1001b086(*(undefined4 *)(this + 0xc4));
    FUN_1001b086(*(undefined4 *)(this + 0x94));
  }
  else {
    local_38 = (CArchive *)0x0;
    local_34.left = 0;
    local_34.top = 0;
    local_34.right = 0;
    local_34.bottom = 0;
    SetRectEmpty(&local_34);
    FUN_1001a6a2(&local_38);
    FUN_1001b1a6(&local_34,0x10);
    FUN_1001a6a2(&local_3c);
    FUN_1001a6a2(this + 0xc0);
    FUN_1001a6a2(this + 0xc4);
    FUN_1001a6a2(this + 0x94);
    pcVar1 = *(code **)(*(int *)this + 0x204);
    guard_check_icall(&DAT_101b5ebc,(uint)local_38 & 0xefffffff,&local_34,DAT_101dc75c,0);
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      local_3c = (CArchiveException *)FUN_10011f7d(0x10);
      local_8 = 0;
      if (local_3c != (CArchiveException *)0x0) {
        pCVar5 = (CArchive *)CArchiveException::CArchiveException(local_3c,0,(char *)0x0);
      }
      local_8 = 0xffffffff;
      local_38 = pCVar5;
      __CxxThrowException_8(&local_38,&DAT_101c0ca8);
    }
    *(undefined4 *)(this + 200) = *(undefined4 *)(DAT_101dc75c + 0x20);
  }
  FUN_101490fe();
  return;
}

