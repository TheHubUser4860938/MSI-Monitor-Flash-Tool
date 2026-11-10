// rea decompile_all
// name: FUN_0053133c
// address: 0x53133c
// body: available
// range: 0x53133c-0x531476 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x53146d to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x531472 to 0x429141 FUN_00429141 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0053133c(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,
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
                     ((CProcessLocalObject *)&DAT_00617bec,
                      CProcessLocal<_AFX_PROPPAGEFONTINFO>::CreateObject);
  if (pCVar3 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  if (*(short *)(pCVar3 + 8) == 0) {
    hModule = GetModuleHandleW(L"comctl32.dll");
    if (((hModule != (HMODULE)0x0) &&
        ((((LVar2 = GetUserDefaultUILanguage(), (LVar2 & 0x3ff) == 0x11 &&
           (iVar4 = FUN_005314b8(L"MS UI Gothic"), iVar4 != 0)) &&
          (hResInfo = FindResourceExW(hModule,(LPCWSTR)&DAT_00000005,
                                      (LPCWSTR)((-(uint)(param_3 != 0) & 0xe) + 0x3ee),0xfc11),
          hResInfo != (HRSRC)0x0)) ||
         (hResInfo = FindResourceW(hModule,(LPCWSTR)((-(uint)(param_3 != 0) & 0xe) + 0x3ee),
                                   (LPCWSTR)&DAT_00000005), hResInfo != (HRSRC)0x0)))) &&
       (pDVar5 = LoadResource(hModule,hResInfo), pDVar5 != (DLGTEMPLATE *)0x0)) {
      CDialogTemplate::GetFont(pDVar5,param_1,param_2);
    }
    dwBytes = FUN_0042948d(*(int *)(*(int *)param_1 + -0xc) + 1,2);
    pvVar6 = GlobalAlloc(0x40,dwBytes);
    *(HGLOBAL *)(pCVar3 + 4) = pvVar6;
    if (pvVar6 == (HGLOBAL)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429141();
    }
    FUN_00437889(pvVar6,*(int *)(*(int *)param_1 + -0xc) + 1,*(int *)param_1);
    *(ushort *)(pCVar3 + 8) = *param_2;
  }
  FUN_00415ad0(*(undefined4 *)(pCVar3 + 4));
  uVar1 = *(ushort *)(pCVar3 + 8);
  *param_2 = uVar1;
  return uVar1 != 0xffff;
}

