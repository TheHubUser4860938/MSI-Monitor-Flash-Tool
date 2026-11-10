// rea decompile_all
// name: FUN_0058fede
// address: 0x58fede
// body: available
// range: 0x58fede-0x5900c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5900c4 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0058fede(int *param_1)

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
  iVar2 = FUN_0058fc20(&local_8);
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
  if ((iVar2 != DAT_0060d358) || (iVar2 != DAT_0060d364)) {
    if (DAT_00619398 == 0) {
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
      FUN_005900c5(0,1,iVar2,uVar3,uVar5,0,0,2,0,0,0);
      FUN_005900c5(1,1,param_1[5],uVar8,uVar6,0,0,2,0,0,0);
    }
    else {
      if (DAT_00619438 != 0) {
        uVar10 = 0;
        uVar9 = 0;
        uVar11 = DAT_0061943e;
      }
      else {
        uVar10 = DAT_0061943c;
        uVar9 = DAT_0061943e;
        uVar11 = 0;
      }
      FUN_005900c5(0,DAT_00619438 == 0,iVar2,DAT_0061943a,uVar9,uVar10,uVar11,DAT_00619440,
                   DAT_00619442,DAT_00619444,DAT_00619446);
      if (DAT_006193e4 != 0) {
        uVar10 = 0;
        uVar9 = 0;
        iVar2 = param_1[5];
        uVar11 = DAT_006193ea;
      }
      else {
        iVar2 = param_1[5];
        uVar10 = DAT_006193e8;
        uVar9 = DAT_006193ea;
        uVar11 = 0;
      }
      FUN_005900c5(1,DAT_006193e4 == 0,iVar2,DAT_006193e6,uVar9,uVar10,uVar11,DAT_006193ec,
                   DAT_006193ee,DAT_006193f0,DAT_006193f2);
    }
  }
  iVar2 = param_1[7];
  if (DAT_0060d35c < DAT_0060d368) {
    if ((iVar2 < DAT_0060d35c) || (DAT_0060d368 < iVar2)) {
      return 0;
    }
    if ((iVar2 <= DAT_0060d35c) || (DAT_0060d368 <= iVar2)) {
LAB_0059008c:
      iVar7 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
      if (iVar2 != DAT_0060d35c) {
        return (uint)(iVar7 < DAT_0060d36c);
      }
      return (uint)(DAT_0060d360 <= iVar7);
    }
  }
  else if ((DAT_0060d368 <= iVar2) && (iVar2 <= DAT_0060d35c)) {
    if ((DAT_0060d368 < iVar2) && (iVar2 < DAT_0060d35c)) {
      return 0;
    }
    goto LAB_0059008c;
  }
  return 1;
}

