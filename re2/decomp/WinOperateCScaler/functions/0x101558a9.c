// rea decompile_all
// name: std::ios_base::_Addstd
// address: 0x101558a9
// body: available
// range: 0x101558a9-0x101558f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static void __cdecl std::ios_base::_Addstd(class std::ios_base *)
   
   Library: Visual Studio 2015 Release */

void __cdecl std::ios_base::_Addstd(ios_base *param_1)

{
  uint uVar1;
  ios_base *piVar2;
  int iVar3;
  _Lockit local_8 [4];
  
  _Lockit::_Lockit(local_8,2);
  *(undefined4 *)(param_1 + 8) = 1;
  do {
    piVar2 = *(ios_base **)(*(int *)(param_1 + 8) * 4 + 0x1020d14c);
    if ((piVar2 == (ios_base *)0x0) || (piVar2 == param_1)) break;
    uVar1 = *(int *)(param_1 + 8) + 1;
    *(uint *)(param_1 + 8) = uVar1;
  } while (uVar1 < 8);
  iVar3 = *(int *)(param_1 + 8);
  (&DAT_1020d174)[iVar3] = (&DAT_1020d174)[iVar3] + '\x01';
  *(ios_base **)(iVar3 * 4 + 0x1020d14c) = param_1;
  FUN_10155121();
  return;
}

