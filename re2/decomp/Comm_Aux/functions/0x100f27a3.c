// rea decompile_all
// name: CDockingPanesRow::CheckPanes
// address: 0x100f27a3
// body: available
// range: 0x100f27a3-0x100f2b64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CDockingPanesRow::CheckPanes(class CRect &,class CPane *,bool,class
   CPoint,int,void * &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDockingPanesRow::CheckPanes
          (CDockingPanesRow *this,RECT *param_1,CPane *param_2,undefined4 param_3,long param_5,
          long param_6,int param_7,void **param_8)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  BOOL BVar5;
  __POSITION *p_Var6;
  long lVar7;
  RECT *pRVar8;
  CPane *pCVar9;
  int local_94;
  int local_90;
  CPane *local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  CPane *local_78;
  CPane *local_74;
  RECT *local_70;
  CPane *local_6c;
  tagRECT local_68;
  tagRECT local_58;
  RECT local_48;
  RECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_70 = param_1;
  local_6c = param_2;
  if (*(int *)(this + 0x30) < 2) goto LAB_100f2b4f;
  pcVar1 = *(code **)(*(int *)this + 0x14);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 < 2) goto LAB_100f2b4f;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  local_78 = (CPane *)0x0;
  local_74 = (CPane *)CObList::Find((CObList *)(this + 0x24),(CObject *)param_2,(__POSITION *)0x0);
  local_94 = *(int *)(this + 0x28);
  if (local_94 != 0) {
    do {
      local_90 = local_94;
      puVar4 = (undefined4 *)FUN_10034920(&local_94);
      pCVar9 = (CPane *)*puVar4;
      pcVar1 = *(code **)(*(int *)pCVar9 + 0x17c);
      local_8c = pCVar9;
      guard_check_icall();
      iVar3 = (*pcVar1)();
      pRVar8 = local_70;
      if (((iVar3 != 0) || (*(int *)(this + 4) != 0)) && (pCVar9 != local_6c)) {
        ::GetWindowRect(*(HWND *)(pCVar9 + 0x20),&local_18);
        pRVar8 = local_70;
        local_78 = (CPane *)IntersectRect(&local_28,&local_18,local_70);
        if (local_78 != (CPane *)0x0) goto LAB_100f28b1;
      }
    } while (local_94 != 0);
    param_2 = local_6c;
    if (local_78 != (CPane *)0x0) {
LAB_100f28b1:
      CPane::GetVirtualRect(pCVar9,(CRect *)&local_38);
      local_68.left = 0;
      local_68.top = 0;
      local_68.right = 0;
      local_68.bottom = 0;
      BVar5 = IntersectRect(&local_68,&local_38,pRVar8);
      param_2 = local_6c;
      if ((BVar5 != 0) && (param_7 != 0)) {
        bVar2 = CPane::IsLeftOf(local_6c,local_38.left,local_38.top,local_38.right,local_38.bottom,1
                               );
        pCVar9 = local_8c;
        if (param_3._0_1_ == false) {
          if (!bVar2) goto LAB_100f291c;
        }
        else if (bVar2) {
LAB_100f291c:
          local_88 = local_18.left;
          local_84 = local_18.top;
          local_80 = local_18.right;
          local_7c = local_18.bottom;
          if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
            if (param_3._0_1_ == false) {
              local_84 = local_70->bottom;
              local_7c = (local_18.bottom - local_18.top) + local_84;
            }
            else {
              local_7c = local_70->top;
              local_84 = (local_18.top - local_18.bottom) + local_7c;
            }
          }
          else if (param_3._0_1_ == false) {
            local_88 = local_70->right;
            local_80 = (local_18.right - local_18.left) + local_88;
          }
          else {
            local_80 = local_70->left;
            local_88 = (local_18.left - local_18.right) + local_80;
          }
          MovePane(this,local_8c,local_88,local_84,local_80,local_7c,param_8);
          FUN_10063c9c(local_90);
          if (param_3._0_1_ == false) {
            p_Var6 = CObList::InsertAfter
                               ((CObList *)(this + 0x24),(__POSITION *)local_74,(CObject *)pCVar9);
          }
          else {
            p_Var6 = CObList::InsertBefore
                               ((CObList *)(this + 0x24),(__POSITION *)local_74,(CObject *)pCVar9);
          }
          local_90 = CONCAT31((int3)((uint)p_Var6 >> 8),param_3._0_1_ == false);
          ResolveIntersection(this,pCVar9,param_3._0_1_ == false,param_8);
          local_58.left = 0;
          local_58.top = 0;
          local_58.right = 0;
          local_58.bottom = 0;
          local_48.left = 0;
          local_48.top = 0;
          local_48.right = 0;
          local_48.bottom = 0;
          if (param_3._0_1_ == false) {
            FUN_10069da3(&local_74);
            local_6c = local_74;
          }
          else {
            FUN_10034920(&local_74);
            local_6c = local_74;
          }
          while (local_6c != (CPane *)0x0) {
            if (param_3._0_1_ == false) {
              puVar4 = (undefined4 *)FUN_10069da3(&local_6c);
            }
            else {
              puVar4 = (undefined4 *)FUN_10034920(&local_6c);
            }
            local_78 = (CPane *)*puVar4;
            pcVar1 = *(code **)(*(int *)local_78 + 0x17c);
            guard_check_icall();
            iVar3 = (*pcVar1)();
            pCVar9 = local_78;
            if ((iVar3 != 0) || (*(int *)(this + 4) != 0)) {
              ::GetWindowRect(*(HWND *)(local_78 + 0x20),&local_58);
              CPane::GetVirtualRect(pCVar9,(CRect *)&local_48);
              BVar5 = EqualRect(&local_58,&local_48);
              if (BVar5 == 0) {
                if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
                  iVar3 = local_7c - local_84;
                  lVar7 = param_6;
                }
                else {
                  iVar3 = local_80 - local_88;
                  lVar7 = param_5;
                }
                lVar7 = _labs(lVar7);
                MovePane(this,local_78,iVar3 - lVar7,SUB41(local_90,0),param_8);
              }
            }
          }
          goto LAB_100f2b4f;
        }
      }
      if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
        iVar3 = local_28.bottom - local_28.top;
      }
      else {
        iVar3 = local_28.right - local_28.left;
      }
      MovePane(this,pCVar9,iVar3,param_3._0_1_,param_8);
      ResolveIntersection(this,pCVar9,param_3._0_1_,param_8);
    }
  }
  MoveTrailingPanes(this,local_74,param_5,param_6,param_3,param_2,param_8);
LAB_100f2b4f:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

