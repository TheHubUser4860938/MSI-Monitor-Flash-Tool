// rea decompile_all
// name: CMFCFontComboBox::CompareItem
// address: 0x533753
// body: available
// range: 0x533753-0x5337d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCFontComboBox::CompareItem(struct tagCOMPAREITEMSTRUCT *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCFontComboBox::CompareItem(CMFCFontComboBox *this,tagCOMPAREITEMSTRUCT *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  wchar_t *local_18;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x53375f;
  uVar1 = *(ushort *)(param_1 + 0xc);
  uVar2 = FUN_004295fe();
  FUN_0040eb30(uVar2);
  local_8 = 0;
  CComboBox::GetLBText
            ((CComboBox *)this,(uint)uVar1,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_18);
  uVar1 = *(ushort *)(param_1 + 0x14);
  uVar2 = FUN_004295fe();
  FUN_0040eb30(uVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  CComboBox::GetLBText
            ((CComboBox *)this,(uint)uVar1,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
  iVar3 = _wcscoll(local_18,local_14[0]);
  FUN_0040efa0();
  FUN_0040efa0();
  return iVar3;
}

