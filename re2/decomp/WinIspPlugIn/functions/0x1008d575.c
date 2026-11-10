// rea decompile_all
// name: CMFCVisualManager::OnDrawPaneBorder
// address: 0x1008d575
// body: available
// range: 0x1008d575-0x1008d728 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawPaneBorder(class CDC *,class CBasePane
   *,class CRect &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawPaneBorder
          (CMFCVisualManager *this,CDC *param_1,CBasePane *param_2,CRect *param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  COLORREF CVar4;
  AFX_GLOBAL_DATA *pAVar5;
  ulong uVar6;
  ulong uVar7;
  
  pcVar1 = *(code **)(*(int *)param_2 + 0x170);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0x1c0);
    guard_check_icall();
    uVar3 = (*pcVar1)();
    if ((uVar3 & 0xf00) != 0) {
      CVar4 = GetBkColor(*(HDC *)(param_1 + 8));
      if (*(int *)(param_2 + 0x8c) == 0) {
        pAVar5 = GetGlobalData();
        uVar6 = *(ulong *)(pAVar5 + 0x5c);
      }
      else {
        pAVar5 = GetGlobalData();
        uVar6 = *(ulong *)(pAVar5 + 0x24);
      }
      if (*(int *)(param_2 + 0x8c) == 0) {
        pAVar5 = GetGlobalData();
        uVar7 = *(ulong *)(pAVar5 + 0x58);
      }
      else {
        pAVar5 = GetGlobalData();
        uVar7 = *(ulong *)(pAVar5 + 0x20);
      }
      if ((uVar3 & 0x100) != 0) {
        CDC::FillSolidRect(param_1,0,0,1,(*(int *)(param_3 + 0xc) - *(int *)(param_3 + 4)) + -1,
                           uVar6);
      }
      if ((uVar3 & 0x200) != 0) {
        CDC::FillSolidRect(param_1,0,0,(*(int *)(param_3 + 8) - *(int *)param_3) + -1,1,uVar6);
      }
      if ((uVar3 & 0x400) != 0) {
        CDC::FillSolidRect(param_1,*(int *)(param_3 + 8),0,-1,
                           *(int *)(param_3 + 0xc) - *(int *)(param_3 + 4),uVar7);
      }
      if ((uVar3 & 0x800) != 0) {
        CDC::FillSolidRect(param_1,0,*(int *)(param_3 + 0xc),
                           (*(int *)(param_3 + 8) - *(int *)param_3) + -1,-1,uVar7);
      }
      pcVar1 = *(code **)(*(int *)param_2 + 0x1cc);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        CDC::FillSolidRect(param_1,0,0,*(int *)(param_3 + 8) - *(int *)param_3,1,uVar7);
        CDC::FillSolidRect(param_1,0,1,*(int *)(param_3 + 8) - *(int *)param_3,1,uVar6);
      }
      if ((uVar3 & 0x100) != 0) {
        *(int *)param_3 = *(int *)param_3 + 1;
      }
      if ((uVar3 & 0x200) != 0) {
        *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      }
      if ((uVar3 & 0x400) != 0) {
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + -1;
      }
      if ((uVar3 & 0x800) != 0) {
        *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + -1;
      }
      pcVar1 = *(code **)(*(int *)param_1 + 0x2c);
      guard_check_icall(CVar4);
      (*pcVar1)();
    }
  }
  return;
}

