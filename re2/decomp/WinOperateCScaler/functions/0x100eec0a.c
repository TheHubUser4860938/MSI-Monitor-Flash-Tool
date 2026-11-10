// rea decompile_all
// name: FUN_100eec0a
// address: 0x100eec0a
// body: available
// range: 0x100eec0a-0x100eedf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100eec0a(undefined4 param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  AFX_GLOBAL_DATA *pAVar12;
  int iVar13;
  CMFCVisualManager *pCVar14;
  undefined4 uVar15;
  int *in_ECX;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  pcVar9 = *(code **)(*in_ECX + 0x290);
  uVar15 = param_1;
  guard_check_icall(param_1);
  (*pcVar9)();
  iVar10 = in_ECX[0x32];
  if (in_ECX[0x33] != 0) {
    in_ECX[0x32] = 1;
  }
  pcVar9 = *(code **)(*in_ECX + 0xdc);
  guard_check_icall(uVar15);
  iVar11 = (*pcVar9)();
  if (iVar11 != 0) {
    in_ECX[0x32] = 0;
  }
  iVar11 = in_ECX[0x1d];
  iVar2 = in_ECX[0x1e];
  iVar3 = in_ECX[0x1f];
  iVar4 = in_ECX[0x20];
  iVar5 = in_ECX[0x4d];
  iVar6 = in_ECX[0x4e];
  iVar7 = in_ECX[0x4f];
  iVar8 = in_ECX[0x50];
  if (in_ECX[0x30] == 0) {
    iVar13 = in_ECX[0x71];
  }
  else {
    iVar13 = in_ECX[0x72];
  }
  pAVar12 = GetGlobalData();
  if (*(int *)(pAVar12 + 0x1e8) == 0) {
    dVar1 = 1.0;
  }
  else {
    dVar1 = *(double *)(pAVar12 + 0x1e0);
  }
  if (1.0 < dVar1) {
    GetGlobalData();
    iVar13 = FUN_101548f0();
  }
  in_ECX[0x1d] = in_ECX[0x1f] - iVar13;
  in_ECX[0x4d] = in_ECX[0x1f] - iVar13;
  pCVar14 = CMFCVisualManager::GetInstance();
  pcVar9 = *(code **)(*(int *)pCVar14 + 0x238);
  guard_check_icall(param_1);
  (*pcVar9)();
  if ((in_ECX[0x7c] == 0) || (*(int *)(in_ECX[0x7c] + 0x20) == 0)) {
    local_18.left = in_ECX[0x4d];
    local_18.top = in_ECX[0x4e];
    local_18.right = in_ECX[0x4f];
    local_18.bottom = in_ECX[0x50];
    InflateRect(&local_18,-in_ECX[0x47],-in_ECX[0x48]);
    uVar15 = 0x824;
    if (in_ECX[0x75] == 1) {
      uVar15 = 0x825;
    }
    else if (in_ECX[0x75] == 2) {
      uVar15 = 0x826;
    }
    pcVar9 = *(code **)(*in_ECX + 0x260);
    guard_check_icall(param_1,in_ECX + 0x7b,local_18.left,local_18.top,local_18.right,
                      local_18.bottom,uVar15,0xffffffff);
    (*pcVar9)();
  }
  pCVar14 = CMFCVisualManager::GetInstance();
  pcVar9 = *(code **)(*(int *)pCVar14 + 0x240);
  guard_check_icall(param_1,in_ECX);
  (*pcVar9)();
  in_ECX[0x32] = iVar10;
  in_ECX[0x1d] = iVar11;
  in_ECX[0x1e] = iVar2;
  in_ECX[0x1f] = iVar3;
  in_ECX[0x20] = iVar4;
  in_ECX[0x4d] = iVar5;
  in_ECX[0x4e] = iVar6;
  in_ECX[0x4f] = iVar7;
  in_ECX[0x50] = iVar8;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

