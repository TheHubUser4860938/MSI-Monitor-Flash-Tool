// rea decompile_all
// name: CDockingPanesRow::ResolveIntersectionRect
// address: 0x4efee4
// body: available
// range: 0x4efee4-0x4f00a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockingPanesRow::ResolveIntersectionRect(class CPane *,bool)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockingPanesRow::ResolveIntersectionRect(CDockingPanesRow *this,CPane *param_1,bool param_2)

{
  code *pcVar1;
  __POSITION *p_Var2;
  __POSITION *p_Var3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  __POSITION *local_30;
  __POSITION *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  p_Var3 = CObList::Find((CObList *)(this + 0x24),(CObject *)param_1,(__POSITION *)0x0);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  GetWindowRect(this,(CRect *)&local_28);
joined_r0x004eff47:
  do {
    local_2c = p_Var3;
    if (local_2c == (__POSITION *)0x0) {
LAB_004f0092:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (param_2) {
      puVar4 = (undefined4 *)FUN_004ead48(&local_2c);
    }
    else {
      puVar4 = (undefined4 *)FUN_00434304(&local_2c);
    }
    local_30 = (__POSITION *)*puVar4;
    pcVar1 = *(code **)(*(int *)local_30 + 0x17c);
    guard_check_icall();
    iVar5 = (*pcVar1)();
    p_Var2 = local_30;
  } while ((iVar5 == 0) && (p_Var3 = local_2c, *(int *)(this + 4) == 0));
  local_30 = local_2c;
  local_18.left = *(LONG *)(p_Var2 + 0xa8);
  local_18.top = *(LONG *)(p_Var2 + 0xac);
  local_18.right = *(LONG *)(p_Var2 + 0xb0);
  local_18.bottom = *(LONG *)(p_Var2 + 0xb4);
  if (local_2c == (__POSITION *)0x0) goto LAB_004f0092;
  do {
    p_Var3 = local_30;
    if (param_2) {
      puVar4 = (undefined4 *)FUN_004ead48(&local_30);
    }
    else {
      puVar4 = (undefined4 *)FUN_00434304(&local_30);
    }
    p_Var2 = (__POSITION *)*puVar4;
    pcVar1 = *(code **)(*(int *)p_Var2 + 0x17c);
    local_2c = p_Var2;
    guard_check_icall();
    iVar5 = (*pcVar1)();
  } while (((iVar5 == 0) && (local_2c = p_Var2, *(int *)(this + 4) == 0)) &&
          (local_30 != (__POSITION *)0x0));
  if (local_2c == (__POSITION *)0x0) goto LAB_004f0092;
  if (param_2) {
    uVar6 = *(uint *)(this + 0x40) & 0xa000;
    if ((uVar6 != 0) && (local_18.right < *(int *)(local_2c + 0xa8))) goto joined_r0x004eff47;
    if (uVar6 == 0) {
      if (local_18.bottom < *(int *)(local_2c + 0xac)) goto joined_r0x004eff47;
      iVar5 = local_18.bottom - *(int *)(local_2c + 0xac);
    }
    else {
      iVar5 = local_18.right - *(int *)(local_2c + 0xa8);
    }
  }
  else {
    uVar6 = *(uint *)(this + 0x40) & 0xa000;
    if ((uVar6 != 0) && (*(int *)(local_2c + 0xb0) < local_18.left)) goto joined_r0x004eff47;
    if (uVar6 == 0) {
      if (*(int *)(local_2c + 0xb4) < local_18.top) goto joined_r0x004eff47;
      iVar5 = *(int *)(local_2c + 0xb4) - local_18.top;
    }
    else {
      iVar5 = *(int *)(local_2c + 0xb0) - local_18.left;
    }
  }
  MovePaneRect(this,(CPane *)local_2c,iVar5,param_2);
  goto joined_r0x004eff47;
}

