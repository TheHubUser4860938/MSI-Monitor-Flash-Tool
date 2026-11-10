// rea decompile_all
// name: CMFCVisualManager::OnDrawTearOffCaption
// address: 0x100900f3
// body: available
// range: 0x100900f3-0x1009014b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawTearOffCaption(class CDC *,class
   CRect,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCVisualManager::OnDrawTearOffCaption(undefined4 param_1_00,int param_1)

{
  AFX_GLOBAL_DATA *pAVar1;
  HBRUSH hbr;
  undefined4 uVar2;
  int in_stack_00000018;
  
  pAVar1 = GetGlobalData();
  hbr = (HBRUSH)0x0;
  if (pAVar1 != (AFX_GLOBAL_DATA *)0xffffff30) {
    hbr = *(HBRUSH *)(pAVar1 + 0xd4);
  }
  FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x00000008,hbr);
  InflateRect((LPRECT)&stack0x00000008,-2,-1);
  pAVar1 = GetGlobalData();
  if (in_stack_00000018 == 0) {
    uVar2 = *(undefined4 *)(pAVar1 + 0x80);
  }
  else {
    uVar2 = *(undefined4 *)(pAVar1 + 0x7c);
  }
  FUN_10069ae5(&stack0x00000008,uVar2);
  return;
}

