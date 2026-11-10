// rea decompile_all
// name: CFileDialog::ApplyOFNToShellDialog
// address: 0x1001eb3e
// body: available
// range: 0x1001eb3e-0x1001f0f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001eb85 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001ec38 to 0x1001d03d FUN_1001d03d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  void *pvVar3;
  short sVar4;
  int iVar5;
  size_t sVar6;
  size_t sVar7;
  undefined4 uVar8;
  void *pvVar9;
  long lVar10;
  uint uVar11;
  int *piVar12;
  wchar_t *pwVar13;
  int *piVar14;
  int local_2c;
  int *local_24;
  wchar_t *local_20;
  void *local_1c;
  wchar_t *local_18;
  uint local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x1001eb4a;
  if (*(int *)(this + 0xac) != 1) {
    return;
  }
  piVar14 = (int *)0x0;
  if (*(int *)(*(int *)(this + 0xa8) + 0x30) != 0) {
    pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0x44);
    guard_check_icall(*(int **)(this + 0xbc),*(undefined4 *)(*(int *)(this + 0xa8) + 0x30));
    iVar5 = (*pcVar1)();
    if (iVar5 < 0) goto LAB_1001eb85;
  }
  if (*(int *)(*(int *)(this + 0xa8) + 0x3c) != 0) {
    FUN_100185a0(*(undefined4 *)(*(int *)(this + 0xa8) + 0x3c));
    local_8 = 0;
    pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0x58);
    guard_check_icall(*(int **)(this + 0xbc),local_20);
    iVar5 = (*pcVar1)();
    if (iVar5 < 0) goto LAB_1001eb85;
    local_8 = 0xffffffff;
    ATL::CStringData::Release((CStringData *)(local_20 + -8));
  }
  if ((*(int *)(*(int *)(this + 0xa8) + 0xc) != 0) &&
     (pwVar13 = *(wchar_t **)(*(int *)(this + 0xa8) + 0xc), *pwVar13 != L'\0')) {
    do {
      sVar6 = _wcslen(pwVar13);
      sVar7 = _wcslen(pwVar13 + sVar6 + 1);
      pwVar13 = pwVar13 + sVar6 + 1 + sVar7 + 1;
      piVar14 = (int *)((int)piVar14 + 1);
    } while (*pwVar13 != L'\0');
    if (piVar14 != (int *)0x0) {
      local_18 = (wchar_t *)
                 FUN_1001cfdc(-(uint)((int)(ZEXT48(piVar14) * 8 >> 0x20) != 0) |
                              (uint)(ZEXT48(piVar14) * 8));
      if (local_18 == (wchar_t *)0x0) {
LAB_1001ec38:
                    /* WARNING: Subroutine does not return */
        FUN_1001d03d();
      }
      local_20 = *(wchar_t **)(*(int *)(this + 0xa8) + 0xc);
      local_24 = (int *)0x0;
      if (piVar14 != (int *)0x0) {
        do {
          pwVar13 = local_18;
          uVar8 = FUN_1001e20a();
          FUN_1001d224(uVar8);
          local_8 = 1;
          sVar6 = _wcslen(local_20);
          lVar2 = (ulonglong)(sVar6 + 1) * 2;
          pvVar9 = (void *)FUN_1001cfdc(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2)
          ;
          if (pvVar9 == (void *)0x0) goto LAB_1001ec38;
          ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_1c,local_20);
          _memcpy_s(pvVar9,*(int *)((int)local_1c + -0xc) * 2 + 2,local_1c,
                    *(int *)((int)local_1c + -0xc) * 2 + 2);
          *(void **)(pwVar13 + (int)local_24 * 4) = pvVar9;
          pwVar13 = local_20 + sVar6 + 1;
          sVar6 = _wcslen(pwVar13);
          local_20 = (wchar_t *)(sVar6 + 1);
          pvVar9 = (void *)FUN_1001cfdc(-(uint)((int)(ZEXT48(local_20) * 2 >> 0x20) != 0) |
                                        (uint)(ZEXT48(local_20) * 2));
          if (pvVar9 == (void *)0x0) goto LAB_1001ec38;
          ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_1c,pwVar13);
          pvVar3 = local_1c;
          _memcpy_s(pvVar9,*(int *)((int)local_1c + -0xc) * 2 + 2,local_1c,
                    *(int *)((int)local_1c + -0xc) * 2 + 2);
          local_8 = 0xffffffff;
          *(void **)(local_18 + (int)local_24 * 4 + 2) = pvVar9;
          local_24 = (int *)((int)local_24 + 1);
          local_20 = pwVar13 + (int)local_20;
          ATL::CStringData::Release((CStringData *)((int)pvVar3 + -0x10));
        } while (local_24 < piVar14);
      }
      if (*(int *)(this + 0x4d8) == 0) {
        pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0x10);
        guard_check_icall(*(int **)(this + 0xbc),piVar14,local_18);
        iVar5 = (*pcVar1)();
        if (iVar5 < 0) goto LAB_1001eb85;
        *(undefined4 *)(this + 0x4d8) = 1;
      }
      pwVar13 = local_18;
      piVar12 = (int *)0x0;
      if (piVar14 != (int *)0x0) {
        do {
          FID_conflict__free(*(void **)(pwVar13 + (int)piVar12 * 4));
          FID_conflict__free(*(void **)(pwVar13 + (int)piVar12 * 4 + 2));
          piVar12 = (int *)((int)piVar12 + 1);
        } while (piVar12 < piVar14);
      }
      FID_conflict__free(local_18);
      if (*(uint *)(*(int *)(this + 0xa8) + 0x18) < 2) {
        uVar8 = 1;
      }
      else {
        uVar8 = *(undefined4 *)(*(int *)(this + 0xa8) + 0x18);
      }
      pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0x14);
      guard_check_icall(*(int **)(this + 0xbc),uVar8);
      iVar5 = (*pcVar1)();
      if (iVar5 < 0) goto LAB_1001eb85;
    }
  }
  if ((*(int *)(*(int *)(this + 0xa8) + 0x1c) != 0) || (*(int *)(*(int *)(this + 0xa8) + 0x2c) != 0)
     ) {
    uVar8 = FUN_1001e20a();
    FUN_1001d224(uVar8);
    local_8 = 2;
    pwVar13 = local_18;
    if (*(int *)(*(int *)(this + 0xa8) + 0x1c) != 0) {
      FUN_100185a0(*(undefined4 *)(*(int *)(this + 0xa8) + 0x1c));
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_10018680(&local_24);
      if (1 < *(int *)(local_18 + -2)) {
        FUN_100189a0(*(undefined4 *)(local_18 + -6));
      }
      pwVar13 = local_18;
      PathRemoveFileSpecW(local_18);
      ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)&local_18,-1);
      local_2c = *(int *)(pwVar13 + -6);
      sVar4 = FUN_1001ea46(local_2c);
      if (sVar4 == 0x5c) {
        local_2c = local_2c + 1;
      }
      iVar5 = **(int **)(this + 0xbc);
      guard_check_icall(*(int **)(this + 0xbc),(int)local_24 + local_2c * 2);
      iVar5 = (**(code **)(iVar5 + 0x3c))();
      if (iVar5 < 0) goto LAB_1001eb85;
      local_8 = CONCAT31(local_8._1_3_,2);
      ATL::CStringData::Release((CStringData *)(local_24 + -4));
    }
    if (*(int *)(*(int *)(this + 0xa8) + 0x2c) == 0) {
LAB_1001eee6:
      if (*(int *)(pwVar13 + -6) != 0) goto LAB_1001eeec;
    }
    else {
      if (*(int *)(pwVar13 + -6) == 0) {
        ATL::CSimpleStringT<wchar_t,0>::Append
                  ((CSimpleStringT<wchar_t,0> *)&local_18,
                   *(wchar_t **)(*(int *)(this + 0xa8) + 0x2c));
        pwVar13 = local_18;
        goto LAB_1001eee6;
      }
LAB_1001eeec:
      local_24 = (int *)0x0;
      lVar10 = _AfxSHCreateItemFromParsingName
                         (pwVar13,(IBindCtx *)0x0,(_GUID *)&DAT_101a7e74,&local_24);
      if (-1 < lVar10) {
        pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0x30);
        guard_check_icall(*(int **)(this + 0xbc),local_24);
        iVar5 = (*pcVar1)();
        if (iVar5 < 0) goto LAB_1001eb85;
        pcVar1 = *(code **)(*local_24 + 8);
        guard_check_icall(local_24);
        (*pcVar1)();
      }
    }
    local_8 = 0xffffffff;
    ATL::CStringData::Release((CStringData *)(pwVar13 + -8));
  }
  local_14[0] = 0;
  pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0x28);
  guard_check_icall(*(int **)(this + 0xbc),local_14);
  iVar5 = (*pcVar1)();
  if (-1 < iVar5) {
    iVar5 = *(int *)(this + 0xa8);
    if ((*(uint *)(iVar5 + 0x34) & 0x200) == 0) {
      local_14[0] = local_14[0] & 0xfffffdff;
    }
    else {
      local_14[0] = local_14[0] | 0x200;
    }
    if ((*(uint *)(iVar5 + 0x34) & 0x2000) == 0) {
      local_14[0] = local_14[0] & 0xffffdfff;
    }
    else {
      local_14[0] = local_14[0] | 0x2000;
    }
    if ((*(uint *)(iVar5 + 0x34) & 0x2000000) == 0) {
      local_14[0] = local_14[0] & 0xfdffffff;
    }
    else {
      local_14[0] = local_14[0] | 0x2000000;
    }
    if ((*(uint *)(iVar5 + 0x34) & 0x1000) == 0) {
      local_14[0] = local_14[0] & 0xffffefff;
    }
    else {
      local_14[0] = local_14[0] | 0x1000;
    }
    if ((*(uint *)(iVar5 + 0x34) & 0x10000000) == 0) {
      local_14[0] = local_14[0] & 0xefffffff;
    }
    else {
      local_14[0] = local_14[0] | 0x10000000;
    }
    if ((*(byte *)(iVar5 + 0x34) & 8) == 0) {
      local_14[0] = local_14[0] & 0xfffffff7;
    }
    else {
      local_14[0] = local_14[0] | 8;
    }
    if ((*(uint *)(iVar5 + 0x34) & 0x100000) == 0) {
      local_14[0] = local_14[0] & 0xffefffff;
    }
    else {
      local_14[0] = local_14[0] | 0x100000;
    }
    if ((*(uint *)(iVar5 + 0x34) & 0x8000) == 0) {
      local_14[0] = local_14[0] & 0xffff7fff;
    }
    else {
      local_14[0] = local_14[0] | 0x8000;
    }
    if ((*(uint *)(iVar5 + 0x34) & 0x10000) == 0) {
      local_14[0] = local_14[0] & 0xfffeffff;
    }
    else {
      local_14[0] = local_14[0] | 0x10000;
    }
    if ((*(uint *)(iVar5 + 0x34) & 0x100) == 0) {
      local_14[0] = local_14[0] & 0xfffffeff;
    }
    else {
      local_14[0] = local_14[0] | 0x100;
    }
    if ((*(byte *)(iVar5 + 0x34) & 2) == 0) {
      local_14[0] = local_14[0] & 0xfffffffd;
    }
    else {
      local_14[0] = local_14[0] | 2;
    }
    if ((*(uint *)(iVar5 + 0x34) & 0x800) == 0) {
      local_14[0] = local_14[0] & 0xfffff7ff;
    }
    else {
      local_14[0] = local_14[0] | 0x800;
    }
    if ((*(uint *)(iVar5 + 0x34) & 0x4000) == 0) {
      local_14[0] = local_14[0] & 0xffffbfff;
    }
    else {
      local_14[0] = local_14[0] | 0x4000;
    }
    local_14[0] = local_14[0] & 0xfffbffff;
    if ((*(byte *)(iVar5 + 0x54) & 1) != 0) {
      local_14[0] = local_14[0] | 0x40000;
    }
    uVar11 = local_14[0] & 0xffffffdf;
    if ((*(int *)(this + 0xb0) != 0) || (*(int *)(this + 0xb4) != 0)) {
      uVar11 = uVar11 | 0x20;
    }
    local_14[0] = uVar11 | 0x40;
    if (*(int *)(this + 0xb4) != 0) {
      local_14[0] = uVar11 & 0xffffffbf;
    }
    pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0x24);
    guard_check_icall(*(int **)(this + 0xbc),local_14[0]);
    iVar5 = (*pcVar1)();
    if (-1 < iVar5) {
      return;
    }
  }
LAB_1001eb85:
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

