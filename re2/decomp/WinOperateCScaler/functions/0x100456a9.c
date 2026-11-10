// rea decompile_all
// name: CMFCMaskedEdit::GetGroupBounds
// address: 0x100456a9
// body: available
// range: 0x100456a9-0x100457dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: void __thiscall CMFCMaskedEdit::GetGroupBounds(int &,int &,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCMaskedEdit::GetGroupBounds
          (CMFCMaskedEdit *this,int *param_1,int *param_2,int param_3,int param_4)

{
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  short sVar1;
  int iVar2;
  int local_8;
  
  this_00 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 0x88);
  if (*(int *)(*(int *)this_00 + -0xc) == 0) {
    *param_1 = 0;
    *param_2 = *(int *)(*(int *)(this + 0x80) + -0xc);
    return;
  }
  if (param_4 == 0) {
    iVar2 = *(int *)(this + 0x80);
    local_8 = param_3;
    while ((local_8 < *(int *)(iVar2 + -0xc) && (sVar1 = FUN_1001ea46(local_8), sVar1 == 0x5f))) {
      local_8 = local_8 + 1;
      iVar2 = *(int *)(this + 0x80);
    }
    if (local_8 != 0) {
      sVar1 = FUN_1001ea46(local_8 + -1);
      iVar2 = local_8 + -1;
      if (sVar1 != 0x5f) {
        do {
          local_8 = iVar2;
          if (local_8 < 1) break;
          sVar1 = FUN_1001ea46(local_8 + -1);
          iVar2 = local_8 + -1;
        } while (sVar1 != 0x5f);
        if (local_8 == 0) goto LAB_100456f4;
      }
      *param_2 = local_8;
      do {
        param_3 = local_8 + -1;
        if (param_3 < 1) break;
        sVar1 = FUN_1001ea46(local_8 + -2);
        local_8 = param_3;
      } while (sVar1 == 0x5f);
      goto LAB_100457bd;
    }
  }
  else {
    if (0 < param_3) {
      iVar2 = param_3 + -1;
      do {
        sVar1 = FUN_1001ea46(iVar2);
        if (sVar1 != 0x5f) break;
        param_3 = param_3 + -1;
        iVar2 = param_3;
      } while (0 < param_3);
    }
    if ((param_3 != *(int *)(*(int *)this_00 + -0xc)) &&
       ((sVar1 = FUN_1001ea46(param_3), sVar1 == 0x5f ||
        (param_3 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                             (this_00,L'_',param_3), param_3 != -1)))) {
      *param_1 = param_3;
      while ((param_1 = param_2, param_3 < *(int *)(*(int *)this_00 + -0xc) &&
             (sVar1 = FUN_1001ea46(param_3), sVar1 == 0x5f))) {
        param_3 = param_3 + 1;
      }
LAB_100457bd:
      *param_1 = param_3;
      return;
    }
  }
LAB_100456f4:
  *param_1 = -1;
  *param_2 = 0;
  return;
}

