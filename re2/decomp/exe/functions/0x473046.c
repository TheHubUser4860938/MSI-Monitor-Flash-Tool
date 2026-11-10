// rea decompile_all
// name: FUN_00473046
// address: 0x473046
// body: available
// range: 0x473046-0x473282 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_00473046(CDC *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined4 param_8,int param_9)

{
  double dVar1;
  code *pcVar2;
  byte bVar3;
  CMFCVisualManager *pCVar4;
  int iVar5;
  DWORD DVar6;
  AFX_GLOBAL_DATA *pAVar7;
  int *in_ECX;
  IMAGES_IDS IVar8;
  CDC *pCVar9;
  int *piVar10;
  undefined4 uVar11;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  int *local_5c;
  CDC *local_58;
  tagRECT local_54;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_58 = param_1;
  local_64 = in_ECX[0x35];
  local_8 = 0;
  in_ECX[0x35] = 0;
  piVar10 = &local_6c;
  local_24.left = param_4;
  local_24.right = param_4 + param_3;
  local_24.top = param_5;
  uVar11 = 1;
  local_24.bottom = param_7;
  pcVar2 = *(code **)(*in_ECX + 0x114);
  local_5c = in_ECX;
  guard_check_icall(piVar10,1);
  (*pcVar2)();
  if ((local_6c == 0) && (local_68 == 0)) {
    if (in_ECX[0x3d] != 0) {
      pCVar4 = CMFCVisualManager::GetInstance();
      pcVar2 = *(code **)(*(int *)pCVar4 + 0x268);
      guard_check_icall(local_58,local_24.left,local_24.top,local_24.right,local_24.bottom,0,0,0);
      (*pcVar2)();
      in_ECX = local_5c;
    }
  }
  else {
    InflateRect(&local_24,-1,0);
    iVar5 = ((local_24.bottom - local_24.top) - local_68) / 2;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    local_24.top = local_24.top + iVar5;
    local_24.bottom = local_24.top + local_68;
    pcVar2 = *(code **)(*in_ECX + 0x120);
    guard_check_icall(local_58,1,local_24.left,local_24.top,local_24.right,local_24.bottom);
    (*pcVar2)();
  }
  local_34.left = param_4;
  local_34.top = param_5;
  local_34.right = param_6;
  local_34.bottom = param_7;
  pcVar2 = *(code **)(*in_ECX + 0x138);
  guard_check_icall(piVar10,uVar11);
  iVar5 = (*pcVar2)();
  pCVar9 = local_58;
  if (iVar5 != 0) {
    local_54.left = (param_6 - param_7) + param_5;
    iStack_40 = param_5;
    iStack_3c = param_6;
    iStack_38 = param_7;
    local_54.top = param_5;
    local_54.right = param_6;
    local_54.bottom = param_7;
    local_44 = local_54.left;
    OffsetRect(&local_54,0,1);
    bVar3 = 1;
    IVar8 = 0xe;
    if (((param_9 != 0) && (DVar6 = GetSysColor(0xe), 0x80 < (byte)DVar6)) &&
       (0x80 < (byte)(DVar6 >> 8))) {
      bVar3 = ~(0x80 < (byte)(DVar6 >> 0x10)) & 1;
    }
    pAVar7 = GetGlobalData();
    if (*(int *)(pAVar7 + 0x1e8) == 0) {
      dVar1 = 1.0;
    }
    else {
      dVar1 = *(double *)(pAVar7 + 0x1e0);
    }
    if (dVar1 <= 1.0) {
      IVar8 = 1;
    }
    local_60 = 0;
    local_5c = (int *)0x0;
    CMenuImages::Draw(local_58,IVar8,(CRect *)&local_54,-(uint)bVar3 & 3,(CSize *)&local_60);
    pCVar9 = local_58;
    local_60 = 0;
    local_5c = (int *)0x0;
    CMenuImages::Draw(local_58,IVar8,(CRect *)&local_44,(-(uint)bVar3 & 0xfffffffd) + 3,
                      (CSize *)&local_60);
    local_34.right = local_44;
  }
  local_34.left = local_34.left + param_3;
  InflateRect(&local_34,-3,0);
  iVar5 = *(int *)pCVar9;
  guard_check_icall(param_2,*(undefined4 *)(param_2 + -0xc),&local_34,0x824);
  (**(code **)(iVar5 + 0x68))();
  in_ECX[0x35] = local_64;
  FUN_0040efa0();
  FUN_0055bae6();
  return;
}

