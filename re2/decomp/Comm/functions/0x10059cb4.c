// rea decompile_all
// name: FUN_10059cb4
// address: 0x10059cb4
// body: available
// range: 0x10059cb4-0x10059fb4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_10059cb4(CDC *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 int param_7,int *param_8,int param_9)

{
  code *pcVar1;
  tagPOINT tVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  uint local_3c;
  int local_38;
  CImageList *local_34;
  int local_30;
  int *local_2c;
  CDC *local_28;
  int local_24;
  int iStack_20;
  int local_1c;
  int iStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar6 = param_8;
  uVar3 = param_6;
  uStack_4 = 0x48;
  local_8 = 0x10059cc0;
  local_28 = param_1;
  pcVar1 = *(code **)(*param_8 + 0x284);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if ((iVar4 != 0) && (param_7 != 0)) {
    param_4 = piVar6[0x80];
    pcVar1 = *(code **)(*local_2c + 0x100);
    guard_check_icall(local_28,piVar6[0x80],piVar6[0x81],piVar6[0x82],piVar6[0x83],piVar6,
                      piVar6[0x7e],piVar6[0x7f],0);
    (*pcVar1)();
  }
  uVar5 = FUN_10013071();
  FUN_10003190(uVar5);
  local_8 = 0;
  pcVar1 = *(code **)(*piVar6 + 0x1bc);
  guard_check_icall(uVar3,&local_30);
  (*pcVar1)();
  pcVar1 = *(code **)(*piVar6 + 0x280);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if (iVar4 == 0) {
    pcVar1 = *(code **)(*piVar6 + 0x238);
    guard_check_icall(&local_3c);
    (*pcVar1)();
    pcVar1 = *(code **)(*piVar6 + 0x1c4);
    guard_check_icall(uVar3);
    iVar4 = (*pcVar1)();
    pcVar1 = *(code **)(*piVar6 + 0x1d8);
    uVar5 = uVar3;
    guard_check_icall(uVar3);
    local_34 = (CImageList *)(*pcVar1)();
    if (iVar4 == -1) {
      local_3c = -(uint)(local_34 != (CImageList *)0x0) & local_3c;
    }
    if (param_4 - param_2 < (int)(local_3c + DAT_101d3660 * 2)) goto LAB_10059fa2;
    if (local_34 == (CImageList *)0x0) {
      pcVar1 = *(code **)(*piVar6 + 0x23c);
      guard_check_icall(uVar5);
      local_34 = (CImageList *)(*pcVar1)();
      if ((local_34 != (CImageList *)0x0) && (iVar4 != -1)) {
        tVar2.y = ((param_5 - param_3) - local_38) / 2 + param_3;
        tVar2.x = param_2 + 4;
        CImageList::Draw(local_34,local_28,iVar4,tVar2,1);
      }
    }
    else {
      CDC::DrawState(local_28,param_2 + 4,((param_5 - param_3) - local_38) / 2 + param_3,local_3c,
                     local_38,local_34,0,0);
    }
    local_24 = param_2 + 6 + local_3c;
    iStack_20 = param_3;
    local_1c = param_4;
    iStack_18 = param_5;
    if (param_4 - local_24 < (int)(local_3c * 2)) {
      pcVar1 = *(code **)(*piVar6 + 0x290);
      guard_check_icall(uVar5);
      iVar4 = (*pcVar1)();
      if (iVar4 == 0) {
        local_1c = local_1c + -3;
      }
    }
    iVar4 = param_9;
    if (param_9 == -1) {
      pcVar1 = *(code **)(*local_2c + 0x11c);
      guard_check_icall(piVar6,uVar3,param_7);
      iVar4 = (*pcVar1)();
      if (iVar4 != -1) goto LAB_10059f29;
    }
    else {
LAB_10059f29:
      pcVar1 = *(code **)(*(int *)local_28 + 0x30);
      guard_check_icall(iVar4);
      (*pcVar1)();
    }
    pcVar1 = *(code **)(*piVar6 + 0x288);
    uVar7 = (-(uint)(piVar6[0x4c] != 0) & 0x800) + 0x8024;
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 == 0) {
      pcVar1 = *(code **)(*piVar6 + 0x28c);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 != 0) goto LAB_10059f81;
    }
    else {
LAB_10059f81:
      uVar7 = uVar7 | 1;
    }
    piVar6 = &local_24;
  }
  else {
    iVar4 = piVar6[0x4c];
    pcVar1 = *(code **)(*local_2c + 0x128);
    guard_check_icall(&param_2);
    (*pcVar1)();
    piVar6 = &param_2;
    uVar7 = (-(uint)(iVar4 != 0) & 0x800) + 0x25;
  }
  iVar4 = *(int *)local_28;
  guard_check_icall(local_30,*(undefined4 *)(local_30 + -0xc),piVar6,uVar7);
  (**(code **)(iVar4 + 0x68))();
LAB_10059fa2:
  FUN_10003460();
  FUN_101490fe();
  return;
}

