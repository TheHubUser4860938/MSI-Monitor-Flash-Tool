// rea decompile_all
// name: FUN_1003c67f
// address: 0x1003c67f
// body: available
// range: 0x1003c67f-0x1003c8a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003c896 to 0x100256ec FUN_100256ec (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1003c89b to 0x1001d057 FUN_1001d057 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1003c8a0 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


CRuntimeClass * FUN_1003c67f(int param_1,undefined4 *param_2,uint *param_3)

{
  short sVar1;
  undefined4 uVar2;
  void **ppvVar3;
  int *piVar4;
  CRuntimeClass *pCVar5;
  int iVar6;
  CArchive *in_ECX;
  void *pvVar7;
  uint uVar8;
  undefined4 uVar9;
  void *local_10;
  CRuntimeClass *local_c;
  CRuntimeClass *local_8;
  
  if (((byte)in_ECX[0x18] & 1) == 0) {
    uVar2 = FUN_1001d272();
    uVar9 = 1;
    goto LAB_1003c896;
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 8) == 0xffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d057();
  }
  CArchive::MapObject(in_ECX,(CObject *)0x0);
  FUN_100259dc(&local_8);
  sVar1 = (short)local_8;
  if ((short)local_8 == 0x7fff) {
    FUN_10026405(&local_10);
    pvVar7 = local_10;
  }
  else {
    pvVar7 = (void *)(((uint)local_8 & 0x8000) << 0x10 | (uint)local_8 & 0x7fff);
  }
  if ((int)pvVar7 < 0) {
    if (sVar1 == -1) {
      local_8 = CRuntimeClass::Load(in_ECX,(uint *)&local_c);
      if (local_8 != (CRuntimeClass *)0x0) {
        if ((CRuntimeClass *)(*(uint *)(local_8 + 8) & 0x7fffffff) != local_c) {
          if (-1 < (int)*(uint *)(local_8 + 8)) {
            uVar2 = FUN_1001d272();
            uVar9 = 7;
            goto LAB_1003c896;
          }
          FUN_1003c3b6(0);
          pCVar5 = local_c;
          ppvVar3 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(in_ECX + 0x3c),local_8);
          *ppvVar3 = pCVar5;
        }
        pCVar5 = local_8;
        FUN_1003c39b();
        FUN_1003de7b(*(undefined4 *)(in_ECX + 0x34),pCVar5,1);
        local_10 = (void *)0x0;
        CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(in_ECX + 0x3c),(void *)0x1,&local_10);
        if (local_10 == (void *)0x0) goto LAB_1003c8a0;
        local_8 = (CRuntimeClass *)0x1;
        FUN_1003c492(*(undefined4 *)(in_ECX + 0x34),&local_8,1);
        *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
LAB_1003c84f:
        if ((param_1 == 0) || (iVar6 = FUN_100250ac(param_1), iVar6 != 0)) {
          if (param_2 == (undefined4 *)0x0) {
            *(CRuntimeClass **)(in_ECX + 0x10) = local_c;
          }
          else {
            *param_2 = local_c;
          }
          if (param_3 != (uint *)0x0) {
            *param_3 = (uint)pvVar7;
          }
          return pCVar5;
        }
      }
      uVar2 = FUN_1001d272();
      uVar9 = 6;
      goto LAB_1003c896;
    }
    uVar8 = (uint)pvVar7 & 0x7fffffff;
    if ((uVar8 != 0) && (uVar8 <= *(int *)(*(int *)(in_ECX + 0x38) + 8) - 1U)) {
      local_8 = (CRuntimeClass *)0x0;
      CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(in_ECX + 0x3c),(void *)0x1,&local_8);
      if (local_8 == (CRuntimeClass *)0x0) {
LAB_1003c8a0:
                    /* WARNING: Subroutine does not return */
        FUN_1001d023();
      }
      piVar4 = (int *)FUN_1009f8c7(uVar8);
      if (*piVar4 != 2) {
        pCVar5 = (CRuntimeClass *)FUN_10038441(uVar8);
        local_c = (CRuntimeClass *)0x0;
        if ((*(CMapPtrToPtr **)(in_ECX + 0x3c) == (CMapPtrToPtr *)0x0) ||
           (iVar6 = CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(in_ECX + 0x3c),pCVar5,&local_8),
           local_c = local_8, iVar6 == 0)) {
          local_c = (CRuntimeClass *)(*(uint *)(pCVar5 + 8) & 0x7fffffff);
        }
        goto LAB_1003c84f;
      }
    }
  }
  else if (param_3 != (uint *)0x0) {
    *param_3 = (uint)pvVar7;
    return (CRuntimeClass *)0x0;
  }
  uVar2 = FUN_1001d272();
  uVar9 = 5;
LAB_1003c896:
                    /* WARNING: Subroutine does not return */
  FUN_100256ec(uVar9,uVar2);
}

