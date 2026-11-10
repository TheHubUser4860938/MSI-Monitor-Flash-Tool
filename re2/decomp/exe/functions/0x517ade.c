// rea decompile_all
// name: Catch@00517ade
// address: 0x517ade
// body: available
// range: 0x517ade-0x517b92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * Catch_00517ade(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  int unaff_EBP;
  
  uVar3 = FUN_004295fe();
  FUN_0040eb30(uVar3);
  piVar1 = *(int **)(unaff_EBP + -0x420);
  iVar4 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  guard_check_icall(unaff_EBP + -0x414,0x200,0);
  iVar4 = (**(code **)(iVar4 + 0xc))();
  if (iVar4 == 0) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)(unaff_EBP + -0x418),L"%Ts (%Ts:%d)",
               L"Exception thrown in destructor",
               L"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\viewcore.cpp",0x3d);
  }
  else {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)(unaff_EBP + -0x418),L"%Ts (%Ts:%d)\n%Ts",
               L"Exception thrown in destructor",
               L"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\viewcore.cpp",0x3d,
               unaff_EBP + -0x414);
  }
  AfxMessageBox(*(wchar_t **)(unaff_EBP + -0x418),0,0);
  FUN_0040efa0();
  pcVar2 = *(code **)(*piVar1 + 4);
  guard_check_icall(1);
  (*pcVar2)();
  return &DAT_00517b93;
}

