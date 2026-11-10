// rea decompile_all
// name: FUN_100dc851
// address: 0x100dc851
// body: available
// range: 0x100dc851-0x100dc8c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100dc851(undefined4 param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  CMFCVisualManager *pCVar3;
  int *in_ECX;
  
  FUN_100e82a6(param_1,param_2,param_3);
  if ((in_ECX[8] != 0) && (in_ECX[0x1f] == 0)) {
    pcVar1 = *(code **)(*in_ECX + 0xf0);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) goto LAB_100dc8b6;
  }
  pCVar3 = CMFCVisualManager::GetInstance();
  pcVar1 = *(code **)(*(int *)pCVar3 + 0x13c);
  guard_check_icall(param_1,*param_2,param_2[1],param_2[2],param_2[3],param_3);
  (*pcVar1)();
LAB_100dc8b6:
  return param_2[2] - *param_2;
}

