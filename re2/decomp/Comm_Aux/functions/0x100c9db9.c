// rea decompile_all
// name: FUN_100c9db9
// address: 0x100c9db9
// body: available
// range: 0x100c9db9-0x100c9f9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c9db9(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int in_ECX;
  CMFCToolBarImages *pCVar5;
  undefined4 local_2c;
  undefined4 local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  uVar2 = (uint)(param_5 != 0);
  if (param_3 == 0xf060) {
    iVar3 = uVar2 + 6;
  }
  else if (param_3 == 0xf020) {
    iVar3 = uVar2 + 0xc;
  }
  else if (param_3 == 0xf030) {
    iVar3 = uVar2 + 10;
  }
  else {
    if (param_3 != 0xf120) goto LAB_100c9f8a;
    iVar3 = uVar2 + 8;
  }
  pCVar5 = (CMFCToolBarImages *)(iVar3 * 0x118 + in_ECX);
  pAVar4 = GetGlobalData();
  if (*(int *)(pAVar4 + 0x1e8) == 0) {
    dVar1 = 1.0;
  }
  else {
    dVar1 = *(double *)(pAVar4 + 0x1e0);
  }
  local_28 = 3;
  local_2c = 3;
  if (dVar1 == 1.0) {
    local_2c = 1;
  }
  pAVar4 = GetGlobalData();
  if (*(int *)(pAVar4 + 0x1e8) == 0) {
    dVar1 = 1.0;
  }
  else {
    dVar1 = *(double *)(pAVar4 + 0x1e0);
  }
  if (dVar1 == 1.0) {
    local_28 = 1;
  }
  local_18.right = *(LONG *)(pCVar5 + 0x54);
  local_18.bottom = *(LONG *)(pCVar5 + 0x58);
  local_18.left = 0;
  local_18.top = 0;
  if (param_6 == 0) {
    iVar3 = local_18.bottom * 3;
LAB_100c9f51:
    OffsetRect(&local_18,0,iVar3);
  }
  else if (param_4 != 0) {
    if ((*(int *)(in_ECX + 0xc000) < 0x14) || (param_7 == 0)) {
      iVar3 = *(int *)(uVar2 * 0x178 + in_ECX + 0x1c78);
      guard_check_icall(param_1,*param_2,param_2[1],param_2[2],param_2[3],param_4 != 2,0xff);
    }
    else {
      iVar3 = *(int *)(in_ECX + 0x6180);
      guard_check_icall(param_1,*param_2,param_2[1],param_2[2],param_2[3],param_4 != 2,0xff);
    }
    (**(code **)(iVar3 + 0x10))();
    iVar3 = ((param_4 != 2) + 1) * *(int *)(pCVar5 + 0x58);
    goto LAB_100c9f51;
  }
  CMFCToolBarImages::DrawEx
            (pCVar5,param_1,*param_2,param_2[1],param_2[2],param_2[3],0,local_2c,local_28,
             local_18.left,local_18.top,local_18.right,local_18.bottom,0xff);
LAB_100c9f8a:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

