// rea decompile_all
// name: FUN_005733fe
// address: 0x5733fe
// body: available
// range: 0x5733fe-0x5734ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort * FUN_005733fe(ushort *param_1,ushort param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar5 [14];
  undefined1 auVar4 [16];
  ushort uVar6;
  ushort uVar7;
  int iStack_34;
  
  if (0 < DAT_00618734) {
    auVar2 = pshuflw(ZEXT216(param_2),ZEXT216(param_2),0);
    do {
      if (((uint)param_1 & 0xfff) < 0xff1) {
        auVar5 = SUB1614((undefined1  [16])0x0,2);
        auVar4._0_2_ = -(ushort)(*param_1 == 0);
        auVar4._2_2_ = -(ushort)(param_1[1] == 0);
        auVar4._4_2_ = -(ushort)(param_1[2] == 0);
        auVar4._6_2_ = -(ushort)(param_1[3] == 0);
        auVar4._8_2_ = -(ushort)(param_1[4] == 0);
        auVar4._10_2_ = -(ushort)(auVar5._8_2_ == param_1[5]);
        auVar4._12_2_ = -(ushort)(auVar5._10_2_ == param_1[6]);
        auVar4._14_2_ = -(ushort)(auVar5._12_2_ == param_1[7]);
        uVar6 = auVar2._0_2_;
        auVar3._0_2_ = -(ushort)(*param_1 == uVar6);
        uVar7 = auVar2._2_2_;
        auVar3._2_2_ = -(ushort)(param_1[1] == uVar7);
        auVar3._4_2_ = -(ushort)(param_1[2] == uVar6);
        auVar3._6_2_ = -(ushort)(param_1[3] == uVar7);
        auVar3._8_2_ = -(ushort)(param_1[4] == uVar6);
        auVar3._10_2_ = -(ushort)(param_1[5] == uVar7);
        auVar3._12_2_ = -(ushort)(param_1[6] == uVar6);
        auVar3._14_2_ = -(ushort)(param_1[7] == uVar7);
        auVar4 = auVar4 | auVar3;
        uVar6 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
        if (uVar6 != 0) goto LAB_00573495;
        iStack_34 = 0x10;
      }
      else {
        if (*param_1 == param_2) {
          return param_1;
        }
        if (*param_1 == 0) {
          return (ushort *)0x0;
        }
        iStack_34 = 2;
      }
      param_1 = (ushort *)((int)param_1 + iStack_34);
    } while( true );
  }
  for (; (*param_1 != 0 && (*param_1 != param_2)); param_1 = param_1 + 1) {
  }
LAB_00573474:
  return (ushort *)((*param_1 != param_2) - 1 & (uint)param_1);
LAB_00573495:
  iVar1 = 0;
  if (uVar6 != 0) {
    for (; (uVar6 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  param_1 = (ushort *)((int)param_1 + iVar1);
  goto LAB_00573474;
}

