// rea decompile_all
// name: FUN_10189746
// address: 0x10189746
// body: available
// range: 0x10189746-0x1018992c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1018992c with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10189746(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  int local_8;
  
  local_8 = 0;
  iVar2 = FUN_101894c6(&local_8);
  if (iVar2 != 0) {
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  if (local_8 == 0) {
    return 0;
  }
  iVar2 = param_1[5];
  if ((iVar2 != DAT_10202348) || (iVar2 != DAT_10202354)) {
    if (DAT_1020db58 == 0) {
      uVar3 = 3;
      uVar5 = 2;
      uVar6 = 1;
      uVar8 = 0xb;
      if (iVar2 < 0x6b) {
        uVar3 = 4;
        uVar8 = 10;
        uVar5 = 1;
        uVar6 = 5;
      }
      FUN_1018992d(0,1,iVar2,uVar3,uVar5,0,0,2,0,0,0);
      FUN_1018992d(1,1,param_1[5],uVar8,uVar6,0,0,2,0,0,0);
    }
    else {
      if (DAT_1020dbf8 != 0) {
        uVar10 = 0;
        uVar9 = 0;
        uVar11 = DAT_1020dbfe;
      }
      else {
        uVar10 = DAT_1020dbfc;
        uVar9 = DAT_1020dbfe;
        uVar11 = 0;
      }
      FUN_1018992d(0,DAT_1020dbf8 == 0,iVar2,DAT_1020dbfa,uVar9,uVar10,uVar11,DAT_1020dc00,
                   DAT_1020dc02,DAT_1020dc04,DAT_1020dc06);
      if (DAT_1020dba4 != 0) {
        uVar10 = 0;
        uVar9 = 0;
        iVar2 = param_1[5];
        uVar11 = DAT_1020dbaa;
      }
      else {
        iVar2 = param_1[5];
        uVar10 = DAT_1020dba8;
        uVar9 = DAT_1020dbaa;
        uVar11 = 0;
      }
      FUN_1018992d(1,DAT_1020dba4 == 0,iVar2,DAT_1020dba6,uVar9,uVar10,uVar11,DAT_1020dbac,
                   DAT_1020dbae,DAT_1020dbb0,DAT_1020dbb2);
    }
  }
  iVar2 = param_1[7];
  if (DAT_1020234c < DAT_10202358) {
    if ((iVar2 < DAT_1020234c) || (DAT_10202358 < iVar2)) {
      return 0;
    }
    if ((iVar2 <= DAT_1020234c) || (DAT_10202358 <= iVar2)) {
LAB_101898f4:
      iVar7 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
      if (iVar2 != DAT_1020234c) {
        return (uint)(iVar7 < DAT_1020235c);
      }
      return (uint)(DAT_10202350 <= iVar7);
    }
  }
  else if ((DAT_10202358 <= iVar2) && (iVar2 <= DAT_1020234c)) {
    if ((DAT_10202358 < iVar2) && (iVar2 < DAT_1020234c)) {
      return 0;
    }
    goto LAB_101898f4;
  }
  return 1;
}

