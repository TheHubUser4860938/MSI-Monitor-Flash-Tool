// rea decompile_all
// name: CWnd::ScrollWindow
// address: 0x1001ffb9
// body: available
// range: 0x1001ffb9-0x10020099 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CWnd::ScrollWindow(int,int,struct tagRECT const *,struct tagRECT const
   *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CWnd::ScrollWindow(CWnd *this,int param_1,int param_2,tagRECT *param_3,tagRECT *param_4)

{
  code *pcVar1;
  BOOL BVar2;
  HWND hWnd;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  BVar2 = IsWindowVisible(*(HWND *)(this + 0x20));
  if (((BVar2 == 0) && (param_3 == (tagRECT *)0x0)) && (param_4 == (tagRECT *)0x0)) {
    for (hWnd = GetWindow(*(HWND *)(this + 0x20),5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(hWnd,&local_18);
      ScreenToClient(this,&local_18);
      ::SetWindowPos(hWnd,(HWND)0x0,local_18.left + param_1,local_18.top + param_2,0,0,0x15);
    }
  }
  else {
    ::ScrollWindow(*(HWND *)(this + 0x20),param_1,param_2,param_3,param_4);
  }
  if ((*(int **)(this + 0x70) != (int *)0x0) && (param_3 == (tagRECT *)0x0)) {
    pcVar1 = *(code **)(**(int **)(this + 0x70) + 0x5c);
    guard_check_icall(param_1,param_2);
    (*pcVar1)();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

