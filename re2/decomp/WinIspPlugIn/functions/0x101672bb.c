// rea decompile_all
// name: FID_conflict:AddToKeyList
// address: 0x101672bb
// body: available
// range: 0x101672bb-0x10167312 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    protected: virtual void __thiscall CMFCRibbonButtonsGroup::AddToKeyList(class CArray<class
   CMFCRibbonKeyTip *,class CMFCRibbonKeyTip *> &)
    protected: virtual void __thiscall CMFCRibbonButtonsGroup::GetItemIDsList(class CList<unsigned
   int,unsigned int> &)const 
    protected: virtual void __thiscall CMFCRibbonButtonsGroup::GetVisibleElements(class CArray<class
   CMFCRibbonBaseElement *,class CMFCRibbonBaseElement *> &)
    protected: virtual void __thiscall CMFCRibbonButtonsGroup::OnRTLChanged(int)
     5 names - too many to list
   
   Library: Visual Studio 2015 Release */

void FID_conflict_AddToKeyList(undefined4 param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 local_8;
  
  local_8 = 0;
  if (0 < *(int *)(in_ECX + 0x114)) {
    do {
      puVar2 = (undefined4 *)FUN_100efaed(local_8);
      pcVar1 = *(code **)(*(int *)*puVar2 + 0x234);
      guard_check_icall(param_1);
      (*pcVar1)();
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(in_ECX + 0x114));
  }
  return;
}

