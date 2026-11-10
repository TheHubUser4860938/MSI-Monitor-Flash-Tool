// rea decompile_all
// name: CFrameWnd::OnEnable
// address: 0x10086427
// body: available
// range: 0x10086427-0x1008651a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnEnable(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameWnd::OnEnable(CFrameWnd *this,int param_1)

{
  code *pcVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CFrameWnd *pCVar4;
  HWND pHVar5;
  CFrameWnd *local_8;
  
  local_8 = this;
  if ((param_1 == 0) || (((byte)this[0x60] & 4) == 0)) {
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    if (pCVar3 != (CWnd *)0x0) {
      local_8 = (CFrameWnd *)0x0;
      GetWindowThreadProcessId(*(HWND *)(pCVar3 + 0x20),(LPDWORD)&local_8);
      pCVar4 = (CFrameWnd *)GetCurrentProcessId();
      if (pCVar4 == local_8) {
        return;
      }
    }
    if (param_1 == 0) {
      if (*(int *)(this + 0xe4) == 0) {
        *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 0x80;
        pcVar1 = *(code **)(*(int *)this + 0x104);
        guard_check_icall();
        (*pcVar1)();
      }
    }
    else {
      if ((char)*(uint *)(this + 0x60) < '\0') {
        *(uint *)(this + 0x60) = *(uint *)(this + 0x60) & 0xffffff7f;
        pcVar1 = *(code **)(*(int *)this + 0x108);
        guard_check_icall();
        (*pcVar1)();
        pHVar2 = *(HWND *)(this + 0x20);
        pHVar5 = GetActiveWindow();
        if (pHVar5 == pHVar2) {
          SendMessageW(pHVar2,6,1,0);
        }
      }
      if (((byte)this[0x60] & 0x20) != 0) {
        SendMessageW(*(HWND *)(this + 0x20),0x86,1,0);
      }
    }
    FUN_1008534f((-(uint)(param_1 != 0) & 0xfffffff0) + 0x20);
  }
  else {
    CWnd::EnableWindow((CWnd *)this,0);
    SetFocus((HWND)0x0);
  }
  return;
}

