// rea decompile_all
// name: CMFCToolTipCtrl::GetIconSize
// address: 0x101382f3
// body: available
// range: 0x101382f3-0x10138441 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCToolTipCtrl::GetIconSize(void)
   
   Library: Visual Studio 2015 Release */

int * __thiscall CMFCToolTipCtrl::GetIconSize(CMFCToolTipCtrl *this)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *in_stack_00000004;
  undefined1 local_10 [8];
  int *local_8;
  
  if (*(int **)(this + 0xac) == (int *)0x0) {
    iVar2 = *(int *)(this + 0xa8);
    iVar5 = 0;
    if (((iVar2 != 0) && (iVar4 = *(int *)(this + 0xa4), iVar4 != 0)) && (*(int *)(iVar4 + 4) != 0))
    {
      if (*(int *)(iVar2 + 4) == 0) {
        iVar2 = *(int *)(iVar2 + 0x34);
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x38);
      }
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else {
        iVar5 = *(int *)(iVar4 + 0x54);
        iVar2 = *(int *)(iVar4 + 0x58);
      }
      goto LAB_101383e1;
    }
  }
  else {
    pcVar1 = *(code **)(**(int **)(this + 0xac) + 0x268);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    iVar5 = 0;
    if (iVar2 != 0) {
      local_8 = *(int **)(this + 0xac);
      if (local_8[0x57] != 0) {
        iVar5 = local_8[100];
        *(uint *)(this + 0xe4) = (uint)(iVar5 == 0);
        pcVar1 = *(code **)(*local_8 + 0x114);
        guard_check_icall(in_stack_00000004,(uint)(iVar5 == 0));
        (*pcVar1)();
        return in_stack_00000004;
      }
      iVar2 = 0;
      iVar4 = 0;
      if ((local_8[100] != 0) && (-1 < local_8[0x52])) {
        pcVar1 = *(code **)(*local_8 + 0x114);
        guard_check_icall(local_10,0);
        piVar3 = (int *)(*pcVar1)();
        iVar2 = *piVar3;
        iVar4 = piVar3[1];
      }
      if ((iVar2 != 0) || (iVar4 != 0)) {
        *(undefined4 *)(this + 0xe4) = 0;
        *in_stack_00000004 = iVar2;
        in_stack_00000004[1] = iVar4;
        return in_stack_00000004;
      }
      local_8 = *(int **)(this + 0xac);
      iVar2 = 0;
      if (-1 < local_8[0x51]) {
        pcVar1 = *(code **)(*local_8 + 0x114);
        guard_check_icall(local_10,1);
        piVar3 = (int *)(*pcVar1)();
        iVar5 = *piVar3;
        iVar2 = piVar3[1];
      }
      *(undefined4 *)(this + 0xe4) = 1;
LAB_101383e1:
      in_stack_00000004[1] = iVar2;
      goto LAB_10138437;
    }
  }
  iVar5 = 0;
  in_stack_00000004[1] = 0;
LAB_10138437:
  *in_stack_00000004 = iVar5;
  return in_stack_00000004;
}

