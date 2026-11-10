// rea decompile_all
// name: FID_conflict:operator=
// address: 0x10002200
// body: available
// range: 0x10002200-0x10002270 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: class ATL::CSimpleStringT<char,0> & __thiscall
   ATL::CSimpleStringT<char,0>::operator=(class ATL::CSimpleStringT<char,0> const &)
    public: class ATL::CSimpleStringT<wchar_t,0> & __thiscall
   ATL::CSimpleStringT<wchar_t,0>::operator=(class ATL::CSimpleStringT<wchar_t,0> const &)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int * __thiscall FID_conflict_operator_(void *this,undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  CStringData *pCVar4;
  CStringData *pCVar5;
  
  pvVar2 = (void *)*param_1;
  iVar3 = *(int *)this;
  pCVar4 = (CStringData *)((int)pvVar2 + -0x10);
  pCVar5 = (CStringData *)(iVar3 + -0x10);
  if (pCVar4 == pCVar5) {
    return this;
  }
  piVar1 = (int *)(iVar3 + -4);
  if ((-1 < *(int *)(iVar3 + -4)) && (*(int *)pCVar4 == *(int *)pCVar5)) {
    pCVar4 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar4);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1 || iVar3 + -1 < 0) {
      (**(code **)(**(int **)pCVar5 + 4))(pCVar5);
    }
    *(CStringData **)this = pCVar4 + 0x10;
    return this;
  }
  FUN_10002660(this,pvVar2,*(int *)((int)pvVar2 + -0xc));
  return this;
}

