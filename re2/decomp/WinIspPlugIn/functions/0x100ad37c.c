// rea decompile_all
// name: CShellManager::BrowseForFolder
// address: 0x100ad37c
// body: available
// range: 0x100ad37c-0x100ad48f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CShellManager::BrowseForFolder(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &,class CWnd *,wchar_t const *,wchar_t
   const *,unsigned int,int *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CShellManager::BrowseForFolder
          (CShellManager *this,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,CWnd *param_2,
          wchar_t *param_3,wchar_t *param_4,uint param_5,int *param_6)

{
  LPITEMIDLIST pidl;
  BOOL BVar1;
  int iVar2;
  _browseinfoW local_440;
  int *local_420;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_41c;
  WCHAR local_418 [260];
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_41c = param_1;
  local_420 = param_6;
  _memset(&local_440,0,0x20);
  local_440.lpszTitle = param_4;
  if (param_4 == (wchar_t *)0x0) {
    local_440.lpszTitle = (LPCWSTR)&PTR_1020e6b0;
  }
  local_440.pszDisplayName = local_418;
  if (param_2 == (CWnd *)0x0) {
    local_440.hwndOwner = (HWND)0x0;
  }
  else {
    local_440.hwndOwner = *(HWND *)(param_2 + 0x20);
  }
  local_440.pidlRoot = (LPCITEMIDLIST)0x0;
  local_440.iImage = -1;
  local_440.ulFlags = param_5;
  *(wchar_t **)(this + 8) = param_3;
  local_440.lpfn = BrowseCallbackProc;
  local_440.lParam = (LPARAM)this;
  pidl = SHBrowseForFolderW(&local_440);
  if (pidl != (LPITEMIDLIST)0x0) {
    BVar1 = SHGetPathFromIDListW(pidl,local_210);
    if ((BVar1 != 0) && (FUN_10047140(local_210), local_420 != (int *)0x0)) {
      *local_420 = local_440.iImage;
    }
    FUN_100ad584(pidl);
  }
  *(undefined4 *)(this + 8) = 0;
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

