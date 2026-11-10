// rea decompile_all
// name: CDockablePane::OnNcCalcSize
// address: 0x10101290
// body: available
// range: 0x10101290-0x10101587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockablePane::OnNcCalcSize(int,struct tagNCCALCSIZE_PARAMS *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockablePane::OnNcCalcSize(CDockablePane *this,int param_1,tagNCCALCSIZE_PARAMS *param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_58;
  int local_54;
  int local_4c;
  tagRECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  FUN_100283ad();
  pcVar1 = *(code **)(*(int *)this + 0x170);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x1a4);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    CopyRect(&local_18,(RECT *)param_2);
    local_18.top = local_18.top + iVar2;
    CMFCCaptionButton::GetSize();
    iVar8 = 0;
    local_60 = (local_18.right - DAT_10201b94) - local_6c;
    local_28.left = 0;
    iVar4 = (((iVar2 - local_68) / 2 - *(int *)(this + 0x2d4)) - iVar2) + local_18.top;
    local_64 = local_18.left + DAT_10201b94;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_28);
    CWnd::ScreenToClient((CWnd *)this,&local_28);
    pcVar1 = *(code **)(*(int *)this + 0x1d4);
    guard_check_icall();
    iVar5 = (*pcVar1)();
    if (iVar2 < 1) {
      if (0 < *(int *)(this + 0x33c)) {
        do {
          piVar3 = (int *)FUN_1009f8c7(iVar8);
          iVar8 = iVar8 + 1;
          *(undefined4 *)(*piVar3 + 0xc) = 1;
        } while (iVar8 < *(int *)(this + 0x33c));
      }
    }
    else {
      local_58 = 0;
      if (0 < *(int *)(this + 0x33c)) {
        do {
          piVar3 = (int *)FUN_1009f8c7(local_58);
          iVar2 = *piVar3;
          iVar8 = FUN_10168326();
          if ((iVar5 == 0) && (iVar8 == 9)) {
LAB_10101401:
            local_4c = 1;
          }
          else {
            pcVar1 = *(code **)(*(int *)this + 0x1c8);
            guard_check_icall();
            iVar6 = (*pcVar1)();
            if ((iVar6 == 0) && (iVar8 == 0x13)) goto LAB_10101401;
            local_4c = 0;
          }
          if ((DAT_1020b530 == 0) && (iVar8 == 8)) {
            local_4c = 1;
          }
          *(undefined4 *)(iVar2 + 4) = 0;
          *(undefined4 *)(iVar2 + 8) = 0;
          if (*(int *)(iVar2 + 0x18) == 0) {
            CopyRect(&local_38,(RECT *)param_2);
            *(int *)(iVar2 + 0x28) = iVar4 - local_38.top;
            *(int *)(iVar2 + 0x24) = local_60 - local_38.left;
            *(int *)(iVar2 + 0xc) = local_4c;
            if (local_4c == 0) {
              local_60 = local_60 + (-2 - local_6c);
            }
          }
          else {
            CopyRect(&local_48,(RECT *)param_2);
            *(int *)(iVar2 + 0x28) = iVar4 - local_48.top;
            *(int *)(iVar2 + 0x24) = local_64 - local_48.left;
            *(int *)(iVar2 + 0xc) = local_4c;
            if (local_4c == 0) {
              local_64 = local_64 + 2 + local_6c;
            }
          }
          local_58 = local_58 + 1;
        } while (local_58 < *(int *)(this + 0x33c));
      }
      local_54 = 0;
      if (0 < *(int *)(this + 0x33c)) {
        do {
          piVar3 = (int *)FUN_1009f8c7(local_54);
          piVar3 = (int *)*piVar3;
          if (piVar3[6] != 0) {
            CopyRect(&local_38,(RECT *)param_2);
            pcVar1 = *(code **)(*piVar3 + 0xc);
            guard_check_icall(&local_48);
            piVar7 = (int *)(*pcVar1)();
            piVar3[3] = (uint)(local_60 <= *piVar7 + local_38.left);
          }
          local_54 = local_54 + 1;
        } while (local_54 < *(int *)(this + 0x33c));
      }
    }
    if (local_18.right <= local_18.left) {
      local_18.right = local_18.left;
    }
    if (local_18.bottom <= local_18.top) {
      local_18.bottom = local_18.top;
    }
    *(LONG *)param_2 = local_18.left;
    *(LONG *)(param_2 + 4) = local_18.top;
    *(LONG *)(param_2 + 8) = local_18.right;
    *(LONG *)(param_2 + 0xc) = local_18.bottom;
    UpdateTooltips(this);
  }
  else {
    iVar2 = 0;
    if (0 < *(int *)(this + 0x33c)) {
      do {
        piVar3 = (int *)FUN_1009f8c7(iVar2);
        iVar2 = iVar2 + 1;
        *(undefined4 *)(*piVar3 + 0xc) = 1;
      } while (iVar2 < *(int *)(this + 0x33c));
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

