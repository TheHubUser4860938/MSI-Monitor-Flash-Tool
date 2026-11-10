// rea decompile_all
// name: CMFCBaseTabCtrl::RemoveTab
// address: 0x1006afae
// body: available
// range: 0x1006afae-0x1006b19a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseTabCtrl::RemoveTab(int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCBaseTabCtrl::RemoveTab(CMFCBaseTabCtrl *this,int param_1,int param_2)

{
  code *pcVar1;
  CToolTipCtrl *this_00;
  CMFCBaseTabCtrl *pCVar2;
  int iVar3;
  int *piVar4;
  CMFCBaseTabCtrl *pCVar5;
  CMFCBaseTabCtrl *local_c;
  CMFCBaseTabCtrl *local_8;
  
  if ((param_1 < 0) || (*(int *)(this + 0xbc) <= param_1)) {
    iVar3 = 0;
  }
  else {
    local_c = this;
    local_8 = this;
    if (*(int *)(this + 0xbc) == 1) {
      pcVar1 = *(code **)(*(int *)this + 0x19c);
      guard_check_icall();
      (*pcVar1)();
    }
    else {
      piVar4 = (int *)FUN_100d7168(param_1);
      this_00 = *(CToolTipCtrl **)(this + 0xf8);
      pCVar5 = (CMFCBaseTabCtrl *)*piVar4;
      local_c = pCVar5;
      if ((this_00 != (CToolTipCtrl *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
        CToolTipCtrl::DelTool(this_00,(CWnd *)this,*(uint *)(pCVar5 + 0x28));
      }
      FUN_100cf268(param_1,1);
      *(int *)(this + 0xbc) = *(int *)(this + 0xbc) + -1;
      FUN_100ca1db(0,0xffffffff);
      if (*(int *)(this + 0x11c) != 0) {
        pcVar1 = *(code **)(**(int **)(pCVar5 + 0x20) + 0x60);
        guard_check_icall();
        (*pcVar1)();
        pCVar5 = local_c;
      }
      if (pCVar5 != (CMFCBaseTabCtrl *)0x0) {
        pcVar1 = *(code **)(*(int *)pCVar5 + 4);
        guard_check_icall(1);
        (*pcVar1)();
      }
      local_8 = *(CMFCBaseTabCtrl **)(this + 0xc0);
      if (param_1 <= (int)local_8) {
        if (*(int *)(this + 0x84) == 0) {
          pCVar5 = *(CMFCBaseTabCtrl **)(this + 0xbc);
          while (pCVar5 = pCVar5 + -1, -1 < (int)pCVar5) {
            piVar4 = (int *)FUN_100d7168(pCVar5);
            if ((((int)pCVar5 < param_1) && (-1 < (int)local_8)) &&
               ((int)local_8 < *(int *)(this + 0xbc))) break;
            if (*(int *)(*piVar4 + 0x34) != 0) {
              local_8 = pCVar5;
            }
          }
        }
        else {
          pcVar1 = *(code **)(*(int *)this + 0x25c);
          guard_check_icall(&local_8);
          (*pcVar1)();
        }
        *(undefined4 *)(this + 0xc0) = 0xffffffff;
      }
      pcVar1 = *(code **)(*(int *)this + 0x26c);
      guard_check_icall();
      (*pcVar1)();
      if (param_2 != 0) {
        pcVar1 = *(code **)(*(int *)this + 0x184);
        guard_check_icall();
        (*pcVar1)();
        if (local_8 != (CMFCBaseTabCtrl *)0xffffffff) {
          pCVar5 = local_8;
          if (((*(int *)(this + 0x1e8) != 0) &&
              (pCVar2 = *(CMFCBaseTabCtrl **)(this + 0x1e4), pCVar2 != (CMFCBaseTabCtrl *)0xffffffff
              )) && (pCVar5 = pCVar2, param_1 < (int)pCVar2)) {
            pCVar5 = pCVar2 + -1;
          }
          local_c = (CMFCBaseTabCtrl *)0xffffffff;
          pcVar1 = *(code **)(*(int *)this + 0x254);
          guard_check_icall(pCVar5,&local_c);
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)this + 0x214);
          guard_check_icall(local_c);
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)this + 0x270);
          guard_check_icall(*(undefined4 *)(this + 0xc0));
          (*pcVar1)();
        }
      }
    }
    iVar3 = 1;
  }
  return iVar3;
}

