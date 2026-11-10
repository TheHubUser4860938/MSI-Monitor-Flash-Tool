// rea decompile_all
// name: CMFCRibbonTab::SetACCData
// address: 0x47d666
// body: available
// range: 0x47d666-0x47d76a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x47d672;
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
      FUN_00415ad0(pwVar5);
      FUN_00415ad0(*(undefined4 *)(*(int *)(this + 0x88) + 0x8c));
      *(undefined4 *)(param_2 + 0x18) = 0x25;
      uVar4 = FUN_00415460(local_14,L"Alt, ",this + 100);
      local_8 = 0;
      FUN_00415f50(uVar4);
      FUN_0040efa0();
      return 1;
    }
  }
  return 0;
}

