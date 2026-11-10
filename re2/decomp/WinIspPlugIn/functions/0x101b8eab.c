// rea decompile_all
// name: FUN_101b8eab
// address: 0x101b8eab
// body: available
// range: 0x101b8eab-0x101b90e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101b90e5 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_101b8eab(char *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  code *pcVar3;
  int *piVar4;
  char *pcVar5;
  char **ppcVar6;
  int iVar7;
  char *_Dst;
  errno_t eVar8;
  BOOL BVar9;
  char *pcVar10;
  undefined4 uVar11;
  char *pcVar12;
  bool bVar13;
  
  if (param_1 == (char *)0x0) {
    piVar4 = __errno();
    *piVar4 = 0x16;
    return 0xffffffff;
  }
  pcVar5 = (char *)FUN_101977f0(param_1,0x3d);
  pcVar12 = param_1;
  if ((pcVar5 == (char *)0x0) || (pcVar5 == param_1)) {
LAB_101b8f2e:
    piVar4 = __errno();
    *piVar4 = 0x16;
  }
  else {
    bVar13 = pcVar5[1] == '\0';
    if (DAT_10249760 == DAT_1024976c) {
      DAT_10249760 = (int *)FUN_101b90e6(DAT_10249760);
    }
    uVar11 = 0;
    if (DAT_10249760 == (int *)0x0) {
      if ((param_2 != 0) && (DAT_10249764 != 0)) {
        ppcVar6 = common_get_or_create_environment_nolock<char>();
        if (ppcVar6 != (char **)0x0) goto LAB_101b8fa2;
        goto LAB_101b8f2e;
      }
      if (bVar13) {
        uVar11 = 0;
        goto LAB_101b8f3c;
      }
      DAT_10249760 = (int *)__calloc_base(1,4);
      FID_conflict__free((void *)0x0);
      if (DAT_10249760 != (int *)0x0) {
        if (DAT_10249764 == 0) {
          DAT_10249764 = __calloc_base(1,4);
          FID_conflict__free((void *)0x0);
          if (DAT_10249764 == 0) goto LAB_101b8f39;
        }
LAB_101b8fa2:
        if (DAT_10249760 != (int *)0x0) goto LAB_101b8fa6;
      }
    }
    else {
LAB_101b8fa6:
      piVar4 = DAT_10249760;
      iVar7 = find_in_environment_nolock<char>(param_1,(int)pcVar5 - (int)param_1);
      if ((-1 < iVar7) && (*piVar4 != 0)) {
        FID_conflict__free((void *)piVar4[iVar7]);
        if (bVar13) {
          for (; piVar4[iVar7] != 0; iVar7 = iVar7 + 1) {
            piVar4[iVar7] = piVar4[iVar7 + 1];
          }
          piVar4 = (int *)FUN_101a96c0(piVar4,iVar7,4);
          FID_conflict__free((void *)0x0);
          if (piVar4 != (int *)0x0) {
LAB_101b9055:
            DAT_10249760 = piVar4;
          }
        }
        else {
          piVar4[iVar7] = (int)param_1;
          pcVar12 = (char *)0x0;
        }
        if (param_2 != 0) {
          pcVar10 = param_1;
          do {
            cVar2 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar2 != '\0');
          _Dst = (char *)__calloc_base(pcVar10 + (2 - (int)(param_1 + 1)),1);
          if (_Dst != (char *)0x0) {
            eVar8 = _strcpy_s(_Dst,(rsize_t)(pcVar10 + (2 - (int)(param_1 + 1))),param_1);
            if (eVar8 != 0) {
              __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              pcVar3 = (code *)swi(3);
              uVar11 = (*pcVar3)();
              return uVar11;
            }
            (pcVar5 + (int)(_Dst + (1 - (int)param_1)))[-1] = '\0';
            BVar9 = SetEnvironmentVariableA
                              (_Dst,(LPCSTR)(~-(uint)bVar13 &
                                            (uint)(pcVar5 + (int)(_Dst + (1 - (int)param_1)))));
            if (BVar9 == 0) {
              piVar4 = __errno();
              uVar11 = 0xffffffff;
              *piVar4 = 0x2a;
            }
          }
          FID_conflict__free(_Dst);
        }
        goto LAB_101b8f3c;
      }
      if (bVar13) goto LAB_101b8f3c;
      uVar1 = -iVar7 + 2;
      if (((uint)-iVar7 <= uVar1) && (uVar1 < 0x3fffffff)) {
        piVar4 = (int *)FUN_101a96c0(piVar4,uVar1,4);
        FID_conflict__free((void *)0x0);
        if (piVar4 != (int *)0x0) {
          piVar4[-iVar7] = (int)param_1;
          piVar4[1 - iVar7] = 0;
          pcVar12 = (char *)0x0;
          goto LAB_101b9055;
        }
      }
    }
  }
LAB_101b8f39:
  uVar11 = 0xffffffff;
LAB_101b8f3c:
  FID_conflict__free(pcVar12);
  return uVar11;
}

