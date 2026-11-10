// rea decompile_all
// name: OnSizing
// address: 0x100ecf5b
// body: available
// range: 0x100ecf5b-0x100ecfe4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CMDIChildWndEx::OnSizing(unsigned int,struct tagRECT *)
    protected: void __thiscall COleCntrFrameWndEx::OnSizing(unsigned int,struct tagRECT *)
   
   Library: Visual Studio 2015 Release */

void OnSizing(undefined4 param_1,RECT *param_2)

{
  code *pcVar1;
  int *in_ECX;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  FUN_100509af();
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect((HWND)in_ECX[8],&local_18);
  CopyRect(&local_28,param_2);
  if ((local_18.right - local_18.left != local_28.right - local_28.left) ||
     (local_18.bottom - local_18.top != local_28.bottom - local_28.top)) {
    pcVar1 = *(code **)(*in_ECX + 0x1cc);
    guard_check_icall(0);
    (*pcVar1)();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

