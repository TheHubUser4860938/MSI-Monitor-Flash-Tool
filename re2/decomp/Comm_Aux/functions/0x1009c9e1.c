// rea decompile_all
// name: CMFCToolBar::WrapToolBar
// address: 0x1009c9e1
// body: available
// range: 0x1009c9e1-0x1009cc87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009ca83 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBar::WrapToolBar(int,int,class CDC *,int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBar::WrapToolBar
          (CMFCToolBar *this,int param_1,int param_2,CDC *param_3,int param_4,int param_5)

{
  code *pcVar1;
  uint uVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int iVar4;
  int *piVar5;
  CDC *pCVar6;
  undefined1 local_70 [8];
  undefined1 local_68 [4];
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int *local_48;
  uint local_44;
  CClientDC *local_40;
  int local_3c;
  CFont *local_38;
  int local_34;
  int *local_30;
  int *local_2c;
  CDC *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x60;
  local_8 = 0x1009c9ed;
  local_3c = 0;
  local_38 = (CFont *)0x0;
  pcVar1 = *(code **)(*(int *)this + 0x194);
  local_28 = param_3;
  guard_check_icall();
  uVar2 = (*pcVar1)();
  local_40 = (CClientDC *)0x0;
  uVar2 = uVar2 & 0xa000;
  local_44 = uVar2;
  if (param_3 == (CDC *)0x0) {
    local_40 = (CClientDC *)FUN_10047eb4(0x14);
    local_8 = 0;
    if (local_40 == (CClientDC *)0x0) {
      local_28 = (CDC *)0x0;
    }
    else {
      local_28 = (CDC *)CClientDC::CClientDC(local_40,(CWnd *)this);
    }
    local_8 = 0xffffffff;
    local_40 = (CClientDC *)0x1;
    if (uVar2 == 0) {
      iVar4 = *(int *)local_28;
      pAVar3 = GetGlobalData();
      guard_check_icall(pAVar3 + 0x14c);
      local_38 = (CFont *)(**(code **)(iVar4 + 0x28))();
    }
    else {
      local_38 = CBasePane::SelectDefaultFont((CBasePane *)this,local_28);
    }
    if (local_38 == (CFont *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004886a();
    }
  }
  local_30 = (int *)0x0;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_24);
  local_54 = local_24.top;
  local_58 = 0;
  pcVar1 = *(code **)(*(int *)this + 0x170);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if (iVar4 == 0) {
    local_50 = param_2;
  }
  else {
    local_50 = 0x7fff;
  }
  local_60 = param_4;
  local_5c = param_5;
  if ((param_4 < 0) || (param_5 < 0)) {
    pcVar1 = *(code **)(*(int *)this + 0x354);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    pcVar1 = *(code **)(*(int *)this + 0x358);
    guard_check_icall();
    local_60 = (*pcVar1)();
    local_5c = iVar4;
  }
  pcVar1 = *(code **)(*(int *)this + 0x170);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  pCVar6 = local_28;
  if (((iVar4 == 0) && (local_44 != 0)) &&
     (local_48 = *(int **)(this + 0xd14), local_48 != (int *)0x0)) {
    iVar4 = *local_48;
    guard_check_icall(local_68,local_28,&local_60,1);
    piVar5 = (int *)(**(code **)(iVar4 + 0x1c))();
    local_64 = param_1 - *piVar5;
    local_48 = (int *)piVar5[1];
  }
  else {
    local_64 = param_1;
  }
  local_34 = *(int *)(this + 0xc40);
  while (local_34 != 0) {
    local_2c = (int *)FUN_10034920(&local_34);
    local_2c = (int *)*local_2c;
    if ((local_2c == (int *)0x0) ||
       ((local_2c[4] = 0, local_34 == 0 && (*(int *)(this + 0xd14) != 0)))) break;
    if (local_2c[0x14] != 0) {
      iVar4 = *local_2c;
      guard_check_icall(local_70,pCVar6,&local_60,local_44 != 0);
      piVar5 = (int *)(**(code **)(iVar4 + 0x1c))();
      iVar4 = *piVar5;
      local_48 = (int *)piVar5[1];
      if ((local_58 == 0) && ((*(byte *)(local_2c + 9) & 1) != 0)) {
        iVar4 = 0;
        local_48 = (int *)0x0;
      }
      if ((((local_64 < iVar4 + local_58) &&
           (pCVar6 = local_28, (int)local_48 + local_54 < local_50)) &&
          ((*(byte *)(local_2c + 9) & 1) == 0)) && (local_30 != (int *)0x0)) {
        local_54 = (int)local_48 + local_54 + 5;
        local_30[4] = 1;
        local_58 = 0;
        local_3c = local_3c + 1;
      }
      local_58 = local_58 + iVar4;
      local_30 = local_2c;
    }
  }
  if (local_40 != (CClientDC *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar6 + 0x28);
    guard_check_icall(local_38);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)pCVar6 + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  iVar4 = FUN_1017f5f4();
  return iVar4;
}

