// rea decompile_all
// name: CMFCFontInfo::GetFullName
// address: 0x558dc4
// body: available
// range: 0x558dc4-0x558e55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  undefined4 uVar2;
  int *piVar3;
  int *in_stack_00000004;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_14 = 0;
  local_8 = 0;
  iVar1 = FUN_00415ee0(*(int *)(this + 4) + -0x10);
  *in_stack_00000004 = iVar1 + 0x10;
  local_8 = 0;
  local_14 = 1;
  if (*(int *)(*(int *)(this + 8) + -0xc) != 0) {
    uVar2 = FUN_00415460(local_1c,&DAT_005b53fc,this + 8);
    local_8 = 1;
    piVar3 = (int *)FUN_00415c80(local_18,uVar2,&DAT_005d3d08);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_004157a0(*piVar3,*(undefined4 *)(*piVar3 + -0xc));
    FUN_0040efa0();
    FUN_0040efa0();
  }
  return in_stack_00000004;
}

