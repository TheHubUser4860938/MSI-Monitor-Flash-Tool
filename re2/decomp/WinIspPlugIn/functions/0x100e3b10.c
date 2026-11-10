// rea decompile_all
// name: CDockingManager::DockPane
// address: 0x100e3b10
// body: available
// range: 0x100e3b10-0x100e3cd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDockingManager::DockPane(class CBasePane *,unsigned int,struct tagRECT
   const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockingManager::DockPane(CDockingManager *this,CBasePane *param_1,uint param_2,tagRECT *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  CDockingManager *local_8;
  
  if (*(int *)(this + 0x2c) != 0) {
    uVar9 = 1;
    pcVar6 = *(code **)(*(int *)param_1 + 0x240);
    local_8 = this;
    guard_check_icall(1);
    (*pcVar6)();
    pcVar6 = *(code **)(*(int *)param_1 + 0x1d0);
    guard_check_icall();
    iVar2 = (*pcVar6)();
    if (iVar2 == 0) {
      pcVar6 = *(code **)(*(int *)param_1 + 0x1cc);
      guard_check_icall(uVar9);
      iVar2 = (*pcVar6)();
      if (iVar2 == 0) {
        AddPane(this,param_1,1,0,0);
        return;
      }
    }
    pcVar6 = *(code **)(*(int *)param_1 + 0x198);
    guard_check_icall();
    local_8 = (CDockingManager *)(*pcVar6)();
    pcVar6 = *(code **)(*(int *)param_1 + 0x178);
    guard_check_icall();
    iVar2 = (*pcVar6)();
    if (iVar2 == 0) {
      local_8 = *(CDockingManager **)(this + 0x24);
joined_r0x100e3c22:
      do {
        do {
          if (local_8 == (CDockingManager *)0x0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_100c321b(&local_8);
          piVar1 = (int *)*puVar5;
          iVar2 = FUN_10051e53(&PTR_s_CDockSite_101ec5c4);
        } while (iVar2 == 0);
        if (param_2 != 0) {
          pcVar6 = *(code **)(*piVar1 + 0x2ac);
          guard_check_icall();
          uVar3 = (*pcVar6)();
          if (uVar3 != param_2) goto joined_r0x100e3c22;
        }
        pcVar6 = *(code **)(*(int *)param_1 + 0x188);
        guard_check_icall(piVar1);
        iVar2 = (*pcVar6)();
        if (iVar2 == 0) goto joined_r0x100e3c22;
        pcVar6 = *(code **)(*piVar1 + 0x184);
        guard_check_icall(param_1);
        iVar2 = (*pcVar6)();
        if (iVar2 == 0) goto joined_r0x100e3c22;
        pcVar6 = *(code **)(*(int *)param_1 + 0x1f8);
        guard_check_icall(piVar1,param_3,4);
        iVar2 = (*pcVar6)();
      } while (iVar2 == 0);
      InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
    }
    else if (param_2 == 0) {
      iVar2 = *(int *)param_1;
      uVar7 = 0xffffffff;
      pcVar6 = *(code **)(iVar2 + 0x194);
      uVar9 = 1;
      uVar8 = param_2;
      guard_check_icall(param_3,1,0,0xffffffff,0);
      uVar3 = (*pcVar6)();
      pcVar6 = *(code **)(iVar2 + 0x200);
LAB_100e3c0a:
      guard_check_icall(uVar3,param_3,uVar9,param_2,uVar7,uVar8);
      (*pcVar6)();
    }
    else {
      puVar4 = &DAT_101e8f48;
      do {
        uVar3 = puVar4[1];
        if ((param_2 == *puVar4) && (((uint)local_8 & uVar3) != 0)) {
          uVar8 = 0;
          uVar7 = 0xffffffff;
          param_2 = 0;
          pcVar6 = *(code **)(*(int *)param_1 + 0x200);
          uVar9 = 1;
          goto LAB_100e3c0a;
        }
        puVar4 = puVar4 + 2;
      } while ((int)puVar4 < 0x101e8f68);
    }
  }
  return;
}

