// rea decompile_all
// name: CMFCFontInfo::GetFullName
// address: 0x10099925
// body: available
// range: 0x10099925-0x100999b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   > __thiscall CMFCFontInfo::GetFullName(void)const 
   
   Library: Visual Studio 2015 Release */

int * __thiscall CMFCFontInfo::GetFullName(CMFCFontInfo *this)

{
  int iVar1;
  wchar_t *pwVar2;
  int *piVar3;
  int *in_stack_00000004;
  int local_1c;
  int local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_18[1] = 0;
  local_8 = 0;
  iVar1 = FUN_100187a0(*(int *)(this + 4) + -0x10);
  *in_stack_00000004 = iVar1 + 0x10;
  local_8 = 0;
  local_18[1] = 1;
  if (*(int *)(*(int *)(this + 8) + -0xc) != 0) {
    pwVar2 = (wchar_t *)
             ATL::operator+((wchar_t *)&local_1c,
                            (CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                             *)&DAT_101b3774);
    local_8 = 1;
    piVar3 = (int *)ATL::operator+((CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                                    *)local_18,pwVar2);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_1001d630(*piVar3,*(undefined4 *)(*piVar3 + -0xc));
    ATL::CStringData::Release((CStringData *)(local_18[0] + -0x10));
    ATL::CStringData::Release((CStringData *)(local_1c + -0x10));
  }
  return in_stack_00000004;
}

