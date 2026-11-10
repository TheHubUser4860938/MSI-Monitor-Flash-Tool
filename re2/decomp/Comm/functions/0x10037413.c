// rea decompile_all
// name: CMFCColorButton::OnDrawBorder
// address: 0x10037413
// body: available
// range: 0x10037413-0x100374cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCColorButton::OnDrawBorder(class CDC *,class CRect
   &,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCColorButton::OnDrawBorder(CMFCColorButton *this,CDC *param_1,CRect *param_2,uint param_3)

{
  CMFCVisualManager *pCVar1;
  int iVar2;
  int iVar3;
  AFX_GLOBAL_DATA *pAVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  
  if (DAT_101da9dc != 0) {
    pCVar1 = CMFCVisualManager::GetInstance();
    uVar6 = 1;
    uVar5 = 0;
    iVar3 = *(int *)pCVar1;
    iVar2 = CWnd::IsWindowEnabled((CWnd *)this);
    guard_check_icall(param_1,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                      *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),iVar2 == 0,uVar5,
                      uVar6);
    iVar3 = (**(code **)(iVar3 + 0x1cc))();
    if (iVar3 != 0) {
      return;
    }
  }
  pAVar4 = GetGlobalData();
  uVar7 = *(ulong *)(pAVar4 + 0x24);
  pAVar4 = GetGlobalData();
  CDC::Draw3dRect(param_1,(tagRECT *)param_2,*(ulong *)(pAVar4 + 0x30),uVar7);
  InflateRect((LPRECT)param_2,-1,-1);
  if ((*(int *)(this + 0x80) == 0) || (*(int *)(this + 0xb4) != 0)) {
    pAVar4 = GetGlobalData();
    uVar7 = *(ulong *)(pAVar4 + 0x34);
    pAVar4 = GetGlobalData();
    CDC::Draw3dRect(param_1,(tagRECT *)param_2,*(ulong *)(pAVar4 + 0x20),uVar7);
  }
  return;
}

