// rea decompile_all
// name: DrawNcText
// address: 0x4b4153
// body: available
// range: 0x4b4153-0x4b447e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CMFCVisualManagerOffice2007::DrawNcText(class CDC *,class CRect
   &,class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const &,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const
   &,int,int,int,int,int,int,unsigned long)
    protected: void __thiscall CMFCVisualManagerOffice2007::DrawNcText(class CDC *,class CRect
   &,class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const
   &,class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const
   &,int,int,int,int,int,int,unsigned long)
   
   Library: Visual Studio 2015 Release */

void DrawNcText(CDC *param_1,LPCWSTR param_2,HDC param_3,HDC param_4,int param_5,int param_6,
               int param_7,int param_8,int param_9)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  UINT unaff_ESI;
  LPRECT unaff_EDI;
  int local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_38 [2];
  int local_30 [2];
  COLORREF local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  int local_18;
  HDC local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  if ((*(int *)(param_3->unused + -0xc) == 0) && (*(int *)(param_4->unused + -0xc) == 0)) {
    return;
  }
  if (*(int *)(param_2 + 4) <= *(int *)param_2) {
    return;
  }
  local_24 = CDC::SetBkMode(param_1,1);
  local_28 = GetTextColor(*(HDC *)(param_1 + 8));
  local_c = (-(uint)(param_7 != 0) & 0x20000) + 0x8824;
  if (*(int *)(param_4->unused + -0xc) == 0) {
    if (param_6 == 0) {
      local_1c = local_8[0x23db];
    }
    else {
      local_1c = local_8[0x23da];
    }
    local_18 = *(int *)(param_2 + 4) - *(int *)param_2;
    piVar3 = (int *)CDC::GetTextExtent(param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                                *)local_38);
    iVar6 = *piVar3;
    if ((param_8 != 0) && (iVar6 < local_18)) {
      *(int *)param_2 = *(int *)param_2 + (local_18 - iVar6) / 2;
    }
    iVar4 = *(int *)param_2 + iVar6;
    if (*(int *)(param_2 + 4) <= iVar4) {
      iVar4 = *(int *)(param_2 + 4);
    }
    *(int *)(param_2 + 4) = iVar4;
    if (iVar4 <= *(int *)param_2) goto LAB_004b4459;
    if (param_9 == 0) {
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall();
      (*pcVar1)();
      uStack_54 = 0x4b4252;
      FID_conflict_DrawTextW(param_3,param_2,local_c,unaff_EDI,unaff_ESI);
      goto LAB_004b4459;
    }
  }
  else {
    if (param_5 == 0) {
      local_14 = param_3;
      param_3 = param_4;
    }
    else {
      local_14 = param_4;
    }
    if (param_6 == 0) {
      local_10 = local_8[0x23d9];
      iVar6 = local_8[0x23db];
    }
    else {
      local_10 = local_8[0x23d8];
      iVar6 = local_8[0x23da];
    }
    local_1c = iVar6;
    if (param_5 == 0) {
      local_1c = local_10;
      local_10 = iVar6;
    }
    local_20 = (undefined1 *)(*(int *)(param_2 + 4) - *(int *)param_2);
    CDC::GetTextExtent(param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )local_38);
    CDC::GetTextExtent(param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )local_30);
    iVar6 = local_30[0] + local_38[0];
    local_18 = *(int *)param_2;
    if ((param_8 != 0) && (iVar6 < (int)local_20)) {
      *(int *)param_2 = ((int)local_20 - iVar6) / 2 + local_18;
    }
    iVar2 = *(int *)param_2;
    iVar4 = iVar2 + iVar6;
    if (*(int *)(param_2 + 4) <= iVar4) {
      iVar4 = *(int *)(param_2 + 4);
    }
    *(int *)(param_2 + 4) = iVar4;
    if (param_7 != 0) {
      iVar4 = iVar4 - iVar2;
      iVar5 = local_30[0];
      if (iVar4 < iVar6) {
        if (iVar4 <= local_38[0]) goto LAB_004b4330;
        iVar5 = (iVar4 - iVar6) + local_30[0];
        iVar6 = local_30[0];
        if (iVar5 < 0) {
          iVar5 = 0;
        }
      }
      *(int *)param_2 = iVar5 + iVar2;
    }
LAB_004b4330:
    if (param_9 == 0) {
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall();
      (*pcVar1)();
      uStack_54 = 0x4b43a4;
      FID_conflict_DrawTextW(local_14,param_2,local_c,unaff_EDI,unaff_ESI);
      iVar6 = extraout_ECX_00;
    }
    else {
      local_20 = (undefined1 *)&local_64;
      uStack_60 = *(undefined4 *)param_2;
      uStack_5c = *(undefined4 *)(param_2 + 2);
      uStack_58 = *(undefined4 *)(param_2 + 4);
      uStack_54 = *(undefined4 *)(param_2 + 6);
      local_64 = iVar6;
      local_64 = FUN_00415ee0(local_14->unused + -0x10);
      local_64 = local_64 + 0x10;
      pcVar1 = *(code **)(*local_8 + 0x2cc);
      guard_check_icall(param_1);
      (*pcVar1)();
      iVar6 = extraout_ECX;
    }
    if (param_7 == 0) {
      *(int *)param_2 = *(int *)param_2 + local_38[0];
    }
    else {
      iVar6 = local_30[0] + local_38[0];
      if (*(int *)(param_2 + 4) - local_18 < iVar6) {
        *(int *)param_2 = local_18;
        *(int *)(param_2 + 4) = *(int *)(param_2 + 4) - local_38[0];
      }
      else {
        *(int *)(param_2 + 4) = *(int *)param_2;
        *(int *)param_2 = *(int *)param_2 - local_30[0];
      }
    }
    if (*(int *)(param_2 + 4) <= *(int *)param_2) goto LAB_004b4459;
    if (param_9 == 0) {
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall();
      (*pcVar1)();
      uStack_54 = 0x4b4456;
      FID_conflict_DrawTextW(param_3,param_2,local_c,unaff_EDI,unaff_ESI);
      goto LAB_004b4459;
    }
  }
  local_20 = (undefined1 *)&local_64;
  uStack_60 = *(undefined4 *)param_2;
  uStack_5c = *(undefined4 *)(param_2 + 2);
  uStack_58 = *(undefined4 *)(param_2 + 4);
  uStack_54 = *(undefined4 *)(param_2 + 6);
  local_64 = iVar6;
  local_64 = FUN_00415ee0(param_3->unused + -0x10);
  local_64 = local_64 + 0x10;
  pcVar1 = *(code **)(*local_8 + 0x2cc);
  guard_check_icall(param_1);
  (*pcVar1)();
LAB_004b4459:
  CDC::SetBkMode(param_1,local_24);
  pcVar1 = *(code **)(*(int *)param_1 + 0x30);
  guard_check_icall();
  (*pcVar1)();
  return;
}

