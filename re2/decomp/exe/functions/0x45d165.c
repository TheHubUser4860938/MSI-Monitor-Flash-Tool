// rea decompile_all
// name: CMFCCaptionButton::GetSize
// address: 0x45d165
// body: available
// range: 0x45d165-0x45d1cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static class CSize __stdcall CMFCCaptionButton::GetSize(void)
   
   Library: Visual Studio 2015 Release */

void CMFCCaptionButton::GetSize(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CMFCVisualManager *pCVar6;
  int *piVar7;
  int *in_stack_00000004;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  int local_8;
  
  pCVar6 = CMFCVisualManager::GetInstance();
  pcVar1 = *(code **)(*(int *)pCVar6 + 0x144);
  guard_check_icall(local_10);
  piVar7 = (int *)(*pcVar1)();
  iVar2 = *piVar7;
  local_8 = piVar7[1];
  iVar4 = DAT_0060c9d0 * 2;
  iVar5 = DAT_0060c9d4 * 2;
  piVar7 = (int *)FUN_0045bc7e(local_18);
  iVar3 = piVar7[1];
  *in_stack_00000004 = *piVar7 + iVar4 + iVar2;
  in_stack_00000004[1] = local_8 + iVar3 + iVar5;
  return;
}

