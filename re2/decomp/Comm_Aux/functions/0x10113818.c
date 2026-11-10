// rea decompile_all
// name: GetTextSize
// address: 0x10113818
// body: available
// range: 0x10113818-0x1011391a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class CSize __thiscall CMFCCaptionBar::GetTextSize(class CDC *,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const &)
    protected: virtual class CSize __thiscall CMFCCaptionBar::GetTextSize(class CDC *,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &)
   
   Library: Visual Studio 2015 Release */

CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
GetTextSize(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,CDC *param_2
           )

{
  code *pcVar1;
  int *piVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  if (*(int *)(in_ECX + 0x418) == 1) {
    CDC::GetTextExtent(param_2,param_1);
  }
  else {
    local_8 = 0;
    iVar7 = 0;
    local_10 = 0;
    local_c = 0;
    iVar4 = 0;
    iVar5 = 0;
    if (0 < *(int *)(in_ECX + 0x418)) {
      do {
        uVar6 = local_c;
        piVar2 = (int *)FUN_10151a1d(iVar7);
        if (*(int *)(*piVar2 + -0xc) != 0) {
          local_14 = 0;
          if (uVar6 != 0) {
            iVar4 = *(int *)param_2;
            pAVar3 = GetGlobalData();
            guard_check_icall(pAVar3 + 300);
            local_14 = (**(code **)(iVar4 + 0x28))();
            uVar6 = local_c;
          }
          FUN_10151a1d(iVar7);
          CDC::GetTextExtent(param_2,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                      *)&local_1c);
          local_8 = local_8 + local_1c;
          if (local_10 <= local_18) {
            local_10 = local_18;
          }
          if (local_14 != 0) {
            pcVar1 = *(code **)(*(int *)param_2 + 0x28);
            guard_check_icall(local_14);
            (*pcVar1)();
            uVar6 = local_c;
          }
        }
        local_c = uVar6 ^ 1;
        iVar7 = iVar7 + 1;
        iVar4 = local_10;
        iVar5 = local_8;
      } while (iVar7 < *(int *)(in_ECX + 0x418));
    }
    *(int *)param_1 = iVar5;
    *(int *)(param_1 + 4) = iVar4;
  }
  return param_1;
}

