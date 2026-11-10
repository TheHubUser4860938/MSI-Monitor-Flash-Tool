// rea decompile_all
// name: sbumpc
// address: 0x10165f1c
// body: available
// range: 0x10165f1c-0x10165f5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: unsigned short __thiscall std::basic_streambuf<unsigned short,struct
   std::char_traits<unsigned short> >::sbumpc(void)
    public: unsigned short __thiscall std::basic_streambuf<wchar_t,struct std::char_traits<wchar_t>
   >::sbumpc(void)
   
   Library: Visual Studio 2015 Release */

undefined2 sbumpc(void)

{
  undefined2 *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  int *in_ECX;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)in_ECX[7] != 0) {
    iVar4 = *(int *)in_ECX[0xb];
  }
  if (0 < iVar4) {
    *(int *)in_ECX[0xb] = *(int *)in_ECX[0xb] + -1;
    puVar1 = *(undefined2 **)in_ECX[7];
    *(undefined2 **)in_ECX[7] = puVar1 + 1;
    return *puVar1;
  }
  pcVar2 = *(code **)(*in_ECX + 0x1c);
  guard_check_icall();
  uVar3 = (*pcVar2)();
  return uVar3;
}

