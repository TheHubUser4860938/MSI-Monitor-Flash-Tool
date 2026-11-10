// rea decompile_all
// name: CFileDialog::ApplyOFNToShellDialog
// address: 0x4364b3
// body: available
// range: 0x4364b3-0x436a6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4364fa to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4365ad to 0x429141 FUN_00429141 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CFileDialog::ApplyOFNToShellDialog(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFileDialog::ApplyOFNToShellDialog(CFileDialog *this)

{
  code *pcVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  undefined4 uVar7;
  void *pvVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  wchar_t *pwVar12;
  int *piVar13;
  int local_2c;
  int *local_24;
  wchar_t *local_20;
  void *local_1c;
  wchar_t *local_18;
  uint local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x4364bf;
  if (*(int *)(this + 0xac) != 1) {
    return;
  }
  piVar13 = (int *)0x0;
  if (*(int *)(*(int *)(this + 0xa8) + 0x30) != 0) {
    pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0x44);
    guard_check_icall(*(int **)(this + 0xbc),*(undefined4 *)(*(int *)(this + 0xa8) + 0x30));
    iVar4 = (*pcVar1)();
    if (iVar4 < 0) goto LAB_004364fa;
  }
  if (*(int *)(*(int *)(this + 0xa8) + 0x3c) != 0) {
    FUN_00415a10(*(undefined4 *)(*(int *)(this + 0xa8) + 0x3c));
    local_8 = 0;
    pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0x58);
    guard_check_icall(*(int **)(this + 0xbc),local_20);
    iVar4 = (*pcVar1)();
    if (iVar4 < 0) goto LAB_004364fa;
    local_8 = 0xffffffff;
    FUN_0040efa0();
  }
  if ((*(int *)(*(int *)(this + 0xa8) + 0xc) != 0) &&
     (pwVar12 = *(wchar_t **)(*(int *)(this + 0xa8) + 0xc), *pwVar12 != L'\0')) {
    do {
      sVar5 = _wcslen(pwVar12);
      sVar6 = _wcslen(pwVar12 + sVar5 + 1);
      pwVar12 = pwVar12 + sVar5 + 1 + sVar6 + 1;
      piVar13 = (int *)((int)piVar13 + 1);
    } while (*pwVar12 != L'\0');
    if (piVar13 != (int *)0x0) {
      local_18 = (wchar_t *)
                 FUN_00416444(-(uint)((int)(ZEXT48(piVar13) * 8 >> 0x20) != 0) |
                              (uint)(ZEXT48(piVar13) * 8));
      if (local_18 == (wchar_t *)0x0) {
LAB_004365ad:
                    /* WARNING: Subroutine does not return */
        FUN_00429141();
      }
      local_20 = *(wchar_t **)(*(int *)(this + 0xa8) + 0xc);
      local_24 = (int *)0x0;
      if (piVar13 != (int *)0x0) {
        do {
          pwVar12 = local_18;
          uVar7 = FUN_004295fe();
          FUN_0040eb30(uVar7);
          local_8 = 1;
          sVar5 = _wcslen(local_20);
          lVar2 = (ulonglong)(sVar5 + 1) * 2;
          pvVar8 = (void *)FUN_00416444(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2)
          ;
          if (pvVar8 == (void *)0x0) goto LAB_004365ad;
          FUN_00415ad0(local_20);
          _memcpy_s(pvVar8,*(int *)((int)local_1c + -0xc) * 2 + 2,local_1c,
                    *(int *)((int)local_1c + -0xc) * 2 + 2);
          *(void **)(pwVar12 + (int)local_24 * 4) = pvVar8;
          pwVar12 = local_20 + sVar5 + 1;
          sVar5 = _wcslen(pwVar12);
          local_20 = (wchar_t *)(sVar5 + 1);
          pvVar8 = (void *)FUN_00416444(-(uint)((int)(ZEXT48(local_20) * 2 >> 0x20) != 0) |
                                        (uint)(ZEXT48(local_20) * 2));
          if (pvVar8 == (void *)0x0) goto LAB_004365ad;
          FUN_00415ad0(pwVar12);
          _memcpy_s(pvVar8,*(int *)((int)local_1c + -0xc) * 2 + 2,local_1c,
                    *(int *)((int)local_1c + -0xc) * 2 + 2);
          local_8 = 0xffffffff;
          *(void **)(local_18 + (int)local_24 * 4 + 2) = pvVar8;
          local_24 = (int *)((int)local_24 + 1);
          local_20 = pwVar12 + (int)local_20;
          FUN_0040efa0();
        } while (local_24 < piVar13);
      }
      if (*(int *)(this + 0x4d8) == 0) {
        pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0x10);
        guard_check_icall(*(int **)(this + 0xbc),piVar13,local_18);
        iVar4 = (*pcVar1)();
        if (iVar4 < 0) goto LAB_004364fa;
        *(undefined4 *)(this + 0x4d8) = 1;
      }
      pwVar12 = local_18;
      piVar11 = (int *)0x0;
      if (piVar13 != (int *)0x0) {
        do {
          FID_conflict__free(*(void **)(pwVar12 + (int)piVar11 * 4));
          FID_conflict__free(*(void **)(pwVar12 + (int)piVar11 * 4 + 2));
          piVar11 = (int *)((int)piVar11 + 1);
        } while (piVar11 < piVar13);
      }
      FID_conflict__free(local_18);
      if (*(uint *)(*(int *)(this + 0xa8) + 0x18) < 2) {
        uVar7 = 1;
      }
      else {
        uVar7 = *(undefined4 *)(*(int *)(this + 0xa8) + 0x18);
      }
      pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0x14);
      guard_check_icall(*(int **)(this + 0xbc),uVar7);
      iVar4 = (*pcVar1)();
      if (iVar4 < 0) goto LAB_004364fa;
    }
  }
  if ((*(int *)(*(int *)(this + 0xa8) + 0x1c) != 0) || (*(int *)(*(int *)(this + 0xa8) + 0x2c) != 0)
     ) {
    uVar7 = FUN_004295fe();
    FUN_0040eb30(uVar7);
    local_8 = 2;
    pwVar12 = local_18;
    if (*(int *)(*(int *)(this + 0xa8) + 0x1c) != 0) {
      FUN_00415a10(*(undefined4 *)(*(int *)(this + 0xa8) + 0x1c));
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_00415f50(&local_24);
      if (1 < *(int *)(local_18 + -2)) {
        FUN_0040ebd0(*(undefined4 *)(local_18 + -6));
      }
      pwVar12 = local_18;
      PathRemoveFileSpecW(local_18);
      ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)&local_18,-1);
      local_2c = *(int *)(pwVar12 + -6);
      sVar3 = FUN_00414b20(local_2c);
      if (sVar3 == 0x5c) {
        local_2c = local_2c + 1;
      }
      iVar4 = **(int **)(this + 0xbc);
      guard_check_icall(*(int **)(this + 0xbc),(int)local_24 + local_2c * 2);
      iVar4 = (**(code **)(iVar4 + 0x3c))();
      if (iVar4 < 0) goto LAB_004364fa;
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_0040efa0();
    }
    if (*(int *)(*(int *)(this + 0xa8) + 0x2c) == 0) {
LAB_0043685b:
      if (*(int *)(pwVar12 + -6) != 0) goto LAB_00436861;
    }
    else {
      if (*(int *)(pwVar12 + -6) == 0) {
        FUN_00415ad0(*(undefined4 *)(*(int *)(this + 0xa8) + 0x2c));
        pwVar12 = local_18;
        goto LAB_0043685b;
      }
LAB_00436861:
      local_24 = (int *)0x0;
      lVar9 = _AfxSHCreateItemFromParsingName
                        (pwVar12,(IBindCtx *)0x0,(_GUID *)&DAT_005b1ed0,&local_24);
      if (-1 < lVar9) {
        pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0x30);
        guard_check_icall(*(int **)(this + 0xbc),local_24);
        iVar4 = (*pcVar1)();
        if (iVar4 < 0) goto LAB_004364fa;
        pcVar1 = *(code **)(*local_24 + 8);
        guard_check_icall(local_24);
        (*pcVar1)();
      }
    }
    local_8 = 0xffffffff;
    FUN_0040efa0();
  }
  local_14[0] = 0;
  pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0x28);
  guard_check_icall(*(int **)(this + 0xbc),local_14);
  iVar4 = (*pcVar1)();
  if (-1 < iVar4) {
    iVar4 = *(int *)(this + 0xa8);
    if ((*(uint *)(iVar4 + 0x34) & 0x200) == 0) {
      local_14[0] = local_14[0] & 0xfffffdff;
    }
    else {
      local_14[0] = local_14[0] | 0x200;
    }
    if ((*(uint *)(iVar4 + 0x34) & 0x2000) == 0) {
      local_14[0] = local_14[0] & 0xffffdfff;
    }
    else {
      local_14[0] = local_14[0] | 0x2000;
    }
    if ((*(uint *)(iVar4 + 0x34) & 0x2000000) == 0) {
      local_14[0] = local_14[0] & 0xfdffffff;
    }
    else {
      local_14[0] = local_14[0] | 0x2000000;
    }
    if ((*(uint *)(iVar4 + 0x34) & 0x1000) == 0) {
      local_14[0] = local_14[0] & 0xffffefff;
    }
    else {
      local_14[0] = local_14[0] | 0x1000;
    }
    if ((*(uint *)(iVar4 + 0x34) & 0x10000000) == 0) {
      local_14[0] = local_14[0] & 0xefffffff;
    }
    else {
      local_14[0] = local_14[0] | 0x10000000;
    }
    if ((*(byte *)(iVar4 + 0x34) & 8) == 0) {
      local_14[0] = local_14[0] & 0xfffffff7;
    }
    else {
      local_14[0] = local_14[0] | 8;
    }
    if ((*(uint *)(iVar4 + 0x34) & 0x100000) == 0) {
      local_14[0] = local_14[0] & 0xffefffff;
    }
    else {
      local_14[0] = local_14[0] | 0x100000;
    }
    if ((*(uint *)(iVar4 + 0x34) & 0x8000) == 0) {
      local_14[0] = local_14[0] & 0xffff7fff;
    }
    else {
      local_14[0] = local_14[0] | 0x8000;
    }
    if ((*(uint *)(iVar4 + 0x34) & 0x10000) == 0) {
      local_14[0] = local_14[0] & 0xfffeffff;
    }
    else {
      local_14[0] = local_14[0] | 0x10000;
    }
    if ((*(uint *)(iVar4 + 0x34) & 0x100) == 0) {
      local_14[0] = local_14[0] & 0xfffffeff;
    }
    else {
      local_14[0] = local_14[0] | 0x100;
    }
    if ((*(byte *)(iVar4 + 0x34) & 2) == 0) {
      local_14[0] = local_14[0] & 0xfffffffd;
    }
    else {
      local_14[0] = local_14[0] | 2;
    }
    if ((*(uint *)(iVar4 + 0x34) & 0x800) == 0) {
      local_14[0] = local_14[0] & 0xfffff7ff;
    }
    else {
      local_14[0] = local_14[0] | 0x800;
    }
    if ((*(uint *)(iVar4 + 0x34) & 0x4000) == 0) {
      local_14[0] = local_14[0] & 0xffffbfff;
    }
    else {
      local_14[0] = local_14[0] | 0x4000;
    }
    local_14[0] = local_14[0] & 0xfffbffff;
    if ((*(byte *)(iVar4 + 0x54) & 1) != 0) {
      local_14[0] = local_14[0] | 0x40000;
    }
    uVar10 = local_14[0] & 0xffffffdf;
    if ((*(int *)(this + 0xb0) != 0) || (*(int *)(this + 0xb4) != 0)) {
      uVar10 = uVar10 | 0x20;
    }
    local_14[0] = uVar10 | 0x40;
    if (*(int *)(this + 0xb4) != 0) {
      local_14[0] = uVar10 & 0xffffffbf;
    }
    pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0x24);
    guard_check_icall(*(int **)(this + 0xbc),local_14[0]);
    iVar4 = (*pcVar1)();
    if (-1 < iVar4) {
      return;
    }
  }
LAB_004364fa:
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

