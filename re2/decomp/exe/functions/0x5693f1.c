// rea decompile_all
// name: FUN_005693f1
// address: 0x5693f1
// body: available
// range: 0x5693f1-0x56949c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_005693f1(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,uint *param_8,
                 double *param_9)

{
  uint *puVar1;
  double *pdVar2;
  char cVar3;
  undefined4 ***pppuVar4;
  float10 fVar5;
  undefined4 **local_4c;
  int local_48;
  undefined4 **local_44 [4];
  int local_34;
  uint local_30;
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  pdVar2 = param_9;
  puVar1 = param_8;
  uStack_4 = 0x40;
  local_8 = 0x5693fd;
  Getmfld(local_44,&param_2,&param_4,param_6,param_7,local_2c);
  local_8 = 0;
  cVar3 = equal(&param_4);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (local_34 != 0) {
    pppuVar4 = (undefined4 ***)local_44[0];
    if (local_30 < 0x10) {
      pppuVar4 = local_44;
    }
    local_48 = 0;
    fVar5 = (float10)FUN_0055e66b(pppuVar4,&local_4c,0,&local_48);
    if (((undefined4 ***)local_4c != pppuVar4) && (local_48 == 0)) {
      *pdVar2 = (double)fVar5;
      goto LAB_0056947c;
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_0056947c:
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_00404250(1,0);
  FUN_0055bae6();
  return;
}

