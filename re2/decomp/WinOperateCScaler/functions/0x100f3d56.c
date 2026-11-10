// rea decompile_all
// name: CMFCToolBarButton::SetACCData
// address: 0x100f3d56
// body: available
// range: 0x100f3d56-0x100f3fc8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarButton::SetACCData(class CWnd *,class
   CAccessibilityData &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBarButton::SetACCData(CMFCToolBarButton *this,CWnd *param_1,CAccessibilityData *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  CFrameWnd *pCVar4;
  int iVar5;
  int local_220;
  int local_21c;
  CFrameWnd *local_218;
  wchar_t local_214 [262];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x21c;
  local_8 = 0x100f3d65;
  CAccessibilityData::Clear(param_2);
  iVar2 = FUN_100187a0(*(int *)(this + 0x2c) + -0x10);
  iVar5 = iVar2 + 0x10;
  local_8 = 0;
  local_220 = iVar5;
  if (((*(int *)(iVar2 + 4) == 0) && (*(int *)(this + 0x20) != 0)) && (*(int *)(this + 0x20) != -1))
  {
    uVar3 = FUN_1001e20a();
    FUN_1001d224(uVar3);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar2 = FUN_1001de50(*(undefined4 *)(this + 0x20),local_214,0x100);
    if (iVar2 != 0) {
      iVar2 = AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                   *)&local_218,local_214,1,L'\n');
      if (iVar2 != 0) {
        FUN_10018680(&local_218);
        iVar5 = local_220;
      }
    }
    local_8 = local_8 & 0xffffff00;
    ATL::CStringData::Release((CStringData *)(local_218 + -0x10));
  }
  FUN_10018680(&local_220);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)param_2,L'&');
  ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)(param_2 + 0x14),L"Press");
  pCVar4 = CWnd::GetParentFrame(param_1);
  if ((pCVar4 != (CFrameWnd *)0x0) && (*(int *)(pCVar4 + 0x20) != 0)) {
    uVar3 = FUN_1001e20a();
    FUN_1001d224(uVar3);
    local_8._0_1_ = 2;
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x174);
    guard_check_icall(*(undefined4 *)(this + 0x20),&local_218);
    (*pcVar1)();
    FUN_10018680(&local_218);
    local_8 = (uint)local_8._1_3_ << 8;
    ATL::CStringData::Release((CStringData *)(local_218 + -0x10));
  }
  local_218 = CWnd::GetParentFrame(*(CWnd **)(this + 0x6c));
  uVar3 = FUN_1001e20a();
  FUN_1001d224(uVar3);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (local_218 != (CFrameWnd *)0x0) {
    iVar2 = CKeyboardManager::FindDefaultAccelerator
                      (*(uint *)(this + 0x20),
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_21c,local_218,1);
    if (iVar2 == 0) {
      pcVar1 = *(code **)(*(int *)local_218 + 0x170);
      guard_check_icall();
      pCVar4 = (CFrameWnd *)(*pcVar1)();
      iVar2 = CKeyboardManager::FindDefaultAccelerator
                        (*(uint *)(this + 0x20),
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_21c,pCVar4,iVar2);
      if (iVar2 == 0) goto LAB_100f3f4a;
    }
    FUN_10018680(&local_21c);
  }
LAB_100f3f4a:
  *(undefined4 *)(param_2 + 0x18) = 0x2b;
  *(undefined4 *)(param_2 + 0x1c) = 0x100000;
  *(undefined4 *)(param_2 + 0x20) = 1;
  if ((*(uint *)(this + 0x24) & 0x10000) != 0) {
    *(undefined4 *)(param_2 + 0x1c) = 0x100010;
  }
  if ((*(uint *)(this + 0x24) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 1;
  }
  if ((*(uint *)(this + 0x24) & 0x20000) == 0) {
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x80;
  }
  else {
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 4;
  }
  ((tagRECT *)(param_2 + 0x24))->left = *(LONG *)(this + 0x54);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(this + 0x58);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(this + 0x5c);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(this + 0x60);
  CWnd::ClientToScreen(param_1,(tagRECT *)(param_2 + 0x24));
  ATL::CStringData::Release((CStringData *)(local_21c + -0x10));
  ATL::CStringData::Release((CStringData *)(iVar5 + -0x10));
  iVar5 = FUN_10154478();
  return iVar5;
}

