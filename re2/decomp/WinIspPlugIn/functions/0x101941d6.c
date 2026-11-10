// rea decompile_all
// name: FUN_101941d6
// address: 0x101941d6
// body: available
// range: 0x101941d6-0x10194281 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_101941d6(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,ios_base *param_6,char *param_7,uint *param_8,double *param_9)

{
  uint *puVar1;
  double *pdVar2;
  bool bVar3;
  money_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *in_ECX;
  undefined4 ***pppuVar4;
  float10 fVar5;
  undefined4 **local_40;
  int local_3c;
  undefined4 **local_38 [4];
  int local_28;
  uint local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  pdVar2 = param_9;
  puVar1 = param_8;
  uStack_4 = 0x34;
  local_8 = 0x101941e2;
  std::money_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getmfld
            (in_ECX,(istreambuf_iterator<char,std::char_traits<char>_> *)local_38,
             (istreambuf_iterator<char,std::char_traits<char>_> *)&param_2,SUB41(&param_4,0),param_6
             ,param_7);
  local_8 = 0;
  bVar3 = std::istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_2,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_4);
  if (bVar3) {
    *puVar1 = *puVar1 | 1;
  }
  if (local_28 != 0) {
    pppuVar4 = (undefined4 ***)local_38[0];
    if (local_24 < 0x10) {
      pppuVar4 = local_38;
    }
    local_3c = 0;
    fVar5 = (float10)FUN_10183139(pppuVar4,&local_40,0,&local_3c);
    if (((undefined4 ***)local_40 != pppuVar4) && (local_3c == 0)) {
      *pdVar2 = (double)fVar5;
      goto LAB_10194261;
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_10194261:
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_1000a890(1,0);
  FUN_1018015d();
  return;
}

