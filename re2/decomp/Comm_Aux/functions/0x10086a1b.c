// rea decompile_all
// name: FUN_10086a1b
// address: 0x10086a1b
// body: available
// range: 0x10086a1b-0x10086c96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10086a41 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_10086a1b(wchar_t *param_1,uint param_2)

{
  CMFCToolBarImages *pCVar1;
  LPCWSTR name;
  int iVar2;
  DWORD DVar3;
  HANDLE hFile;
  AFX_MODULE_STATE *pAVar4;
  HBITMAP__ *h;
  CMFCToolBarImages *in_ECX;
  uint uVar5;
  undefined1 local_a48 [18];
  ushort local_a36;
  LPCWSTR local_a30;
  undefined1 local_a2c [520];
  WCHAR local_824 [260];
  wchar_t local_61c [256];
  wchar_t local_41c [256];
  wchar_t local_21c [256];
  wchar_t local_1c [10];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa38;
  local_8 = 0x10086a2a;
  if (*(int *)(in_ECX + 0x28) != 0) goto LAB_10086c8f;
  if (param_1 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  FUN_1005f9dd(in_ECX + 0x8c);
  FUN_100352e0(param_1);
  local_8 = 0;
  iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_a30,L"\\",0);
  if ((((iVar2 == -1) &&
       (iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                          ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_a30,L"/",0), iVar2 == -1)) &&
      (iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                         ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                          &local_a30,L":",0), iVar2 == -1)) &&
     (DVar3 = GetModuleFileNameW((HMODULE)0x0,local_824,0x104), DVar3 != 0)) {
    __wsplitpath_s(local_824,local_1c,3,local_61c,0x100,(wchar_t *)0x0,0,(wchar_t *)0x0,0);
    __wsplitpath_s(param_1,(wchar_t *)0x0,0,(wchar_t *)0x0,0,local_41c,0x100,local_21c,0x100);
    FUN_10189666(local_a2c,0x104,local_1c,local_61c,local_41c,local_21c);
    FUN_100352a0(local_a2c);
  }
  if ((param_2 == 0) ||
     (hFile = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0),
     hFile == (HANDLE)0xffffffff)) {
LAB_10086b95:
    name = local_a30;
    iVar2 = *(int *)(in_ECX + 0x34);
    pAVar4 = AfxGetModuleState();
    h = LoadImageW(*(HINSTANCE *)(pAVar4 + 8),name,0,0,0,(-(uint)(iVar2 != 0) & 0x1000) + 0x2010);
    pCVar1 = in_ECX + 0x8c;
    *(HBITMAP__ **)pCVar1 = h;
    if (h != (HBITMAP__ *)0x0) {
      iVar2 = GetObjectW(h,0x18,local_a48);
      if (iVar2 != 0) {
        *(undefined4 *)(in_ECX + 0x18) = 1;
        FUN_10034940(&local_a30);
        DVar3 = GetFileAttributesW(local_a30);
        if ((DVar3 & 1) != 0) {
          *(undefined4 *)(in_ECX + 0x24) = 1;
        }
        uVar5 = (uint)local_a36;
        *(uint *)(in_ECX + 8) = uVar5;
        if ((8 < uVar5) && (uVar5 < 0x20)) {
          CMFCToolBarImages::MapBmpTo3dColors((HBITMAP__ **)pCVar1,0,0xffffffff,0xffffffff);
        }
        if (0x1f < local_a36) {
          CMFCToolBarImages::PreMultiplyAlpha(*(HBITMAP__ **)pCVar1,*(int *)(in_ECX + 0x3c));
        }
        CMFCToolBarImages::UpdateCount(in_ECX);
        FUN_1005f9dd(in_ECX + 0x90);
        *(undefined4 *)(in_ECX + 0x90) = 0;
        FUN_1005f9dd(in_ECX + 0x94);
        *(undefined4 *)(in_ECX + 0x94) = 0;
        FUN_10034f00();
        goto LAB_10086c8f;
      }
      DeleteObject(*(HBITMAP__ **)pCVar1);
      *(HBITMAP__ **)pCVar1 = (HBITMAP__ *)0x0;
    }
  }
  else {
    DVar3 = GetFileSize(hFile,(LPDWORD)0x0);
    CloseHandle(hFile);
    if (DVar3 <= param_2) goto LAB_10086b95;
  }
  FUN_10034f00();
LAB_10086c8f:
  FUN_1017f5f4();
  return;
}

