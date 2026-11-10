// rea decompile_all
// name: FUN_10061172
// address: 0x10061172
// body: available
// range: 0x10061172-0x100612e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100612e3 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10061172(CSimpleStringT<wchar_t,0> *param_1,short *param_2,int param_3,int param_4)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  short *psVar6;
  
  if ((param_2 == (short *)0x0) || (param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
  iVar5 = 0;
  sVar1 = *param_2;
  psVar6 = param_2;
  while (sVar1 != 0) {
    if (*psVar6 == 0x25) {
      uVar2 = psVar6[1];
      if ((uVar2 < 0x31) || (0x39 < uVar2)) {
        if ((uVar2 < 0x41) || (0x5a < uVar2)) goto LAB_1006120c;
        if (uVar2 < 0x3a) goto LAB_100611e7;
        iVar3 = -0x38;
      }
      else {
LAB_100611e7:
        iVar3 = -0x31;
      }
      iVar3 = (uint)uVar2 + iVar3;
      if (iVar3 < param_4) {
        if (*(int *)(param_3 + iVar3 * 4) != 0) {
          sVar4 = _wcslen(*(wchar_t **)(param_3 + iVar3 * 4));
          iVar5 = iVar5 + sVar4;
        }
      }
      else {
        iVar5 = iVar5 + 1;
      }
      iVar3 = 4;
    }
    else {
LAB_1006120c:
      iVar5 = iVar5 + 1;
      iVar3 = 2;
    }
    psVar6 = (short *)((int)psVar6 + iVar3);
    sVar1 = *psVar6;
  }
  psVar6 = (short *)FUN_100473c0(iVar5);
  do {
    if (*param_2 == 0) {
      ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer(param_1,(int)psVar6 - *(int *)param_1 >> 1);
      return;
    }
    if (*param_2 == 0x25) {
      uVar2 = param_2[1];
      if (((uVar2 < 0x31) || (0x39 < uVar2)) && ((uVar2 < 0x41 || (0x5a < uVar2))))
      goto LAB_100612b3;
      if (uVar2 < 0x3a) {
        iVar3 = -0x31;
      }
      else {
        iVar3 = -0x38;
      }
      iVar3 = (uint)uVar2 + iVar3;
      if (iVar3 < param_4) {
        if (*(int *)(param_3 + iVar3 * 4) != 0) {
          sVar4 = _wcslen(*(wchar_t **)(param_3 + iVar3 * 4));
          FUN_1004be57(psVar6,iVar5 + 1,*(undefined4 *)(param_3 + iVar3 * 4));
          iVar5 = iVar5 - sVar4;
          psVar6 = psVar6 + sVar4;
        }
      }
      else {
        *psVar6 = 0x3f;
        psVar6 = psVar6 + 1;
        iVar5 = iVar5 + -1;
      }
      iVar3 = 4;
    }
    else {
LAB_100612b3:
      *psVar6 = *param_2;
      psVar6 = psVar6 + 1;
      iVar5 = iVar5 + -1;
      iVar3 = 2;
    }
    param_2 = (short *)((int)param_2 + iVar3);
  } while( true );
}

