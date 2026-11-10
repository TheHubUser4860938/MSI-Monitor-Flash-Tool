// rea decompile_all
// name: CSmartDockingGroupGuidesWnd::CSmartDockingGroupGuidesWnd
// address: 0x1016264d
// body: available
// range: 0x1016264d-0x101626fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: __thiscall CSmartDockingGroupGuidesWnd::CSmartDockingGroupGuidesWnd(void)
   
   Library: Visual Studio 2015 Release */

CSmartDockingGroupGuidesWnd * __thiscall
CSmartDockingGroupGuidesWnd::CSmartDockingGroupGuidesWnd(CSmartDockingGroupGuidesWnd *this)

{
  code *pcVar1;
  CMFCVisualManager *pCVar2;
  HBRUSH pHVar3;
  COLORREF CVar4;
  COLORREF local_18;
  COLORREF local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x10162659;
  CWnd::CWnd((CWnd *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined ***)(this + 0x84) = CBrush::vftable;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined ***)(this + 0x8c) = CBrush::vftable;
  local_8 = 2;
  pCVar2 = CMFCVisualManager::GetInstance();
  pcVar1 = *(code **)(*(int *)pCVar2 + 0x1d0);
  guard_check_icall(local_14,&local_18);
  (*pcVar1)();
  CVar4 = DAT_1020fd8c;
  if (DAT_1020fd8c == 0xffffffff) {
    CVar4 = local_14[0];
  }
  pHVar3 = CreateSolidBrush(CVar4);
  CMenu::Attach((CMenu *)(this + 0x84),(HMENU__ *)pHVar3);
  CVar4 = DAT_1020fd90;
  if (DAT_1020fd90 == 0xffffffff) {
    CVar4 = local_18;
  }
  pHVar3 = CreateSolidBrush(CVar4);
  CMenu::Attach((CMenu *)(this + 0x8c),(HMENU__ *)pHVar3);
  return this;
}

