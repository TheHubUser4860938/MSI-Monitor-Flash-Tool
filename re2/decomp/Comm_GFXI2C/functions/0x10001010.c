// rea decompile_all
// name: FUN_10001010
// address: 0x10001010
// body: available
// range: 0x10001010-0x100013b9 inclusive
// range: 0x100013c0-0x1000166b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000105b to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000108c to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100010b6 to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_10001010(int *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  int iVar6;
  void *_Dst;
  int iVar7;
  bool bVar8;
  wchar_t *pwVar9;
  wchar_t *pwStack_11c;
  int iStack_118;
  undefined1 uStack_111;
  uint uStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  undefined4 *apuStack_100 [3];
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  CDialog aCStack_e4 [204];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_100585d7;
  local_c = ExceptionList;
  uVar1 = DAT_10064168 ^ (uint)&stack0xfffffed4;
  ExceptionList = &local_c;
  piVar2 = (int *)FUN_10038f10();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80004005);
  }
  iStack_118 = (**(code **)(*piVar2 + 0xc))(uVar1);
  iStack_118 = iStack_118 + 0x10;
  uStack_4 = 0;
  piVar2 = (int *)FUN_10038f10();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80004005);
  }
  iStack_104 = (**(code **)(*piVar2 + 0xc))();
  iStack_104 = iStack_104 + 0x10;
  piVar2 = (int *)FUN_10038f10();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80004005);
  }
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))();
  apuStack_100[0] = puVar3 + 4;
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  uStack_111 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x10] = 0;
  FUN_10001cf0();
  pHVar4 = LoadLibraryW(L"atiadlxx.dll");
  param_1[7] = (int)pHVar4;
  if (pHVar4 == (HMODULE)0x0) {
    pHVar4 = LoadLibraryW(L"atiadlxy.dll");
    param_1[7] = (int)pHVar4;
  }
  if ((HMODULE)param_1[7] == (HMODULE)0x0) {
    if (param_1[0xf] != 1) goto LAB_100015df;
    pwVar9 = L"AMD ADL library not found!\n";
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 0;
    pFVar5 = GetProcAddress((HMODULE)param_1[7],"ADL_Main_Control_Create");
    *param_1 = (int)pFVar5;
    pFVar5 = GetProcAddress((HMODULE)param_1[7],"ADL_Main_Control_Destroy");
    param_1[1] = (int)pFVar5;
    pFVar5 = GetProcAddress((HMODULE)param_1[7],"ADL_Adapter_NumberOfAdapters_Get");
    param_1[2] = (int)pFVar5;
    pFVar5 = GetProcAddress((HMODULE)param_1[7],"ADL_Adapter_AdapterInfo_Get");
    param_1[3] = (int)pFVar5;
    pFVar5 = GetProcAddress((HMODULE)param_1[7],"ADL_Display_DisplayInfo_Get");
    param_1[4] = (int)pFVar5;
    if ((((*param_1 != 0) && (param_1[1] != 0)) && (param_1[2] != 0)) &&
       ((param_1[3] != 0 && (pFVar5 != (FARPROC)0x0)))) {
      pFVar5 = GetProcAddress((HMODULE)param_1[7],"ADL_Display_NativeAUXChannel_Access");
      param_1[5] = (int)pFVar5;
      if (pFVar5 == (FARPROC)0x0) {
        if (param_1[0xf] != 1) goto LAB_100011c7;
        pwVar9 = L"AMD ADL_Display_NativeAUXChannel_Access API is missing!\n";
      }
      else {
        pFVar5 = GetProcAddress((HMODULE)param_1[7],"ADL_Display_DDCBlockAccess_Get");
        param_1[6] = (int)pFVar5;
        if (param_1[5] == 0) {
          if (param_1[0xf] != 1) goto LAB_100011c7;
          pwVar9 = L"AMD ADL_Display_DDCBlockAccess_Get API is missing!\n";
        }
        else {
          iVar6 = (*(code *)*param_1)(&LAB_10001000,1);
          if (iVar6 == 0) {
            piVar2 = param_1 + 10;
            iVar6 = (*(code *)param_1[2])(piVar2);
            if (iVar6 == 0) {
              param_1[0x10] = 1;
              if (param_1[0xf] == 1) {
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
                CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
                          ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
                           &pwStack_11c);
                uStack_4._0_1_ = 2;
                FUN_100023c0(&pwStack_11c,L"The Number of Adpaters is: 0x%X");
                AfxMessageBox(pwStack_11c,0,0);
                uStack_4 = CONCAT31(uStack_4._1_3_,1);
                FUN_100023e0((int *)&pwStack_11c);
              }
              if (0 < *piVar2) {
                _Dst = _malloc(*piVar2 * 0x624);
                param_1[8] = (int)_Dst;
                _memset(_Dst,0,*piVar2 * 0x624);
                (*(code *)param_1[3])(param_1[8],*piVar2 * 0x624);
              }
              *(undefined1 *)(param_1 + 0xe) = 0;
              iStack_e8 = 0;
              if (0 < *piVar2) {
                iStack_f0 = 0;
                do {
                  iVar6 = iStack_f0;
                  piVar2 = param_1 + 9;
                  param_1[0xb] = *(int *)(iStack_f0 + 4 + param_1[8]);
                  if ((void *)*piVar2 != (void *)0x0) {
                    _free((void *)*piVar2);
                    *piVar2 = 0;
                  }
                  iVar7 = (*(code *)param_1[4])
                                    (*(undefined4 *)(iVar6 + 4 + param_1[8]),param_1 + 0xc,piVar2,0)
                  ;
                  if (iVar7 == 0) {
                    if (param_1[0xf] == 1) {
                      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
                      CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
                                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
                                  *)&pwStack_11c);
                      uStack_4._0_1_ = 3;
                      FUN_100023c0(&pwStack_11c,
                                   L"Adapter_Index: 0x%X, Adpater_BusNo: 0x%X, Adpater_DeviceNo: 0x%X, Adpater_FunNo: 0x%X, Adapter_VendorID: 0x%X\n Display number: 0x%X"
                                  );
                      AfxMessageBox(pwStack_11c,0,0);
                      uStack_4 = CONCAT31(uStack_4._1_3_,1);
                      FUN_100023e0((int *)&pwStack_11c);
                    }
                    iStack_f4 = 0;
                    if (0 < param_1[0xc]) {
                      iStack_ec = 0;
                      do {
                        iVar6 = iStack_ec;
                        if (((byte)*(undefined4 *)(param_1[9] + 0x224 + iStack_ec) & 2 | 1) == 3) {
                          bVar8 = DAT_100655e8 == 1;
                          param_1[0xd] = *(int *)(param_1[9] + iStack_ec);
                          if (bVar8) {
                            *(undefined1 *)(param_1 + 0xe) = 1;
                            goto LAB_100014c0;
                          }
                          uStack_110 = 0;
                          do {
                            iVar7 = FUN_10001870((&DAT_1005d4c8)[(uStack_110 & 0xffff) * 3],0x23,
                                                 &uStack_111);
                            if (iVar7 != 0) {
                              iStack_10c = param_1[0xb];
                              iStack_108 = param_1[0xd];
                              FUN_10002170(&iStack_104,(LPCSTR)(iVar6 + 0x14 + param_1[9]));
                              FUN_10002170(apuStack_100,(LPCSTR)(iVar6 + 0x114 + param_1[9]));
                              FUN_10001c90();
                              iVar6 = iStack_ec;
                              break;
                            }
                            uStack_110 = uStack_110 + 1;
                          } while ((ushort)uStack_110 < 4);
                        }
                        iStack_f4 = iStack_f4 + 1;
                        iStack_ec = iVar6 + 0x228;
                        iVar6 = iStack_f0;
                      } while (iStack_f4 < param_1[0xc]);
                    }
                    if ((char)param_1[0xe] != '\0') break;
                  }
                  iStack_e8 = iStack_e8 + 1;
                  iStack_f0 = iVar6 + 0x624;
                } while (iStack_e8 < param_1[10]);
              }
LAB_100014c0:
              if ((((char)param_1[0xe] == '\0') && (DAT_1006561c != 0)) && (DAT_100655e8 == 2)) {
                if (DAT_1006561c < 2) {
                  FUN_10001710();
                  param_1[0xb] = iStack_10c;
                  param_1[0xd] = iStack_108;
                  *(undefined1 *)(param_1 + 0xe) = 1;
                }
                else if (DAT_100655e4 == 1) {
                  FUN_10001710();
                  param_1[0xb] = iStack_10c;
                  param_1[0xd] = iStack_108;
                  *(undefined1 *)(param_1 + 0xe) = 1;
                }
                else {
                  FUN_10005ce0(aCStack_e4,2);
                  uStack_4._0_1_ = 4;
                  FUN_10039e07(aCStack_e4);
                  FUN_10001d60(iStack_18);
                  FUN_10001710();
                  param_1[0xb] = iStack_10c;
                  param_1[0xd] = iStack_108;
                  *(undefined1 *)(param_1 + 0xe) = 1;
                  uStack_4 = CONCAT31(uStack_4._1_3_,1);
                  FUN_10005d70(aCStack_e4);
                }
              }
              if ((void *)param_1[8] != (void *)0x0) {
                FUN_10038b07((void *)param_1[8]);
                param_1[8] = 0;
              }
              iVar6 = param_1[0xe];
              FUN_100016c0((int)&iStack_10c);
              FUN_100023e0(&iStack_118);
              ExceptionList = local_c;
              return (char)iVar6;
            }
            if (param_1[0xf] != 1) goto LAB_100011c7;
            pwVar9 = L"Cannot get the number of adapters!\n";
          }
          else {
            if (param_1[0xf] != 1) goto LAB_100011c7;
            pwVar9 = L"AMD ADL Initialization Error!\n";
          }
        }
      }
      AfxMessageBox(pwVar9,0,0);
LAB_100011c7:
      FUN_100016c0((int)&iStack_10c);
      FUN_100023e0(&iStack_118);
      ExceptionList = local_c;
      return 0;
    }
    if (param_1[0xf] != 1) goto LAB_100015df;
    pwVar9 = L"AMD ADL\'s API is missing!\n";
  }
  AfxMessageBox(pwVar9,0,0);
LAB_100015df:
  piVar2 = puVar3 + 3;
  uStack_4 = uStack_4 & 0xffffff00;
  LOCK();
  iVar6 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar6 + -1 < 1) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  piVar2 = (int *)(iStack_104 + -4);
  LOCK();
  iVar6 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar6 + -1 < 1) {
    (**(code **)(**(int **)(iStack_104 + -0x10) + 4))((undefined4 *)(iStack_104 + -0x10));
  }
  uStack_4 = 0xffffffff;
  piVar2 = (int *)(iStack_118 + -4);
  LOCK();
  iVar6 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(**(int **)(iStack_118 + -0x10) + 4))((undefined4 *)(iStack_118 + -0x10));
  }
  ExceptionList = local_c;
  return 0;
}

