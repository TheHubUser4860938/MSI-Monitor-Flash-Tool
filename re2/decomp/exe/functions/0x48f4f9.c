// rea decompile_all
// name: CMFCShowAllButton::OnToolHitTest
// address: 0x48f4f9
// body: available
// range: 0x48f4f9-0x48f5b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCShowAllButton::OnToolHitTest(class CWnd const *,struct
   tagTOOLINFOW *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCShowAllButton::OnToolHitTest(CMFCShowAllButton *this,CWnd *param_1,tagTOOLINFOW *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  LPWSTR lpString1;
  CMFCAcceleratorKey local_28 [8];
  tagACCEL local_20;
  LPCWSTR local_18;
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x48f505;
  if (param_2 == (tagTOOLINFOW *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
    local_20.key = 0x28;
    local_20.fVirt = '\t';
    local_8 = 0;
    CMFCAcceleratorKey::CMFCAcceleratorKey(local_28,&local_20);
    local_8._0_1_ = 1;
    CMFCAcceleratorKey::Format
              (local_28,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        local_14);
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_00452eeb(&local_18,0x3e99,local_14[0]);
    lpString1 = (LPWSTR)FUN_005766bc(*(int *)(local_18 + -6) + 1,2);
    *(LPWSTR *)(param_2 + 0x24) = lpString1;
    if (lpString1 != (LPWSTR)0x0) {
      lstrcpyW(lpString1,local_18);
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
    uVar1 = (uint)(lpString1 != (LPWSTR)0x0);
    FUN_0040efa0();
    FUN_005152ee();
    FUN_0040efa0();
  }
  return uVar1;
}

