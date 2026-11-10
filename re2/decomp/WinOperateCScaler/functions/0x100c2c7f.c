// rea decompile_all
// name: SetTaskbarTabText
// address: 0x100c2c7f
// body: available
// range: 0x100c2c7f-0x100c2ded inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual void __thiscall CMDIChildWndEx::SetTaskbarTabText(char const *)
    protected: virtual void __thiscall CMDIChildWndEx::SetTaskbarTabText(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

void SetTaskbarTabText(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  CFrameWnd *pCVar3;
  CObject *this;
  undefined4 uVar4;
  CMDIChildWndEx *in_ECX;
  CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_> *pCVar5;
  wchar_t *pwVar6;
  undefined *puVar7;
  uint local_24;
  ulong local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x100c2c8b;
  iVar2 = CMDIChildWndEx::IsTaskbarTabsSupportEnabled(in_ECX);
  if (iVar2 != 0) {
    iVar2 = CMDIChildWndEx::IsRegisteredWithTaskbarTabs(in_ECX);
    if ((iVar2 != 0) && (param_1 != 0)) {
      pCVar3 = CWnd::GetTopLevelFrame((CWnd *)in_ECX);
      this = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101bd3e8,(CObject *)pCVar3);
      if (this != (CObject *)0x0) {
        local_20 = CWnd::GetExStyle((CWnd *)this);
        if ((local_20 & 0x8000) == 0) {
          FUN_1002da47(param_1);
        }
        else {
          GetTitle(&local_1c);
          local_8 = 0;
          uVar4 = FUN_1001e20a();
          FUN_1001d224(uVar4);
          local_8._0_1_ = 1;
          FUN_100185a0(param_1);
          local_8._0_1_ = 2;
          uVar1 = (undefined1)local_8;
          local_8._0_1_ = 2;
          puVar7 = &DAT_101b791c;
          if ((local_20 & 0x4000) == 0) {
            pwVar6 = (wchar_t *)&local_1c;
            pCVar5 = (CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                      *)&local_20;
            local_8._0_1_ = uVar1;
            uVar4 = ATL::operator+(pCVar5,pwVar6);
            local_8._0_1_ = 5;
            uVar4 = ATL__operator_(&local_24,uVar4,&local_18,pCVar5,pwVar6,puVar7);
            local_8 = CONCAT31(local_8._1_3_,6);
            FUN_10018680(uVar4);
            ATL::CStringData::Release((CStringData *)(local_24 - 0x10));
            local_24 = local_20;
          }
          else {
            pwVar6 = (wchar_t *)&local_18;
            pCVar5 = (CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                      *)&local_24;
            uVar4 = ATL::operator+(pCVar5,pwVar6);
            local_8._0_1_ = 3;
            uVar4 = ATL__operator_(&local_20,uVar4,&local_1c,pCVar5,pwVar6,puVar7);
            local_8 = CONCAT31(local_8._1_3_,4);
            FUN_10018680(uVar4);
            ATL::CStringData::Release((CStringData *)(local_20 - 0x10));
          }
          local_8 = CONCAT31(local_8._1_3_,2);
          ATL::CStringData::Release((CStringData *)(local_24 - 0x10));
          FUN_1002da47(local_14);
          ATL::CStringData::Release((CStringData *)(local_18 + -0x10));
          ATL::CStringData::Release((CStringData *)(local_14 + -0x10));
          ATL::CStringData::Release((CStringData *)(local_1c + -0x10));
        }
      }
    }
  }
  return;
}

