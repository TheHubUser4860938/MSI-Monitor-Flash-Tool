// rea decompile_all
// name: FUN_1000e2f0
// address: 0x1000e2f0
// body: available
// range: 0x1000e2f0-0x1000e379 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e2f0(void)

{
  ios_base *piVar1;
  uint uVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c0d36;
  local_10 = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (ios_base *)(in_ECX + 0x1a);
  *(undefined ***)(piVar1 + *(int *)(*in_ECX + 4) + -0x68) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)(piVar1 + *(int *)(*in_ECX + 4) + -0x6c) = *(int *)(*in_ECX + 4) + -0x68;
  FUN_10009b00(uVar2);
  *(undefined ***)(piVar1 + *(int *)(*in_ECX + 4) + -0x68) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)(piVar1 + *(int *)(*in_ECX + 4) + -0x6c) = *(int *)(*in_ECX + 4) + -8;
  local_8 = 0;
  *(undefined ***)piVar1 = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor(piVar1);
  ExceptionList = local_10;
  return;
}

