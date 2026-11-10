// rea decompile_all
// name: AfxFormatStrings
// address: 0x1004586f
// body: available
// range: 0x1004586f-0x100459b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004587f to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __stdcall AfxFormatStrings(class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > &,wchar_t const *,wchar_t const * const *,int)
   
   Library: Visual Studio 2008 Release */

void AfxFormatStrings(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,
                     wchar_t *param_2,wchar_t **param_3,int param_4)

{
  wchar_t wVar1;
  LPCWSTR lpString;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  pwVar5 = param_2;
  if ((param_2 == (wchar_t *)0x0) || (param_3 == (wchar_t **)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10038e31();
  }
  param_2 = (wchar_t *)0x0;
  wVar1 = *pwVar5;
  pwVar3 = pwVar5;
  while (wVar1 != L'\0') {
    if (*pwVar3 == L'%') {
      wVar1 = pwVar3[1];
      if (((ushort)wVar1 < 0x31) || (0x39 < (ushort)wVar1)) {
        if (((ushort)wVar1 < 0x41) || (0x5a < (ushort)wVar1)) goto LAB_100458e8;
        if ((ushort)wVar1 < 0x3a) goto LAB_100458c7;
        iVar2 = (ushort)wVar1 - 0x38;
      }
      else {
LAB_100458c7:
        iVar2 = (ushort)wVar1 - 0x31;
      }
      pwVar3 = pwVar3 + 2;
      if (param_4 <= iVar2) goto LAB_100458ea;
      if (param_3[iVar2] != (LPCWSTR)0x0) {
        iVar2 = lstrlenW(param_3[iVar2]);
        param_2 = (wchar_t *)((int)param_2 + iVar2);
      }
    }
    else {
LAB_100458e8:
      pwVar3 = pwVar3 + 1;
LAB_100458ea:
      param_2 = (wchar_t *)((int)param_2 + 1);
    }
    wVar1 = *pwVar3;
  }
  pwVar3 = (wchar_t *)FID_conflict_PrepareWrite(param_1,(int)param_2);
  wVar1 = *pwVar5;
  do {
    if (wVar1 == L'\0') {
      ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer
                ((CSimpleStringT<wchar_t,0> *)param_1,(int)pwVar3 - *(int *)param_1 >> 1);
      return;
    }
    if (*pwVar5 == L'%') {
      wVar1 = pwVar5[1];
      if (((ushort)wVar1 < 0x31) || (0x39 < (ushort)wVar1)) {
        if (((ushort)wVar1 < 0x41) || (0x5a < (ushort)wVar1)) goto LAB_1004598a;
        if ((ushort)wVar1 < 0x3a) goto LAB_1004593f;
        iVar2 = (ushort)wVar1 - 0x38;
      }
      else {
LAB_1004593f:
        iVar2 = (ushort)wVar1 - 0x31;
      }
      pwVar5 = pwVar5 + 2;
      if (param_4 <= iVar2) {
        *pwVar3 = L'?';
        goto LAB_10045991;
      }
      lpString = param_3[iVar2];
      if (lpString != (LPCWSTR)0x0) {
        iVar4 = lstrlenW(lpString);
        ATL::Checked::tcscpy_s(pwVar3,(int)param_2 + 1,param_3[iVar2]);
        param_2 = (wchar_t *)((int)param_2 - iVar4);
        pwVar3 = pwVar3 + iVar4;
      }
    }
    else {
LAB_1004598a:
      *pwVar3 = *pwVar5;
      pwVar5 = pwVar5 + 1;
LAB_10045991:
      pwVar3 = pwVar3 + 1;
      param_2 = (wchar_t *)((int)param_2 + -1);
    }
    wVar1 = *pwVar5;
  } while( true );
}

