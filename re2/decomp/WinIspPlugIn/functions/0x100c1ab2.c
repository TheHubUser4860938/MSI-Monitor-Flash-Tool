// rea decompile_all
// name: CMFCColorBar::Rebuild
// address: 0x100c1ab2
// body: available
// range: 0x100c1ab2-0x100c1dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCColorBar::Rebuild(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCColorBar::Rebuild(CMFCColorBar *this)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  int local_14;
  
  if ((this != (CMFCColorBar *)0x0) && (*(int *)(this + 0x20) != 0)) {
    pcVar1 = *(code **)(*(int *)this + 0x350);
    guard_check_icall();
    (*pcVar1)();
    bVar8 = false;
    if (*(int *)(*(int *)(this + 0xe50) + -0xc) != 0) {
      iVar2 = FUN_100491ae(0x90);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_100bf99d(*(undefined4 *)(this + 0xe4c),1,0,*(undefined4 *)(this + 0xe50),
                             *(int *)(this + 0xe48) == -1,0,0);
      }
      pcVar1 = *(code **)(*(int *)this + 0x340);
      guard_check_icall(uVar3,0xffffffff);
      (*pcVar1)();
      bVar8 = *(int *)(this + 0xe48) == -1;
    }
    local_14 = 0;
    if (0 < *(int *)(this + 0xe10)) {
      do {
        iVar2 = FUN_100491ae(0x90);
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          piVar4 = (int *)FUN_100efaed(local_14);
          puVar5 = (undefined4 *)FUN_100efaed(local_14);
          uVar3 = FUN_100bf99d(*puVar5,0,0,0,*(int *)(this + 0xe48) == *piVar4,0,0);
        }
        pcVar1 = *(code **)(*(int *)this + 0x340);
        guard_check_icall(uVar3,0xffffffff);
        (*pcVar1)();
        if (!bVar8) {
          piVar4 = (int *)FUN_100efaed(local_14);
          bVar8 = *(int *)(this + 0xe48) == *piVar4;
        }
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(this + 0xe10));
    }
    uVar3 = 0;
    if ((*(int *)(*(int *)(this + 0xe58) + -0xc) != 0) && (*(int *)(this + 0xe28) != 0)) {
      pcVar1 = *(code **)(*(int *)this + 0x348);
      guard_check_icall(0xffffffff);
      (*pcVar1)();
      iVar2 = FUN_100491ae(0x90);
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_100bfa1b(*(undefined4 *)(this + 0xe58),1);
      }
      pcVar1 = *(code **)(*(int *)this + 0x340);
      guard_check_icall(uVar6,0xffffffff);
      (*pcVar1)();
      puVar5 = *(undefined4 **)(this + 0xe20);
      while (puVar5 != (undefined4 *)0x0) {
        iVar2 = puVar5[2];
        puVar5 = (undefined4 *)*puVar5;
        iVar7 = FUN_100491ae(0x90);
        if (iVar7 == 0) {
          uVar6 = 0;
        }
        else {
          if ((bVar8) || (*(int *)(this + 0xe48) != iVar2)) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          uVar6 = FUN_100bf99d(iVar2,0,0,0,uVar6,1,0);
        }
        pcVar1 = *(code **)(*(int *)this + 0x340);
        guard_check_icall(uVar6,0xffffffff);
        (*pcVar1)();
      }
    }
    if (*(int *)(*(int *)(this + 0xe54) + -0xc) != 0) {
      pcVar1 = *(code **)(*(int *)this + 0x348);
      guard_check_icall(0xffffffff);
      (*pcVar1)();
      iVar2 = FUN_100491ae(0x90);
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_100bf99d(0xffffffff,0,1,*(undefined4 *)(this + 0xe54),0,0,0);
      }
      pcVar1 = *(code **)(*(int *)this + 0x340);
      guard_check_icall(uVar6,0xffffffff);
      (*pcVar1)();
      iVar2 = FUN_100491ae(0x90);
      if (iVar2 != 0) {
        uVar3 = FUN_100bf99d(*(undefined4 *)(this + 0xe48),0,0,0,!bVar8,0,1);
      }
      pcVar1 = *(code **)(*(int *)this + 0x340);
      guard_check_icall(uVar3,0xffffffff);
      (*pcVar1)();
    }
  }
  return;
}

