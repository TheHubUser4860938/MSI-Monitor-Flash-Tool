// rea decompile_all
// name: CDockingPanesRow::ResolveIntersection
// address: 0x4efd28
// body: available
// range: 0x4efd28-0x4efee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: void __thiscall CDockingPanesRow::ResolveIntersection(class CPane *,bool,void * &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockingPanesRow::ResolveIntersection
          (CDockingPanesRow *this,CPane *param_1,bool param_2,void **param_3)

{
  code *pcVar1;
  __POSITION *p_Var2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  CPane *pCVar7;
  __POSITION *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  p_Var2 = CObList::Find((CObList *)(this + 0x24),(CObject *)param_1,(__POSITION *)0x0);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  GetWindowRect(this,(CRect *)&local_38);
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
joined_r0x004efd99:
  do {
    local_3c = p_Var2;
    if (local_3c == (__POSITION *)0x0) {
LAB_004efed1:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (param_2) {
      piVar3 = (int *)FUN_004ead48(&local_3c);
    }
    else {
      piVar3 = (int *)FUN_00434304(&local_3c);
    }
    piVar3 = (int *)*piVar3;
    pcVar1 = *(code **)(*piVar3 + 0x17c);
    guard_check_icall();
    iVar4 = (*pcVar1)();
  } while ((iVar4 == 0) && (p_Var2 = local_3c, *(int *)(this + 4) == 0));
  ::GetWindowRect((HWND)piVar3[8],&local_18);
  if (local_3c == (__POSITION *)0x0) goto LAB_004efed1;
  do {
    p_Var2 = local_3c;
    if (param_2) {
      puVar5 = (undefined4 *)FUN_004ead48(&local_3c);
    }
    else {
      puVar5 = (undefined4 *)FUN_00434304(&local_3c);
    }
    pCVar7 = (CPane *)*puVar5;
    pcVar1 = *(code **)(*(int *)pCVar7 + 0x17c);
    guard_check_icall();
    iVar4 = (*pcVar1)();
  } while (((iVar4 == 0) && (*(int *)(this + 4) == 0)) &&
          (pCVar7 = (CPane *)0x0, local_3c != (__POSITION *)0x0));
  if (pCVar7 == (CPane *)0x0) goto LAB_004efed1;
  ::GetWindowRect(*(HWND *)(pCVar7 + 0x20),&local_28);
  if (param_2) {
    uVar6 = *(uint *)(this + 0x40) & 0xa000;
    if ((uVar6 != 0) && (local_18.right < local_28.left)) goto joined_r0x004efd99;
    if (uVar6 == 0) {
      if (local_18.bottom < local_28.top) goto joined_r0x004efd99;
      iVar4 = local_18.bottom - local_28.top;
    }
    else {
      iVar4 = local_18.right - local_28.left;
    }
  }
  else {
    uVar6 = *(uint *)(this + 0x40) & 0xa000;
    if ((uVar6 != 0) && (local_28.right < local_18.left)) goto joined_r0x004efd99;
    if (uVar6 == 0) {
      if (local_28.bottom < local_18.top) goto joined_r0x004efd99;
      iVar4 = local_28.bottom - local_18.top;
    }
    else {
      iVar4 = local_28.right - local_18.left;
    }
  }
  MovePane(this,pCVar7,iVar4,param_2,param_3);
  goto joined_r0x004efd99;
}

