// rea decompile_all
// name: OnDrawRibbonKeyTip
// address: 0x41cbf6
// body: available
// range: 0x41cbf6-0x41cd42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonKeyTip(class CDC *,class
   CMFCRibbonBaseElement *,class CRect,class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >)
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonKeyTip(class CDC *,class
   CMFCRibbonBaseElement *,class CRect,class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >)
   
   Library: Visual Studio 2015 Release */

void OnDrawRibbonKeyTip(CDC *param_1,int *param_2,LONG param_3,LONG param_4,LONG param_5,
                       LONG param_6,int param_7)

{
  code *pcVar1;
  HBRUSH hbr;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  undefined4 uVar4;
  int in_ECX;
  DWORD DVar5;
  HDC pHVar6;
  DWORD local_2c;
  DWORD local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  pHVar6 = (HDC)0x0;
  local_8 = 0;
  local_2c = GetSysColor(0x17);
  local_28 = local_2c;
  if (*(int *)(in_ECX + 0x44) == 0) {
    if (param_1 != (CDC *)0x0) {
      pHVar6 = *(HDC *)(param_1 + 4);
    }
    hbr = GetSysColorBrush(0x18);
    FillRect(pHVar6,(RECT *)&param_3,hbr);
  }
  else {
    local_24.left = param_3;
    local_24.top = param_4;
    local_24.right = param_5;
    local_24.bottom = param_6;
    InflateRect(&local_24,2,2);
    if (param_1 == (CDC *)0x0) {
      pHVar6 = (HDC)0x0;
    }
    else {
      pHVar6 = *(HDC *)(param_1 + 4);
    }
    DrawThemeBackground(*(HTHEME *)(in_ECX + 0x44),pHVar6,1,0,&local_24,(LPCRECT)0x0);
    GetThemeColor(*(HTHEME *)(in_ECX + 0x44),1,0,0xedb,&local_2c);
    GetThemeColor(*(HTHEME *)(in_ECX + 0x44),1,0,0xedc,&local_28);
  }
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::MakeUpper
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&param_7);
  pcVar1 = *(code **)(*param_2 + 0xdc);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  DVar5 = local_2c;
  if (iVar2 != 0) {
    pAVar3 = GetGlobalData();
    DVar5 = *(DWORD *)(pAVar3 + 0x38);
  }
  pcVar1 = *(code **)(*(int *)param_1 + 0x30);
  guard_check_icall(DVar5);
  uVar4 = (*pcVar1)();
  iVar2 = *(int *)param_1;
  guard_check_icall(param_7,*(undefined4 *)(param_7 + -0xc),&param_3,0x25);
  (**(code **)(iVar2 + 0x68))();
  pcVar1 = *(code **)(*(int *)param_1 + 0x30);
  guard_check_icall(uVar4);
  (*pcVar1)();
  CDC::Draw3dRect(param_1,(tagRECT *)&param_3,local_28,local_28);
  FUN_0040efa0();
  FUN_0055bae6();
  return;
}

