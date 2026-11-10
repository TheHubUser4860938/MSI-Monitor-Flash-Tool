// rea decompile_all
// name: FindHandler
// address: 0x1014b717
// body: available
// range: 0x1014b717-0x1014ba7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1014ba3a to 0x1015cee4 FUN_1015cee4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1014ba7e with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2015 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uchar uVar5;
  int iVar6;
  EHRegistrationNode *pEVar7;
  bad_exception local_48 [12];
  _s_TryBlockMapEntry *local_3c;
  int local_38;
  int *local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  _s_ESTypeList *local_24;
  int local_20;
  uint local_1c;
  _s_HandlerType *local_18;
  int *local_14;
  _CONTEXT *local_10;
  int local_c;
  char local_5;
  
  local_2c = local_2c & 0xffffff00;
  local_5 = '\0';
  if (param_5->maxState < 0x81) {
    local_c = (int)(char)param_2[8];
  }
  else {
    local_c = *(int *)(param_2 + 8);
  }
  if ((local_c < -1) || (param_5->maxState <= local_c)) goto LAB_1014ba3a;
  if (*(int *)param_1 == -0x1f928c9d) {
    if ((*(int *)(param_1 + 0x10) != 3) ||
       ((((*(int *)(param_1 + 0x14) != 0x19930520 && (*(int *)(param_1 + 0x14) != 0x19930521)) &&
         (*(int *)(param_1 + 0x14) != 0x19930522)) || (*(int *)(param_1 + 0x1c) != 0)))) {
      local_10 = param_3;
      goto LAB_1014b84a;
    }
    iVar6 = ___vcrt_getptd();
    if (*(int *)(iVar6 + 0x10) == 0) {
      return;
    }
    iVar6 = ___vcrt_getptd();
    param_1 = *(EHExceptionRecord **)(iVar6 + 0x10);
    iVar6 = ___vcrt_getptd();
    local_2c = CONCAT31(local_2c._1_3_,1);
    local_10 = *(_CONTEXT **)(iVar6 + 0x14);
    if ((param_1 == (EHExceptionRecord *)0x0) ||
       ((((*(int *)param_1 == -0x1f928c9d && (*(int *)(param_1 + 0x10) == 3)) &&
         ((*(int *)(param_1 + 0x14) == 0x19930520 ||
          ((*(int *)(param_1 + 0x14) == 0x19930521 || (*(int *)(param_1 + 0x14) == 0x19930522))))))
        && (*(int *)(param_1 + 0x1c) == 0)))) goto LAB_1014ba3a;
    iVar6 = ___vcrt_getptd();
    if (*(int *)(iVar6 + 0x1c) != 0) {
      iVar6 = ___vcrt_getptd();
      local_24 = *(_s_ESTypeList **)(iVar6 + 0x1c);
      iVar6 = ___vcrt_getptd();
      *(undefined4 *)(iVar6 + 0x1c) = 0;
      cVar4 = FUN_1014bb9a(param_1,local_24);
      if (cVar4 != '\0') goto LAB_1014b84a;
      uVar5 = Is_bad_exception_allowed(local_24);
      if (uVar5 == '\0') goto LAB_1014ba3a;
      ___DestructExceptionObject(param_1,1);
      std::bad_exception::bad_exception(local_48);
      param_1 = (EHExceptionRecord *)&DAT_101ce02c;
      __CxxThrowException_8(local_48,&DAT_101ce02c);
LAB_1014ba5f:
      pEVar7 = param_8;
LAB_1014ba62:
      _UnwindNestedFrames(pEVar7,param_1);
      ___FrameUnwindToState(param_2,param_4,param_5,0xffffffff);
      FUN_1014b618(param_5->pESTypeList);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
LAB_1014b84a:
    param_3 = local_10;
    if (((*(int *)param_1 != -0x1f928c9d) || (*(int *)(param_1 + 0x10) != 3)) ||
       ((*(int *)(param_1 + 0x14) != 0x19930520 &&
        ((*(int *)(param_1 + 0x14) != 0x19930521 && (*(int *)(param_1 + 0x14) != 0x19930522))))))
    goto LAB_1014ba06;
    if ((param_5->nTryBlocks != 0) &&
       (iVar6 = FUN_1014cba5(param_5,param_7,local_c,&local_1c,&local_30), local_1c < local_30)) {
      local_24 = (_s_ESTypeList *)(iVar6 + 0x10);
      iVar6 = local_c;
      do {
        local_3c = (_s_TryBlockMapEntry *)((int)local_24 + -0x10);
        if ((*(int *)((int)local_24 + -0x10) <= iVar6) && (iVar6 <= *(int *)((int)local_24 + -0xc)))
        {
          local_18 = *(_s_HandlerType **)local_24;
          local_20 = *(int *)((int)local_24 + -4);
          if (0 < local_20) {
            local_38 = **(int **)(*(int *)(param_1 + 0x1c) + 0xc);
            local_34 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc) + 1;
            piVar2 = local_34;
            iVar3 = local_38;
            do {
              while (local_28 = iVar3, local_14 = piVar2, 0 < local_28) {
                iVar6 = ___TypeMatch(local_18,*local_14,*(undefined4 *)(param_1 + 0x1c));
                if (iVar6 != 0) {
                  local_5 = '\x01';
                  CatchIt(param_1,param_2,local_10,param_4,param_5,local_18,
                          (_s_CatchableType *)*local_14,local_3c,param_7,param_8,(uchar)local_2c);
                  iVar6 = local_c;
                  goto LAB_1014b97a;
                }
                piVar2 = local_14 + 1;
                iVar3 = local_28 + -1;
              }
              local_20 = local_20 + -1;
              local_18 = local_18 + 1;
              iVar6 = local_c;
              piVar2 = local_34;
              iVar3 = local_38;
            } while (0 < local_20);
          }
        }
LAB_1014b97a:
        local_1c = local_1c + 1;
        local_24 = (_s_ESTypeList *)((int)local_24 + 0x14);
      } while (local_1c < local_30);
    }
    if (param_6 != '\0') {
      ___DestructExceptionObject(param_1,1);
    }
    if (((local_5 == '\0') && (0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff))) &&
       ((param_5->pESTypeList != (ESTypeList *)0x0 ||
        (((param_5->EHFlags & 4) != 0 && (param_7 == 0)))))) {
      if ((param_5->EHFlags & 4) != 0) goto LAB_1014ba3a;
      cVar4 = FUN_1014bb9a(param_1,param_5->pESTypeList);
      if (cVar4 == '\0') {
        ___vcrt_getptd();
        ___vcrt_getptd();
        iVar6 = ___vcrt_getptd();
        *(EHExceptionRecord **)(iVar6 + 0x10) = param_1;
        iVar6 = ___vcrt_getptd();
        *(_CONTEXT **)(iVar6 + 0x14) = local_10;
        pEVar7 = param_2;
        if (param_8 == (EHRegistrationNode *)0x0) goto LAB_1014ba62;
        goto LAB_1014ba5f;
      }
    }
  }
  else {
LAB_1014ba06:
    if (param_5->nTryBlocks != 0) {
      if (param_6 != '\0') goto LAB_1014ba3a;
      FUN_1014ba7f(param_1,param_2,param_3,param_4,param_5,local_c,param_7,param_8);
    }
  }
  iVar6 = ___vcrt_getptd();
  if (*(int *)(iVar6 + 0x1c) == 0) {
    return;
  }
LAB_1014ba3a:
                    /* WARNING: Subroutine does not return */
  FUN_1015cee4();
}

