// rea decompile_all
// name: COleControlSite::XOleIPSite::InvalidateRect
// address: 0x44474a
// body: available
// range: 0x44474a-0x4447f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleIPSite::InvalidateRect(struct tagRECT const
   *,int)
   
   Library: Visual Studio 2015 Release */

long COleControlSite::XOleIPSite::InvalidateRect(tagRECT *param_1,int param_2)

{
  BOOL BVar1;
  long lVar2;
  BOOL in_stack_0000000c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  FUN_00434a7a(param_1[-0xc].bottom);
  if (param_2 == 0) {
    local_18.left = param_1[-10].left;
    local_18.top = param_1[-10].top;
    local_18.right = param_1[-10].right;
    local_18.bottom = param_1[-10].bottom;
  }
  else {
    IntersectRect(&local_18,(RECT *)param_2,param_1 + -10);
    EqualRect(&local_18,(RECT *)param_2);
  }
  BVar1 = IsRectEmpty(&local_18);
  if (BVar1 == 0) {
    ::InvalidateRect(*(HWND *)(*(int *)(param_1[-0xb].left + 0x20) + 0x20),&local_18,
                     in_stack_0000000c);
  }
  guard_check_icall();
  lVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar2;
}

