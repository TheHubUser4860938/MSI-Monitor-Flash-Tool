// rea decompile_all
// name: CMenuTearOffManager::Parse
// address: 0x1010fab6
// body: available
// range: 0x1010fab6-0x1010fb47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: unsigned int __thiscall CMenuTearOffManager::Parse(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &)
   
   Library: Visual Studio 2015 Release */

uint __thiscall
CMenuTearOffManager::Parse
          (CMenuTearOffManager *this,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1)

{
  short sVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1010fac2;
  if ((*(int *)(*(int *)param_1 + -0xc) != 0) && (sVar1 = FUN_1001ea46(0), sVar1 == 1)) {
    puVar2 = (undefined4 *)
             ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                       (param_1,(int)local_14);
    uVar3 = __wtol((wchar_t *)*puVar2);
    ATL::CStringData::Release((CStringData *)(local_14[0] + -0x10));
    iVar4 = FUN_1016e179(*(undefined4 *)param_1,1);
    if ((iVar4 != 0) && (iVar4 - *(int *)param_1 >> 1 != -1)) {
      uVar5 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                        (param_1,(int)&local_18);
      local_8 = 0;
      FUN_10018680(uVar5);
      ATL::CStringData::Release((CStringData *)(local_18 + -0x10));
      return uVar3;
    }
  }
  return 0;
}

