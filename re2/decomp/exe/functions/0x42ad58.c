// rea decompile_all
// name: CDialogImpl::DialogMouseHookProc
// address: 0x42ad58
// body: available
// range: 0x42ad58-0x42ae16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: static long __stdcall CDialogImpl::DialogMouseHookProc(int,unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long CDialogImpl::DialogMouseHookProc(int param_1,uint param_2,long param_3)

{
  POINT pt;
  tagPOINT tVar1;
  BOOL BVar2;
  long lVar3;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (DAT_00613210 != (CDialogImpl *)0x0) {
    if (param_2 != 0xa1) {
      if ((((param_2 != 0xa4) && (param_2 != 0xa7)) && (param_2 != 0x201)) &&
         ((param_2 != 0x204 && (param_2 != 0x207)))) goto LAB_0042adf3;
    }
    local_20.x = 0;
    local_20.y = 0;
    GetCursorPos(&local_20);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(*(int *)(DAT_00613210 + 4) + 0x20),&local_18);
    pt.y = local_20.y;
    pt.x = local_20.x;
    BVar2 = PtInRect(&local_18,pt);
    if (BVar2 == 0) {
      tVar1.y = local_20.y;
      tVar1.x = local_20.x;
      ProcessMouseClick(DAT_00613210,tVar1);
    }
  }
LAB_0042adf3:
  CallNextHookEx(DAT_0061320c,param_1,param_2,param_3);
  lVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar3;
}

