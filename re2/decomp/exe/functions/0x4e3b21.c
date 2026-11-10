// rea decompile_all
// name: FUN_004e3b21
// address: 0x4e3b21
// body: available
// range: 0x4e3b21-0x4e3d46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4e3d38 to 0x43e041 FUN_0043e041 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4e3d3d to 0x42915b FUN_0042915b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4e3d42 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_004e3b21(int param_1,uint *param_2,uint *param_3)

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
    uVar2 = FUN_0040ee70();
    uVar9 = 1;
    goto LAB_004e3d38;
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 8) == 0xffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_0042915b();
  }
  CArchive::MapObject(in_ECX,(CObject *)0x0);
  FUN_0043e7f2(&local_8);
  sVar1 = (short)local_8;
  if ((short)local_8 == 0x7fff) {
    FUN_00450090(&local_10);
    pvVar7 = local_10;
  }
  else {
    pvVar7 = (void *)(((uint)local_8 & 0x8000) << 0x10 | (uint)local_8 & 0x7fff);
  }
  if ((int)pvVar7 < 0) {
    if (sVar1 == -1) {
      local_8 = (void *)FUN_0043edd2(in_ECX,&local_c);
      if (local_8 != (void *)0x0) {
        if ((void *)(*(uint *)((int)local_8 + 8) & 0x7fffffff) != local_c) {
          if (-1 < (int)*(uint *)((int)local_8 + 8)) {
            uVar2 = FUN_0040ee70();
            uVar9 = 7;
            goto LAB_004e3d38;
          }
          FUN_004e3858(0);
          pvVar5 = local_c;
          ppvVar3 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(in_ECX + 0x3c),local_8);
          *ppvVar3 = pvVar5;
        }
        pvVar5 = local_8;
        FUN_004e383d();
        FUN_0050e60c(*(undefined4 *)(in_ECX + 0x34),pvVar5,1);
        local_10 = (void *)0x0;
        CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(in_ECX + 0x3c),(void *)0x1,&local_10);
        if (local_10 == (void *)0x0) goto LAB_004e3d42;
        local_8 = (void *)0x1;
        FUN_004e3934(*(undefined4 *)(in_ECX + 0x34),&local_8,1);
        *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
LAB_004e3cf1:
        if ((param_1 == 0) || (iVar6 = FUN_004396e3(param_1), iVar6 != 0)) {
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
      uVar2 = FUN_0040ee70();
      uVar9 = 6;
      goto LAB_004e3d38;
    }
    uVar8 = (uint)pvVar7 & 0x7fffffff;
    if ((uVar8 != 0) && (uVar8 <= *(int *)(*(int *)(in_ECX + 0x38) + 8) - 1U)) {
      local_8 = (void *)0x0;
      CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(in_ECX + 0x3c),(void *)0x1,&local_8);
      if (local_8 == (void *)0x0) {
LAB_004e3d42:
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      piVar4 = (int *)FUN_004ab4cd(uVar8);
      if (*piVar4 != 2) {
        pvVar5 = (void *)FUN_004858f9(uVar8);
        local_c = (void *)0x0;
        if ((*(CMapPtrToPtr **)(in_ECX + 0x3c) == (CMapPtrToPtr *)0x0) ||
           (iVar6 = CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(in_ECX + 0x3c),pvVar5,&local_8),
           local_c = local_8, iVar6 == 0)) {
          local_c = (void *)(*(uint *)((int)pvVar5 + 8) & 0x7fffffff);
        }
        goto LAB_004e3cf1;
      }
    }
  }
  else if (param_3 != (uint *)0x0) {
    *param_3 = (uint)pvVar7;
    return (void *)0x0;
  }
  uVar2 = FUN_0040ee70();
  uVar9 = 5;
LAB_004e3d38:
                    /* WARNING: Subroutine does not return */
  FUN_0043e041(uVar9,uVar2);
}

