// rea decompile_all
// name: FUN_100cd688
// address: 0x100cd688
// body: available
// range: 0x100cd688-0x100cd85f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100cd688(undefined4 param_1)

{
  double dVar1;
  code *pcVar2;
  int iVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int iVar5;
  int *in_ECX;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  OnAfterChangeRect(param_1);
  pcVar2 = *(code **)(*in_ECX + 0x250);
  guard_check_icall();
  iVar3 = (*pcVar2)();
  if (iVar3 != 0) {
    in_ECX[100] = 1;
    return;
  }
  in_ECX[100] = 0;
  if (in_ECX[0x31] != 0) {
    return;
  }
  if (in_ECX[0x30] != 0) {
    return;
  }
  pcVar2 = *(code **)(*in_ECX + 0x114);
  guard_check_icall(&local_c,0);
  (*pcVar2)();
  pcVar2 = *(code **)(*in_ECX + 0x114);
  guard_check_icall(&local_14,1);
  (*pcVar2)();
  if ((in_ECX[0x2e] == 0) && (in_ECX[0x2f] == 0)) {
    local_10 = 0;
    if (in_ECX[0x57] != 0) {
      iVar3 = 0x20;
      pAVar4 = GetGlobalData();
      if (*(int *)(pAVar4 + 0x1e8) == 0) {
        dVar1 = 1.0;
      }
      else {
        dVar1 = *(double *)(pAVar4 + 0x1e0);
      }
      iVar5 = iVar3;
      if (dVar1 != 1.0) {
        GetGlobalData();
        iVar5 = FUN_10149490();
        GetGlobalData();
        iVar3 = FUN_10149490();
      }
      if ((in_ECX[0x1f] - in_ECX[0x1d] < iVar5) || (in_ECX[0x20] - in_ECX[0x1e] < iVar3)) {
        local_10 = 1;
      }
      else {
        local_10 = 0;
      }
    }
    if ((local_c == 0) && (local_8 == 0)) goto LAB_100cd80c;
  }
  else {
    in_ECX[100] = 0;
    if (((local_c == 0) && (local_8 == 0)) || (local_14 != 0)) goto LAB_100cd80c;
  }
  if (local_10 == 0) {
    in_ECX[100] = 1;
  }
LAB_100cd80c:
  if (in_ECX[100] == 0) {
    iVar3 = CSize::operator==((CSize *)(in_ECX + 0x47),(tagSIZE)0x100000005);
    if (iVar3 == 0) {
      return;
    }
    local_1c = 3;
    local_18 = 3;
  }
  else {
    local_1c = 5;
    local_18 = 1;
  }
  pcVar2 = *(code **)(*in_ECX + 0x27c);
  guard_check_icall(&local_1c);
  (*pcVar2)();
  return;
}

