// rea decompile_all
// name: CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
// address: 0x1004955b
// body: available
// range: 0x1004955b-0x100496b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100495c8 to 0x10050dca FUN_10050dca (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: class CArchive & __thiscall CArchive::operator>><wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >(class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > &)
   
   Library: Visual Studio 2015 Release */

CArchive * __thiscall
CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
          (CArchive *this,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  CArchive *pCVar5;
  int local_128;
  CArchive *local_124;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_120 [4];
  undefined1 *local_11c;
  undefined1 local_118 [128];
  char *local_98;
  char local_94 [140];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x11c;
  local_8 = 0x1004956a;
  local_124 = this;
  uVar1 = FUN_10051346(this,&local_128);
  if (local_128 == 1) {
    local_98 = (char *)0x0;
    ATL::CTempBuffer<char,128,ATL::CCRTAllocator>::Allocate
              ((CTempBuffer<char,128,ATL::CCRTAllocator> *)&local_98,uVar1);
    local_8 = 0;
    uVar2 = FUN_10051770(local_98,uVar1);
    if (uVar2 == uVar1) {
      uVar3 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
              CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                        (local_120,local_98,uVar1);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_100475f0(uVar3);
      FUN_100476d0();
      if (local_98 != local_94) {
        ATL::CTempBuffer<wchar_t,10,ATL::CCRTAllocator>::FreeHeap
                  ((CTempBuffer<wchar_t,10,ATL::CCRTAllocator> *)&local_98);
      }
LAB_100496a5:
      pCVar5 = (CArchive *)FUN_1018015d();
      return pCVar5;
    }
  }
  else {
    local_11c = (undefined1 *)0x0;
    ATL::CTempBuffer<wchar_t,128,ATL::CCRTAllocator>::Allocate
              ((CTempBuffer<wchar_t,128,ATL::CCRTAllocator> *)&local_11c,uVar1);
    local_8 = 2;
    iVar4 = FUN_10051770(local_11c,uVar1 * 2);
    if (iVar4 == uVar1 * 2) {
      FUN_10046e30(local_11c,uVar1,&PTR_vftable_1023d004);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_100475f0(local_120);
      FUN_100476d0();
      if (local_11c != local_118) {
        ATL::CTempBuffer<wchar_t,10,ATL::CCRTAllocator>::FreeHeap
                  ((CTempBuffer<wchar_t,10,ATL::CCRTAllocator> *)&local_11c);
      }
      goto LAB_100496a5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10050dca(3,0);
}

