// rea decompile_all
// name: CMFCRibbonPanel::CommonInit
// address: 0x100daf27
// body: available
// range: 0x100daf27-0x100db102 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanel::CommonInit(char const *,struct HICON__ *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanel::CommonInit(CMFCRibbonPanel *this,char *param_1,HICON__ *param_2)

{
  CSimpleStringT<wchar_t,0> *this_00;
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100daf33;
  if (param_1 == (char *)0x0) {
    param_1 = "";
  }
  this_00 = (CSimpleStringT<wchar_t,0> *)(this + 0xfc);
  ATL::CSimpleStringT<wchar_t,0>::Append(this_00,(wchar_t *)param_1);
  local_18 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                       ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        this_00,L'\n',0);
  if (-1 < local_18) {
    puVar3 = (undefined4 *)
             ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                       ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        this_00,(int)local_14);
    local_8 = 0;
    pcVar1 = *(code **)(*(int *)(this + 0x2e0) + 0xb8);
    guard_check_icall(*puVar3,0);
    (*pcVar1)();
    local_8 = 0xffffffff;
    ATL::CStringData::Release((CStringData *)(local_14[0] + -0x10));
    uVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xfc),(int)&local_18);
    local_8 = 1;
    FUN_10018680(uVar4);
    local_8 = 0xffffffff;
    ATL::CStringData::Release((CStringData *)(local_18 + -0x10));
  }
  *(undefined4 *)(this + 0x100) = 0;
  *(HICON__ **)(this + 0x4a4) = param_2;
  pcVar1 = *(code **)(*(int *)(this + 0x2e0) + 0xb4);
  guard_check_icall(*(undefined4 *)(this + 0xfc));
  (*pcVar1)();
  if (DAT_102019e4 + 0x6cU < 7) {
    DAT_102019e4 = -0x6d;
  }
  pcVar1 = *(code **)(*(int *)(this + 0x2e0) + 0xb0);
  iVar2 = DAT_102019e4;
  DAT_102019e4 = DAT_102019e4 + -1;
  guard_check_icall(iVar2);
  (*pcVar1)();
  SetRectEmpty((LPRECT)(this + 0xcc));
  *(undefined4 *)(this + 0xb0) = 4;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x70) = 1;
  *(undefined4 *)(this + 0x88) = 1;
  *(undefined4 *)(this + 0x8c) = 1;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb4) = 2;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x2dc) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  SetRectEmpty((LPRECT)(this + 0xbc));
  *(undefined4 *)(this + 0x110) = 0;
  SetRectEmpty((LPRECT)(this + 0xdc));
  SetRectEmpty((LPRECT)(this + 0xec));
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  return;
}

