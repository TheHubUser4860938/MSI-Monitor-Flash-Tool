// rea decompile_all
// name: FUN_10024390
// address: 0x10024390
// body: available
// range: 0x10024390-0x100246c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10024390(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5,char *param_6,int param_7)

{
  void **ppvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 in_CL;
  byte *in_EDX;
  ushort uVar5;
  byte bVar6;
  DWORD in_stack_00000cb4;
  byte in_stack_00000cb8;
  int in_stack_00000cbc;
  wchar_t *pwVar7;
  undefined **local_48;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c23b8;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffff0000;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  local_8 = 0;
  uVar5 = CONCAT11(in_stack_00000cb8,in_CL);
  local_14 = uVar2;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  bVar6 = in_stack_00000cb8;
  do {
    ExceptionList = ppvVar1;
    if (bVar6 == 0) {
LAB_10024641:
      local_48 = CCpRsString::vftable;
      if (0xf < local_18) {
        FUN_1000b630(local_2c,local_18 + 1);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c = local_2c & 0xffffff00;
      if (7 < local_30) {
        FUN_1000b5d0(local_44[0],local_30 + 1);
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_10048350(&DAT_1024a13c,L"Read retry Count: %d",
                 ((uint)in_stack_00000cb8 - (uint)(uVar5 >> 8)) + 1,uVar2);
    FUN_10016860();
    iVar3 = (**(code **)(*DAT_10249d10 + 0x13c))(param_1,param_2,param_3,param_4);
    FUN_10048350(&DAT_1024a13c,L"DDCCI write error code 0x%x",iVar3);
    FUN_10016860();
    Sleep(in_stack_00000cb4);
    if (iVar3 == 0) {
      uVar4 = (uint)param_5;
      _memset(param_6,0,uVar4);
      iVar3 = (**(code **)(*DAT_10249d10 + 0x58))(param_1,param_2,param_5,param_6);
      FUN_10048350(&DAT_1024a13c,L"I2C read error code 0x%x",iVar3);
      FUN_10016860();
      if (iVar3 == 0) {
        FUN_10048350(&DAT_1024a13c,L"Read OK, Read buffer:");
        iVar3 = 0;
        if (uVar4 != 0) {
          do {
            FUN_10048350(&local_48,L"0x%x,",param_6[iVar3]);
            FUN_1002c980(local_44,0,0xffffffff);
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)uVar4);
        }
        FUN_10016860();
        if (param_7 == 0) {
          if ((*param_6 == (char)param_1) && (param_6[1] < '\0')) {
            bVar6 = (param_6[1] & 0x7fU) + 2;
            *in_EDX = bVar6;
            if (in_stack_00000cbc == 0) {
              pwVar7 = L"Not check chk";
LAB_1002462a:
              FUN_10048350(&DAT_1024a13c,pwVar7);
              FUN_10016860();
              goto LAB_10024641;
            }
            if ((bVar6 < (byte)uVar5) || (param_5 <= bVar6)) {
              FUN_10048350(&DAT_1024a13c,
                           L"Read buffer endIndex: 0x%x, setting from ini start index :0x%x, read length 0x%x, check fail!"
                           ,bVar6,uVar5 & 0xff,uVar4);
              FUN_10016860();
            }
            else {
              iVar3 = 0;
              uVar4 = CONCAT31((uint3)(byte)(uVar5 >> 8),0x50);
              if (((byte)param_6[1] & 0x7f) != 0xfffffffe) {
                do {
                  uVar4 = CONCAT31((int3)(uVar4 >> 8),(byte)uVar4 ^ param_6[iVar3]);
                  iVar3 = iVar3 + 1;
                } while (iVar3 < (int)(((byte)param_6[1] & 0x7f) + 2));
              }
              FUN_10048350(&DAT_1024a13c,L"Checksum: 0x%x",uVar4 & 0xff);
              FUN_10016860();
              if ((char)uVar4 == param_6[((byte)param_6[1] & 0x7f) + 2]) {
                pwVar7 = L"Checksum compare success!";
                goto LAB_1002462a;
              }
              FUN_10048350(&DAT_1024a13c,L"Checksum compare fail!");
              FUN_10016860();
              uVar5 = (ushort)CONCAT31((int3)(uVar4 >> 8),in_CL);
            }
          }
        }
        else if (param_6[1] < '\0') {
          *in_EDX = (param_6[1] & 0x7fU) + 2;
          goto LAB_10024641;
        }
      }
      Sleep(in_stack_00000cb4);
    }
    bVar6 = (char)(uVar5 >> 8) - 1;
    uVar5 = CONCAT11(bVar6,(char)uVar5);
    ppvVar1 = ExceptionList;
  } while( true );
}

