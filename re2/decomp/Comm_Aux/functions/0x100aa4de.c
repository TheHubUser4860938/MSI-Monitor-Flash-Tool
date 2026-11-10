// rea decompile_all
// name: CScrollView::GetScrollBarState
// address: 0x100aa4de
// body: available
// range: 0x100aa4de-0x100aa5b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CScrollView::GetScrollBarState(class CSize,class CSize &,class CSize
   &,class CPoint &,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CScrollView::GetScrollBarState
          (CScrollView *this,int param_2,int param_3,uint *param_4,int *param_5,int *param_6,
          int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int local_18;
  int local_14;
  
  local_18 = 0;
  local_14 = 0;
  GetScrollBarSizes(this,(CSize *)&local_18);
  iVar1 = *(int *)(this + 0x98);
  param_5[1] = *(int *)(this + 0x9c) - param_3;
  *param_5 = iVar1 - param_2;
  piVar3 = (int *)GetDeviceScrollPosition(this);
  *param_6 = *piVar3;
  param_6[1] = piVar3[1];
  iVar1 = *param_5;
  uVar4 = (uint)(0 < iVar1);
  if (iVar1 < 1) {
    *param_6 = 0;
  }
  else if (param_7 != 0) {
    param_5[1] = param_5[1] + local_14;
  }
  iVar2 = param_5[1];
  if (iVar2 < 1) {
    param_6[1] = 0;
  }
  else if (param_7 != 0) {
    *param_5 = *param_5 + local_18;
  }
  if ((0 < iVar2) && (iVar1 < 1)) {
    if (*param_5 < 1) goto LAB_100aa598;
    uVar4 = 1;
    param_5[1] = param_5[1] + local_14;
  }
  iVar1 = *param_5;
  if ((0 < iVar1) && (iVar1 <= *param_6)) {
    *param_6 = iVar1;
  }
LAB_100aa598:
  iVar1 = param_5[1];
  if ((0 < iVar1) && (iVar1 <= param_6[1])) {
    param_6[1] = iVar1;
  }
  param_4[1] = (uint)(0 < iVar2);
  *param_4 = uVar4;
  return;
}

