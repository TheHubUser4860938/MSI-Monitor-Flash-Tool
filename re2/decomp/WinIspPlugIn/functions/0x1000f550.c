// rea decompile_all
// name: FUN_1000f550
// address: 0x1000f550
// body: available
// range: 0x1000f550-0x1000f651 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f550(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  undefined4 extraout_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c1552;
  local_10 = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = (int)&PTR_1021a6f8;
  in_ECX[0x1a] = (int)std::basic_ios<char,std::char_traits<char>_>::vftable;
  local_8 = 0;
  *(undefined ***)((int)in_ECX + *(int *)(*in_ECX + 4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)(*(int *)(*in_ECX + 4) + -4 + (int)in_ECX) = *(int *)(*in_ECX + 4) + -8;
  FUN_1000ba20(in_ECX + 1,0);
  local_8 = 2;
  *(undefined ***)((int)in_ECX + *(int *)(*in_ECX + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)(*(int *)(*in_ECX + 4) + -4 + (int)in_ECX) = *(int *)(*in_ECX + 4) + -0x68;
  FUN_1000b950(uVar1);
  in_ECX[1] = (int)std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  FUN_1000b230(0,0);
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar2 = FUN_1000b3d0(param_1,param_2 | 2,extraout_ECX);
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

