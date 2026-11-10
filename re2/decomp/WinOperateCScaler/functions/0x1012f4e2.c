// rea decompile_all
// name: CPaneContainer::Move
// address: 0x1012f4e2
// body: available
// range: 0x1012f4e2-0x1012f68f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainer::Move(class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneContainer::Move(CPaneContainer *this,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  SetRectEmpty(&local_28);
  uVar4 = extraout_EDX;
  if (*(int *)(this + 4) != 0) {
    ::GetWindowRect(*(HWND *)(*(int *)(this + 4) + 0x20),&local_18);
    pcVar1 = *(code **)(**(int **)(this + 4) + 0x238);
    guard_check_icall(0,param_2,param_3,0,0,0x15,0);
    (*pcVar1)();
    uVar4 = extraout_EDX_00;
  }
  if (*(int **)(this + 0x10) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x10) + 0xc);
    guard_check_icall(&local_18,0);
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(this + 0x10) + 0x30);
    guard_check_icall(param_2,param_3);
    (*pcVar1)();
    uVar4 = extraout_EDX_01;
  }
  iVar5 = local_18.right - local_18.left;
  iVar3 = local_18.bottom - local_18.top;
  iVar2 = iVar5;
  if (*(int **)(this + 0xc) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0xc) + 0x164);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(this + 0xc) + 0x238);
    if (iVar2 == 0) {
      guard_check_icall(0,param_2 + iVar5,param_3,0,0,0x15,0);
      iVar2 = iVar5;
      (*pcVar1)();
      iVar5 = iVar2 + *(int *)(*(int *)(this + 0xc) + 0x118);
      iVar3 = 0;
      uVar4 = extraout_EDX_03;
    }
    else {
      guard_check_icall(0,param_2,param_3 + iVar3,0,0,0x15,0);
      iVar2 = iVar5;
      (*pcVar1)();
      iVar3 = iVar3 + *(int *)(*(int *)(this + 0xc) + 0x118);
      iVar5 = 0;
      uVar4 = extraout_EDX_02;
    }
  }
  piVar6 = *(int **)(this + 8);
  if (piVar6 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar6 + 0x238);
    guard_check_icall(0,param_2 + iVar5,param_3 + iVar3,0,0,0x15,0);
    (*pcVar1)();
    uVar4 = extraout_EDX_04;
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x14) + 0x30);
    guard_check_icall(param_2 + iVar5,param_3 + iVar3);
    (*pcVar1)();
    uVar4 = extraout_EDX_05;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar4,iVar2,piVar6);
  return;
}

