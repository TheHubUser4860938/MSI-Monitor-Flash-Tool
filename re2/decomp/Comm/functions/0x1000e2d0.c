// rea decompile_all
// name: FUN_1000e2d0
// address: 0x1000e2d0
// body: available
// range: 0x1000e2d0-0x1000e3c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_1000e2d0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  basic_filebuf<char,std::char_traits<char>_> *in_ECX;
  int unaff_EDI;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_4;
  local_c = param_5;
  if (*(int *)(in_ECX + 0x4c) != 0) {
    cVar3 = FUN_1000fb10();
    if (cVar3 != '\0') {
      iVar4 = _fsetpos(*(FILE **)(in_ECX + 0x4c),(fpos_t *)&local_10);
      if (iVar4 == 0) {
        if (param_2 != 0 || param_3 != 0) {
          iVar4 = __fseeki64(*(FILE **)(in_ECX + 0x4c),CONCAT44(1,param_3),unaff_EDI);
          if (iVar4 != 0) goto LAB_1000e390;
        }
        iVar4 = _fgetpos(*(FILE **)(in_ECX + 0x4c),(fpos_t *)&local_10);
        if (iVar4 == 0) {
          *(undefined4 *)(in_ECX + 0x40) = param_6;
          *(undefined4 *)(in_ECX + 0x44) = param_7;
          std::basic_filebuf<char,std::char_traits<char>_>::_Reset_back(in_ECX);
          uVar1 = *(undefined4 *)(in_ECX + 0x40);
          uVar2 = *(undefined4 *)(in_ECX + 0x44);
          param_1[2] = local_10;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[3] = local_c;
          param_1[4] = uVar1;
          param_1[5] = uVar2;
          return param_1;
        }
      }
    }
  }
LAB_1000e390:
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return param_1;
}

