// rea decompile_all
// name: CMFCDynamicLayout::CorrectItem
// address: 0x1006195b
// body: available
// range: 0x1006195b-0x100619f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x10061967;
  uVar1 = FUN_10048e90();
  FUN_10034c30(uVar1);
  local_8 = 0;
  lpClassName = (LPWSTR)FUN_10035050(0x400);
  FUN_100351c0(0x400);
  GetClassNameW(*(HWND *)param_1,lpClassName,0x400);
  ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer(local_14,-1);
  iVar2 = FUN_10034110(L"ComboBox");
  if (iVar2 != 0) {
    iVar2 = FUN_10034110(L"ComboBoxEx32");
    if (iVar2 != 0) goto LAB_100619e3;
  }
  uVar3 = GetWindowLongW(*(HWND *)param_1,-0x10);
  if ((0 < *(int *)(param_1 + 0x34)) && ((uVar3 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
LAB_100619e3:
  FUN_10034f00();
  return;
}

