// rea decompile_all
// name: OnDrawText
// address: 0x10114d12
// body: available
// range: 0x10114d12-0x10114e58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual void __thiscall CMFCCaptionBar::OnDrawText(class CDC *,class CRect,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const &)
    protected: virtual void __thiscall CMFCCaptionBar::OnDrawText(class CDC *,class CRect,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &)
   
   Library: Visual Studio 2015 Release */

void OnDrawText(CDC *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               int *param_6)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  int local_38 [2];
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (*(int *)(in_ECX + 0x418) == 1) {
    iVar6 = *(int *)param_1;
    guard_check_icall(*param_6,*(undefined4 *)(*param_6 + -0xc),&param_2,0x8024);
    (**(code **)(iVar6 + 0x68))();
  }
  else {
    local_1c = param_2;
    local_24 = 0;
    local_28 = 0;
    if (0 < *(int *)(in_ECX + 0x418)) {
      local_2c = in_ECX + 0x410;
      local_30 = in_ECX;
      do {
        uVar5 = local_24;
        iVar6 = local_28;
        piVar3 = (int *)FUN_100efaed(local_28);
        if (*(int *)(*piVar3 + -0xc) != 0) {
          local_20 = 0;
          if (uVar5 != 0) {
            iVar6 = *(int *)param_1;
            pAVar4 = GetGlobalData();
            guard_check_icall(pAVar4 + 300);
            local_20 = (**(code **)(iVar6 + 0x28))();
          }
          iVar6 = local_28;
          uStack_14 = param_3;
          uStack_10 = param_4;
          uStack_c = param_5;
          local_18 = local_1c;
          FUN_100efaed(local_28);
          CDC::GetTextExtent(param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                      *)local_38);
          piVar3 = (int *)FUN_100efaed(iVar6);
          iVar1 = *(int *)param_1;
          guard_check_icall(*piVar3,*(undefined4 *)(*piVar3 + -0xc),&local_18,0x8024);
          (**(code **)(iVar1 + 0x68))();
          if (local_20 != 0) {
            pcVar2 = *(code **)(*(int *)param_1 + 0x28);
            guard_check_icall(local_20);
            (*pcVar2)();
          }
          local_1c = local_1c + local_38[0];
          uVar5 = local_24;
        }
        local_24 = uVar5 ^ 1;
        local_28 = iVar6 + 1;
      } while (local_28 < *(int *)(local_30 + 0x418));
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

