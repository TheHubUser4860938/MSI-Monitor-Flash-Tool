// rea decompile_all
// name: CMFCMaskedEdit::OnChar
// address: 0x1004596d
// body: available
// range: 0x1004596d-0x100459ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCMaskedEdit::OnChar(unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCMaskedEdit::OnChar(CMFCMaskedEdit *this,uint param_1,uint param_2,uint param_3)

{
  SHORT SVar1;
  int iVar2;
  CMFCMaskedEdit *local_c;
  CMFCMaskedEdit *local_8;
  
  local_c = this;
  local_8 = this;
  iVar2 = _iswprint((wint_t)param_1);
  if ((iVar2 != 0) && (SVar1 = GetKeyState(0x11), -1 < (char)SVar1)) {
    OnCharPrintchar(this,param_1,param_2,param_3);
    return;
  }
  if (((param_1 != 0x2e) && (param_1 != 8)) || (*(int *)(*(int *)(this + 0x84) + -0xc) == 0)) {
    SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_c,(LPARAM)&local_8);
    FUN_100283ad();
    DoUpdate(this,1,(int)local_c,(int)local_8);
  }
  return;
}

