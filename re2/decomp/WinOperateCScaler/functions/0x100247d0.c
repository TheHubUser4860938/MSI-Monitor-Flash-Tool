// rea decompile_all
// name: FUN_100247d0
// address: 0x100247d0
// body: available
// range: 0x100247d0-0x100249a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002499d to 0x1001d03d FUN_1001d03d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100247d0(void)

{
  AFX_MODULE_STATE *pAVar1;
  DWORD DVar2;
  LPWSTR _Dst;
  int iVar3;
  undefined4 uVar4;
  errno_t eVar5;
  int in_ECX;
  undefined1 *puVar6;
  wchar_t *_Src;
  undefined1 local_818 [512];
  undefined1 local_618 [512];
  wchar_t local_418 [260];
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  pAVar1 = AfxGetModuleState();
  *(undefined4 *)(pAVar1 + 8) = *(undefined4 *)(in_ECX + 0x44);
  *(undefined4 *)(pAVar1 + 0xc) = *(undefined4 *)(in_ECX + 0x44);
  DVar2 = GetModuleFileNameW(*(HMODULE *)(in_ECX + 0x44),local_210,0x104);
  if ((DVar2 == 0) || (DVar2 == 0x104)) {
    FUN_1003367d();
  }
  _Dst = PathFindExtensionW(local_210);
  if (_Dst == (LPWSTR)0x0) {
    FUN_1003367d();
  }
  *_Dst = L'\0';
  iVar3 = FUN_1002472d(local_210,local_418,0x104);
  if (iVar3 != 0) {
    FUN_1003367d();
  }
  if (*(int *)(in_ECX + 100) == 0) {
    iVar3 = FUN_10176382(local_418);
    *(int *)(in_ECX + 100) = iVar3;
    if (iVar3 == 0) goto LAB_1002499d;
  }
  if (*(int *)(in_ECX + 0x50) == 0) {
    iVar3 = FUN_1001de50(0xe000,local_618,0x100);
    if (iVar3 == 0) {
      puVar6 = *(undefined1 **)(in_ECX + 100);
    }
    else {
      puVar6 = local_618;
    }
    iVar3 = FUN_10176382(puVar6);
    *(int *)(in_ECX + 0x50) = iVar3;
    if (iVar3 == 0) goto LAB_1002499d;
  }
  if (*(int *)(in_ECX + 0x54) == 0) {
    iVar3 = FUN_1001de50(0xe006,local_818,0x100);
    if (iVar3 == 0) {
      *(undefined **)(in_ECX + 0x54) = &DAT_101a63a8;
    }
    else {
      uVar4 = FUN_10176382(local_818);
      *(undefined4 *)(in_ECX + 0x54) = uVar4;
    }
    if (*(int *)(in_ECX + 0x54) == 0) goto LAB_1002499d;
  }
  *(undefined4 *)(pAVar1 + 0x10) = *(undefined4 *)(in_ECX + 0x50);
  if (*(int *)(in_ECX + 0x68) == 0) {
    if (*(int *)(in_ECX + 0x70) == 1) {
      _Src = L".CHM";
    }
    else {
      _Src = L".HLP";
    }
    eVar5 = _wcscpy_s(_Dst,0x104 - ((int)_Dst - (int)local_210 >> 1),_Src);
    FUN_100186f0(eVar5);
    iVar3 = FUN_10176382(local_210);
    *(int *)(in_ECX + 0x68) = iVar3;
    if (iVar3 == 0) goto LAB_1002499d;
    *_Dst = L'\0';
  }
  if (*(int *)(in_ECX + 0x6c) == 0) {
    eVar5 = _wcscat_s(local_418,0x104,L".INI");
    FUN_100186f0(eVar5);
    iVar3 = FUN_10176382(local_418);
    *(int *)(in_ECX + 0x6c) = iVar3;
    if (iVar3 == 0) {
LAB_1002499d:
                    /* WARNING: Subroutine does not return */
      FUN_1001d03d();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

