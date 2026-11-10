// rea decompile_all
// name: CMFCButton::DrawBorder
// address: 0x1006bfff
// body: available
// range: 0x1006bfff-0x1006c1ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCButton::DrawBorder(class CDC *,class CRect &,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCButton::DrawBorder(CMFCButton *this,CDC *param_1,CRect *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  CMFCVisualManager *pCVar3;
  int iVar4;
  AFX_GLOBAL_DATA *pAVar5;
  int iVar6;
  ulong uVar7;
  
  bVar2 = false;
  if (*(int *)(this + 0x80) != 3) {
    if ((DAT_102456f4 != 0) && (*(int *)(this + 0xa4) == 0)) {
      pCVar3 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x1c4);
      guard_check_icall(param_1,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                        *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),this,param_3);
      iVar4 = (*pcVar1)();
      if (iVar4 == 0) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    if ((((*(int *)(this + 0xac) != 0) && (*(int *)(this + 0xb4) != 0)) || ((param_3 & 1) != 0)) ||
       (*(int *)(this + 0xc0) != 0)) {
      if (bVar2) {
        iVar6 = -2;
        iVar4 = -2;
      }
      else {
        pAVar5 = GetGlobalData();
        uVar7 = *(ulong *)(pAVar5 + 0x24);
        pAVar5 = GetGlobalData();
        CDC::Draw3dRect(param_1,(tagRECT *)param_2,*(ulong *)(pAVar5 + 0x30),uVar7);
        InflateRect((LPRECT)param_2,-1,-1);
        if (*(int *)(this + 0x80) != 1) {
          pAVar5 = GetGlobalData();
          uVar7 = *(ulong *)(pAVar5 + 0x34);
          pAVar5 = GetGlobalData();
          CDC::Draw3dRect(param_1,(tagRECT *)param_2,*(ulong *)(pAVar5 + 0x20),uVar7);
        }
        iVar6 = -1;
        iVar4 = -1;
      }
      InflateRect((LPRECT)param_2,iVar4,iVar6);
      if ((DAT_102456f4 != 0) && (*(int *)(this + 0xa4) == 0)) {
        return;
      }
      *(int *)param_2 = *(int *)param_2 + *(int *)(this + 0xe8);
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + *(int *)(this + 0xec);
      return;
    }
    if ((!bVar2) && ((*(int *)(this + 0x80) != 1 || (*(int *)(this + 0xb4) != 0)))) {
      pAVar5 = GetGlobalData();
      uVar7 = *(ulong *)(pAVar5 + 0x30);
      pAVar5 = GetGlobalData();
      CDC::Draw3dRect(param_1,(tagRECT *)param_2,*(ulong *)(pAVar5 + 0x24),uVar7);
      InflateRect((LPRECT)param_2,-1,-1);
      if ((*(int *)(this + 0x80) == 0) ||
         ((*(int *)(this + 0x80) == 2 && (*(int *)(this + 0xb4) != 0)))) {
        pAVar5 = GetGlobalData();
        uVar7 = *(ulong *)(pAVar5 + 0x20);
        pAVar5 = GetGlobalData();
        CDC::Draw3dRect(param_1,(tagRECT *)param_2,*(ulong *)(pAVar5 + 0x34),uVar7);
      }
      iVar6 = -1;
      iVar4 = -1;
      goto LAB_1006c19d;
    }
  }
  iVar6 = -2;
  iVar4 = -2;
LAB_1006c19d:
  InflateRect((LPRECT)param_2,iVar4,iVar6);
  return;
}

