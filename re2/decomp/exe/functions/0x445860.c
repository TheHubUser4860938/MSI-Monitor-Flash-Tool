// rea decompile_all
// name: COleControlSite::QuickActivate
// address: 0x445860
// body: available
// range: 0x445860-0x445a86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x445875 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall COleControlSite::QuickActivate(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall COleControlSite::QuickActivate(COleControlSite *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_88;
  COleControlSite *local_84;
  undefined4 local_80;
  COleControlSite *local_7c;
  COleControlSite *local_78;
  uint local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  int *local_68;
  undefined4 local_64;
  int local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_48;
  undefined1 local_44 [8];
  undefined4 *local_3c;
  int *local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x78;
  local_8 = 0x44586c;
  puVar1 = *(undefined4 **)(this + 0x50);
  if (puVar1 != (undefined4 *)0x0) {
    uVar6 = 0;
    local_30 = (int *)0x0;
    puVar2 = (undefined4 *)*puVar1;
    guard_check_icall(puVar1,&DAT_005dbb90,&local_30);
    iVar5 = (*(code *)*puVar2)();
    if (iVar5 < 0) {
LAB_00445a7f:
      iVar5 = FUN_0055bae6();
      return iVar5;
    }
    if (local_30 != (int *)0x0) {
      _memset(&local_88,0,0x40);
      local_84 = this + 0xcc;
      local_88 = 0x40;
      local_7c = this + 0xdc;
      local_80 = 0;
      local_78 = this + 0xe0;
      local_64 = 0;
      local_58 = 0;
      local_54 = 0;
      FUN_004c8e1e(local_44);
      local_8 = 0;
      if (*(int *)(this + 0x20) != 0) {
        local_34 = *(int **)(*(int *)(this + 0x20) + 0x20);
        local_74 = 0;
        if (local_34 != (int *)0x0) {
          local_48 = 0;
          do {
            pcVar3 = *(code **)(*local_34 + 0x110);
            guard_check_icall(this,*(undefined4 *)((int)&DAT_005b4e70 + uVar6),local_44);
            (*pcVar3)();
            piVar4 = local_34;
            if ((short)local_3c != 0) {
              local_74 = local_74 | *(uint *)((int)&DAT_005b4e74 + uVar6);
            }
            uVar6 = uVar6 + 8;
          } while (uVar6 < 0x40);
          pcVar3 = *(code **)(*local_34 + 0x110);
          guard_check_icall(this,0xfffffd40,local_44);
          (*pcVar3)();
          local_70 = local_3c;
          pcVar3 = *(code **)(*piVar4 + 0x110);
          guard_check_icall(this,0xfffffd43,local_44);
          (*pcVar3)();
          local_6c = local_3c;
          pcVar3 = *(code **)(*piVar4 + 0x110);
          guard_check_icall(this,0xfffffd34,local_44);
          (*pcVar3)();
          local_60 = (int)(short)local_3c;
          pcVar3 = *(code **)(*piVar4 + 0x110);
          guard_check_icall(this,0xfffffd3f,local_44);
          (*pcVar3)();
          local_5c = local_3c;
          pcVar3 = *(code **)(*piVar4 + 0x110);
          guard_check_icall(this,0xfffffd41,local_44);
          (*pcVar3)();
          puVar1 = (undefined4 *)*local_3c;
          guard_check_icall(local_3c,&DAT_005dbb40,&local_68);
          iVar5 = (*(code *)*puVar1)();
          if (iVar5 < 0) {
            local_68 = (int *)0x0;
          }
          local_2c = 0x18;
          iVar5 = *local_30;
          guard_check_icall(local_30,&local_88,&local_2c);
          iVar5 = (**(code **)(iVar5 + 0xc))();
          if (-1 < iVar5) {
            *(undefined4 *)(this + 0x70) = local_28;
            *(undefined4 *)(this + 0x60) = local_20;
            *(undefined4 *)(this + 100) = local_1c;
          }
          pcVar3 = *(code **)(*local_30 + 8);
          guard_check_icall(local_30);
          (*pcVar3)();
          if (local_68 != (int *)0x0) {
            pcVar3 = *(code **)(*local_68 + 8);
            guard_check_icall(local_68);
            (*pcVar3)();
          }
          Ordinal_9(local_44);
          goto LAB_00445a7f;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

