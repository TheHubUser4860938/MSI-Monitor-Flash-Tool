// rea decompile_all
// name: CMFCVisualManager::OnDrawButtonBorder
// address: 0x41a574
// body: available
// range: 0x41a574-0x41a5d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawButtonBorder(class CDC *,class
   CMFCToolBarButton *,class CRect,enum CMFCVisualManager::AFX_BUTTON_STATE)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCVisualManager::OnDrawButtonBorder(undefined4 param_1_00,CDC *param_1)

{
  int iVar1;
  AFX_GLOBAL_DATA *pAVar2;
  ulong uVar3;
  int in_stack_0000001c;
  ulong uVar4;
  
  iVar1 = FUN_0043970d(&PTR_s_CMFCOutlookBarPaneButton_0060c688);
  if (iVar1 == 0) {
    pAVar2 = GetGlobalData();
    uVar3 = *(ulong *)(pAVar2 + 0x58);
  }
  else {
    pAVar2 = GetGlobalData();
    uVar3 = *(ulong *)(pAVar2 + 0x60);
  }
  if (in_stack_0000001c == 1) {
    pAVar2 = GetGlobalData();
    uVar4 = *(ulong *)(pAVar2 + 0x5c);
  }
  else {
    if (in_stack_0000001c != 2) {
      return;
    }
    uVar4 = uVar3;
    pAVar2 = GetGlobalData();
    uVar3 = *(ulong *)(pAVar2 + 0x5c);
  }
  CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,uVar3,uVar4);
  return;
}

