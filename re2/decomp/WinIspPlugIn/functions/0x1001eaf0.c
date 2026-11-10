// rea decompile_all
// name: FUN_1001eaf0
// address: 0x1001eaf0
// body: available
// range: 0x1001eaf0-0x1001ee03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001eaf0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_ECX;
  uint uVar3;
  int iVar4;
  int *in_EDX;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  undefined4 local_9f4;
  undefined2 local_9f0 [610];
  undefined4 local_52c;
  undefined4 local_524;
  undefined2 local_520 [610];
  undefined4 local_5c;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined **local_48;
  undefined2 local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c1eb8;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = CONCAT22(local_4c._2_2_,0xaa55);
  local_30 = 7;
  local_34 = 0;
  local_44 = 0;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_8 = 0;
  FUN_10016750(local_14);
  DAT_1024a38c = 1;
  _memset(local_520,0xff,0x4c4);
  _memset(local_9f0,0xff,0x4c4);
  switch(param_1) {
  case 0x33:
  case 0x36:
  case 0x38:
  case 0x39:
    local_9f4 = 2;
    local_52c = 0x7000;
    local_9f0[0] = (undefined2)local_4c;
    if (param_1 == 0x36) {
      local_4c = 1;
      piVar2 = (int *)FUN_1002bd00(local_50,&local_4c);
      iVar4 = *piVar2;
      if (iVar4 != *in_EDX) {
        uVar3 = 0xffff;
        do {
          if (*(char *)(*(int *)(iVar4 + 0x14) + uVar3) != -1) break;
          uVar3 = uVar3 - 1;
        } while (uVar3 < 0x10000);
        if ((uVar3 == 0xffffffff) && (FUN_1000bb30(local_50,iVar4), in_EDX[1] == 0)) {
LAB_1001ec26:
          FUN_10048350(&local_48,L"RomBank = 1, FW has only bank1 and the content is all 0xFF.");
          FUN_10016860();
          goto LAB_1001edde;
        }
      }
    }
    iVar4 = *in_EDX;
    local_4c = 0;
    piVar2 = (int *)FUN_1002bd00(local_50,&local_4c);
    if (*piVar2 != iVar4) {
      puVar5 = &local_9f4;
      for (iVar4 = 0x134; iVar4 != 0; iVar4 = iVar4 + -1) {
        *in_ECX = *puVar5;
        puVar5 = puVar5 + 1;
        in_ECX = in_ECX + 1;
      }
      goto LAB_1001edde;
    }
    pwVar6 = L"RomBank = 0, FW not include bank0, not need to write flag.";
    break;
  default:
    goto LAB_1001edde;
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3e:
  case 0x3f:
  case 0x41:
  case 0x42:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x4a:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
    local_9f0[0] = (undefined2)local_4c;
    local_520[0] = (undefined2)local_4c;
    local_9f4 = 2;
    local_52c = 0x7000;
    local_524 = 2;
    local_5c = 0x17000;
    local_4c = 1;
    piVar2 = (int *)FUN_1002bd00(local_50,&local_4c);
    iVar4 = *in_EDX;
    iVar1 = *piVar2;
    if (iVar1 == iVar4) {
      local_4c = 0;
      piVar2 = (int *)FUN_1002bd00(local_50,&local_4c);
      if (*piVar2 != iVar4) {
LAB_1001ed8d:
        iVar4 = 0x134;
        if (param_2 == 0) {
          puVar5 = &local_9f4;
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *in_ECX = *puVar5;
            puVar5 = puVar5 + 1;
            in_ECX = in_ECX + 1;
          }
        }
        else {
          puVar5 = &local_524;
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *in_ECX = *puVar5;
            puVar5 = puVar5 + 1;
            in_ECX = in_ECX + 1;
          }
        }
        goto LAB_1001edde;
      }
      pwVar6 = L"RomBank = 1, FW not include bank0 and bank1, not need to write flag.";
    }
    else {
      uVar3 = 0xffff;
      do {
        if (*(char *)(*(int *)(iVar1 + 0x14) + uVar3) != -1) break;
        uVar3 = uVar3 - 1;
      } while (uVar3 < 0x10000);
      if (uVar3 == 0xffffffff) {
        FUN_1000bb30(local_50,iVar1);
        if (in_EDX[1] == 0) goto LAB_1001ec26;
        iVar4 = *in_EDX;
        local_4c = 0;
        piVar2 = (int *)FUN_1002bd00(local_50,&local_4c);
        if (*piVar2 != iVar4) goto LAB_1001ed8d;
        pwVar6 = L"RomBank = 1, Fw not include bank0 and bank1 is empty, not need to write flag.";
      }
      else {
        if (in_EDX[1] == 1) {
          puVar5 = &local_524;
          for (iVar4 = 0x134; iVar4 != 0; iVar4 = iVar4 + -1) {
            *in_ECX = *puVar5;
            puVar5 = puVar5 + 1;
            in_ECX = in_ECX + 1;
          }
          goto LAB_1001edde;
        }
        local_4c = 0;
        piVar2 = (int *)FUN_1002bd00(local_50,&local_4c);
        if (*piVar2 != iVar4) goto LAB_1001ed8d;
        pwVar6 = L"RomBank = 1, FW not include bank0, not need to write flag.";
      }
    }
  }
  DAT_1024a38c = 0;
  FUN_10048350(&local_48,pwVar6);
  FUN_10016860();
LAB_1001edde:
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

