// rea decompile_all
// name: CAutoHideDockSite::UnSetAutoHideMode
// address: 0x101350fd
// body: available
// range: 0x101350fd-0x10135215 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013515d to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CAutoHideDockSite::UnSetAutoHideMode(class CMFCAutoHideBar *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CAutoHideDockSite::UnSetAutoHideMode(CAutoHideDockSite *this,CMFCAutoHideBar *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  CDockingPanesRow *this_00;
  CObject *this_01;
  CObList *this_02;
  int *piVar4;
  undefined4 *puVar5;
  CObList local_4c [4];
  undefined4 *local_48;
  int local_40;
  CObList local_30 [4];
  int *local_2c;
  CDockablePane *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x10135109;
  if (param_1 == (CMFCAutoHideBar *)0x0) {
    CObList::CObList(local_30,10);
    local_8 = 0;
    FUN_10039da7(this + 0x110);
    piVar4 = local_2c;
    if (local_2c != (int *)0x0) {
      do {
        if (piVar4 == (int *)0x0) goto LAB_1013515d;
        piVar2 = (int *)*piVar4;
        if (*(int *)(piVar4[2] + 0x114) == 0) {
          FUN_10039ef3(piVar4);
        }
        piVar4 = piVar2;
      } while (piVar2 != (int *)0x0);
      while (local_2c != (int *)0x0) {
        if (local_2c == (int *)0x0) {
LAB_1013515d:
                    /* WARNING: Subroutine does not return */
          FUN_1001d023();
        }
        piVar4 = (int *)*local_2c;
        UnSetAutoHideMode(this,(CMFCAutoHideBar *)local_2c[2]);
        local_2c = piVar4;
      }
    }
    this_02 = local_30;
  }
  else {
    this_00 = CDockSite::RowFromPane((CDockSite *)this,(CBasePane *)param_1);
    CObList::CObList(local_4c,10);
    bVar3 = true;
    local_8 = 1;
    if (this_00 != (CDockingPanesRow *)0x0) {
      CDockingPanesRow::GetGroupFromPane(this_00,(CPane *)param_1,local_4c);
    }
    if (local_40 == 0) {
      CMFCAutoHideBar::UnSetAutoHideMode(param_1,(CDockablePane *)0x0);
    }
    else {
      local_14 = (CDockablePane *)0x0;
      puVar5 = local_48;
      while (puVar5 != (undefined4 *)0x0) {
        if (puVar5 == (undefined4 *)0x0) goto LAB_1013515d;
        puVar1 = puVar5 + 2;
        puVar5 = (undefined4 *)*puVar5;
        this_01 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCAutoHideBar_101cbc8c,
                                     (CObject *)*puVar1);
        if (this_01 != (CObject *)0x0) {
          if (bVar3) {
            local_14 = CMFCAutoHideBar::GetFirstAHWindow((CMFCAutoHideBar *)this_01);
            CMFCAutoHideBar::UnSetAutoHideMode((CMFCAutoHideBar *)this_01,(CDockablePane *)0x0);
            bVar3 = false;
          }
          else {
            CMFCAutoHideBar::UnSetAutoHideMode((CMFCAutoHideBar *)this_01,local_14);
          }
        }
      }
    }
    this_02 = local_4c;
  }
  CObList::~CObList(this_02);
  return;
}

