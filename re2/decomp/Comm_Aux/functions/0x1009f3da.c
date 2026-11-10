// rea decompile_all
// name: CMFCBaseTabCtrl::MoveTab
// address: 0x1009f3da
// body: available
// range: 0x1009f3da-0x1009f599 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCBaseTabCtrl::MoveTab(int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCBaseTabCtrl::MoveTab(CMFCBaseTabCtrl *this,int param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if ((param_1 != param_2) || (*(int *)(this + 0x138) != 0)) {
    puVar3 = (undefined4 *)FUN_10151a1d(param_1);
    uVar1 = *puVar3;
    piVar4 = (int *)FUN_10151a1d(*(undefined4 *)(this + 0xc0));
    iVar5 = *piVar4;
    if (*(int *)(this + 0x138) == 0) {
      if (param_2 == -1) {
        FUN_10067e65(*(undefined4 *)(this + 0x9c),uVar1);
        FUN_10105486(param_1,1);
      }
      else {
        FUN_10105486(param_1,1);
        FUN_10067c9f(param_2,uVar1,1);
      }
      if (0 < *(int *)(this + 0x9c)) {
        do {
          piVar4 = (int *)FUN_10151a1d(iVar6);
          if (iVar5 == *piVar4) {
            if (iVar6 != *(int *)(this + 0xc0)) {
              pcVar2 = *(code **)(*(int *)this + 0x214);
              guard_check_icall(iVar6);
              (*pcVar2)();
              pcVar2 = *(code **)(*(int *)this + 0x270);
              guard_check_icall(*(undefined4 *)(this + 0xc0));
              (*pcVar2)();
            }
            break;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(this + 0x9c));
      }
    }
    else {
      if ((*(int *)(this + 0xb0) != *(int *)(this + 0x9c)) &&
         (FUN_1017250c(0,0xffffffff), 0 < *(int *)(this + 0x9c))) {
        iVar5 = 0;
        do {
          FUN_10100265(*(undefined4 *)(this + 0xb0),iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(this + 0x9c));
      }
      if (param_2 == -1) {
        param_2 = *(int *)(this + 0x9c) + -1;
      }
      if (0 < *(int *)(this + 0xb0)) {
        do {
          piVar4 = (int *)FUN_10151a1d(iVar6);
          if (*piVar4 == param_1) {
            if (iVar6 != -1) {
              FUN_10105486(iVar6,1);
              FUN_10103747(param_2,param_1,1);
            }
            break;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(this + 0xb0));
      }
    }
    pcVar2 = *(code **)(*(int *)this + 0x184);
    guard_check_icall();
    (*pcVar2)();
  }
  return;
}

