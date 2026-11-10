// rea decompile_all
// name: FUN_10076bf0
// address: 0x10076bf0
// body: available
// range: 0x10076bf0-0x10076d00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10076cfc to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_10076bf0(LPCWSTR param_1,LPCWSTR param_2)

{
  uint uVar1;
  HMODULE hModule;
  uint uVar2;
  uint uVar3;
  AFX_MODULE_STATE *pAVar4;
  HRSRC hResInfo;
  HGLOBAL hResData;
  char *_Str;
  size_t sVar5;
  undefined4 *puVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  
  uVar3 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if ((param_1 != (LPCWSTR)0x0) && (param_2 != (LPCWSTR)0x0)) {
    pAVar4 = AfxGetModuleState();
    hModule = *(HMODULE *)(pAVar4 + 0xc);
    hResInfo = FindResourceW(hModule,param_1,param_2);
    if ((hResInfo == (HRSRC)0x0) ||
       (hResData = LoadResource(hModule,hResInfo), hResData == (HGLOBAL)0x0)) goto LAB_10076ce6;
    _Str = LockResource(hResData);
    if (_Str == (char *)0x0) goto LAB_10076cfc;
    sVar5 = _strlen(_Str);
    uVar2 = (sVar5 + 1) * 2;
    uVar1 = uVar2 + 8;
    if ((uVar1 & -(uint)(uVar2 < uVar1)) == 0) {
      pwVar8 = (wchar_t *)0x0;
    }
    else {
      if ((-(uint)(uVar2 < uVar1) & uVar1) < 0x401) {
        puVar6 = (undefined4 *)&stack0xffffffe0;
        if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_10076cfc;
      }
      else {
        puVar6 = (undefined4 *)FUN_101511d5(-(uint)(uVar2 < uVar2 + 8) & uVar2 + 8);
        if (puVar6 == (undefined4 *)0x0) goto LAB_10076cfc;
        *puVar6 = 0xdddd;
      }
      pwVar8 = (wchar_t *)(puVar6 + 2);
    }
    if (pwVar8 == (wchar_t *)0x0) {
LAB_10076cfc:
                    /* WARNING: Subroutine does not return */
      FUN_10012a3f();
    }
    pwVar7 = AfxA2WHelper(pwVar8,_Str,sVar5 + 1);
    if (pwVar7 != (wchar_t *)0x0) {
      SetBuffer(pwVar7);
    }
    FreeResource(hResData);
    FUN_100785c7(pwVar8);
  }
LAB_10076ce6:
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}

