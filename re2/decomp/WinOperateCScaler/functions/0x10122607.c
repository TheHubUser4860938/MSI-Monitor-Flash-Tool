// rea decompile_all
// name: CMFCCaptionButton::GetRect
// address: 0x10122607
// body: available
// range: 0x10122607-0x10122652 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CRect __thiscall CMFCCaptionButton::GetRect(void)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCCaptionButton::GetRect(CMFCCaptionButton *this)

{
  CMFCCaptionButton *pCVar1;
  CMFCCaptionButton *pCVar2;
  int iVar3;
  int iVar4;
  CMFCCaptionButton **ppCVar5;
  int *in_stack_00000004;
  CMFCCaptionButton *local_c;
  CMFCCaptionButton *local_8;
  
  if (*(int *)(this + 0xc) == 0) {
    local_c = this;
    local_8 = this;
    ppCVar5 = (CMFCCaptionButton **)GetSize();
  }
  else {
    local_c = (CMFCCaptionButton *)0x0;
    local_8 = (CMFCCaptionButton *)0x0;
    ppCVar5 = &local_c;
  }
  pCVar1 = *ppCVar5;
  pCVar2 = ppCVar5[1];
  iVar3 = *(int *)(this + 0x24);
  iVar4 = *(int *)(this + 0x28);
  *in_stack_00000004 = iVar3;
  in_stack_00000004[2] = (int)(pCVar1 + iVar3);
  in_stack_00000004[1] = iVar4;
  in_stack_00000004[3] = (int)(pCVar2 + iVar4);
  return;
}

