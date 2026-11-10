// rea decompile_all
// name: FUN_1011978c
// address: 0x1011978c
// body: available
// range: 0x1011978c-0x1011991e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1011978c(int *param_1,int param_2)

{
  double dVar1;
  code *pcVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  undefined1 local_64 [8];
  int local_5c;
  int local_58;
  int *local_54;
  int local_50;
  undefined8 local_4c;
  tagTEXTMETRICW local_44;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_54 = param_1;
  local_50 = param_2;
  if (in_ECX[0x30] == 0) {
    iVar4 = in_ECX[0x71];
  }
  else {
    iVar4 = in_ECX[0x72];
  }
  local_4c = (double)CONCAT44(iVar4,(undefined4)local_4c);
  pAVar3 = GetGlobalData();
  if (*(int *)(pAVar3 + 0x1e8) == 0) {
    dVar1 = 1.0;
  }
  else {
    dVar1 = *(double *)(pAVar3 + 0x1e0);
  }
  if (1.0 < dVar1) {
    GetGlobalData();
    local_4c = (double)(int)local_4c._4_4_;
    iVar4 = FUN_1017f8a0();
  }
  GetTextMetricsW(*(HDC *)(local_50 + 8),&local_44);
  local_4c._4_4_ = local_44.tmHeight;
  if ((local_44.tmHeight & 1U) != 0) {
    local_4c._4_4_ = local_44.tmHeight + 1;
  }
  if ((CMFCRibbonCategory *)in_ECX[0x22] != (CMFCRibbonCategory *)0x0) {
    iVar5 = CMFCRibbonCategory::GetImageSize((CMFCRibbonCategory *)in_ECX[0x22],(int)local_64);
    iVar6 = (int)((*(int *)(iVar5 + 4) - local_4c._4_4_) + 6) / 2;
    iVar5 = 2;
    if (1 < iVar6) {
      iVar5 = iVar6;
    }
    in_ECX[0x48] = iVar5;
  }
  iVar5 = local_4c._4_4_ + in_ECX[0x48] * 2;
  in_ECX[0x76] = 0;
  local_4c._4_4_ = iVar5;
  if ((in_ECX[0x31] == 0) && (in_ECX[0x30] == 0)) {
    pcVar2 = *(code **)(*in_ECX + 0x114);
    guard_check_icall(&local_5c,1);
    (*pcVar2)();
    iVar5 = local_4c._4_4_;
    if (((local_5c != 0) || (local_58 != 0)) &&
       (in_ECX[0x76] = in_ECX[0x76] + local_5c + in_ECX[0x47] * 2, (int)local_4c._4_4_ <= local_58))
    {
      iVar5 = local_58;
    }
    if (0 < in_ECX[0x43]) {
      in_ECX[0x76] = in_ECX[0x76] + in_ECX[0x43] + in_ECX[0x47] * 2;
      if (iVar5 <= in_ECX[0x44]) {
        iVar5 = in_ECX[0x44];
      }
    }
    iVar4 = iVar4 + in_ECX[0x76];
    param_1 = local_54;
  }
  param_1[1] = iVar5;
  *param_1 = iVar4;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

