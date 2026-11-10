// rea decompile_all
// name: CWnd::GrayCtlColor
// address: 0x10028d54
// body: available
// range: 0x10028d54-0x10028ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static int __stdcall CWnd::GrayCtlColor(struct HDC__ *,struct HWND__ *,unsigned
   int,struct HBRUSH__ *,unsigned long)
   
   Library: Visual Studio 2015 Release */

int CWnd::GrayCtlColor(HDC__ *param_1,HWND__ *param_2,uint param_3,HBRUSH__ *param_4,ulong param_5)

{
  int iVar1;
  undefined1 local_14 [4];
  COLORREF local_10;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if ((((param_1 != (HDC__ *)0x0) && (param_4 != (HBRUSH__ *)0x0)) && (param_3 != 1)) &&
     (((param_3 != 0 && (param_3 != 5)) &&
      ((param_3 != 2 || (iVar1 = _AfxIsComboBoxControl(param_2,2), iVar1 != 0)))))) {
    GetObjectW(param_4,0xc,local_14);
    SetBkColor(param_1,local_10);
    if (param_5 == 0xffffffff) {
      param_5 = GetSysColor(8);
    }
    SetTextColor(param_1,param_5);
  }
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

