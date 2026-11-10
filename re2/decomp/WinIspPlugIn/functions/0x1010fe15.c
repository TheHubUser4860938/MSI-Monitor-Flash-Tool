// rea decompile_all
// name: CMFCRibbonTab::SetACCData
// address: 0x1010fe15
// body: available
// range: 0x1010fe15-0x1010ff19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonTab::SetACCData(class CWnd *,class CAccessibilityData
   &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCRibbonTab::SetACCData(CMFCRibbonTab *this,CWnd *param_1,CAccessibilityData *param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  wchar_t local_14 [6];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x1010fe21;
  if (((*(int *)(this + 0x88) != 0) && (iVar3 = *(int *)(*(int *)(this + 0x88) + 0x53c), iVar3 != 0)
      ) && (*(int *)(iVar3 + 0x20) != 0)) {
    uVar1 = *(uint *)(iVar3 + 0x330);
    iVar3 = CMFCRibbonBaseElement::SetACCData((CMFCRibbonBaseElement *)this,param_1,param_2);
    if (iVar3 != 0) {
      *(undefined4 *)(param_2 + 0x1c) = 0x300000;
      if ((uVar1 & 1) == 0) {
        if (*(int *)(*(int *)(this + 0x88) + 100) != 0) {
          *(undefined4 *)(param_2 + 0x1c) = 0x300002;
        }
        pwVar5 = L"Switch";
      }
      else {
        *(undefined4 *)(param_2 + 0x1c) = 0x40300000;
        pcVar2 = *(code **)(*(int *)this + 0xe4);
        guard_check_icall();
        iVar3 = (*pcVar2)();
        if (iVar3 == 0) {
          pwVar5 = L"Open";
        }
        else {
          *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 10;
          pwVar5 = L"Close";
        }
      }
      FUN_10047140(pwVar5);
      FUN_10047140(*(undefined4 *)(*(int *)(this + 0x88) + 0x8c));
      *(undefined4 *)(param_2 + 0x18) = 0x25;
      uVar4 = ATL::operator+(local_14,(CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                                       *)L"Alt, ");
      local_8 = 0;
      FUN_100475f0(uVar4);
      FUN_100476d0();
      return 1;
    }
  }
  return 0;
}

