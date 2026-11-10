// rea decompile_all
// name: FID_conflict:GetDlgItemTextA
// address: 0x100288b5
// body: available
// range: 0x100288b5-0x10028926 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: int __thiscall CWnd::GetDlgItemTextA(int,class ATL::CStringT<char,class
   StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > &)const 
    public: int __thiscall CWnd::GetDlgItemTextW(int,class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &)const 
   
   Library: Visual Studio 2015 Release */

UINT FID_conflict_GetDlgItemTextA(HWND hDlg,int nIDDlgItem,LPSTR lpString,int cchMax)

{
  HWND hWnd;
  int iVar1;
  wchar_t *lpString_00;
  CWnd *this;
  CWnd *in_ECX;
  int nMaxCount;
  
  ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)nIDDlgItem,L"");
  if (*(int *)(in_ECX + 0x70) == 0) {
    hWnd = GetDlgItem(*(HWND *)(in_ECX + 0x20),(int)hDlg);
    if (hWnd != (HWND)0x0) {
      iVar1 = GetWindowTextLengthW(hWnd);
      nMaxCount = iVar1 + 1;
      lpString_00 = ATL::CSimpleStringT<wchar_t,0>::GetBufferSetLength
                              ((CSimpleStringT<wchar_t,0> *)nIDDlgItem,iVar1);
      GetWindowTextW(hWnd,lpString_00,nMaxCount);
      ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)nIDDlgItem,-1);
    }
  }
  else {
    this = CWnd::GetDlgItem(in_ECX,(int)hDlg);
    if (this != (CWnd *)0x0) {
      CWnd::GetWindowTextW
                (this,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                      nIDDlgItem);
    }
  }
  return *(UINT *)(*(int *)nIDDlgItem + -0xc);
}

