// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawPaneBorder
// address: 0x101451b6
// body: available
// range: 0x101451b6-0x101452f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnDrawPaneBorder(class CDC *,class
   CBasePane *,class CRect &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnDrawPaneBorder
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,CBasePane *param_2,CRect *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  COLORREF CVar5;
  AFX_GLOBAL_DATA *pAVar6;
  
  if (*(int *)(param_2 + 0x8c) == 0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0x1c0);
    guard_check_icall();
    uVar4 = (*pcVar1)();
    if ((uVar4 & 0xf00) != 0) {
      CVar5 = GetBkColor(*(HDC *)(param_1 + 8));
      if ((uVar4 & 0x100) != 0) {
        iVar2 = *(int *)(param_3 + 0xc);
        iVar3 = *(int *)(param_3 + 4);
        pAVar6 = GetGlobalData();
        CDC::FillSolidRect(param_1,0,0,1,(iVar2 - iVar3) + -1,*(ulong *)(pAVar6 + 0x54));
      }
      if ((uVar4 & 0x200) != 0) {
        iVar2 = *(int *)(param_3 + 8);
        iVar3 = *(int *)param_3;
        pAVar6 = GetGlobalData();
        CDC::FillSolidRect(param_1,0,0,(iVar2 - iVar3) + -1,1,*(ulong *)(pAVar6 + 0x54));
      }
      if ((uVar4 & 0x400) != 0) {
        iVar2 = *(int *)(param_3 + 0xc);
        iVar3 = *(int *)(param_3 + 4);
        pAVar6 = GetGlobalData();
        CDC::FillSolidRect(param_1,*(int *)(param_3 + 8),0,-1,iVar2 - iVar3,
                           *(ulong *)(pAVar6 + 0x54));
      }
      if ((uVar4 & 0x800) != 0) {
        iVar2 = *(int *)(param_3 + 8);
        iVar3 = *(int *)param_3;
        pAVar6 = GetGlobalData();
        CDC::FillSolidRect(param_1,0,*(int *)(param_3 + 0xc),(iVar2 - iVar3) + -1,-1,
                           *(ulong *)(pAVar6 + 0x54));
      }
      if ((uVar4 & 0x100) != 0) {
        *(int *)param_3 = *(int *)param_3 + 1;
      }
      if ((uVar4 & 0x200) != 0) {
        *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      }
      if ((uVar4 & 0x400) != 0) {
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + -1;
      }
      if ((uVar4 & 0x800) != 0) {
        *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + -1;
      }
      pcVar1 = *(code **)(*(int *)param_1 + 0x2c);
      guard_check_icall(CVar5);
      (*pcVar1)();
    }
  }
  else {
    CMFCVisualManager::OnDrawPaneBorder((CMFCVisualManager *)this,param_1,param_2,param_3);
  }
  return;
}

