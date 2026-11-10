// rea decompile_all
// name: setmbcp_internal
// address: 0x1019b92f
// body: available
// range: 0x1019b92f-0x1019ba2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl setmbcp_internal(int,bool)
   
   Library: Visual Studio 2015 Release */

int __cdecl setmbcp_internal(int param_1,bool param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *local_10 [2];
  int local_8;
  
  local_8 = FUN_10194155();
  ___acrt_update_thread_multibyte_data();
  local_10[0] = (int *)getSystemCP(param_1);
  if (local_10[0] == *(int **)(*(int *)(local_8 + 0x48) + 4)) {
    return 0;
  }
  puVar2 = (undefined4 *)__malloc_base(0x220);
  if (puVar2 != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(local_8 + 0x48);
    puVar5 = puVar2;
    for (iVar4 = 0x88; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar5 = puVar5 + 1;
    }
    *puVar2 = 0;
    iVar4 = __setmbcp_nolock(local_10[0],puVar2);
    if (iVar4 != -1) {
      if (!param_2) {
        ___acrt_set_locale_changed();
      }
      piVar3 = *(int **)(local_8 + 0x48);
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (*(undefined4 **)(local_8 + 0x48) != &DAT_10206b00)) {
        FID_conflict__free(*(void **)(local_8 + 0x48));
      }
      *puVar2 = 1;
      puVar6 = (undefined4 *)0x0;
      *(undefined4 **)(local_8 + 0x48) = puVar2;
      if (((*(byte *)(local_8 + 0x350) & 2) == 0) && (((byte)DAT_10206d24 & 1) == 0)) {
        local_10[0] = &local_8;
        __acrt_lock_and_call<<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>_>
                  (5,(<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> *)local_10);
        if (param_2) {
          PTR_DAT_1020661c = PTR_DAT_10206d20;
        }
      }
      goto LAB_1019b9a6;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
  }
  iVar4 = -1;
  puVar6 = puVar2;
LAB_1019b9a6:
  FID_conflict__free(puVar6);
  return iVar4;
}

