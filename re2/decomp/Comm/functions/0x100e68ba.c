// rea decompile_all
// name: CUserTool::SetToolIcon
// address: 0x100e68ba
// body: available
// range: 0x100e68ba-0x100e69fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual struct HICON__ * __thiscall CUserTool::SetToolIcon(void)
   
   Library: Visual Studio 2015 Release */

HICON__ * __thiscall CUserTool::SetToolIcon(CUserTool *this)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  DWORD_PTR DVar4;
  HICON__ *pHVar5;
  LPCWSTR pszPath;
  LPCWSTR local_4d4;
  SHFILEINFOW local_4d0;
  WCHAR local_21c [266];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4cc;
  local_8 = 0x100e68c9;
  iVar2 = FUN_10003060(*(int *)(this + 0x14) + -0x10);
  pszPath = (LPCWSTR)(iVar2 + 0x10);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  local_4d4 = pszPath;
  iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_4d4,L"\\",0);
  if (((iVar2 == -1) &&
      (iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                         ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                          &local_4d4,L"/",0), iVar2 == -1)) &&
     (iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_4d4,L":",0), iVar2 == -1)) {
    iVar2 = FUN_10003060(*(int *)(this + 0x14) + -0x10);
    local_8._0_1_ = 1;
    DVar3 = SearchPathW((LPCWSTR)0x0,(LPCWSTR)(iVar2 + 0x10),(LPCWSTR)0x0,0x104,local_21c,
                        (LPWSTR *)0x0);
    if (DVar3 == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x14);
      guard_check_icall();
      (*pcVar1)();
      FUN_10003460();
      goto LAB_100e69ee;
    }
    FUN_10003780(local_21c);
    local_8._0_1_ = 0;
    FUN_10003460();
    pszPath = local_4d4;
  }
  DVar4 = SHGetFileInfoW(pszPath,0,&local_4d0,0x2b4,0x105);
  if (DVar4 == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x14);
    guard_check_icall();
    (*pcVar1)();
  }
LAB_100e69ee:
  FUN_10003460();
  pHVar5 = (HICON__ *)FUN_101490fe();
  return pHVar5;
}

