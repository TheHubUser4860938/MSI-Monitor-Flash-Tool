// rea decompile_all
// name: CMFCToolBar::EnableContextMenuItems
// address: 0x452807
// body: available
// range: 0x452807-0x452991 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::EnableContextMenuItems(class CMFCToolBarButton
   *,class CMenu *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBar::EnableContextMenuItems(CMFCToolBar *this,CMFCToolBarButton *param_1,CMenu *param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  CMFCToolBarButton *pCVar4;
  UINT uIDCheckItem;
  uint local_c;
  CMFCToolBar *local_8;
  
  local_c = *(uint *)(this + 0x9c) & 0xa000;
  pcVar1 = *(code **)(*(int *)param_1 + 0x68);
  local_8 = this;
  guard_check_icall(param_2);
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) goto LAB_00452923;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_00452859:
    EnableMenuItem(*(HMENU *)(param_2 + 4),0x420f,1);
  }
  else {
    if (*(int *)(param_1 + 4) == 0) {
      iVar2 = *(int *)(param_1 + 0x34);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x38);
    }
    if (iVar2 < 0) goto LAB_00452859;
  }
  if ((*(int *)(param_1 + 0x20) == -1) || (*(int *)(param_1 + 0x20) == 0)) {
    EnableMenuItem(*(HMENU *)(param_2 + 4),0x420e,1);
  }
  if ((*(int *)(param_1 + 8) == 0) && ((*(int *)(param_1 + 0x18) == 0 || (local_c == 0)))) {
    uIDCheckItem = 0x4212;
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
    uIDCheckItem = 0x4213;
  }
  else {
    uIDCheckItem = 0x4214;
  }
  CheckMenuItem(*(HMENU *)(param_2 + 4),uIDCheckItem,8);
  if ((*(int *)(param_1 + 0x18) != 0) && (local_c != 0)) {
    EnableMenuItem(*(HMENU *)(param_2 + 4),0x4212,1);
  }
  pcVar1 = *(code **)(*(int *)local_8 + 0x40c);
  guard_check_icall(param_1);
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    EnableMenuItem(*(HMENU *)(param_2 + 4),0x4212,1);
    EnableMenuItem(*(HMENU *)(param_2 + 4),0x4213,1);
    EnableMenuItem(*(HMENU *)(param_2 + 4),0x4214,1);
    *(undefined4 *)(param_1 + 8) = 1;
  }
LAB_00452923:
  local_c = *(uint *)(local_8 + 0xc40);
  if (local_c != 0) {
    local_8 = local_8 + 0xc3c;
    pCVar4 = (CMFCToolBarButton *)0x0;
    do {
      piVar3 = (int *)FUN_004ead48(&local_c);
      if ((CMFCToolBarButton *)*piVar3 == param_1) {
        if (pCVar4 == (CMFCToolBarButton *)0x0) {
          EnableMenuItem(*(HMENU *)(param_2 + 4),0x4215,1);
          return 1;
        }
        if (((byte)pCVar4[0x24] & 1) == 0) {
          return 1;
        }
        CheckMenuItem(*(HMENU *)(param_2 + 4),0x4215,8);
        return 1;
      }
      pCVar4 = (CMFCToolBarButton *)*piVar3;
    } while (local_c != 0);
  }
  return 1;
}

