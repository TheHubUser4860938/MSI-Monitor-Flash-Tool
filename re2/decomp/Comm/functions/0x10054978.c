// rea decompile_all
// name: CMFCBaseVisualManager::GetStandardWindowsTheme
// address: 0x10054978
// body: available
// range: 0x10054978-0x10054b4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual enum CMFCBaseVisualManager::WinXpTheme __thiscall
   CMFCBaseVisualManager::GetStandardWindowsTheme(void)
   
   Library: Visual Studio 2015 Release */

WinXpTheme __thiscall CMFCBaseVisualManager::GetStandardWindowsTheme(CMFCBaseVisualManager *this)

{
  HRESULT HVar1;
  int iVar2;
  WinXpTheme WVar3;
  wchar_t *local_61c;
  COLORREF local_618;
  wchar_t local_614 [256];
  WCHAR local_414 [256];
  WCHAR local_214 [262];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x610;
  local_8 = 0x10054987;
  _memset(local_214,0,0x200);
  _memset(local_414,0,0x200);
  HVar1 = GetCurrentThemeName(local_214,0xff,local_414,0xff,(LPWSTR)0x0,0);
  if (HVar1 != 0) goto LAB_10054b45;
  FUN_100037c0(local_214);
  local_8 = 0;
  FUN_100037c0(local_414);
  local_8 = CONCAT31(local_8._1_3_,1);
  __wsplitpath_s(local_61c,(wchar_t *)0x0,0,(wchar_t *)0x0,0,local_614,0x100,(wchar_t *)0x0,0);
  FUN_10003780(local_614);
  iVar2 = FUN_10002e80(L"Luna");
  if ((iVar2 == 0) || (iVar2 = FUN_10002e80(L"Aero"), iVar2 == 0)) {
    if (*(int *)(this + 0x10) != 0) {
      local_618 = 0;
      HVar1 = GetThemeColor(*(HTHEME *)(this + 0x10),1,0,0xeef,&local_618);
      if ((HVar1 != 0) || (local_618 == 1)) goto LAB_10054b27;
    }
    iVar2 = FUN_10002e80(L"normalcolor");
    if ((iVar2 != 0) &&
       ((iVar2 = FUN_10002e80(L"homestead"), iVar2 != 0 &&
        (iVar2 = FUN_10002e80(L"metallic"), iVar2 == 0)))) {
      FUN_100037c0(local_214);
      local_8 = CONCAT31(local_8._1_3_,2);
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::MakeLower
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_618);
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_618,
                 L"royale",0);
      FUN_10003460();
    }
  }
LAB_10054b27:
  FUN_10003460();
  FUN_10003460();
LAB_10054b45:
  WVar3 = FUN_101490fe();
  return WVar3;
}

