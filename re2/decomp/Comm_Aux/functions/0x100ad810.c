// rea decompile_all
// name: CTagManager::ParseFont
// address: 0x100ad810
// body: available
// range: 0x100ad810-0x100adb1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: static int __stdcall CTagManager::ParseFont(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,struct tagLOGFONTW &)
   
   Library: Visual Studio 2015 Release */

int CTagManager::ParseFont
              (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,
              tagLOGFONTW *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_dc [4];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_d8 [4];
  CTagManager local_d4 [8];
  int local_cc;
  int local_c8;
  wchar_t *local_c4;
  LONG local_c0;
  wchar_t *local_bc;
  undefined4 local_b8;
  wchar_t *local_b4;
  undefined4 local_b0;
  wchar_t *local_ac;
  undefined4 local_a8;
  wchar_t *local_a4;
  undefined4 local_a0;
  wchar_t *local_9c;
  undefined4 local_98;
  wchar_t *local_94;
  undefined4 local_90;
  wchar_t *local_8c;
  undefined4 local_88;
  wchar_t *local_84;
  undefined4 local_80;
  wchar_t *local_7c;
  undefined4 local_78;
  wchar_t *local_74;
  undefined4 local_70;
  wchar_t *local_6c;
  undefined4 local_68;
  wchar_t *local_64;
  undefined4 local_60;
  wchar_t *local_5c;
  undefined4 local_58;
  wchar_t *local_54;
  undefined4 local_50;
  wchar_t *local_4c;
  BYTE local_48 [4];
  wchar_t *local_44;
  undefined1 local_40;
  wchar_t *local_3c;
  undefined1 local_38;
  wchar_t *local_34;
  undefined1 local_30;
  wchar_t *local_2c;
  undefined1 local_28;
  wchar_t *local_24;
  undefined1 local_20;
  wchar_t *local_1c;
  undefined1 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xcc;
  local_8 = 0x100ad81f;
  CTagManager(local_d4,*(wchar_t **)param_1);
  uVar3 = 0;
  local_8 = 0;
  uVar1 = FUN_10048e90();
  FUN_10034c30(uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar2 = ExcludeTag(local_d4,(wchar_t *)PTR_u_FACENAME_10205b88,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_c8
                     ,0);
  if ((iVar2 != 0) && (iVar2 = *(int *)(local_c8 + -0xc), iVar2 != 0)) {
    if (0x1f < iVar2) {
      iVar2 = 0x20;
    }
    FUN_10181570(param_2->lfFaceName,local_c8,iVar2 * 2);
  }
  local_cc = 0;
  FUN_100352e0(PTR_u_HEIGHT_10205b4c);
  local_8._0_1_ = 2;
  iVar2 = ReadInt(local_d4,local_d8,&local_cc);
  local_8._0_1_ = 1;
  FUN_10034f00();
  if (iVar2 != 0) {
    param_2->lfHeight = local_cc;
  }
  if (0 < param_2->lfHeight) {
    FUN_100352e0(PTR_u_WIDTH_10205b48);
    local_8._0_1_ = 3;
    iVar2 = ReadInt(local_d4,local_dc,&local_cc);
    local_8._0_1_ = 1;
    FUN_10034f00();
    if (iVar2 != 0) {
      param_2->lfWidth = local_cc;
    }
  }
  iVar2 = ExcludeTag(local_d4,(wchar_t *)PTR_u_WEIGHT_10205b94,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_c8
                     ,0);
  if (iVar2 != 0) {
    local_c4 = L"DONTCARE";
    local_c0 = 0;
    local_a0 = 400;
    local_68 = 400;
    uVar4 = 0;
    local_bc = L"THIN";
    local_b8 = 100;
    local_b4 = L"EXTRALIGHT";
    local_b0 = 200;
    local_ac = L"LIGHT";
    local_a8 = 300;
    local_a4 = L"NORMAL";
    local_9c = L"MEDIUM";
    local_98 = 500;
    local_94 = L"SEMIBOLD";
    local_90 = 600;
    local_8c = L"BOLD";
    local_88 = 700;
    local_84 = L"EXTRABOLD";
    local_80 = 800;
    local_7c = L"HEAVY";
    local_78 = 900;
    local_74 = L"ULTRALIGHT";
    local_70 = 200;
    local_6c = L"REGULAR";
    local_64 = L"DEMIBOLD";
    local_60 = 600;
    local_5c = L"ULTRABOLD";
    local_58 = 800;
    local_54 = L"BLACK";
    local_50 = 900;
    do {
      iVar2 = FUN_10034110((&local_c4)[uVar4 * 2]);
      if (iVar2 == 0) {
        param_2->lfWeight = (&local_c0)[uVar4 * 2];
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0xf);
  }
  iVar2 = ExcludeTag(local_d4,(wchar_t *)PTR_u_QUALITY_10205b90,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_c8
                     ,0);
  if (iVar2 != 0) {
    local_4c = L"DEFAULT";
    local_48[0] = '\0';
    local_44 = L"DRAFT";
    local_40 = 1;
    local_3c = L"PROOF";
    local_38 = 2;
    local_34 = L"NONANTIALIASED";
    local_30 = 3;
    local_2c = L"ANTIALIASED";
    local_28 = 4;
    local_24 = L"CLEARTYPE";
    local_20 = 5;
    local_1c = L"CLEARTYPE_NATURAL";
    local_18 = 6;
    do {
      iVar2 = FUN_10034110(*(undefined4 *)(local_48 + uVar3 * 8 + -4));
      if (iVar2 == 0) {
        param_2->lfQuality = local_48[uVar3 * 8];
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 7);
  }
  FUN_10034f00();
  ~CTagManager(local_d4);
  iVar2 = FUN_1017f5f4();
  return iVar2;
}

