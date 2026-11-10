// rea decompile_all
// name: CMFCToolBarButton::FillInterior
// address: 0x1011e1c0
// body: available
// range: 0x1011e1c0-0x1011e241 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarButton::FillInterior(class CDC *,class CRect const
   &,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarButton::FillInterior
          (CMFCToolBarButton *this,CDC *param_1,CRect *param_2,int param_3,int param_4)

{
  CMFCVisualManager *pCVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  uVar2 = 0;
  if (*(int *)(this + 0x44) == 0) {
    if (((DAT_10245ca8 == 0) || (DAT_10245cac != 0)) || (*(int *)(this + 0x3c) != 0)) {
      if (param_3 == 0) {
        if ((*(uint *)(this + 0x24) & 0x30000) != 0) {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    pCVar1 = CMFCVisualManager::GetInstance();
    if (param_4 == 0) {
      pcVar3 = *(code **)(*(int *)pCVar1 + 0x84);
    }
    else {
      pcVar3 = *(code **)(*(int *)pCVar1 + 0xac);
    }
    guard_check_icall(param_1,this,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                      *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),uVar2);
    (*pcVar3)();
  }
  return;
}

