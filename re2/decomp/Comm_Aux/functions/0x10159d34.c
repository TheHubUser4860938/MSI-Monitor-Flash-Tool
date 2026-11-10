// rea decompile_all
// name: FID_conflict:GetMinSizeLeft
// address: 0x10159d34
// body: available
// range: 0x10159d34-0x10159de9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: virtual void __thiscall CPaneContainer::GetMinSizeLeft(class CSize &)const 
    public: virtual void __thiscall CPaneContainer::GetMinSizeRight(class CSize &)const 
   
   Library: Visual Studio 2015 Release */

void FID_conflict_GetMinSizeLeft(int *param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = in_ECX;
  iVar2 = CPaneContainerManager::IsAutoHideMode(*(CPaneContainerManager **)(in_ECX + 0x1c));
  local_1c = 0;
  local_18 = 0;
  local_c = iVar2;
  if ((*(CWnd **)(in_ECX + 4) != (CWnd *)0x0) &&
     ((uVar3 = CWnd::GetExStyle(*(CWnd **)(in_ECX + 4)), (uVar3 & 0x10000000) != 0 || (iVar2 != 0)))
     ) {
    pcVar1 = *(code **)(**(int **)(in_ECX + 4) + 0x270);
    guard_check_icall(&local_1c);
    (*pcVar1)();
    in_ECX = local_8;
    iVar2 = local_c;
  }
  local_14 = 0;
  local_10 = 0;
  iVar4 = 0;
  iVar5 = 0;
  if ((*(CPaneContainer **)(in_ECX + 0x10) != (CPaneContainer *)0x0) &&
     ((iVar4 = CPaneContainer::IsVisible(*(CPaneContainer **)(in_ECX + 0x10)), iVar4 != 0 ||
      (iVar4 = local_10, iVar5 = local_14, iVar2 != 0)))) {
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x10) + 0x10);
    guard_check_icall(&local_14);
    (*pcVar1)();
    iVar4 = local_10;
    iVar5 = local_14;
  }
  if (local_1c <= iVar5) {
    local_1c = iVar5;
  }
  *param_1 = local_1c;
  if (local_18 <= iVar4) {
    local_18 = iVar4;
  }
  param_1[1] = local_18;
  return;
}

