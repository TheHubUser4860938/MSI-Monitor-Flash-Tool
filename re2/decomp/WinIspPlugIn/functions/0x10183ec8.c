// rea decompile_all
// name: _Copy_unchecked1<>
// address: 0x10183ec8
// body: available
// range: 0x10183ec8-0x10183f0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    class std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > __cdecl
   std::_Copy_unchecked1<wchar_t *,class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >(wchar_t *,wchar_t *,class std::ostreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> >,struct std::_General_ptr_iterator_tag)
    class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > __cdecl
   std::_Copy_unchecked1<wchar_t *,class std::ostreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >(wchar_t *,wchar_t *,class std::ostreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,struct std::_General_ptr_iterator_tag)
   
   Library: Visual Studio 2015 Release */

void _Copy_unchecked1<>(undefined4 *param_1,undefined2 *param_2,undefined2 *param_3,
                       undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = ~-(uint)(param_3 < param_2) & (uint)((int)param_3 + (1 - (int)param_2)) >> 1;
  if (uVar2 != 0) {
    do {
      FID_conflict_operator_(*param_2);
      uVar1 = uVar1 + 1;
      param_2 = param_2 + 1;
    } while (uVar1 != uVar2);
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  return;
}

