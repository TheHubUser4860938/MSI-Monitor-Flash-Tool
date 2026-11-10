// rea decompile_all
// name: CMFCAutoHideButton::GetSize
// address: 0x101153d6
// body: available
// range: 0x101153d6-0x10115587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CSize __thiscall CMFCAutoHideButton::GetSize(void)const 
   
   Library: Visual Studio 2015 Release */

int * __thiscall CMFCAutoHideButton::GetSize(CMFCAutoHideButton *this)

{
  code *pcVar1;
  CDockingPanesRow *this_00;
  CMFCVisualManager *pCVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *in_stack_00000004;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  CMFCAutoHideButton *local_c;
  uint local_8;
  
  local_c = this;
  pCVar2 = CMFCVisualManager::GetInstance();
  pcVar1 = *(code **)(*(int *)pCVar2 + 0x1ac);
  guard_check_icall();
  local_18 = (*pcVar1)();
  iVar5 = DAT_10205e8c + DAT_10205e88 * 2;
  *in_stack_00000004 = iVar5;
  in_stack_00000004[1] = iVar5;
  local_10 = *(int **)(this + 0x2c);
  if (local_10 != (int *)0x0) {
    iVar5 = 0;
    local_8 = *(uint *)(this + 0x10) & 0xa000;
    pcVar1 = *(code **)(*local_10 + 0x1bc);
    guard_check_icall(0);
    local_14 = (*pcVar1)();
    pcVar1 = *(code **)(*(int *)local_c + 0x30);
    guard_check_icall(&local_20);
    (*pcVar1)();
    iVar6 = local_14;
    local_10 = (int *)0x0;
    if (local_14 != 0) {
      pAVar3 = GetGlobalData();
      iVar5 = *(int *)(pAVar3 + 0x114);
      local_10 = *(int **)(pAVar3 + 0x118);
    }
    if (local_18 == 0) {
      if (iVar6 == 0) {
        iVar6 = DAT_10205e94 + DAT_10205e8c;
      }
      else if (((local_20 < 1) || (local_8 == 0)) && ((local_1c < 1 || (local_8 != 0)))) {
        iVar6 = DAT_10205e8c + 1;
      }
      else {
        piVar4 = local_10;
        if ((*(uint *)(local_c + 0x10) & 0xa000) != 0) {
          piVar4 = (int *)iVar5;
        }
        iVar6 = DAT_10205e90 + (int)piVar4;
      }
    }
    else {
      if (local_8 == 0) {
        iVar6 = local_20;
        if (local_20 < iVar5) {
          iVar6 = iVar5;
        }
        iVar6 = *in_stack_00000004 + iVar6;
      }
      else {
        piVar4 = (int *)local_1c;
        if (local_1c < (int)local_10) {
          piVar4 = local_10;
        }
        iVar6 = in_stack_00000004[1] + (int)piVar4;
      }
      pAVar3 = GetGlobalData();
      iVar6 = (iVar6 * 2) / 3 + *(int *)(pAVar3 + 0x1cc);
    }
    if (local_8 == 0) {
      if (iVar5 <= local_20) {
        iVar5 = local_20;
      }
      *in_stack_00000004 = *in_stack_00000004 + iVar5;
      piVar4 = (int *)((int)local_10 + local_1c + iVar6);
    }
    else {
      *in_stack_00000004 = *in_stack_00000004 + local_20 + iVar5 + iVar6;
      piVar4 = local_10;
      if ((int)local_10 <= local_1c) {
        piVar4 = (int *)local_1c;
      }
    }
    in_stack_00000004[1] = in_stack_00000004[1] + (int)piVar4;
    this_00 = *(CDockingPanesRow **)(*(int *)(local_c + 0x28) + 0xbc);
    if (this_00 != (CDockingPanesRow *)0x0) {
      iVar5 = *(int *)(this_00 + 0x1c);
      iVar6 = CDockingPanesRow::GetMaxPaneSize(this_00,1);
      iVar6 = iVar6 - iVar5;
      if (local_8 == 0) {
        iVar5 = *in_stack_00000004;
        if (*in_stack_00000004 <= iVar6) {
          iVar5 = iVar6;
        }
        *in_stack_00000004 = iVar5;
      }
      else {
        iVar5 = in_stack_00000004[1];
        if (in_stack_00000004[1] <= iVar6) {
          iVar5 = iVar6;
        }
        in_stack_00000004[1] = iVar5;
      }
    }
  }
  return in_stack_00000004;
}

