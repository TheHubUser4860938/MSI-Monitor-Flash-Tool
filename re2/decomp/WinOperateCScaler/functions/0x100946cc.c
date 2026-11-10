// rea decompile_all
// name: EnableOtherButton
// address: 0x100946cc
// body: available
// range: 0x100946cc-0x1009472a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall CMFCColorBar::EnableOtherButton(char const *,int,int)
    public: void __thiscall CMFCColorBar::EnableOtherButton(wchar_t const *,int,int)
   
   Library: Visual Studio 2015 Release */

void EnableOtherButton(wchar_t *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int *in_ECX;
  
  in_ECX[0x37c] = (uint)(param_2 == 0);
  if ((param_3 == 0) || (param_1 == (wchar_t *)0x0)) {
    param_1 = L"";
  }
  ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)(in_ECX + 0x395),param_1);
  pcVar1 = *(code **)(*in_ECX + 0x45c);
  guard_check_icall();
  (*pcVar1)();
  pcVar1 = *(code **)(*in_ECX + 0x20c);
  guard_check_icall();
  (*pcVar1)();
  return;
}

