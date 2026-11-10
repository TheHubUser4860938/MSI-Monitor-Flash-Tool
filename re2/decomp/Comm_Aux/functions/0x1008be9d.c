// rea decompile_all
// name: CMFCVisualManager::OnDrawPopupWindowButtonBorder
// address: 0x1008be9d
// body: available
// range: 0x1008be9d-0x1008bf33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawPopupWindowButtonBorder(class CDC
   *,class CRect,class CMFCDesktopAlertWndButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCVisualManager::OnDrawPopupWindowButtonBorder(undefined4 param_1_00,CDC *param_1)

{
  int iVar1;
  AFX_GLOBAL_DATA *pAVar2;
  CMFCButton *in_stack_00000018;
  ulong uVar3;
  ulong uVar4;
  
  iVar1 = CMFCButton::IsPressed(in_stack_00000018);
  if (iVar1 == 0) {
    pAVar2 = GetGlobalData();
    uVar4 = *(ulong *)(pAVar2 + 0x60);
    pAVar2 = GetGlobalData();
    CDC::Draw3dRect(param_1,(tagRECT *)&stack0x00000008,*(ulong *)(pAVar2 + 100),uVar4);
    InflateRect((LPRECT)&stack0x00000008,-1,-1);
    pAVar2 = GetGlobalData();
    uVar4 = *(ulong *)(pAVar2 + 0x58);
    pAVar2 = GetGlobalData();
    uVar3 = *(ulong *)(pAVar2 + 0x5c);
  }
  else {
    pAVar2 = GetGlobalData();
    uVar4 = *(ulong *)(pAVar2 + 100);
    pAVar2 = GetGlobalData();
    CDC::Draw3dRect(param_1,(tagRECT *)&stack0x00000008,*(ulong *)(pAVar2 + 0x60),uVar4);
    InflateRect((LPRECT)&stack0x00000008,-1,-1);
    pAVar2 = GetGlobalData();
    uVar4 = *(ulong *)(pAVar2 + 0x5c);
    pAVar2 = GetGlobalData();
    uVar3 = *(ulong *)(pAVar2 + 0x58);
  }
  CDC::Draw3dRect(param_1,(tagRECT *)&stack0x00000008,uVar3,uVar4);
  return;
}

