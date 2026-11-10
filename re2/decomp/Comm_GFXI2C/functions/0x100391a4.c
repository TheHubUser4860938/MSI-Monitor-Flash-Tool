// rea decompile_all
// name: operator>><>
// address: 0x100391a4
// body: available
// range: 0x100391a4-0x100392c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100391fe to 0x1003aa69 FUN_1003aa69 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: class CArchive & __thiscall CArchive::operator>><char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >(class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > > &)
    public: class CArchive & __thiscall CArchive::operator>><wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >(class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > &)
   
   Library: Visual Studio 2008 Release */

void __thiscall operator>><>(void *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  CSimpleStringT<wchar_t,0> *pCVar4;
  int local_128;
  CArchive *local_124;
  int local_120;
  char *local_11c;
  char local_118 [128];
  wchar_t *local_98;
  wchar_t local_94 [70];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x118;
  local_8 = 0x100391b3;
  local_124 = this;
  puVar1 = FUN_1003a5da(this,&local_128);
  if (local_128 == 1) {
    CTempBuffer<>(&local_11c,(uint)puVar1);
    local_8 = 0;
    puVar2 = (undefined4 *)CArchive::Read(local_124,local_11c,(uint)puVar1);
    if (puVar2 == puVar1) {
      puVar1 = (undefined4 *)
               ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
               CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                         ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                          &local_120,local_11c,(int)puVar1);
      local_8 = CONCAT31(local_8._1_3_,1);
      FID_conflict_operator_(param_1,puVar1);
      FUN_100024a0((undefined4 *)(local_120 + -0x10));
      if (local_11c != local_118) {
        FreeHeap(&local_11c);
      }
LAB_100392ba:
      FUN_100484ca();
      return;
    }
  }
  else {
    CTempBuffer<>(&local_98,(uint)puVar1);
    local_8 = 2;
    uVar3 = CArchive::Read(local_124,local_98,(int)puVar1 * 2);
    if (uVar3 == (int)puVar1 * 2) {
      pCVar4 = CStringT<>(&local_120,local_98,(int)puVar1);
      local_8 = CONCAT31(local_8._1_3_,3);
      FID_conflict_operator_(param_1,(undefined4 *)pCVar4);
      FUN_100024a0((undefined4 *)(local_120 + -0x10));
      if (local_98 != local_94) {
        FreeHeap(&local_98);
      }
      goto LAB_100392ba;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1003aa69(3,(short *)0x0);
}

