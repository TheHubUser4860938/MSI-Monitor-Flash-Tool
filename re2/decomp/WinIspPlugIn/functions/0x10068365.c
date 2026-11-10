// rea decompile_all
// name: FUN_10068365
// address: 0x10068365
// body: available
// range: 0x10068365-0x1006858a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006857c to 0x10050dca FUN_10050dca (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10068581 to 0x1004a3b7 FUN_1004a3b7 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10068586 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_10068365(int param_1,uint *param_2,uint *param_3)

{
  short sVar1;
  undefined4 uVar2;
  void **ppvVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  CArchive *in_ECX;
  void *pvVar7;
  uint uVar8;
  undefined4 uVar9;
  void *local_10;
  void *local_c;
  void *local_8;
  
  if (((byte)in_ECX[0x18] & 1) == 0) {
    uVar2 = FUN_10046f30();
    uVar9 = 1;
    goto LAB_1006857c;
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 8) == 0xffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_1004a3b7();
  }
  CArchive::MapObject(in_ECX,(CObject *)0x0);
  FUN_100510ba(&local_8);
  sVar1 = (short)local_8;
  if ((short)local_8 == 0x7fff) {
    FUN_10051107(&local_10);
    pvVar7 = local_10;
  }
  else {
    pvVar7 = (void *)(((uint)local_8 & 0x8000) << 0x10 | (uint)local_8 & 0x7fff);
  }
  if ((int)pvVar7 < 0) {
    if (sVar1 == -1) {
      local_8 = (void *)FUN_100516e5(in_ECX,&local_c);
      if (local_8 != (void *)0x0) {
        if ((void *)(*(uint *)((int)local_8 + 8) & 0x7fffffff) != local_c) {
          if (-1 < (int)*(uint *)((int)local_8 + 8)) {
            uVar2 = FUN_10046f30();
            uVar9 = 7;
            goto LAB_1006857c;
          }
          FUN_1006809c(0);
          pvVar5 = local_c;
          ppvVar3 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(in_ECX + 0x3c),local_8);
          *ppvVar3 = pvVar5;
        }
        pvVar5 = local_8;
        FUN_10068081();
        FUN_10069c72(*(undefined4 *)(in_ECX + 0x34),pvVar5,1);
        local_10 = (void *)0x0;
        CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(in_ECX + 0x3c),(void *)0x1,&local_10);
        if (local_10 == (void *)0x0) goto LAB_10068586;
        local_8 = (void *)0x1;
        FUN_10068178(*(undefined4 *)(in_ECX + 0x34),&local_8,1);
        *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
LAB_10068535:
        if ((param_1 == 0) || (iVar6 = FUN_10051e29(param_1), iVar6 != 0)) {
          if (param_2 == (uint *)0x0) {
            *(void **)(in_ECX + 0x10) = local_c;
          }
          else {
            *param_2 = (uint)local_c;
          }
          if (param_3 != (uint *)0x0) {
            *param_3 = (uint)pvVar7;
          }
          return pvVar5;
        }
      }
      uVar2 = FUN_10046f30();
      uVar9 = 6;
      goto LAB_1006857c;
    }
    uVar8 = (uint)pvVar7 & 0x7fffffff;
    if ((uVar8 != 0) && (uVar8 <= *(int *)(*(int *)(in_ECX + 0x38) + 8) - 1U)) {
      local_8 = (void *)0x0;
      CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(in_ECX + 0x3c),(void *)0x1,&local_8);
      if (local_8 == (void *)0x0) {
LAB_10068586:
                    /* WARNING: Subroutine does not return */
        FUN_1004a383();
      }
      piVar4 = (int *)FUN_100efaed(uVar8);
      if (*piVar4 != 2) {
        pvVar5 = (void *)FUN_10069fb9(uVar8);
        local_c = (void *)0x0;
        if ((*(CMapPtrToPtr **)(in_ECX + 0x3c) == (CMapPtrToPtr *)0x0) ||
           (iVar6 = CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(in_ECX + 0x3c),pvVar5,&local_8),
           local_c = local_8, iVar6 == 0)) {
          local_c = (void *)(*(uint *)((int)pvVar5 + 8) & 0x7fffffff);
        }
        goto LAB_10068535;
      }
    }
  }
  else if (param_3 != (uint *)0x0) {
    *param_3 = (uint)pvVar7;
    return (void *)0x0;
  }
  uVar2 = FUN_10046f30();
  uVar9 = 5;
LAB_1006857c:
                    /* WARNING: Subroutine does not return */
  FUN_10050dca(uVar9,uVar2);
}

