// rea decompile_all
// name: _Afx_DDX_TextWithFormat
// address: 0x4354cd
// body: available
// range: 0x4354cd-0x4355b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl _Afx_DDX_TextWithFormat(class CDataExchange *,int,wchar_t const *,unsigned int,...)
   
   Library: Visual Studio 2015 Release */

void __cdecl
_Afx_DDX_TextWithFormat(CDataExchange *param_1,int param_2,wchar_t *param_3,uint param_4,...)

{
  undefined4 uVar1;
  HWND hWnd;
  int iVar2;
  int *piVar3;
  undefined4 in_stack_00000014;
  WCHAR local_88 [64];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  hWnd = (HWND)FUN_00435489(param_2);
  uVar1 = in_stack_00000014;
  *(undefined4 *)(param_1 + 0xc) = 1;
  if (*(int *)param_1 == 0) {
    piVar3 = __errno();
    iVar2 = *piVar3;
    piVar3 = __errno();
    *piVar3 = 0;
    __vsnwprintf_s_l(local_88,0x40,0x3f,param_3,(_locale_t)0x0,(va_list)&stack0x00000014);
    piVar3 = __errno();
    if (*piVar3 == 0) {
      piVar3 = __errno();
      *piVar3 = iVar2;
    }
    else {
      piVar3 = __errno();
      FUN_00416b48(*piVar3);
    }
    FUN_0043b205(hWnd,local_88);
  }
  else {
    GetWindowTextW(hWnd,local_88,0x40);
    iVar2 = __snwscanf_s(local_88,0x40,param_3,uVar1);
    if (iVar2 != 1) {
      AfxMessageBox(param_4,0,0xffffffff);
      CDataExchange::Fail(param_1);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

