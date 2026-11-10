// rea decompile_all
// name: CMFCVisualManager::OnDrawOutlookBarSplitter
// address: 0x1008ba2d
// body: available
// range: 0x1008ba2d-0x1008ba70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawOutlookBarSplitter(class CDC *,class
   CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCVisualManager::OnDrawOutlookBarSplitter(undefined4 param_1_00,CDC *param_1)

{
  AFX_GLOBAL_DATA *pAVar1;
  HBRUSH hbr;
  ulong uVar2;
  
  pAVar1 = GetGlobalData();
  hbr = (HBRUSH)0x0;
  if (pAVar1 != (AFX_GLOBAL_DATA *)0xffffff30) {
    hbr = *(HBRUSH *)(pAVar1 + 0xd4);
  }
  FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x00000008,hbr);
  pAVar1 = GetGlobalData();
  uVar2 = *(ulong *)(pAVar1 + 0x58);
  pAVar1 = GetGlobalData();
  CDC::Draw3dRect(param_1,(tagRECT *)&stack0x00000008,*(ulong *)(pAVar1 + 0x5c),uVar2);
  return;
}

