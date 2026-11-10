// rea decompile_all
// name: CMFCDynamicLayout::CorrectItem
// address: 0x4d02b5
// body: available
// range: 0x4d02b5-0x4d034f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCDynamicLayout::CorrectItem(struct AFX_DYNAMIC_LAYOUT_ITEM &)const
   
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCDynamicLayout::CorrectItem(CMFCDynamicLayout *this,AFX_DYNAMIC_LAYOUT_ITEM *param_1)

{
  undefined4 uVar1;
  LPWSTR lpClassName;
  int iVar2;
  uint uVar3;
  CSimpleStringT<wchar_t,0> local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4d02c1;
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  local_8 = 0;
  lpClassName = (LPWSTR)FUN_0040ed00(0x400);
  FUN_0040eda0(0x400);
  GetClassNameW(*(HWND *)param_1,lpClassName,0x400);
  ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer(local_14,-1);
  iVar2 = FUN_00415870(L"ComboBox");
  if (iVar2 != 0) {
    iVar2 = FUN_00415870(L"ComboBoxEx32");
    if (iVar2 != 0) goto LAB_004d033d;
  }
  uVar3 = GetWindowLongW(*(HWND *)param_1,-0x10);
  if ((0 < *(int *)(param_1 + 0x34)) && ((uVar3 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
LAB_004d033d:
  FUN_0040efa0();
  return;
}

