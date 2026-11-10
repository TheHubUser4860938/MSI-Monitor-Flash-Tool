// rea decompile_all
// name: ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
// address: 0x1007c69e
// body: available
// range: 0x1007c69e-0x1007c829 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >::Replace(wchar_t const *,wchar_t const *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this,wchar_t *param_1
          ,wchar_t *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  int iVar6;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  int local_18;
  size_t local_10;
  size_t local_c;
  int local_8;
  
  if (param_1 == (wchar_t *)0x0) {
    local_10 = 0;
  }
  else {
    local_10 = _wcslen(param_1);
  }
  if (local_10 == 0) {
    local_8 = 0;
  }
  else {
    if (param_2 == (wchar_t *)0x0) {
      local_c = 0;
    }
    else {
      local_c = _wcslen(param_2);
    }
    pwVar7 = *(wchar_t **)this;
    local_8 = 0;
    pwVar1 = pwVar7 + *(int *)(pwVar7 + -6);
    if (pwVar7 < pwVar1) {
      do {
        while (iVar3 = FUN_101839f6(pwVar7,param_1), iVar3 != 0) {
          local_8 = local_8 + 1;
          pwVar7 = (wchar_t *)(iVar3 + local_10 * 2);
        }
        if (pwVar7 == (wchar_t *)0x0) {
          sVar4 = 0;
        }
        else {
          sVar4 = _wcslen(pwVar7);
        }
        pwVar7 = pwVar7 + sVar4 + 1;
      } while (pwVar7 < pwVar1);
      if (0 < local_8) {
        iVar3 = *(int *)(*(int *)this + -0xc);
        iVar9 = (local_c - local_10) * local_8 + iVar3;
        iVar6 = iVar9;
        if (iVar9 <= iVar3) {
          iVar6 = iVar3;
        }
        pwVar5 = (wchar_t *)FUN_10035050(iVar6);
        pwVar1 = pwVar5 + iVar3;
        local_18 = iVar3;
        for (pwVar7 = pwVar5; pwVar7 < pwVar1; pwVar7 = pwVar7 + sVar4 + 1) {
          iVar6 = FUN_101839f6(pwVar7,param_1);
          if (iVar6 != 0) {
            iVar2 = local_c * 2;
            do {
              pwVar7 = (wchar_t *)(iVar2 + iVar6);
              iVar8 = (iVar3 - (iVar6 - (int)pwVar5 >> 1)) - local_10;
              iVar3 = iVar8 * 2;
              FUN_10034600(pwVar7,iVar3,iVar6 + local_10 * 2,iVar3);
              FUN_100345e0(iVar6,iVar2,param_2,iVar2);
              *(undefined2 *)(iVar6 + (iVar8 + local_c) * 2) = 0;
              iVar3 = local_18 + (local_c - local_10);
              iVar6 = FUN_101839f6(pwVar7,param_1);
              local_18 = iVar3;
            } while (iVar6 != 0);
          }
          if (pwVar7 == (wchar_t *)0x0) {
            sVar4 = 0;
          }
          else {
            sVar4 = _wcslen(pwVar7);
          }
        }
        FUN_100351c0(iVar9);
      }
    }
  }
  return local_8;
}

