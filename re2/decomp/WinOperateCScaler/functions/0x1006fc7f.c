// rea decompile_all
// name: CMFCToolBar::RemoveButton
// address: 0x1006fc7f
// body: available
// range: 0x1006fc7f-0x1006fe3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBar::RemoveButton(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBar::RemoveButton(CMFCToolBar *this,int param_1)

{
  code *pcVar1;
  __POSITION *p_Var2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  p_Var2 = CObList::FindIndex((CObList *)(this + 0xc3c),param_1);
  if ((p_Var2 == (__POSITION *)0x0) ||
     ((param_1 == *(int *)(this + 0xc48) + -1 && (*(int *)(this + 0xd14) != 0)))) {
    return 0;
  }
  piVar3 = *(int **)(p_Var2 + 8);
  FUN_10039ef3(p_Var2);
  pcVar1 = *(code **)(*piVar3 + 0x58);
  guard_check_icall();
  (*pcVar1)();
  pcVar1 = *(code **)(*piVar3 + 4);
  guard_check_icall(1);
  (*pcVar1)();
  iVar5 = *(int *)(this + 0xbf4);
  if (param_1 == iVar5) {
    *(undefined4 *)(this + 0xbf4) = 0xffffffff;
  }
  else if ((param_1 < iVar5) && (-1 < iVar5)) {
    *(int *)(this + 0xbf4) = iVar5 + -1;
  }
  iVar5 = *(int *)(this + 0xbec);
  if (param_1 == iVar5) {
    *(undefined4 *)(this + 0xbec) = 0xffffffff;
  }
  else if ((param_1 < iVar5) && (-1 < iVar5)) {
    *(int *)(this + 0xbec) = iVar5 + -1;
  }
  iVar5 = *(int *)(this + 0xbf0);
  if (param_1 == iVar5) {
    *(undefined4 *)(this + 0xbf0) = 0xffffffff;
    iVar5 = -1;
  }
  else {
    if ((iVar5 <= param_1) || (iVar5 < 0)) goto LAB_1006fd6b;
    iVar5 = iVar5 + -1;
    *(int *)(this + 0xbf0) = iVar5;
  }
  pcVar1 = *(code **)(*(int *)this + 0x3b0);
  guard_check_icall(iVar5);
  (*pcVar1)();
LAB_1006fd6b:
  local_8 = *(int *)(this + 0xc44);
  if (local_8 != 0) {
    if (*(int *)(this + 0xd14) == *(int *)(local_8 + 8)) {
      FUN_10039e35(&local_8);
    }
    iVar5 = local_8;
    if (local_8 != 0) {
      while( true ) {
        piVar3 = (int *)FUN_10039e35(&local_8);
        iVar4 = local_8;
        piVar3 = (int *)*piVar3;
        if ((local_8 == 0) || ((*(byte *)(piVar3 + 9) & 1) == 0)) break;
        FUN_10039ef3(iVar5);
        pcVar1 = *(code **)(*piVar3 + 4);
        guard_check_icall(1);
        (*pcVar1)();
        iVar5 = iVar4;
      }
    }
  }
  if ((0 < param_1) && (param_1 < *(int *)(this + 0xc48))) {
    iVar5 = FUN_1006a5a5(param_1 + -1);
    iVar4 = FUN_1006a5a5(param_1);
    if (((*(byte *)(iVar5 + 0x24) & 1) != 0) && ((*(byte *)(iVar4 + 0x24) & 1) != 0)) {
      pcVar1 = *(code **)(*(int *)this + 0x34c);
      guard_check_icall(param_1);
      (*pcVar1)();
    }
  }
  RebuildAccelerationKeys(this);
  return 1;
}

