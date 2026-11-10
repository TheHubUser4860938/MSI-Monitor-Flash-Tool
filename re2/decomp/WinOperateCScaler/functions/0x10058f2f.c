// rea decompile_all
// name: CList<>
// address: 0x10058f2f
// body: available
// range: 0x10058f2f-0x10058f54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall CList<unsigned int,unsigned int>::CList<unsigned int,unsigned int>(int)
    public: __thiscall CList<struct HINSTANCE__ *,struct HINSTANCE__ *>::CList<struct HINSTANCE__
   *,struct HINSTANCE__ *>(int)
   
   Library: Visual Studio 2015 Release */

void CList<>(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CList<HINSTANCE__*,HINSTANCE__*>::vftable;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = param_1;
  return;
}

