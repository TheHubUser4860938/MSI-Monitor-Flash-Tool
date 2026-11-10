// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonApplicationButton
// address: 0x1008da41
// body: available
// range: 0x1008da41-0x1008db27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonApplicationButton(class CDC
   *,class CMFCRibbonButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonApplicationButton
          (CMFCVisualManager *this,CDC *param_1,CMFCRibbonButton *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  AFX_GLOBAL_DATA *pAVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CDrawingManager local_34 [8];
  CDC *local_2c;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x1008da4d;
  local_2c = param_1;
  pcVar1 = *(code **)(*(int *)param_2 + 0xd0);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  bVar2 = true;
  if (iVar3 == 0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0xd4);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      local_28 = 0;
      goto LAB_1008da8f;
    }
  }
  local_28 = 1;
LAB_1008da8f:
  pcVar1 = *(code **)(*(int *)param_2 + 0xd8);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0xe4);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      bVar2 = false;
    }
  }
  local_24.left = *(LONG *)(param_2 + 0x74);
  local_24.top = *(LONG *)(param_2 + 0x78);
  local_24.right = *(LONG *)(param_2 + 0x7c);
  local_24.bottom = *(LONG *)(param_2 + 0x80);
  InflateRect(&local_24,-2,-2);
  CDrawingManager::CDrawingManager(local_34,local_2c);
  local_8 = 0;
  pAVar4 = GetGlobalData();
  if (local_28 == 0) {
    uVar6 = *(undefined4 *)(pAVar4 + 0x58);
  }
  else {
    uVar6 = *(undefined4 *)(pAVar4 + 0x60);
  }
  pAVar4 = GetGlobalData();
  if (bVar2) {
    uVar5 = *(undefined4 *)(pAVar4 + 100);
  }
  else {
    uVar5 = *(undefined4 *)(pAVar4 + 0x54);
  }
  FUN_100b0e9b(&local_24,uVar5,uVar6);
  FUN_100b0b83();
  FUN_1018015d();
  return;
}

