// rea decompile_all
// name: FUN_10069f87
// address: 0x10069f87
// body: available
// range: 0x10069f87-0x1006a0c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a0b8 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1006a0bd to 0x10048884 FUN_10048884 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10069f87(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,
                 ushort *param_2,int param_3)

{
  ushort uVar1;
  LANGID LVar2;
  CNoTrackObject *pCVar3;
  HMODULE hModule;
  int iVar4;
  HRSRC hResInfo;
  DLGTEMPLATE *pDVar5;
  SIZE_T dwBytes;
  HGLOBAL pvVar6;
  
  pCVar3 = CProcessLocalObject::GetData
                     ((CProcessLocalObject *)&DAT_1020df20,
                      CProcessLocal<_AFX_PROPPAGEFONTINFO>::CreateObject);
  if (pCVar3 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  if (*(short *)(pCVar3 + 8) == 0) {
    hModule = GetModuleHandleW(L"comctl32.dll");
    if (((hModule != (HMODULE)0x0) &&
        ((((LVar2 = GetUserDefaultUILanguage(), (LVar2 & 0x3ff) == 0x11 &&
           (iVar4 = FUN_1006a103(L"MS UI Gothic"), iVar4 != 0)) &&
          (hResInfo = FindResourceExW(hModule,(LPCWSTR)&DAT_00000005,
                                      (LPCWSTR)((-(uint)(param_3 != 0) & 0xe) + 0x3ee),0xfc11),
          hResInfo != (HRSRC)0x0)) ||
         (hResInfo = FindResourceW(hModule,(LPCWSTR)((-(uint)(param_3 != 0) & 0xe) + 0x3ee),
                                   (LPCWSTR)&DAT_00000005), hResInfo != (HRSRC)0x0)))) &&
       (pDVar5 = LoadResource(hModule,hResInfo), pDVar5 != (DLGTEMPLATE *)0x0)) {
      CDialogTemplate::GetFont(pDVar5,param_1,param_2);
    }
    dwBytes = FUN_10048d16(*(int *)(*(int *)param_1 + -0xc) + 1,2);
    pvVar6 = GlobalAlloc(0x40,dwBytes);
    *(HGLOBAL *)(pCVar3 + 4) = pvVar6;
    if (pvVar6 == (HGLOBAL)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10048884();
    }
    FUN_10049b71(pvVar6,*(int *)(*(int *)param_1 + -0xc) + 1,*(int *)param_1);
    *(ushort *)(pCVar3 + 8) = *param_2;
  }
  FUN_100352a0(*(undefined4 *)(pCVar3 + 4));
  uVar1 = *(ushort *)(pCVar3 + 8);
  *param_2 = uVar1;
  return uVar1 != 0xffff;
}

