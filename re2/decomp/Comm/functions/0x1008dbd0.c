// rea decompile_all
// name: CMFCToolBarComboBoxButton::Serialize
// address: 0x1008dbd0
// body: available
// range: 0x1008dbd0-0x1008de16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarComboBoxButton::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarComboBoxButton::Serialize(CMFCToolBarComboBoxButton *this,CArchive *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  LRESULT LVar3;
  undefined4 uVar4;
  HWND__ *pHVar5;
  WPARAM wParam;
  undefined4 *puVar6;
  int iVar7;
  HWND__ *local_18;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1008dbdc;
  CMFCToolBarButton::Serialize((CMFCToolBarButton *)this,param_1);
  if (((byte)param_1[0x18] & 1) == 0) {
    FUN_1001b086(*(undefined4 *)(this + 0x70));
    FUN_1001b086(*(undefined4 *)(this + 0x8c));
    FUN_1001b086(*(undefined4 *)(this + 0x74));
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xb8));
    FUN_1001b086(*(undefined4 *)(this + 0x78));
    FUN_1001b086(*(undefined4 *)(this + 0x88));
    if (*(int *)(this + 0xb4) != 0) {
      FUN_1002f87e();
      pcVar2 = *(code **)(*(int *)this + 0xe4);
      guard_check_icall();
      (*pcVar2)();
      CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0xd8));
      wParam = 0;
      LVar3 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x146,0,0);
      if (0 < LVar3) {
        do {
          uVar4 = FUN_10013071();
          FUN_10003190(uVar4);
          local_8 = 0;
          CComboBox::GetLBText(*(CComboBox **)(this + 0xb4),wParam,local_14);
          AddTail(local_14);
          pHVar5 = (HWND__ *)SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x150,wParam,0);
          CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(this + 0xd8),pHVar5);
          local_8 = 0xffffffff;
          FUN_10003460();
          wParam = wParam + 1;
          LVar3 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x146,0,0);
        } while ((int)wParam < LVar3);
      }
    }
    pcVar2 = *(code **)(*(int *)(this + 0xbc) + 8);
    guard_check_icall(param_1);
    (*pcVar2)();
    puVar6 = *(undefined4 **)(this + 0xdc);
    while (puVar6 != (undefined4 *)0x0) {
      puVar1 = puVar6 + 2;
      puVar6 = (undefined4 *)*puVar6;
      FUN_1001b086(*puVar1);
    }
  }
  else {
    FUN_1001a6a2(this + 0x70);
    *(int *)(this + 0x5c) = *(int *)(this + 0x54) + *(int *)(this + 0x70);
    FUN_1001a6a2(this + 0x8c);
    FUN_1001a6a2(this + 0x74);
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xb8));
    FUN_1001a6a2(this + 0x78);
    FUN_1001a6a2(this + 0x88);
    pcVar2 = *(code **)(*(int *)(this + 0xbc) + 8);
    guard_check_icall(param_1);
    (*pcVar2)();
    pcVar2 = *(code **)(*(int *)this + 0xe4);
    guard_check_icall();
    (*pcVar2)();
    CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0xd8));
    iVar7 = 0;
    if (0 < *(int *)(this + 200)) {
      do {
        FUN_1001a6a2(&local_18);
        CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(this + 0xd8),local_18);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(this + 200));
    }
    pcVar2 = *(code **)(*(int *)this + 0xe0);
    guard_check_icall();
    (*pcVar2)();
    SelectItem(this,*(int *)(this + 0x74),1);
  }
  return;
}

