// rea decompile_all
// name: ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
// address: 0x1006faa8
// body: available
// range: 0x1006faa8-0x1006fb9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >(wchar_t,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this,wchar_t param_1,
          int param_2)

{
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar1;
  undefined4 uVar2;
  errno_t eVar3;
  wchar_t *pwVar4;
  int iVar5;
  uint _N1;
  wchar_t local_2c [2];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_28;
  wchar_t *local_24;
  wchar_t local_20 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x1006fab4;
  local_28 = this;
  uVar2 = FUN_10048e90();
  FUN_10034c30(uVar2);
  local_8 = 0;
  if (0 < param_2) {
    local_2c[0] = param_1;
    local_2c[1] = 0;
    local_28 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x1;
    if (param_1 != L'\0') {
      local_28 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 _wcslen(local_2c);
    }
    local_24 = (wchar_t *)0x0;
    _N1 = (int)local_28 + 1;
    local_8 = CONCAT31(local_8._1_3_,1);
    CTempBuffer<wchar_t,10,ATL::CCRTAllocator>::Allocate
              ((CTempBuffer<wchar_t,10,ATL::CCRTAllocator> *)&local_24,_N1);
    eVar3 = _wmemcpy_s(local_24,_N1,local_2c,1);
    FUN_10034d00(eVar3);
    pCVar1 = local_28;
    local_28 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (param_2 * (int)local_28);
    pwVar4 = (wchar_t *)FUN_10035050(local_28);
    if (pCVar1 == (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x1) {
      ChTraitsCRT<wchar_t>::FloodCharacters(*local_24,param_2,pwVar4);
    }
    else if (0 < param_2) {
      do {
        iVar5 = 0;
        if (0 < (int)pCVar1) {
          do {
            *pwVar4 = local_24[iVar5];
            pwVar4 = pwVar4 + 1;
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)pCVar1);
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    FUN_100351c0(local_28);
    if (local_24 != local_20) {
      CTempBuffer<wchar_t,10,ATL::CCRTAllocator>::FreeHeap
                ((CTempBuffer<wchar_t,10,ATL::CCRTAllocator> *)&local_24);
    }
  }
  FUN_1017f5f4();
  return;
}

