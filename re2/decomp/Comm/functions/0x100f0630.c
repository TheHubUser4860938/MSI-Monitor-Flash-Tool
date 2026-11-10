// rea decompile_all
// name: CMFCDropDownToolbarButton::DropDownToolbar
// address: 0x100f0630
// body: available
// range: 0x100f0630-0x100f070c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCDropDownToolbarButton::DropDownToolbar(class CWnd *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCDropDownToolbarButton::DropDownToolbar(CMFCDropDownToolbarButton *this,CWnd *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  tagPOINT local_1c;
  CObject *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x100f063c;
  iVar3 = 0;
  if (((*(int *)(this + 0x70) == 0) || (*(int *)(this + 0x78) != 0)) ||
     ((param_1 == (CWnd *)0x0 && (param_1 = *(CWnd **)(this + 0x6c), param_1 == (CWnd *)0x0)))) {
    return 0;
  }
  local_1c.x = 0;
  local_1c.y = 0;
  local_14 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_101d3640,
                                *(CObject **)(this + 0x6c));
  if (local_14 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)local_14 + 0x164);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      local_1c.y = *(LONG *)(this + 0x58);
      local_1c.x = *(int *)(this + 0x5c) + 1;
      goto LAB_100f06a4;
    }
  }
  local_1c.y = *(LONG *)(this + 0x60);
  local_1c.x = *(int *)(this + 0x54) + -1;
LAB_100f06a4:
  ClientToScreen(*(HWND *)(param_1 + 0x20),&local_1c);
  local_14 = (CObject *)FUN_10011f7d(0xe90);
  local_8 = 0;
  if (local_14 != (CObject *)0x0) {
    iVar3 = CMFCDropDownFrame::CMFCDropDownFrame((CMFCDropDownFrame *)local_14);
  }
  local_8 = 0xffffffff;
  *(int *)(this + 0x78) = iVar3;
  *(CMFCDropDownToolbarButton **)(iVar3 + 0x134) = this;
  pcVar1 = *(code **)(**(int **)(this + 0x78) + 0x1c8);
  guard_check_icall(param_1,local_1c.x,local_1c.y,*(undefined4 *)(this + 0x70));
  iVar3 = (*pcVar1)();
  return iVar3;
}

