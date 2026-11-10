// rea decompile_all
// name: CFrameImpl::IsHelpKey
// address: 0x100eb9be
// body: available
// range: 0x100eb9be-0x100eba0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: static int __stdcall CFrameImpl::IsHelpKey(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int CFrameImpl::IsHelpKey(tagMSG *param_1)

{
  SHORT SVar1;
  
  if ((((param_1->message == 0x100) && (param_1->wParam == 0x70)) &&
      ((param_1->lParam & 0x40000000) == 0)) &&
     (((SVar1 = GetKeyState(0x10), -1 < SVar1 && (SVar1 = GetKeyState(0x11), -1 < SVar1)) &&
      (SVar1 = GetKeyState(0x12), -1 < SVar1)))) {
    return 1;
  }
  return 0;
}

