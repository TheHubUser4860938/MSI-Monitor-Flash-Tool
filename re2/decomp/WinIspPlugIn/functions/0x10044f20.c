// rea decompile_all
// name: FUN_10044f20
// address: 0x10044f20
// body: available
// range: 0x10044f20-0x10044f9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ios_base * FUN_10044f20(byte param_1)

{
  ios_base *piVar1;
  uint uVar2;
  ios_base *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c0c46;
  local_10 = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = in_ECX + -0x18;
  *(undefined ***)(in_ECX + *(int *)(*(int *)(in_ECX + -0x18) + 4) + -0x18) =
       std::basic_istream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)(in_ECX + *(int *)(*(int *)piVar1 + 4) + -0x1c) = *(int *)(*(int *)piVar1 + 4) + -0x18;
  local_8 = 0;
  *(undefined ***)in_ECX = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor(in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_1017f662(piVar1,0x60,uVar2);
  }
  ExceptionList = local_10;
  return piVar1;
}

