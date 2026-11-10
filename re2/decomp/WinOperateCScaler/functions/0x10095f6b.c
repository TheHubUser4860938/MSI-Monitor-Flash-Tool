// rea decompile_all
// name: Serialize
// address: 0x10095f6b
// body: available
// range: 0x10095f6b-0x10096060 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMap<unsigned long,unsigned long,class ATL::CStringT<char,class
   StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >,char const *>::Serialize(class CArchive &)
    public: virtual void __thiscall CMap<unsigned long,unsigned long,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,wchar_t const
   *>::Serialize(class CArchive &)
    public: virtual void __thiscall CMap<class CDocument *,class CDocument *,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >,char const
   *>::Serialize(class CArchive &)
    public: virtual void __thiscall CMap<class CDocument *,class CDocument *,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,wchar_t const
   *>::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void Serialize(CArchive *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  CSimpleStringT<wchar_t,0> *this;
  wchar_t *in_ECX;
  uint uVar4;
  undefined4 local_18;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x10095f77;
  local_14[0] = in_ECX;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    for (uVar3 = CArchive::ReadCount(param_1); uVar3 != 0; uVar3 = uVar3 - 1) {
      _eh_vector_constructor_iterator_(local_14,4,1,FUN_1001c3f0,FUN_10018660);
      local_8 = 0;
      FUN_1006724d(param_1,&local_18,1);
      thunk_FUN_1001e120(param_1,local_14,1);
      pwVar2 = local_14[0];
      this = (CSimpleStringT<wchar_t,0> *)FUN_10093c14(local_18);
      ATL::CSimpleStringT<wchar_t,0>::Append(this,pwVar2);
      local_8 = 0xffffffff;
      _eh_vector_destructor_iterator_(local_14,4,1,FUN_10018660);
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)(in_ECX + 6));
    uVar4 = 0;
    if (((*(int *)(in_ECX + 6) != 0) && (*(int *)(in_ECX + 2) != 0)) && (*(int *)(in_ECX + 4) != 0))
    {
      do {
        for (iVar1 = *(int *)(*(int *)(in_ECX + 2) + uVar4 * 4); iVar1 != 0;
            iVar1 = *(int *)(iVar1 + 8)) {
          FUN_1006724d(param_1,iVar1,1);
          thunk_FUN_1001e120(param_1,iVar1 + 4,1);
          in_ECX = local_14[0];
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(in_ECX + 4));
    }
  }
  return;
}

