// rea decompile_all
// name: CMFCToolBar::CalcLayout
// address: 0x1006877f
// body: available
// range: 0x1006877f-0x100689a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual class CSize __thiscall CMFCToolBar::CalcLayout(unsigned long,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::CalcLayout(CMFCToolBar *this,ulong param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int in_stack_0000000c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0xd14) != 0) {
    *(undefined4 *)(*(int *)(this + 0xd14) + 0xfc) = 0;
  }
  pcVar1 = *(code **)(*(int *)this + 0x41c);
  guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(this + 0xbe8) = uVar2;
  uVar6 = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  uVar7 = *(uint *)(this + 0x9c);
  if ((uVar7 & 2) != 0) goto LAB_1006886c;
  if ((uVar7 & 4) == 0) {
LAB_10068853:
    uVar7 = -(uint)((param_2 & 2U) != 0) & 0x7fff;
  }
  else if ((param_2 & 4U) == 0) {
    if ((param_2 & 8U) == 0) {
      if ((param_2 & 0x10U) == 0) {
        if (in_stack_0000000c == -1) {
          if ((uVar7 & 1) == 0) goto LAB_10068853;
          goto LAB_100687e8;
        }
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        SetRectEmpty(&local_18);
        CPane::CalcInsideRect((CPane *)this,(CRect *)&local_18,param_2 & 2);
        uVar6 = param_2 & 0x20;
        if (uVar6 == 0) {
          iVar3 = local_18.right - local_18.left;
        }
        else {
          iVar3 = local_18.bottom - local_18.top;
        }
        uVar7 = iVar3 + in_stack_0000000c;
      }
      else {
        uVar6 = 0;
        uVar7 = 0;
      }
    }
    else {
      uVar6 = 0;
      uVar7 = 0x7fff;
    }
  }
  else {
LAB_100687e8:
    uVar6 = 0;
    uVar7 = *(uint *)(this + 0x13c);
  }
  SizeToolBar(this,uVar7,uVar6);
LAB_1006886c:
  uVar7 = ~((uint)param_2 >> 1) & 1;
  pcVar1 = *(code **)(*(int *)this + 0x2a4);
  guard_check_icall(&local_18.right,uVar7);
  puVar4 = (undefined4 *)(*pcVar1)();
  *(undefined4 *)param_1 = *puVar4;
  *(undefined4 *)(param_1 + 4) = puVar4[1];
  iVar3 = *(int *)(this + 0xd14);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0xe8) < 1)) && (*(int *)(iVar3 + 0x11c) == 0)) {
    *(undefined4 *)(iVar3 + 0xfc) = 1;
    pcVar1 = *(code **)(*(int *)this + 0x2a4);
    guard_check_icall(&local_18.right,uVar7);
    puVar4 = (undefined4 *)(*pcVar1)();
    *(undefined4 *)param_1 = *puVar4;
    *(undefined4 *)(param_1 + 4) = puVar4[1];
  }
  if ((((param_2 & 0x40U) != 0) && (((byte)*(undefined4 *)(this + 0x9c) & 5) == 5)) &&
     ((param_2 & 2U) != 0)) {
    *(undefined4 *)(this + 0x13c) = *(undefined4 *)param_1;
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  CPane::CalcInsideRect((CPane *)this,(CRect *)&local_18,param_2 & 2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + (local_18.top - local_18.bottom);
  iVar3 = *(int *)(param_1 + 4);
  *(int *)param_1 = *(int *)param_1 + (local_18.left - local_18.right);
  iVar5 = *(int *)param_1;
  CBasePane::CalcFixedLayout((CBasePane *)this,(int)&local_18.right,param_2 & 1);
  if (iVar5 <= local_18.right) {
    iVar5 = local_18.right;
  }
  *(int *)param_1 = iVar5;
  if (iVar3 <= local_18.bottom) {
    iVar3 = local_18.bottom;
  }
  *(int *)(param_1 + 4) = iVar3;
  RebuildAccelerationKeys(this);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

