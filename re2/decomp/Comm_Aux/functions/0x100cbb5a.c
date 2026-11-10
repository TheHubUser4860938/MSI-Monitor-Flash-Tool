// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawComboDropButton
// address: 0x100cbb5a
// body: available
// range: 0x100cbb5a-0x100cbe4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawComboDropButton(class CDC
   *,class CRect,int,int,int,class CMFCToolBarComboBoxButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawComboDropButton
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,int param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8,int param_9,int param_10)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  CDrawingManager local_30 [8];
  CDrawingManager local_28 [8];
  undefined4 local_20;
  int local_1c;
  CDC *local_18;
  CMFCVisualManagerOffice2007 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar2 = param_10;
  uStack_4 = 0x20;
  local_8 = 0x100cbb66;
  local_18 = param_1;
  iVar3 = CanDrawImage(this);
  iVar5 = param_7;
  if (iVar3 == 0) {
    CMFCVisualManagerOffice2003::OnDrawComboDropButton
              ((CMFCVisualManagerOffice2003 *)this,local_18,param_3,param_4,param_5,param_6,param_7,
               param_8,param_9,iVar2);
    return;
  }
  bVar1 = true;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x84) == 0)) {
    bVar1 = false;
  }
  if ((param_9 == 0) && (param_8 == 0)) {
    local_1c = 0;
  }
  else {
    local_1c = 1;
  }
  local_14 = this + (-(uint)bVar1 & 0x69c0) + 0x1f68;
  if (*(int *)(local_14 + 0x94) != 0) {
    param_4 = param_4 + -1;
    uVar4 = 0;
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    if (param_7 == 0) {
      if (param_8 == 0) {
        if (param_9 != 0) {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 3;
    }
    iVar5 = *(int *)local_14;
    guard_check_icall(local_18,param_3,param_4,param_5,param_6,uVar4,0xff);
    (**(code **)(iVar5 + 0x10))();
    param_4 = param_4 + 1;
    param_5 = param_5 + -1;
    param_6 = param_6 + -1;
    iVar5 = param_7;
    goto LAB_100cbe1c;
  }
  if (bVar1) {
    local_14 = *(CMFCVisualManagerOffice2007 **)(this + 0x90cc);
    uVar4 = *(undefined4 *)(this + 0x90d0);
    uVar6 = *(ulong *)(this + 0x90d4);
  }
  else {
    local_14 = *(CMFCVisualManagerOffice2007 **)(this + 0x8fd4);
    uVar4 = *(undefined4 *)(this + 0x8fd8);
    uVar6 = *(ulong *)(this + 0x8fdc);
  }
  if (param_7 == 0) {
    if (local_1c != 0) {
      if (param_8 == 0) {
        if (bVar1) {
          local_14 = *(CMFCVisualManagerOffice2007 **)(this + 0x90f0);
          uVar4 = *(undefined4 *)(this + 0x90f4);
          uVar6 = *(ulong *)(this + 0x90f8);
        }
        else {
          local_14 = *(CMFCVisualManagerOffice2007 **)(this + 0x8ff8);
          uVar4 = *(undefined4 *)(this + 0x8ffc);
          uVar6 = *(ulong *)(this + 0x9000);
        }
      }
      else if (bVar1) {
        local_14 = *(CMFCVisualManagerOffice2007 **)(this + 0x90e4);
        uVar4 = *(undefined4 *)(this + 0x90e8);
        uVar6 = *(ulong *)(this + 0x90ec);
      }
      else {
        local_14 = *(CMFCVisualManagerOffice2007 **)(this + 0x8fec);
        uVar4 = *(undefined4 *)(this + 0x8ff0);
        uVar6 = *(ulong *)(this + 0x8ff4);
      }
    }
  }
  else if (bVar1) {
    local_14 = *(CMFCVisualManagerOffice2007 **)(this + 0x90d8);
    uVar4 = *(undefined4 *)(this + 0x90dc);
    uVar6 = *(ulong *)(this + 0x90e0);
  }
  else {
    local_14 = *(CMFCVisualManagerOffice2007 **)(this + 0x8fe0);
    uVar4 = *(undefined4 *)(this + 0x8fe4);
    uVar6 = *(ulong *)(this + 0x8fe8);
  }
  if (bVar1) {
LAB_100cbcf9:
    if (param_7 == 0) {
LAB_100cbcfd:
      param_4 = param_4 + -1;
      param_5 = param_5 + 1;
      param_6 = param_6 + 1;
    }
    if (DAT_1020e40c == 0) {
      CDC::Draw3dRect(local_18,(tagRECT *)&param_3,uVar6,uVar6);
    }
    else {
      CDrawingManager::CDrawingManager(local_28,local_18);
      local_8 = 0;
      CDrawingManager::DrawRect(local_28,(CRect *)&param_3,0xffffffff,uVar6);
      local_8 = 0xffffffff;
      FUN_100afd36();
    }
    if (iVar5 == 0) {
      param_4 = param_4 + 1;
      param_5 = param_5 + -1;
      param_6 = param_6 + -1;
      goto LAB_100cbd56;
    }
LAB_100cbd64:
    param_4 = param_4 + 1;
    param_5 = param_5 + -1;
    param_6 = param_6 + -1;
  }
  else {
    if (param_7 == 0) goto LAB_100cbcfd;
    if (uVar6 != 0xffffffff) goto LAB_100cbcf9;
LAB_100cbd56:
    if (iVar5 != 0) goto LAB_100cbd64;
    if (local_1c != 0) {
      param_3 = param_3 + 1;
    }
  }
  CDrawingManager::CDrawingManager(local_30,local_18);
  local_8 = 1;
  CDrawingManager::FillGradient(local_30,param_3,param_4,param_5,param_6,local_14,uVar4,1,0,0);
  if (iVar5 == 0) {
    if (local_1c != 0) {
      param_3 = param_3 + -1;
    }
  }
  else {
    param_4 = param_4 + -1;
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
  }
  local_8 = 0xffffffff;
  FUN_100afd36();
LAB_100cbe1c:
  param_6 = param_6 + -2;
  local_20 = 0;
  local_1c = 0;
  CMenuImages::Draw(local_18,0,(CRect *)&param_3,(uint)(iVar5 != 0),(CSize *)&local_20);
  return;
}

