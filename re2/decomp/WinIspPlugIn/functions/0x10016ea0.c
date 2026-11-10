// rea decompile_all
// name: FUN_10016ea0
// address: 0x10016ea0
// body: available
// range: 0x10016ea0-0x100172f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10016fd2) */
/* WARNING: Removing unreachable block (ram,0x10016fd5) */
/* WARNING: Removing unreachable block (ram,0x10016fdb) */
/* WARNING: Removing unreachable block (ram,0x10017001) */
/* WARNING: Removing unreachable block (ram,0x1001709d) */
/* WARNING: Removing unreachable block (ram,0x1001700b) */
/* WARNING: Removing unreachable block (ram,0x10017028) */
/* WARNING: Removing unreachable block (ram,0x100171da) */

void FUN_10016ea0(void)

{
  int *piVar1;
  int *_Memory;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int in_EDX;
  uint uVar4;
  undefined4 local_a0;
  undefined **local_94;
  undefined4 local_90;
  undefined4 local_80;
  uint local_7c;
  uint local_78;
  undefined4 local_68;
  uint local_64;
  undefined **local_60;
  undefined4 local_5c;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_34;
  uint local_30;
  undefined8 local_2c;
  undefined4 local_24;
  int local_20 [2];
  undefined1 uStack_18;
  undefined2 uStack_17;
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c1af9;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _Memory = (int *)FUN_1000c2b0(local_14);
  local_20[0] = 0;
  local_20[1] = 0;
  uStack_18 = 0;
  uStack_17 = 0;
  uStack_15 = 0;
  local_48 = 7;
  local_4c = 0;
  local_5c = (uint)local_5c._2_2_ << 0x10;
  local_60 = CCpRsString::vftable;
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  local_7c = 7;
  local_80 = 0;
  local_90 = (uint)local_90._2_2_ << 0x10;
  local_94 = CCpRsString::vftable;
  local_64 = 0xf;
  local_68 = 0;
  local_78 = local_78 & 0xffffff00;
  local_8 = 3;
  FUN_10048350(&local_60,L"Check RL6703 BillBoard");
  FUN_10016860();
  if ((in_EDX != 1) || (in_ECX != 0x42)) goto LAB_100171d0;
  FUN_1002bdf0(&DAT_1024a648);
  FUN_1000b550();
  FUN_1000c880(&DAT_1024a2cc,local_a0);
  piVar1 = (int *)_Memory[1];
  if (*(char *)(_Memory[1] + 0xd) == '\0') {
    do {
      piVar2 = piVar1;
      piVar1 = (int *)*piVar2;
    } while (*(char *)(*piVar2 + 0xd) == '\0');
    if ((piVar2 == _Memory) || (piVar2[4] != 0)) goto LAB_10017074;
  }
  else {
LAB_10017074:
    piVar2 = _Memory;
  }
  if (piVar2 == _Memory) {
    FUN_10048350(&local_60,L"Fw not has bank 0!");
    FUN_10016860();
  }
  else {
    local_2c = *(undefined8 *)(piVar2[5] + 0x7100);
    local_24 = *(undefined4 *)(piVar2[5] + 0x7108);
    iVar3 = FUN_1003eda0(0,0xf100,0xc,local_20);
    if (iVar3 == 0) {
      FUN_10045540(L"Buffer from flash: ",0x13);
      uVar4 = 0;
      do {
        FUN_10048350(&local_94,L"0x%x, ",*(undefined1 *)((int)local_20 + uVar4));
        FUN_1002c980(&local_90,0,0xffffffff);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0xc);
      FUN_10016860();
      FUN_10045540(L"Buffer from bin: ",0x11);
      uVar4 = 0;
      do {
        FUN_10048350(&local_94,L"0x%x, ",*(undefined1 *)((int)&local_2c + uVar4));
        FUN_1002c980(&local_90,0,0xffffffff);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0xc);
      FUN_10016860();
    }
  }
LAB_100171d0:
  local_94 = CCpRsString::vftable;
  if (0xf < local_64) {
    FUN_1000b630(local_78,local_64 + 1);
  }
  local_64 = 0xf;
  local_68 = 0;
  local_78 = local_78 & 0xffffff00;
  if (7 < local_7c) {
    FUN_1000b5d0(local_90,local_7c + 1);
  }
  local_7c = 7;
  local_90 = local_90 & 0xffff0000;
  local_80 = 0;
  local_60 = CCpRsString::vftable;
  if (0xf < local_30) {
    FUN_1000b630(local_44,local_30 + 1);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  if (7 < local_48) {
    FUN_1000b5d0(local_5c,local_48 + 1);
  }
  local_48 = 7;
  local_4c = 0;
  local_5c = local_5c & 0xffff0000;
  FUN_1000b550();
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

