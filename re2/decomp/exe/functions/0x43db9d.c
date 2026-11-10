// rea decompile_all
// name: Serialize
// address: 0x43db9d
// body: available
// range: 0x43db9d-0x43dcca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMap<class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >,char const *,class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >,char const *>::Serialize(class CArchive &)
    public: virtual void __thiscall CMap<class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *,class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *>::Serialize(class
   CArchive &)
   
   Library: Visual Studio 2015 Release */

void Serialize(CArchive *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  int in_ECX;
  uint uVar4;
  int local_18;
  undefined4 local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x43dba9;
  local_18 = in_ECX;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    for (uVar3 = CArchive::ReadCount(param_1); uVar3 != 0; uVar3 = uVar3 - 1) {
      _eh_vector_constructor_iterator_(&local_18,4,1,FUN_0040eb60,FUN_0040efc0);
      local_8 = 0;
      _eh_vector_constructor_iterator_(local_14,4,1,FUN_0040eb60,FUN_0040efc0);
      local_8._0_1_ = 1;
      thunk_FUN_0042951d(param_1,&local_18,1);
      thunk_FUN_0042951d(param_1,local_14,1);
      uVar2 = local_14[0];
      FUN_0043b9c7(local_18);
      FUN_00415ad0(uVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      _eh_vector_destructor_iterator_(local_14,4,1,FUN_0040efc0);
      local_8 = 0xffffffff;
      _eh_vector_destructor_iterator_(&local_18,4,1,FUN_0040efc0);
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)(in_ECX + 0xc));
    uVar4 = 0;
    if (((*(int *)(in_ECX + 0xc) != 0) && (*(int *)(in_ECX + 4) != 0)) &&
       (*(int *)(in_ECX + 8) != 0)) {
      do {
        for (iVar1 = *(int *)(*(int *)(in_ECX + 4) + uVar4 * 4); iVar1 != 0;
            iVar1 = *(int *)(iVar1 + 8)) {
          thunk_FUN_0042951d(param_1,iVar1,1);
          thunk_FUN_0042951d(param_1,iVar1 + 4,1);
          in_ECX = local_18;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(in_ECX + 8));
    }
  }
  return;
}

