// rea decompile_all
// name: _AfxFullPath2
// address: 0x10034ce5
// body: available
// range: 0x10034ce5-0x10034e98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10034d07 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    int __stdcall _AfxFullPath2(wchar_t *,wchar_t const *,class CFileException *)
   
   Library: Visual Studio 2015 Release */

int _AfxFullPath2(wchar_t *param_1,wchar_t *param_2,CFileException *param_3)

{
  DWORD DVar1;
  undefined4 uVar2;
  BOOL BVar3;
  HANDLE hFindFile;
  size_t sVar4;
  errno_t eVar5;
  int iVar6;
  DWORD local_278;
  uint local_274;
  LPCWSTR local_270;
  wchar_t *local_26c;
  wchar_t *local_268;
  _WIN32_FIND_DATAW local_264;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x268;
  local_8 = 0x10034cf4;
  local_268 = param_1;
  if ((param_1 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
  }
  DVar1 = GetFullPathNameW(param_2,0x104,param_1,&local_26c);
  if (DVar1 == 0) {
    uVar2 = FUN_101758fc(local_268,0x104,param_2,0xffffffff);
    FUN_100186f0(uVar2);
    _AfxFillExceptionInfo(param_3,param_2);
    goto LAB_10034e74;
  }
  if (0x103 < DVar1) {
    if (param_3 != (CFileException *)0x0) {
      *(undefined4 *)(param_3 + 8) = 3;
      ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)(param_3 + 0x10),param_2);
    }
    goto LAB_10034e74;
  }
  uVar2 = FUN_1001e20a();
  FUN_1001d224(uVar2);
  local_8 = 0;
  AfxGetRoot(local_268,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_270);
  BVar3 = PathIsUNCW(local_270);
  if (BVar3 == 0) {
    BVar3 = GetVolumeInformationW
                      (local_270,(LPWSTR)0x0,0,(LPDWORD)0x0,&local_278,&local_274,(LPWSTR)0x0,0);
    if (BVar3 == 0) {
LAB_10034dc5:
      _AfxFillExceptionInfo(param_3,param_2);
    }
    else {
      if ((local_274 & 2) == 0) {
        CharUpperW(local_268);
      }
      if (((local_274 & 4) != 0) ||
         (hFindFile = FindFirstFileW(param_2,&local_264), hFindFile == (HANDLE)0xffffffff))
      goto LAB_10034e69;
      FindClose(hFindFile);
      if ((local_26c == (wchar_t *)0x0) || (local_26c <= local_268)) goto LAB_10034dc5;
      sVar4 = _wcslen(local_264.cFileName);
      iVar6 = (int)local_26c - (int)local_268 >> 1;
      if ((int)(sVar4 + iVar6) < 0x104) {
        eVar5 = _wcscpy_s(local_26c,0x104 - iVar6,local_264.cFileName);
        FUN_100186f0(eVar5);
        goto LAB_10034e69;
      }
      if (param_3 != (CFileException *)0x0) {
        *(undefined4 *)(param_3 + 8) = 3;
        ATL::CSimpleStringT<wchar_t,0>::Append
                  ((CSimpleStringT<wchar_t,0> *)(param_3 + 0x10),param_2);
      }
    }
    ATL::CStringData::Release((CStringData *)(local_270 + -8));
  }
  else {
LAB_10034e69:
    ATL::CStringData::Release((CStringData *)(local_270 + -8));
  }
LAB_10034e74:
  iVar6 = FUN_10154478();
  return iVar6;
}

