// rea decompile_all
// name: CMFCBaseTabCtrl::accDoDefaultAction
// address: 0x100a17f8
// body: available
// range: 0x100a17f8-0x100a188a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual long __thiscall CMFCBaseTabCtrl::accDoDefaultAction(struct tagVARIANT)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCBaseTabCtrl::accDoDefaultAction
          (CMFCBaseTabCtrl *this,short param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == 3) {
    if (param_4 != 0) {
      iVar5 = 0;
      iVar6 = 0;
      if (0 < *(int *)(this + 0xbc)) {
        do {
          piVar3 = (int *)FUN_10151a1d(iVar6);
          if ((*(int *)(*piVar3 + 0x34) != 0) &&
             (BVar4 = IsRectEmpty((RECT *)(*piVar3 + 0x10)), BVar4 == 0)) {
            if (iVar5 == param_4) {
              pcVar1 = *(code **)(*(int *)this + 0x214);
              guard_check_icall(iVar6);
              (*pcVar1)();
              pcVar1 = *(code **)(*(int *)this + 0x270);
              guard_check_icall(*(undefined4 *)(this + 0xc0));
              (*pcVar1)();
              break;
            }
            iVar5 = iVar5 + 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(this + 0xbc));
      }
    }
    lVar2 = 0;
  }
  else {
    lVar2 = -0x7ff8ffa9;
  }
  return lVar2;
}

