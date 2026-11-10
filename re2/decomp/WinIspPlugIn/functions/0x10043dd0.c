// rea decompile_all
// name: FUN_10043dd0
// address: 0x10043dd0
// body: available
// range: 0x10043dd0-0x10043ec8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10043dd0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  undefined4 extraout_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c3e62;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = (int)&PTR_1021a6e8;
  in_ECX[0x1c] = (int)std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::vftable;
  local_8 = 0;
  *(undefined ***)((int)in_ECX + *(int *)(*in_ECX + 4)) =
       std::basic_istream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)(*(int *)(*in_ECX + 4) + -4 + (int)in_ECX) = *(int *)(*in_ECX + 4) + -0x18;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  FUN_10046450(in_ECX + 4,0);
  local_8 = 2;
  *(undefined ***)((int)in_ECX + *(int *)(*in_ECX + 4)) =
       std::basic_ifstream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)(*(int *)(*in_ECX + 4) + -4 + (int)in_ECX) = *(int *)(*in_ECX + 4) + -0x70;
  FUN_10045c00(0);
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar2 = FUN_10045b40(param_1,1,extraout_ECX);
  if (iVar2 == 0) {
    uVar1 = *(uint *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0xc);
    uVar3 = uVar1 | 6;
    if (*(int *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0x38) != 0) {
      uVar3 = uVar1 | 2;
    }
    FUN_100071e0(uVar3,0);
  }
  ExceptionList = local_10;
  return;
}

