// rea decompile_all
// name: Catch@10021a6e
// address: 0x10021a6e
// body: available
// range: 0x10021a6e-0x10021b27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * Catch_10021a6e(void)

{
  int *piVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  int unaff_EBP;
  
  uVar4 = FUN_1001e20a();
  FUN_1001d224(uVar4);
  piVar1 = *(int **)(unaff_EBP + -0x420);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar5 = *piVar1;
  guard_check_icall(unaff_EBP + -0x414,0x200,0);
  iVar5 = (**(code **)(iVar5 + 0xc))();
  if (iVar5 == 0) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)(unaff_EBP + -0x418),L"%Ts (%Ts:%d)",
               L"Exception thrown in destructor",
               L"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\appcore.cpp",0x2c9);
  }
  else {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)(unaff_EBP + -0x418),L"%Ts (%Ts:%d)\n%Ts",
               L"Exception thrown in destructor",
               L"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\appcore.cpp",0x2c9,
               unaff_EBP + -0x414);
  }
  pwVar2 = *(wchar_t **)(unaff_EBP + -0x418);
  AfxMessageBox(pwVar2,0,0);
  ATL::CStringData::Release((CStringData *)(pwVar2 + -8));
  pcVar3 = *(code **)(*piVar1 + 4);
  guard_check_icall(1);
  (*pcVar3)();
  return &DAT_10021b28;
}

