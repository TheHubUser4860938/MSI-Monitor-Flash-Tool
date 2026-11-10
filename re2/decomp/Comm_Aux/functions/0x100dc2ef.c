// rea decompile_all
// name: CPaneFrameWnd::OnBeforeDock
// address: 0x100dc2ef
// body: available
// range: 0x100dc2ef-0x100dc3b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPaneFrameWnd::OnBeforeDock(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CPaneFrameWnd::OnBeforeDock(CPaneFrameWnd *this)

{
  SHORT SVar1;
  CWnd *pCVar2;
  CDockingManager *pCVar3;
  int iVar4;
  undefined4 local_28;
  tagPOINT local_24;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  SVar1 = GetKeyState(0x11);
  if (-1 < SVar1) {
    pCVar3 = *(CDockingManager **)(this + 0x184);
    if (pCVar3 == (CDockingManager *)0x0) {
      pCVar2 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 200));
      pCVar3 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10205db4,pCVar2);
      if (pCVar3 == (CDockingManager *)0x0) goto LAB_100dc3a3;
    }
    local_24.x = 0;
    local_24.y = 0;
    GetCursorPos(&local_24);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    SetRectEmpty(&local_18);
    local_1c = 0;
    local_28 = 0;
    CDockingManager::CalcExpectedDockedRect
              (pCVar3,this,local_24.x,local_24.y,&local_18,&local_1c,&local_28);
    IsRectEmpty(&local_18);
  }
LAB_100dc3a3:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

