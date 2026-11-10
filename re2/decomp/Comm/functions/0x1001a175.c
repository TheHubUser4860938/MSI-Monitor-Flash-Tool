// rea decompile_all
// name: Catch@1001a175
// address: 0x1001a175
// body: available
// range: 0x1001a175-0x1001a229 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 Catch_1001a175(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  int unaff_EBP;
  
  uVar3 = FUN_10013071();
  FUN_10003190(uVar3);
  piVar1 = *(int **)(unaff_EBP + -0x41c);
  iVar4 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  guard_check_icall(unaff_EBP + -0x414,0x200,0);
  iVar4 = (**(code **)(iVar4 + 0xc))();
  if (iVar4 == 0) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)(unaff_EBP + -0x418),L"%Ts (%Ts:%d)",
               L"Exception thrown in destructor",
               L"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\auxdata.cpp",0x38);
  }
  else {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)(unaff_EBP + -0x418),L"%Ts (%Ts:%d)\n%Ts",
               L"Exception thrown in destructor",
               L"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\auxdata.cpp",0x38,
               unaff_EBP + -0x414);
  }
  AfxMessageBox(*(wchar_t **)(unaff_EBP + -0x418),0,0);
  FUN_10003460();
  pcVar2 = *(code **)(*piVar1 + 4);
  guard_check_icall(1);
  (*pcVar2)();
  return 0x1001a159;
}

