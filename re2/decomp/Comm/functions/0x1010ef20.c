// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawSpinButtons
// address: 0x1010ef20
// body: available
// range: 0x1010ef20-0x1010f161 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnDrawSpinButtons(class CDC
   *,class CRect,int,int,class CMFCSpinButtonCtrl *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnDrawSpinButtons
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,int param_3,int param_4,int param_5,
          int param_6,uint param_7,int param_8)

{
  code *pcVar1;
  LONG *pLVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int iVar4;
  int iVar5;
  tagRECT *ptVar6;
  ulong uVar7;
  undefined4 local_74;
  undefined4 local_70;
  CDrawingManager local_6c [8];
  IMAGE_STATE local_64;
  CDrawingManager local_60 [4];
  int local_5c;
  tagRECT *local_58;
  int local_54;
  CMFCVisualManagerOfficeXP *local_50;
  CDC *local_4c;
  LONG *local_48;
  tagRECT local_44;
  tagRECT local_34;
  int local_24;
  int local_20;
  int local_1c;
  int iStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 100;
  local_8 = 0x1010ef2c;
  local_4c = param_1;
  iVar4 = 2;
  pLVar2 = &local_34.right;
  do {
    ((tagRECT *)(pLVar2 + -2))->left = 0;
    pLVar2[-1] = 0;
    *pLVar2 = 0;
    pLVar2[1] = 0;
    iVar4 = iVar4 + -1;
    pLVar2 = pLVar2 + 4;
  } while (iVar4 != 0);
  local_24 = param_3;
  local_1c = param_5;
  iStack_18 = param_6;
  local_34.left = param_3;
  local_34.top = param_4;
  local_34.right = param_5;
  local_34.bottom = param_6;
  if (param_8 == 0) {
    local_34.bottom = param_6 - (param_6 - param_4) / 2;
    local_20 = local_34.bottom + 1;
  }
  else {
    local_20 = param_4;
    local_1c = param_5 - (param_5 - param_3) / 2;
    local_34.left = local_1c;
  }
  local_44.top = 0;
  local_44.left = 7;
  local_44.right = 1;
  local_5c = (param_7 & 3) - 1;
  local_44.bottom = 9;
  if ((param_7 & 4) == 0) {
    iVar4 = -1;
    if ((param_7 & 8) != 0) {
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 0;
  }
  ptVar6 = &local_34;
  local_64 = (IMAGE_STATE)((param_7 & 0x10) != 0);
  local_54 = 0;
  local_48 = &local_44.left + (-(uint)(param_8 != 0) & 2);
  local_50 = this;
  do {
    local_58 = ptVar6;
    if (local_5c == local_54) {
      iVar5 = 0x124;
LAB_1010f08c:
      pcVar1 = *(code **)(*(int *)local_50 + 0x314);
      guard_check_icall(local_4c,ptVar6->left,ptVar6->top,ptVar6->right,ptVar6->bottom,
                        local_50 + iVar5,0);
      (*pcVar1)();
      param_1 = local_4c;
      ptVar6 = local_58;
    }
    else {
      if (iVar4 == local_54) {
        iVar5 = 0x11c;
        goto LAB_1010f08c;
      }
      if (DAT_101dae9c == 0) {
        pAVar3 = GetGlobalData();
        CDC::FillRect(param_1,ptVar6,(CBrush *)(pAVar3 + 0xd0));
        pAVar3 = GetGlobalData();
        uVar7 = *(ulong *)(pAVar3 + 0x5c);
        pAVar3 = GetGlobalData();
        CDC::Draw3dRect(param_1,ptVar6,*(ulong *)(pAVar3 + 0x5c),uVar7);
      }
      else {
        CDrawingManager::CDrawingManager(local_6c,param_1);
        local_8 = 0;
        pAVar3 = GetGlobalData();
        uVar7 = *(ulong *)(pAVar3 + 0x5c);
        pAVar3 = GetGlobalData();
        CDrawingManager::DrawRect(local_6c,(CRect *)ptVar6,*(ulong *)(pAVar3 + 0x54),uVar7);
        local_8 = 0xffffffff;
        FUN_10079775();
      }
    }
    local_74 = 0;
    local_70 = 0;
    CMenuImages::Draw(param_1,*local_48,(CRect *)ptVar6,local_64,(CSize *)&local_74);
    ptVar6 = ptVar6 + 1;
    local_48 = local_48 + 1;
    local_54 = local_54 + 1;
    if (1 < local_54) {
      local_58 = ptVar6;
      if (-1 < iVar4) {
        local_44.left = (&local_34)[iVar4].left;
        local_44.top = (&local_34)[iVar4].top;
        local_44.right = (&local_34)[iVar4].right;
        local_44.bottom = (&local_34)[iVar4].bottom;
        if (DAT_101dae9c == 0) {
          CDC::Draw3dRect(local_4c,&local_44,*(ulong *)(local_50 + 0xe8),*(ulong *)(local_50 + 0xe8)
                         );
        }
        else {
          CDrawingManager::CDrawingManager(local_60,local_4c);
          local_8 = 1;
          CDrawingManager::DrawRect
                    (local_60,(CRect *)&local_44,0xffffffff,*(ulong *)(local_50 + 0xe8));
          FUN_10079775();
        }
      }
      FUN_101490fe();
      return;
    }
  } while( true );
}

