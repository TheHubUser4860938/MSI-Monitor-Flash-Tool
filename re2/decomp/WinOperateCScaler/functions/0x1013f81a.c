// rea decompile_all
// name: FUN_1013f81a
// address: 0x1013f81a
// body: available
// range: 0x1013f81a-0x1013fa3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013fa38 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_1013f81a(int param_1)

{
  int *piVar1;
  AFX_GLOBAL_DATA *pAVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  CWnd *in_ECX;
  undefined4 uVar6;
  undefined4 uVar7;
  CMFCToolBarComboBoxButton *pCVar8;
  undefined1 local_14c [12];
  CWnd *local_140;
  int local_13c;
  CDC *local_138;
  int local_134;
  CMFCVisualManager *local_130;
  int *local_12c;
  CMFCToolBarComboBoxButton local_128 [244];
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x13c;
  local_8 = 0x1013f829;
  local_140 = in_ECX;
  if (*(int *)(in_ECX + 0x138) == 0) {
    FUN_1013ff16();
  }
  local_138 = CDC::FromHandle(*(HDC__ **)(param_1 + 0x18));
  CopyRect(&local_34,(RECT *)(param_1 + 0x1c));
  if (*(int *)(in_ECX + 0x9c) != 0) {
    pAVar2 = GetGlobalData();
    CMFCToolBarImages::SetTransparentColor
              (*(CMFCToolBarImages **)(in_ECX + 0x9c),*(ulong *)(pAVar2 + 0x1c));
    iVar3 = CMFCToolBarImages::PrepareDrawImage
                      (*(CMFCToolBarImages **)(in_ECX + 0x9c),local_14c,0,0,0);
    if (iVar3 == 0) goto LAB_1013fa1c;
    local_134 = *(int *)(in_ECX + 0x84);
    while (local_134 != 0) {
      local_12c = (int *)FUN_100972dc(&local_134);
      local_12c = (int *)*local_12c;
      if (local_12c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001d023();
      }
      local_24.left = local_12c[0x15];
      local_24.top = local_12c[0x16];
      local_24.right = local_12c[0x17];
      local_24.bottom = local_12c[0x18];
      OffsetRect(&local_24,0,-*(int *)(in_ECX + 300));
      piVar1 = local_12c;
      if (local_34.bottom <= local_24.top) break;
      if (local_34.top < local_24.bottom) {
        local_12c = (int *)0x0;
        local_13c = piVar1[9];
        local_130 = (CMFCVisualManager *)piVar1[0xf];
        iVar3 = CWnd::IsWindowEnabled(in_ECX);
        piVar4 = local_12c;
        if (iVar3 == 0) {
          piVar1[9] = piVar1[9] | 0x40000;
        }
        else if (piVar1 == *(int **)(in_ECX + 0x128)) {
          piVar4 = (int *)0x1;
        }
        iVar3 = *piVar1;
        piVar1[0xf] = 1;
        guard_check_icall(local_138,&local_24,*(undefined4 *)(in_ECX + 0x9c),1,0,piVar4,1,1);
        (**(code **)(iVar3 + 0x18))();
        piVar1[9] = local_13c;
        piVar1[0xf] = (int)local_130;
      }
    }
    FUN_1005bd4d(local_14c);
  }
  CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton(local_128);
  local_8 = 0;
  InflateRect(&local_34,1,1);
  local_130 = CMFCVisualManager::GetInstance();
  iVar3 = *(int *)local_130;
  pCVar8 = local_128;
  uVar7 = 1;
  uVar6 = 0;
  iVar5 = CWnd::IsWindowEnabled(local_140);
  guard_check_icall(local_138,local_34.left,local_34.top,local_34.right,local_34.bottom,iVar5 == 0,
                    uVar6,uVar7,pCVar8);
  (**(code **)(iVar3 + 0x70))();
  CMFCToolBarComboBoxButton::~CMFCToolBarComboBoxButton(local_128);
LAB_1013fa1c:
  FUN_10154478();
  return;
}

