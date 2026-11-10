// rea decompile_all
// name: RemoveAll
// address: 0x100667d7
// body: available
// range: 0x100667d7-0x1006682a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall CMap<class CDocument *,class CDocument *,class ATL::CStringT<char,class
   StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >,char const *>::RemoveAll(void)
    public: void __thiscall CMap<class CDocument *,class CDocument *,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,wchar_t const
   *>::RemoveAll(void)
   
   Library: Visual Studio 2015 Release */

void RemoveAll(void)

{
  int in_ECX;
  int iVar1;
  uint uVar2;
  
  if (*(int *)(in_ECX + 4) != 0) {
    uVar2 = 0;
    if (*(int *)(in_ECX + 8) != 0) {
      do {
        for (iVar1 = *(int *)(*(int *)(in_ECX + 4) + uVar2 * 4); iVar1 != 0;
            iVar1 = *(int *)(iVar1 + 8)) {
          FUN_10034f00();
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(in_ECX + 8));
    }
    FID_conflict__free(*(void **)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  CPlex::FreeDataChain(*(CPlex **)(in_ECX + 0x14));
  *(undefined4 *)(in_ECX + 0x14) = 0;
  return;
}

