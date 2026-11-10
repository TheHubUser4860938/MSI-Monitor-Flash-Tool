// rea decompile_all
// name: CMap<ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*,ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*>::RemoveKey
// address: 0x10066a1f
// body: available
// range: 0x10066a1f-0x10066a8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMap<class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >,char const *,class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >,char const *>::RemoveKey(char const *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMap<ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*,ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*>
::RemoveKey(CMap<ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*,ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*>
            *this,char *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(this + 4) != 0) {
    uVar3 = FUN_10048d3e(param_1);
    piVar1 = (int *)(*(int *)(this + 4) + (uVar3 % *(uint *)(this + 8)) * 4);
    iVar2 = *piVar1;
    while (iVar2 != 0) {
      if ((*(uint *)(iVar2 + 0xc) == uVar3) && (iVar4 = FUN_10064e3e(iVar2,&param_1), iVar4 != 0)) {
        *piVar1 = *(int *)(iVar2 + 8);
        FreeAssoc(iVar2);
        return 1;
      }
      piVar1 = (int *)(iVar2 + 8);
      iVar2 = *piVar1;
    }
  }
  return 0;
}

