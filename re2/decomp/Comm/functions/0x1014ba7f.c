// rea decompile_all
// name: FUN_1014ba7f
// address: 0x1014ba7f
// body: available
// range: 0x1014ba7f-0x1014bb98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1014bb94 to 0x1015cee4 FUN_1015cee4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1014ba7f(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4,_s_FuncInfo *param_5,int param_6,int param_7,
                 EHRegistrationNode *param_8)

{
  int iVar1;
  PVOID pvVar2;
  _s_HandlerType *p_Var3;
  uint uVar4;
  int *piVar5;
  uint local_c;
  uint local_8;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    iVar1 = ___vcrt_getptd();
    if (*(int *)(iVar1 + 8) != 0) {
      pvVar2 = EncodePointer((PVOID)0x0);
      iVar1 = ___vcrt_getptd();
      if ((((*(PVOID *)(iVar1 + 8) != pvVar2) && (*(int *)param_1 != -0x1fbcb0b3)) &&
          (*(int *)param_1 != -0x1fbcbcae)) &&
         (iVar1 = _CallSETranslator(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
         iVar1 != 0)) {
        return;
      }
    }
    if (param_5->nTryBlocks == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1015cee4();
    }
    iVar1 = FUN_1014cba5(param_5,param_7,param_6,&local_c,&local_8);
    if (local_c < local_8) {
      piVar5 = (int *)(iVar1 + 0xc);
      uVar4 = local_8;
      do {
        if ((((piVar5[-3] <= param_6) && (param_6 <= piVar5[-2])) &&
            ((iVar1 = *piVar5 * 0x10, *(int *)(piVar5[1] + -0xc + iVar1) == 0 ||
             (uVar4 = local_8, *(char *)(*(int *)(piVar5[1] + -0xc + iVar1) + 8) == '\0')))) &&
           (p_Var3 = (_s_HandlerType *)(iVar1 + piVar5[1] + -0x10), (p_Var3->adjectives & 0x40) == 0
           )) {
          CatchIt(param_1,param_2,param_3,param_4,param_5,p_Var3,(_s_CatchableType *)0x0,
                  (_s_TryBlockMapEntry *)(piVar5 + -3),param_7,param_8,'\x01');
          uVar4 = local_8;
        }
        local_c = local_c + 1;
        piVar5 = piVar5 + 5;
      } while (local_c < uVar4);
    }
  }
  return;
}

