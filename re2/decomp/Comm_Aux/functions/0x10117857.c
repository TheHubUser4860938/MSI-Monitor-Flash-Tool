// rea decompile_all
// name: CFrameImpl::OnNcPaint
// address: 0x10117857
// body: available
// range: 0x10117857-0x10117918 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CFrameImpl::OnNcPaint(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CFrameImpl::OnNcPaint(CFrameImpl *this)

{
  code *pcVar1;
  BOOL BVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int iVar4;
  CMFCVisualManager *pCVar5;
  bool bVar6;
  
  bVar6 = false;
  iVar4 = *(int *)(this + 0xfc);
  if ((((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) &&
      ((BVar2 = IsWindowVisible(*(HWND *)(iVar4 + 0x20)), BVar2 != 0 ||
       ((*(int *)(this + 0xd0) != 0 ||
        (BVar2 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xb0) + 0x20)), BVar2 == 0)))))) &&
     (*(int *)(*(int *)(this + 0xfc) + 0x328) != 0)) {
    pAVar3 = GetGlobalData();
    iVar4 = AFX_GLOBAL_DATA::IsDwmCompositionEnabled(pAVar3);
    bVar6 = iVar4 == 0;
  }
  iVar4 = IsOwnerDrawCaption(this);
  if (((iVar4 != 0) || (bVar6)) && (pAVar3 = GetGlobalData(), *(int *)(pAVar3 + 0xc) == 0)) {
    pCVar5 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x200);
    guard_check_icall(*(undefined4 *)(this + 0xb0),this + 0x8c,*(undefined4 *)(this + 0x44),
                      *(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c),
                      *(undefined4 *)(this + 0x50));
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  return 0;
}

