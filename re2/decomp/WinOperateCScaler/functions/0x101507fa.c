// rea decompile_all
// name: CMFCTasksPane::Serialize
// address: 0x101507fa
// body: available
// range: 0x101507fa-0x10150a4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCTasksPane::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTasksPane::Serialize(CMFCTasksPane *this,CArchive *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  CStringArray *this_00;
  CStringArray local_44 [8];
  undefined4 local_3c;
  CStringArray local_30 [8];
  int local_28;
  int local_1c;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x10150806;
  CDockablePane::Serialize((CDockablePane *)this,param_1);
  if (((byte)param_1[0x18] & 1) == 0) {
    FUN_10025aff(*(undefined4 *)(this + 0x3ac));
    FUN_10025aff(*(undefined4 *)(this + 0x3b0));
    FUN_10025aff(*(undefined4 *)(this + 0x3b4));
    FUN_10025aff(*(undefined4 *)(this + 0x3b8));
    FUN_10025aff(*(undefined4 *)(this + 0x3bc));
    FUN_10025aff(*(undefined4 *)(this + 0x3c0));
    FUN_10025aff(*(undefined4 *)(this + 0x3c4));
    FUN_10025aff(*(undefined4 *)(this + 0x3c8));
    FUN_10025aff(*(undefined4 *)(this + 0x3cc));
    iVar2 = GetActivePage(this);
    FUN_10025aff(iVar2);
    CStringArray::CStringArray(local_44);
    local_1c = *(int *)(this + 0x468);
    local_8 = 1;
    while (local_1c != 0) {
      piVar3 = (int *)FUN_100972dc(&local_1c);
      FUN_1010bad7(local_3c,*piVar3 + 4);
    }
    CStringArray::Serialize(local_44,param_1);
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x49c));
    this_00 = local_44;
  }
  else {
    FUN_10026405(this + 0x3ac);
    FUN_10026405(this + 0x3b0);
    FUN_10026405(this + 0x3b4);
    FUN_10026405(this + 0x3b8);
    FUN_10026405(this + 0x3bc);
    FUN_10026405(this + 0x3c0);
    FUN_10026405(this + 0x3c4);
    FUN_10026405(this + 0x3c8);
    FUN_10026405(this + 0x3cc);
    local_14[0] = 0;
    FUN_10026405(local_14);
    local_1c = local_14[0];
    if ((local_14[0] < 0) || (*(int *)(this + 0x470) <= local_14[0])) {
      local_1c = 0;
    }
    CStringArray::CStringArray(local_30);
    local_8 = 0;
    CStringArray::Serialize(local_30,param_1);
    if (local_28 == *(int *)(this + 0x470)) {
      local_18 = *(int *)(this + 0x468);
      for (local_14[0] = 0; (local_18 != 0 && (local_14[0] < local_28));
          local_14[0] = local_14[0] + 1) {
        FUN_100972dc(&local_18);
        uVar1 = FUN_1009f8c7(local_14[0]);
        FUN_10018680(uVar1);
      }
    }
    SetActivePage(this,local_1c);
    *(undefined4 *)(this + 0x398) = 0;
    AdjustScroll(this);
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x49c));
    FUN_10150fef();
    this_00 = local_30;
  }
  CStringArray::~CStringArray(this_00);
  return;
}

