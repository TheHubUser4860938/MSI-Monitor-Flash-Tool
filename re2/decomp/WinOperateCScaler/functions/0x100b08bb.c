// rea decompile_all
// name: CMFCCaptionButton::GetSize
// address: 0x100b08bb
// body: available
// range: 0x100b08bb-0x100b0923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  iVar4 = DAT_10201ca0 * 2;
  iVar5 = DAT_10201ca4 * 2;
  piVar7 = (int *)FUN_10084bc5(local_18);
  iVar3 = piVar7[1];
  *in_stack_00000004 = *piVar7 + iVar4 + iVar2;
  in_stack_00000004[1] = local_8 + iVar3 + iVar5;
  return;
}

