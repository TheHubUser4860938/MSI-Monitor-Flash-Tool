// rea decompile_all
// name: CSettingsStoreSP::Create
// address: 0x100f5e44
// body: available
// range: 0x100f5e44-0x100f5ec6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CSettingsStore & __thiscall CSettingsStoreSP::Create(int,int)
   
   Library: Visual Studio 2015 Release */

CSettingsStore * __thiscall CSettingsStoreSP::Create(CSettingsStoreSP *this,int param_1,int param_2)

{
  CSettingsStore *pCVar1;
  CObject *pCVar2;
  
  pCVar1 = *(CSettingsStore **)this;
  if (pCVar1 == (CSettingsStore *)0x0) {
    if (DAT_10247724 == 0) {
      pCVar1 = (CSettingsStore *)FUN_100491ae(0x20);
      pCVar2 = (CObject *)0x0;
      if (pCVar1 != (CSettingsStore *)0x0) {
        pCVar2 = (CObject *)CSettingsStore::CSettingsStore(pCVar1);
      }
    }
    else {
      pCVar2 = (CObject *)FUN_10051ddc();
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CSettingsStore_101eb498,pCVar2);
    }
    *(CObject **)this = pCVar2;
    *(int *)(pCVar2 + 0x14) = param_2;
    *(int *)(*(int *)this + 0x18) = param_1;
    *(uint *)(*(int *)this + 4) = (param_1 != 0) + 0x80000001;
    *(undefined4 *)(*(int *)this + 0x1c) = *(undefined4 *)(this + 4);
    pCVar1 = *(CSettingsStore **)this;
  }
  return pCVar1;
}

