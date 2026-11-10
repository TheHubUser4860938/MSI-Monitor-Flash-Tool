// rea decompile_all
// name: CFileDialog::UpdateOFNFromShellDialog
// address: 0x1004b96e
// body: available
// range: 0x1004b96e-0x1004be56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CFileDialog::UpdateOFNFromShellDialog(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFileDialog::UpdateOFNFromShellDialog(CFileDialog *this)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  IFileSaveDialog *pIVar5;
  size_t sVar6;
  undefined4 uVar7;
  LPWSTR pWVar8;
  int local_3c;
  int local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  LPCWSTR local_20;
  undefined2 *local_1c;
  LPWSTR local_18;
  LPWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x1004b97a;
  if (*(int *)(this + 0xac) != 1) {
    return;
  }
  pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0x50);
  guard_check_icall(*(int **)(this + 0xbc),&local_28);
  iVar4 = (*pcVar1)();
  if (iVar4 < 0) {
    if ((*(uint *)(*(int *)(this + 0xa8) + 0x34) & 0x200) == 0) goto LAB_1004bd9b;
    local_34 = (int *)0x0;
    puVar2 = (undefined4 *)**(undefined4 **)(this + 0xbc);
    guard_check_icall(*(undefined4 **)(this + 0xbc),&DAT_101d44b0,&local_34);
    iVar4 = (*(code *)*puVar2)();
    if (iVar4 < 0) goto LAB_1004bd9b;
    local_30 = (int *)0x0;
    pcVar1 = *(code **)(*local_34 + 0x6c);
    guard_check_icall(local_34,&local_30);
    iVar4 = (*pcVar1)();
    local_28 = local_34;
    if (-1 < iVar4) {
      pcVar1 = *(code **)(*local_30 + 0x24);
      guard_check_icall(local_30,&local_2c);
      iVar4 = (*pcVar1)();
      if (-1 < iVar4) {
        local_3c = 0;
        iVar4 = *local_2c;
        guard_check_icall(local_2c,1,&local_24,&local_3c);
        iVar4 = (**(code **)(iVar4 + 0xc))();
        if (iVar4 == 0) {
          uVar7 = FUN_10049868();
          FUN_100476a0(uVar7);
          local_8 = 1;
          local_1c = *(undefined2 **)(*(int *)(this + 0xa8) + 0x1c);
          local_14[0] = (LPWSTR)0x0;
          iVar4 = *local_24;
          guard_check_icall(local_24,0x80058000,local_14);
          iVar4 = (**(code **)(iVar4 + 0x14))();
          if (-1 < iVar4) {
            PathRemoveFileSpecW(local_14[0]);
            puVar3 = local_1c;
            FUN_101a26b7(local_1c,*(undefined4 *)(*(int *)(this + 0xa8) + 0x20),local_14[0],
                         0xffffffff);
            if (local_14[0] == (wchar_t *)0x0) {
              sVar6 = 0;
            }
            else {
              sVar6 = _wcslen(local_14[0]);
            }
            local_1c = puVar3 + sVar6 + 1;
            CoTaskMemFree(local_14[0]);
          }
          do {
            local_14[0] = (LPWSTR)0x0;
            iVar4 = *local_24;
            guard_check_icall(local_24,0x80058000,local_14);
            iVar4 = (**(code **)(iVar4 + 0x14))();
            if (-1 < iVar4) {
              FUN_10047140(local_14[0]);
              if (1 < *(int *)(local_18 + -2)) {
                FUN_100472a0(*(int *)(local_18 + -6));
              }
              pWVar8 = local_18;
              PathRemoveFileSpecW(local_18);
              ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer
                        ((CSimpleStringT<wchar_t,0> *)&local_18,-1);
              puVar3 = local_1c;
              local_38 = *(int *)(pWVar8 + -6);
              if (local_14[0][local_38] == L'\\') {
                local_38 = local_38 + 1;
              }
              FUN_101a26b7(local_1c,(*(int *)(*(int *)(this + 0xa8) + 0x20) -
                                    ((int)local_1c - *(int *)(*(int *)(this + 0xa8) + 0x1c) >> 1)) +
                                    -1,local_14[0] + local_38,0xffffffff);
              sVar6 = 0;
              if (local_14[0] + local_38 != (wchar_t *)0x0) {
                sVar6 = _wcslen(local_14[0] + local_38);
              }
              local_1c = puVar3 + sVar6 + 1;
              CoTaskMemFree(local_14[0]);
            }
            pcVar1 = *(code **)(*local_24 + 8);
            guard_check_icall(local_24);
            (*pcVar1)();
            if ((undefined2 *)
                (*(int *)(*(int *)(this + 0xa8) + 0x1c) + *(int *)(*(int *)(this + 0xa8) + 0x20) * 2
                + -2) <= local_1c) break;
            iVar4 = *local_2c;
            guard_check_icall(local_2c,1,&local_24,&local_3c);
            iVar4 = (**(code **)(iVar4 + 0xc))();
          } while (iVar4 == 0);
          iVar4 = *(int *)(this + 0xa8);
          if (local_1c < (undefined2 *)(*(int *)(iVar4 + 0x1c) + *(int *)(iVar4 + 0x20) * 2 + -2)) {
            *local_1c = 0;
          }
          else {
            *(undefined2 *)(*(int *)(iVar4 + 0x1c) + -4 + *(int *)(iVar4 + 0x20) * 2) = 0;
            *(undefined2 *)
             (*(int *)(*(int *)(this + 0xa8) + 0x1c) + -2 +
             *(int *)(*(int *)(this + 0xa8) + 0x20) * 2) = 0;
          }
          local_8 = 0xffffffff;
          FUN_100476d0();
        }
        pcVar1 = *(code **)(*local_2c + 8);
        guard_check_icall(local_2c);
        (*pcVar1)();
      }
      pcVar1 = *(code **)(*local_30 + 8);
      guard_check_icall(local_30);
      (*pcVar1)();
      local_28 = local_34;
    }
  }
  else {
    pIVar5 = GetIFileSaveDialog(this);
    if (pIVar5 != (IFileSaveDialog *)0x0) {
      local_18 = (LPWSTR)0x0;
      pcVar1 = *(code **)(*(int *)pIVar5 + 0x78);
      guard_check_icall(pIVar5,&local_18);
      iVar4 = (*pcVar1)();
      if (-1 < iVar4) {
        iVar4 = *(int *)pIVar5;
        guard_check_icall(pIVar5,local_28,local_18,*(undefined4 *)(this + 0x20),0);
        (**(code **)(iVar4 + 0x7c))();
        pcVar1 = *(code **)(*(int *)local_18 + 8);
        guard_check_icall(local_18);
        (*pcVar1)();
      }
      pcVar1 = *(code **)(*(int *)pIVar5 + 8);
      guard_check_icall(pIVar5);
      (*pcVar1)();
    }
    local_1c = (undefined2 *)0x0;
    iVar4 = *local_28;
    guard_check_icall(local_28,0x80058000,&local_1c);
    iVar4 = (**(code **)(iVar4 + 0x14))();
    if (-1 < iVar4) {
      FUN_10047180(local_1c);
      local_8 = 0;
      if (1 < *(int *)(local_18 + -2)) {
        FUN_100472a0(*(int *)(local_18 + -6));
      }
      PathRemoveFileSpecW(local_18);
      ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)&local_18,-1);
      iVar4 = *(int *)(local_18 + -6);
      if (local_1c[iVar4] == 0x5c) {
        iVar4 = iVar4 + 1;
      }
      FUN_101a26b7(*(undefined4 *)(*(int *)(this + 0xa8) + 0x1c),
                   *(undefined4 *)(*(int *)(this + 0xa8) + 0x20),local_1c,0xffffffff);
      FUN_101a26b7(*(undefined4 *)(*(int *)(this + 0xa8) + 0x24),
                   *(undefined4 *)(*(int *)(this + 0xa8) + 0x28),local_1c + iVar4,0xffffffff);
      iVar4 = *(int *)(this + 0xa8);
      sVar6 = _wcslen(*(wchar_t **)(iVar4 + 0x1c));
      *(undefined2 *)(*(int *)(iVar4 + 0x1c) + 2 + sVar6 * 2) = 0;
      CoTaskMemFree(local_1c);
      local_8 = 0xffffffff;
      FUN_100476d0();
    }
  }
  pcVar1 = *(code **)(*local_28 + 8);
  guard_check_icall(local_28);
  (*pcVar1)();
LAB_1004bd9b:
  GetPathName(this);
  local_8 = 2;
  uVar7 = FUN_10049868();
  FUN_100476a0(uVar7);
  local_8 = CONCAT31(local_8._1_3_,3);
  pWVar8 = PathFindFileNameW(local_20);
  if (pWVar8 != (LPWSTR)0x0) {
    FUN_10047140(pWVar8);
  }
  uVar7 = FUN_10049868();
  FUN_100476a0(uVar7);
  local_8 = CONCAT31(local_8._1_3_,4);
  pWVar8 = PathFindExtensionW(local_20);
  if ((pWVar8 != (LPWSTR)0x0) && (*pWVar8 == L'.')) {
    FUN_10047140(pWVar8 + 1);
  }
  *(WCHAR *)(*(int *)(this + 0xa8) + 0x38) = local_20[-6] - *(short *)(local_3c + -0xc);
  *(WCHAR *)(*(int *)(this + 0xa8) + 0x3a) = local_20[-6] - *(short *)(local_38 + -0xc);
  FUN_100476d0();
  FUN_100476d0();
  FUN_100476d0();
  return;
}

