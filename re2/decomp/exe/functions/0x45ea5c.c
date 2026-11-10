// rea decompile_all
// name: CPaneFrameWnd::OnMouseActivate
// address: 0x45ea5c
// body: available
// range: 0x45ea5c-0x45eb05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CPaneFrameWnd::OnMouseActivate(class CWnd *,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CPaneFrameWnd::OnMouseActivate(CPaneFrameWnd *this,CWnd *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if ((*(HWND *)(this + 0xd4) != (HWND)0x0) &&
     (BVar2 = IsWindow(*(HWND *)(this + 0xd4)), BVar2 != 0)) {
    CWnd::FromHandle(*(HWND__ **)(this + 0xd4));
    local_c.x = 0;
    local_c.y = 0;
    GetCursorPos(&local_c);
    ScreenToClient(*(HWND *)(this + 0x20),&local_c);
    pcVar1 = *(code **)(*(int *)this + 0x1ec);
    guard_check_icall(local_c.x,local_c.y,1);
    iVar3 = (*pcVar1)();
    iVar4 = FUN_0043970d(&PTR_s_CMFCToolBar_0060c580);
    if ((iVar4 != 0) && (iVar3 != 1)) {
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)&DAT_00614a70,0,0,0,0,0x13);
      return 3;
    }
  }
  iVar3 = FUN_0042ec70();
  return iVar3;
}

