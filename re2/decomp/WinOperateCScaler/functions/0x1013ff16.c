// rea decompile_all
// name: FUN_1013ff16
// address: 0x1013ff16
// body: available
// range: 0x1013ff16-0x10140150 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1014014c to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_1013ff16(void)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  CWnd *in_ECX;
  int iVar4;
  CClientDC local_7c [20];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  CMFCToolBarButton *local_50;
  CWnd *local_4c;
  int local_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x1013ff22;
  local_4c = in_ECX;
  if (((in_ECX != (CWnd *)0x0) && (*(int *)(in_ECX + 0x20) != 0)) && (*(int *)(in_ECX + 0x8c) != 0))
  {
    local_44.left = 0;
    local_44.top = 0;
    local_44.right = 0;
    local_44.bottom = 0;
    GetClientRect(*(HWND *)(in_ECX + 0x20),&local_44);
    local_24.left = local_44.left;
    local_24.top = local_44.top;
    local_24.right = local_44.right;
    local_24.bottom = local_44.bottom;
    iVar2 = GetSystemMetrics(2);
    local_24.right = local_24.right + (-1 - iVar2);
    InflateRect(&local_24,-4,-5);
    iVar2 = local_24.top - *(int *)(in_ECX + 300);
    local_54 = local_24.left;
    local_48 = iVar2;
    CClientDC::CClientDC(local_7c,in_ECX);
    local_58 = *(int *)(in_ECX + 0x84);
    local_8 = 0;
    while (local_58 != 0) {
      piVar3 = (int *)FUN_100972dc(&local_58);
      local_50 = (CMFCToolBarButton *)*piVar3;
      if (local_50 == (CMFCToolBarButton *)0x0) goto LAB_1014014c;
      iVar4 = *(int *)local_50;
      guard_check_icall(&local_34.right,local_7c,in_ECX + 0xa0,1);
      piVar3 = (int *)(**(code **)(iVar4 + 0x1c))();
      iVar4 = *piVar3;
      local_68 = local_54;
      if (local_24.right < iVar4 + local_54) {
        if (local_54 == local_24.left) {
          iVar4 = local_24.right - local_24.left;
        }
        else {
          iVar2 = iVar2 + 5 + piVar3[1];
          local_68 = local_24.left;
          local_48 = iVar2;
        }
      }
      local_5c = *(int *)(in_ECX + 0xa4) + iVar2;
      iVar4 = iVar4 + local_68;
      local_64 = iVar2;
      local_60 = iVar4;
      CMFCToolBarButton::SetRect(local_50,local_68,iVar2,iVar4,local_5c);
      local_54 = iVar4 + 4;
      iVar2 = local_48;
      in_ECX = local_4c;
    }
    if (*(int *)(*(int *)(in_ECX + 0x88) + 8) == 0) {
LAB_1014014c:
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    local_48 = (local_24.bottom - local_24.top) / (*(int *)(in_ECX + 0xa4) + 5);
    local_4c = (CWnd *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x88) + 8) + 0x60) /
                        (*(int *)(in_ECX + 0xa4) + 5) - local_48);
    if (0 < (int)local_4c) {
      if ((in_ECX + 0xa8 == (CWnd *)0x0) || (*(int *)(in_ECX + 200) == 0)) {
        local_34.left = 0;
        local_34.top = 0;
        local_34.right = 0;
        local_34.bottom = 0;
        GetClientRect(*(HWND *)(in_ECX + 0x20),&local_34);
        InflateRect(&local_34,-1,-1);
        iVar2 = GetSystemMetrics(2);
        local_34.left = (local_34.right - iVar2) + -1;
        pcVar1 = *(code **)(*(int *)(in_ECX + 0xa8) + 0x164);
        guard_check_icall(0x50000001,&local_34,in_ECX,1);
        (*pcVar1)();
      }
      iVar2 = (*(int *)(in_ECX + 0xa4) + 5) * (int)local_4c;
      *(int *)(in_ECX + 0x134) = local_48;
      *(int *)(in_ECX + 0x130) = iVar2;
      CWnd::SetScrollRange(in_ECX,1,0,iVar2,1);
    }
    *(undefined4 *)(in_ECX + 0x138) = 1;
    CClientDC::~CClientDC(local_7c);
  }
  FUN_10154478();
  return;
}

