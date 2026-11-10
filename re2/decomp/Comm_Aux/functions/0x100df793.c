// rea decompile_all
// name: CPaneFrameWnd::SaveRecentFloatingState
// address: 0x100df793
// body: available
// range: 0x100df793-0x100df817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CPaneFrameWnd::SaveRecentFloatingState(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::SaveRecentFloatingState(CPaneFrameWnd *this)

{
  LONG LVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  tagPOINT local_c;
  
  local_c.y = (LONG)(this + 0xd8);
  local_c.x = (LONG)this;
  GetWindowRect(*(HWND *)(this + 0x20),(LPRECT)local_c.y);
  if (*(HWND__ **)(this + 0xd4) != (HWND__ *)0x0) {
    pCVar2 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xd4));
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101ba9ec,(CObject *)pCVar2);
    LVar1 = local_c.y;
    if (pCVar3 != (CObject *)0x0) {
      local_c.x = 0;
      local_c.y = 0;
      *(LONG *)(pCVar3 + 0x1e8) = *(LONG *)LVar1;
      *(LONG *)(pCVar3 + 0x1ec) = *(LONG *)(LVar1 + 4);
      *(LONG *)(pCVar3 + 0x1f0) = *(LONG *)(LVar1 + 8);
      *(LONG *)(pCVar3 + 500) = *(LONG *)(LVar1 + 0xc);
      GetCursorPos(&local_c);
      ScreenToClient(*(HWND *)(pCVar3 + 0x20),&local_c);
      *(LONG *)(pCVar3 + 0x168) = local_c.x;
      *(LONG *)(pCVar3 + 0x16c) = local_c.y;
    }
  }
  return;
}

