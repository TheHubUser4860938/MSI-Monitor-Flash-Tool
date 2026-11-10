// rea decompile_all
// name: CToolTipCtrl::AddTool
// address: 0x4e4f31
// body: available
// range: 0x4e4f31-0x4e4fa0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CToolTipCtrl::AddTool(class CWnd *,wchar_t const *,struct tagRECT const
   *,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CToolTipCtrl::AddTool
          (CToolTipCtrl *this,CWnd *param_1,wchar_t *param_2,tagRECT *param_3,uint param_4)

{
  errno_t eVar1;
  int iVar2;
  undefined1 local_38 [16];
  undefined1 local_28 [20];
  wchar_t *local_14;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  FillInToolInfo(local_38,param_1,param_4);
  if (param_3 != (tagRECT *)0x0) {
    eVar1 = _memcpy_s(local_28,0x10,param_3,0x10);
    FUN_00416060(eVar1);
  }
  local_14 = param_2;
  SendMessageW(*(HWND *)(this + 0x20),0x432,0,(LPARAM)local_38);
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

