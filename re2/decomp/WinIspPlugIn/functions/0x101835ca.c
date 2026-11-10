// rea decompile_all
// name: FUN_101835ca
// address: 0x101835ca
// body: available
// range: 0x101835ca-0x101836c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101835ca(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6,uint *param_7,double *param_8)

{
  uint *puVar1;
  double *pdVar2;
  bool bVar3;
  int iVar4;
  num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *in_ECX;
  float10 fVar5;
  int *piVar6;
  double local_334;
  istreambuf_iterator<char,std::char_traits<char>_> *local_32c;
  int local_328;
  int local_324;
  istreambuf_iterator<char,std::char_traits<char>_> local_320 [792];
  uint local_8;
  
  pdVar2 = param_8;
  puVar1 = param_7;
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  piVar6 = &local_328;
  local_328 = 0;
  local_324 = 1000000000;
  iVar4 = std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getffld
                    (in_ECX,(char *)in_ECX,local_320,
                     (istreambuf_iterator<char,std::char_traits<char>_> *)&param_2,
                     (ios_base *)&param_4,param_6);
  fVar5 = (float10)FUN_10183139(local_320,&local_32c,iVar4,piVar6);
  if ((local_324 != 1000000000) && (local_324 != 0)) {
    fVar5 = (float10)FUN_101ad232((double)fVar5,local_324 << 2);
  }
  local_334 = (double)fVar5;
  bVar3 = std::istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_2,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_4);
  if (bVar3) {
    *puVar1 = *puVar1 | 1;
  }
  if ((local_32c == local_320) || (local_328 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *pdVar2 = local_334;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

