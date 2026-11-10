// rea decompile_all
// name: CTooltipManager::SetTooltipText
// address: 0x10089236
// body: available
// range: 0x10089236-0x10089380 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static void __stdcall CTooltipManager::SetTooltipText(struct tagTOOLINFOW *,class
   CToolTipCtrl *,unsigned int,class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *)
   
   Library: Visual Studio 2015 Release */

void CTooltipManager::SetTooltipText(int param_1,CObject *param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  CStringData *this;
  LPWSTR lpString1;
  CObject *pCVar3;
  int iVar4;
  int local_14;
  
  if ((param_2 != (CObject *)0x0) && (param_1 != 0)) {
    iVar2 = 1;
    iVar4 = 0;
    do {
      if (iVar2 == param_3) {
        if (iVar4 != -1) {
          this = (CStringData *)FUN_100187a0();
          FUN_100185a0();
          if ((DAT_1020b0cc != 0) && (*(int *)(iVar4 * 0x34 + 4 + DAT_1020b0cc) != 0)) {
            if (*(int *)(local_14 + -0xc) == 0) {
              SendMessageW(*(HWND *)(param_2 + 0x20),0x421,1,local_14);
            }
            else {
              SendMessageW(*(HWND *)(param_2 + 0x20),0x421,1,param_4);
              FUN_10018680();
            }
          }
          lpString1 = (LPWSTR)FUN_10175686(*(int *)(this + 4) + 1);
          *(LPWSTR *)(param_1 + 0x24) = lpString1;
          if (lpString1 != (LPWSTR)0x0) {
            lstrcpyW(lpString1,(LPCWSTR)(this + 0x10));
            pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolTipCtrl_101c6dd4,param_2);
            if (pCVar3 != (CObject *)0x0) {
              FUN_100187a0(local_14 + -0x10);
              pcVar1 = *(code **)(*(int *)pCVar3 + 0x170);
              guard_check_icall();
              (*pcVar1)();
            }
          }
          ATL::CStringData::Release((CStringData *)(local_14 + -0x10));
          ATL::CStringData::Release(this);
        }
        break;
      }
      iVar2 = iVar2 * 2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xb);
  }
  ATL::CStringData::Release((CStringData *)(param_4 + -0x10));
  return;
}

