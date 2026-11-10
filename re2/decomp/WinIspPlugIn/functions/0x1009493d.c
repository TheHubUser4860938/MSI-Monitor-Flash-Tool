// rea decompile_all
// name: CMFCToolBar::CalcSize
// address: 0x1009493d
// body: available
// range: 0x1009493d-0x10094b79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100949a8 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCToolBar::CalcSize(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::CalcSize(CMFCToolBar *this,int param_1)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int in_stack_00000008;
  undefined1 local_80 [16];
  CClientDC local_70 [20];
  uint local_5c;
  uint local_58;
  uint *local_54;
  uint local_50;
  uint local_4c;
  CFont *local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  int *local_30;
  uint local_2c;
  uint local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x70;
  local_8 = 0x10094949;
  local_54 = (uint *)param_1;
  local_38 = in_stack_00000008;
  if (*(int *)(this + 0xc48) == 0) {
    GetButtonSize(this);
  }
  else {
    CClientDC::CClientDC(local_70,(CWnd *)this);
    iVar3 = local_38;
    local_8 = 0;
    if (local_38 == 0) {
      local_48 = CBasePane::SelectDefaultFont((CBasePane *)this,(CDC *)local_70);
    }
    else {
      pAVar2 = GetGlobalData();
      local_48 = (CFont *)CDC::SelectObject((CDC *)local_70,(CPen *)(pAVar2 + 0x14c));
    }
    if (local_48 == (CFont *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004a383();
    }
    pcVar1 = *(code **)(*(int *)this + 0x354);
    guard_check_icall();
    local_3c = (*pcVar1)();
    pcVar1 = *(code **)(*(int *)this + 0x358);
    guard_check_icall();
    local_4c = (*pcVar1)();
    local_2c = local_3c;
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    local_28 = local_4c;
    SetRectEmpty(&local_24);
    local_50 = (uint)(iVar3 == 0);
    CPane::CalcInsideRect((CPane *)this,(CRect *)&local_24,local_50);
    local_40 = (uint)(iVar3 == 0);
    local_34 = (uint)(local_38 != 0);
    local_44 = *(int *)(this + 0xc40);
    uVar7 = local_40;
    while (local_44 != 0) {
      local_30 = (int *)FUN_100c321b(&local_44);
      local_30 = (int *)*local_30;
      if (local_30 == (int *)0x0) break;
      if ((local_44 == 0) && (*(int *)(this + 0xd14) != 0)) {
        pcVar1 = *(code **)(*(int *)this + 0x170);
        guard_check_icall();
        iVar3 = (*pcVar1)();
        if (iVar3 != 0) break;
      }
      piVar5 = local_30;
      uVar4 = local_3c;
      if (*(int *)(this + 0xb8c) != 0) {
        iVar3 = GetButtonSize(this);
        uVar4 = *(uint *)(iVar3 + 4);
      }
      local_5c = local_4c;
      iVar3 = *piVar5;
      local_58 = uVar4;
      guard_check_icall(local_80,local_70,&local_5c,local_50);
      piVar5 = (int *)(**(code **)(iVar3 + 0x1c))();
      iVar3 = *piVar5;
      iVar6 = piVar5[1];
      if (*(int *)(this + 0xb8c) != 0) {
        iVar6 = *(int *)(this + 0xbe8);
      }
      if (local_38 == 0) {
        if (((uVar7 == local_40) || (local_30[4] != 0)) && ((*(byte *)(local_30 + 9) & 1) != 0)) {
          iVar3 = 0;
          iVar6 = 0;
        }
        uVar7 = uVar7 + iVar3;
        if ((int)local_28 < (int)uVar7) {
          local_28 = uVar7;
        }
        if ((int)local_2c < (int)(iVar6 + local_34)) {
          local_2c = iVar6 + local_34;
        }
        if (local_30[4] != 0) {
          local_34 = local_34 + 5 + local_3c;
          uVar7 = local_40;
        }
      }
      else {
        if ((int)local_28 < (int)(iVar3 + uVar7)) {
          local_28 = iVar3 + uVar7;
        }
        local_34 = local_34 + iVar6;
        uVar7 = local_40;
        if ((int)local_2c < (int)local_34) {
          local_2c = local_34;
        }
      }
    }
    CDC::SelectObject((CDC *)local_70,(CPen *)local_48);
    *local_54 = local_28;
    local_54[1] = local_2c;
    CClientDC::~CClientDC(local_70);
  }
  FUN_1018015d();
  return;
}

