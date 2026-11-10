// rea decompile_all
// name: CMFCToolBarMenuButton::SetACCData
// address: 0x10113d4a
// body: available
// range: 0x10113d4a-0x10113dbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarMenuButton::SetACCData(class CWnd *,class
   CAccessibilityData &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBarMenuButton::SetACCData
          (CMFCToolBarMenuButton *this,CWnd *param_1,CAccessibilityData *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  iVar1 = CMFCToolBarButton::SetACCData((CMFCToolBarButton *)this,param_1,param_2);
  iVar3 = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_2 + 0x18) = 0xc;
    *(undefined4 *)(param_2 + 0x1c) = 0x100004;
    if ((*(uint *)(this + 0x24) & 0x10000) != 0) {
      *(undefined4 *)(param_2 + 0x1c) = 0x100014;
    }
    if ((*(uint *)(this + 0x24) & 0x40000) != 0) {
      *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 1;
    }
    FUN_10047140(L"CMFCToolBarMenuButton");
    pwVar2 = L"Execute";
    if (*(int *)(this + 0x94) == 0) {
      pwVar2 = L"Open";
    }
    FUN_10047140(pwVar2);
    iVar3 = 1;
  }
  return iVar3;
}

