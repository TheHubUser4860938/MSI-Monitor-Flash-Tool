// rea decompile_all
// name: CMFCVisualManager::OnDrawAutoHideButtonBorder
// address: 0x1008c2c7
// body: available
// range: 0x1008c2c7-0x1008c36a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawAutoHideButtonBorder(class CDC *,class
   CRect,class CRect,class CMFCAutoHideButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawAutoHideButtonBorder
          (undefined4 param_1_00,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8,int param_9,int param_10)

{
  ulong uVar1;
  code *pcVar2;
  AFX_GLOBAL_DATA *pAVar3;
  COLORREF CVar4;
  
  pAVar3 = GetGlobalData();
  uVar1 = *(ulong *)(pAVar3 + 0x58);
  CVar4 = GetTextColor(*(HDC *)(param_1 + 8));
  if (0 < param_7) {
    CDC::FillSolidRect(param_1,param_3,param_4,param_7 + param_3,param_6,uVar1);
  }
  if (0 < param_8) {
    CDC::FillSolidRect(param_1,param_3,param_4,param_5,param_8 + param_4,uVar1);
  }
  if (0 < param_9) {
    CDC::FillSolidRect(param_1,param_5 - param_9,param_4,param_5,param_6,uVar1);
  }
  if (0 < param_10) {
    CDC::FillSolidRect(param_1,param_3,param_6 - param_10,param_5,param_6,uVar1);
  }
  pcVar2 = *(code **)(*(int *)param_1 + 0x30);
  guard_check_icall(CVar4);
  (*pcVar2)();
  return;
}

