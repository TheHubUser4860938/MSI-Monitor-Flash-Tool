// rea decompile_all
// name: CCmdTarget::PushStackArgs
// address: 0x1013a8a7
// body: available
// range: 0x1013a8a7-0x1013aaf4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013aaba to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    protected: long __thiscall CCmdTarget::PushStackArgs(unsigned char *,unsigned char const *,void
   *,unsigned short,struct tagDISPPARAMS *,unsigned int *,struct tagVARIANT *,class
   CVariantBoolConverter *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CCmdTarget::PushStackArgs
          (CCmdTarget *this,uchar *param_1,uchar *param_2,void *param_3,ushort param_4,
          tagDISPPARAMS *param_5,uint *param_6,tagVARIANT *param_7,CVariantBoolConverter *param_8)

{
  byte bVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  ushort uVar5;
  uint *puVar6;
  tagVARIANT *ptVar7;
  uint *local_30;
  int local_2c;
  int local_28;
  tagVARIANT *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x1013a8b3;
  *(CCmdTarget **)param_1 = this;
  puVar6 = (uint *)(param_1 + 4);
  if ((param_4 == 6) || (param_4 == 0xc)) {
    *puVar6 = (uint)param_3;
    puVar6 = (uint *)(param_1 + 8);
  }
  local_20 = *(int *)param_5;
  local_18 = *(uint *)(param_5 + 8);
  local_1c = *(int *)(param_5 + 0xc);
  local_14 = 0;
  do {
    if (*param_2 == '\0') {
LAB_1013aac2:
      if ((int)local_18 < 1) {
        if (*param_2 == '\0') {
          lVar2 = 0;
        }
        else {
          *param_6 = *(uint *)(param_5 + 8);
          lVar2 = -0x7ffdfff1;
        }
      }
      else {
        lVar2 = -0x7ffdfff2;
LAB_1013aacb:
        *param_6 = local_18;
      }
      return lVar2;
    }
    bVar1 = *param_2;
    uVar5 = (ushort)bVar1;
    local_18 = local_18 - 1;
    if ((bVar1 != 0xff) && ((bVar1 & 0x40) != 0)) {
      uVar5 = uVar5 & 0xffbf | 0x4000;
    }
    if ((int)local_18 < local_1c) {
      if (uVar5 == 0xff) {
        local_18 = *(uint *)(param_5 + 0xc);
        local_1c = 0;
        local_14 = 1;
        goto LAB_1013aaab;
      }
      if ((local_14 == 0) && (uVar5 == 0xc)) {
        _DAT_1020c5e0 = 10;
        _DAT_1020c5e8 = &DAT_80020004;
        ptVar7 = (tagVARIANT *)&DAT_1020c5e0;
        goto LAB_1013a9ac;
      }
      goto LAB_1013aac2;
    }
    if (uVar5 == 0xff) goto LAB_1013aac2;
    ptVar7 = (tagVARIANT *)(local_20 + local_18 * 0x10);
    if ((uVar5 != 0xc) && (uVar5 != *(ushort *)ptVar7)) {
      local_24 = param_7 + local_18 * 0x10;
      lVar2 = Ordinal_12(local_24,ptVar7,0,uVar5);
      ptVar7 = local_24;
      if (lVar2 < 0) goto LAB_1013aacb;
    }
LAB_1013a9ac:
    if ((uVar5 & 0x4000) != 0) {
      if ((uVar5 == 0x400b) && (param_8 != (CVariantBoolConverter *)0x0)) {
        local_24 = (tagVARIANT *)(uint)(**(short **)(ptVar7 + 8) != 0);
        puVar3 = (uint *)FUN_1001cfa0(4);
        if (puVar3 == (uint *)0x0) {
          puVar3 = (uint *)0x0;
        }
        else {
          *puVar3 = (uint)local_24;
        }
        local_2c = *(int *)(ptVar7 + 8);
        local_28 = 1;
        local_30 = puVar3;
        if ((puVar3 == (uint *)0x0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_1001d023();
        }
        local_8 = 0;
        FUN_1013abb1(*(undefined4 *)(param_8 + 8),&local_30);
        local_8 = 0xffffffff;
        if (local_28 != 0) {
          FUN_101539e9(local_30,4);
        }
      }
      else {
        puVar3 = *(uint **)(ptVar7 + 8);
      }
      *puVar6 = (uint)puVar3;
      goto LAB_1013aaa5;
    }
    switch(uVar5) {
    case 2:
      uVar4 = (uint)(short)*(ushort *)(ptVar7 + 8);
      break;
    case 3:
    case 8:
    case 9:
    case 10:
    case 0xd:
    case 0x13:
      uVar4 = *(uint *)(ptVar7 + 8);
      break;
    case 4:
      *puVar6 = *(uint *)(ptVar7 + 8);
      goto LAB_1013aaa5;
    case 5:
    case 7:
      *(undefined8 *)puVar6 = *(undefined8 *)(ptVar7 + 8);
      goto LAB_1013aa7c;
    case 6:
    case 0x14:
    case 0x15:
      *puVar6 = *(uint *)(ptVar7 + 8);
      puVar6[1] = *(uint *)(ptVar7 + 0xc);
LAB_1013aa7c:
      puVar6 = puVar6 + 2;
      goto switchD_1013aa52_caseD_e;
    case 0xb:
      uVar4 = (uint)(*(ushort *)(ptVar7 + 8) != 0);
      break;
    case 0xc:
      *puVar6 = (uint)ptVar7;
      goto LAB_1013aaa5;
    default:
      goto switchD_1013aa52_caseD_e;
    case 0x10:
      uVar4 = (uint)(char)ptVar7[8];
      break;
    case 0x11:
      uVar4 = (uint)(byte)ptVar7[8];
      break;
    case 0x12:
      uVar4 = (uint)*(ushort *)(ptVar7 + 8);
    }
    *puVar6 = uVar4;
LAB_1013aaa5:
    puVar6 = puVar6 + 1;
switchD_1013aa52_caseD_e:
LAB_1013aaab:
    param_2 = param_2 + 1;
  } while( true );
}

