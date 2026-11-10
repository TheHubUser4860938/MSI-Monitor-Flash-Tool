// rea decompile_all
// name: AfxRegisterClass
// address: 0x10052eca
// body: available
// range: 0x10052eca-0x10052f42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    int __stdcall AfxRegisterClass(struct tagWNDCLASSA *)
   
   Library: Visual Studio 2015 Release */

int AfxRegisterClass(tagWNDCLASSA *param_1)

{
  short sVar1;
  BOOL BVar2;
  AFX_MODULE_STATE *pAVar3;
  tagWNDCLASSW local_3c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x10052ed6;
  BVar2 = GetClassInfoW(*(HINSTANCE *)(param_1 + 0x10),*(LPCWSTR *)(param_1 + 0x24),&local_3c);
  if (BVar2 == 0) {
    sVar1 = FID_conflict__IsolationAwareRegisterClassA_4(param_1);
    if (sVar1 == 0) {
      return 0;
    }
    pAVar3 = AfxGetModuleState();
    if (pAVar3[0x14] != (AFX_MODULE_STATE)0x0) {
      FUN_10050cad(1);
      local_8 = 0;
      pAVar3 = AfxGetModuleState();
      FUN_100479f0(*(undefined4 *)(param_1 + 0x24));
      ATL::CSimpleStringT<wchar_t,0>::AppendChar((CSimpleStringT<wchar_t,0> *)(pAVar3 + 0x34),L'\n')
      ;
      local_8 = 0xffffffff;
      FUN_10050d21(1);
    }
  }
  return 1;
}

