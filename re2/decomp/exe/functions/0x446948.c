// rea decompile_all
// name: CDataSourceControl::UpdateControls
// address: 0x446948
// body: available
// range: 0x446948-0x446b19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __thiscall CDataSourceControl::UpdateControls(void)
   
   Library: Visual Studio 2015 Release */

long __thiscall CDataSourceControl::UpdateControls(CDataSourceControl *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int *piVar4;
  tagVARIANT *ptVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 local_80 [4];
  int local_7c;
  int local_78;
  int local_74;
  undefined1 local_60 [16];
  COleVariant local_50 [16];
  COleVariant *local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x70;
  local_8 = 0x446954;
  iVar6 = 0;
  *(undefined4 *)(this + 0x44) = 1;
  iVar7 = 0;
  local_1c = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      local_2c = iVar7 * 0x28;
      iVar8 = *(int *)(*(int *)(this + 0x14) + 0x24 + local_2c);
      if ((iVar8 != 0) && (local_24 = *(int *)(iVar8 + 4), local_24 != 0)) {
        iVar8 = iVar6 << 4;
        local_18 = iVar8;
        do {
          piVar4 = (int *)FUN_004ead48(&local_24);
          local_14 = *piVar4;
          local_28 = 0xfffffffd;
          _memset(local_80,0,0x20);
          FUN_004c8e1e(local_50);
          local_8 = 0;
          if (*(int *)(this + 0x48) == 0) {
            local_40 = (COleVariant *)(*(int *)(this + 0x40) + iVar8);
          }
          else {
            ptVar5 = (tagVARIANT *)FUN_004463de(local_60,iVar7 + 1);
            local_8._0_1_ = 1;
            COleVariant::operator=(local_50,ptVar5);
            local_8 = (uint)local_8._1_3_ << 8;
            Ordinal_9(local_60);
            local_40 = local_50;
          }
          local_3c = &local_28;
          local_38 = 1;
          local_34 = 1;
          *(undefined4 *)(local_14 + 0x88) = 1;
          puVar1 = *(undefined4 **)(local_14 + 0x50);
          if (puVar1 == (undefined4 *)0x0) {
LAB_00446ae6:
            local_8 = 0xffffffff;
            Ordinal_9(local_50);
          }
          else {
            puVar2 = (undefined4 *)*puVar1;
            guard_check_icall(puVar1,&DAT_005dba10,&local_20);
            iVar6 = (*(code *)*puVar2)();
            if (-1 < iVar6) {
              iVar6 = *local_20;
              guard_check_icall(local_20,*(undefined4 *)(local_14 + 0x9c),&DAT_005db8c0,0,4,
                                &local_40,0,local_80,local_30);
              (**(code **)(iVar6 + 0x18))();
              pcVar3 = *(code **)(*local_20 + 8);
              guard_check_icall(local_20);
              (*pcVar3)();
              *(undefined4 *)(local_14 + 0x88) = 0;
              if (local_7c != 0) {
                Ordinal_6(local_7c);
              }
              if (local_78 != 0) {
                Ordinal_6(local_78);
              }
              if (local_74 != 0) {
                Ordinal_6(local_74);
              }
              local_1c = local_1c + 1;
              iVar8 = local_18 + 0x10;
              local_18 = iVar8;
              goto LAB_00446ae6;
            }
            local_8 = 0xffffffff;
            Ordinal_9(local_50);
            iVar8 = local_18;
          }
          iVar6 = local_1c;
        } while (local_24 != 0);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(this + 0x10));
  }
  *(undefined4 *)(this + 0x44) = 0;
  return 0;
}

