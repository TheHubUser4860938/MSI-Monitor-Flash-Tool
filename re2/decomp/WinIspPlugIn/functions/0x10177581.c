// rea decompile_all
// name: FUN_10177581
// address: 0x10177581
// body: available
// range: 0x10177581-0x10177617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10177581(CArchive *param_1)

{
  CMFCToolBarButton *in_ECX;
  
  CMFCToolBarButton::Serialize(in_ECX,param_1);
  if (((byte)param_1[0x18] & 1) == 0) {
    FUN_10051228(*(undefined4 *)(in_ECX + 0x70));
    FUN_10051228(*(undefined4 *)(in_ECX + 0x74));
    if (*(CWnd **)(in_ECX + 0x78) == (CWnd *)0x0) {
      FUN_10047240();
    }
    else {
      CWnd::GetWindowTextW
                (*(CWnd **)(in_ECX + 0x78),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (in_ECX + 0x7c));
    }
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (in_ECX + 0x7c));
    FUN_10051228(*(undefined4 *)(in_ECX + 0x8c));
  }
  else {
    FUN_10051107(in_ECX + 0x70);
    *(int *)(in_ECX + 0x5c) = *(int *)(in_ECX + 0x54) + *(int *)(in_ECX + 0x70);
    FUN_10051107(in_ECX + 0x74);
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (in_ECX + 0x7c));
    FUN_10051107(in_ECX + 0x8c);
  }
  return;
}

