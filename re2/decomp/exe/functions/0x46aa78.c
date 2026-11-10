// rea decompile_all
// name: CDockingManager::Serialize
// address: 0x46aa78
// body: available
// range: 0x46aa78-0x46b526 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CDockingManager::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingManager::Serialize(CDockingManager *this,CArchive *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&> *this_00;
  CArchive *pCVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  CBasePane *pCVar7;
  CWnd *pCVar8;
  CDockablePane *pCVar9;
  CBaseTabbedPane *pCVar10;
  CObject *pCVar11;
  CObject *pCVar12;
  __POSITION *p_Var13;
  CPaneFrameWnd *pCVar14;
  __POSITION *p_Var15;
  undefined4 uVar16;
  undefined **local_a4;
  __POSITION *local_a0;
  __POSITION *local_88;
  CObList *local_84;
  CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&> *local_80;
  CDockingManager *local_7c;
  __POSITION *local_78;
  CArchive *local_74;
  CObject *local_70;
  __POSITION *local_6c;
  CObject *local_68;
  CPaneFrameWnd *local_64;
  CObject *local_60;
  AFX_AUTOHIDE_DOCKSITE_SAVE_INFO local_5c [28];
  undefined **local_40 [10];
  CObject *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x94;
  local_8 = 0x46aa87;
  local_68 = (CObject *)0x0;
  local_64 = (CPaneFrameWnd *)0x0;
  local_78 = (__POSITION *)0x0;
  local_6c = (__POSITION *)0x0;
  local_74 = param_1;
  local_7c = this;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    local_84 = (CObList *)(this + 0x58);
    CObList::RemoveAll(local_84);
    CObList::RemoveAll((CObList *)(this + 0x74));
    local_80 = (CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&> *)
               (this + 0xac);
    CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>::RemoveAll(local_80);
    CObList::RemoveAll((CObList *)(this + 0x90));
    local_60 = (CObject *)0xffffffff;
    CList<unsigned_int,unsigned_int&>::CList<unsigned_int,unsigned_int&>
              ((CList<unsigned_int,unsigned_int&> *)&local_a4,10);
    local_8._0_1_ = 3;
    local_8._1_3_ = 0;
    FUN_00450090(&local_6c);
    local_78 = local_6c;
    if (0 < (int)local_6c) {
      do {
        FUN_00450090(&local_60);
        pcVar2 = *(code **)(*(int *)this + 0x24);
        guard_check_icall(local_60,1);
        pCVar12 = (CObject *)(*pcVar2)();
        local_68 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_005c7aa4,pCVar12);
        if (local_68 != (CObject *)0x0) {
          pcVar2 = *(code **)(*(int *)local_68 + 0x3a0);
          guard_check_icall();
          piVar6 = (int *)(*pcVar2)();
          pcVar2 = *(code **)(*piVar6 + 8);
          guard_check_icall(local_74);
          (*pcVar2)();
          CObList::AddTail((CObList *)(this + 0x74),local_68);
          param_1 = local_74;
        }
        local_78 = local_78 + -1;
      } while (local_78 != (__POSITION *)0x0);
    }
    FUN_00450090(&local_64);
    local_78 = (__POSITION *)0x0;
    local_70 = (CObject *)0x0;
    if (0 < (int)local_64) {
      do {
        pCVar12 = local_70;
        FUN_00450090(&local_78);
        if (local_78 == (__POSITION *)0x0) {
          pCVar12 = (CObject *)FUN_00439696();
          pCVar12 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_005c46c4,pCVar12);
          local_70 = pCVar12;
          CPaneDivider::Init((CPaneDivider *)pCVar12,1,*(CWnd **)(this + 0xe4));
          pcVar2 = *(code **)(*(int *)pCVar12 + 8);
          guard_check_icall(param_1);
          pCVar12 = local_70;
          (*pcVar2)();
          CObList::AddHead((CObList *)(this + 0x58),pCVar12);
          p_Var13 = local_a0;
          p_Var15 = local_6c;
          while (local_6c = p_Var13, local_6c != (__POSITION *)0x0) {
            local_88 = *(__POSITION **)local_6c;
            pCVar9 = CPaneDivider::FindTabbedPane((CPaneDivider *)pCVar12,*(uint *)(local_6c + 8));
            this = local_7c;
            p_Var13 = local_88;
            p_Var15 = local_6c;
            local_68 = (CObject *)pCVar9;
            if (pCVar9 != (CDockablePane *)0x0) {
              pcVar2 = *(code **)(*(int *)pCVar9 + 0x1dc);
              guard_check_icall();
              iVar5 = (*pcVar2)();
              if (iVar5 != 0) {
                pcVar2 = *(code **)(*(int *)pCVar9 + 0x368);
                guard_check_icall(0,0xf000,0,1);
                (*pcVar2)();
              }
              *(undefined4 *)(pCVar9 + 0x354) = *(undefined4 *)(pCVar12 + 0x20);
              iVar5 = *(int *)pCVar9;
              pcVar2 = *(code **)(*(int *)pCVar12 + 0x194);
              guard_check_icall();
              uVar16 = (*pcVar2)();
              guard_check_icall(uVar16);
              pCVar11 = local_68;
              (**(code **)(iVar5 + 0x1e0))();
              CObList::AddHead(local_84,pCVar11);
              CList<unsigned_int,unsigned_int&>::RemoveAt
                        ((CList<unsigned_int,unsigned_int&> *)&local_a4,local_6c);
              this = local_7c;
              p_Var13 = local_88;
              p_Var15 = local_6c;
            }
          }
        }
        else {
          FUN_00450090(&local_60);
          if (local_60 == (CObject *)0xffffffff) {
            FUN_00450090(&local_60);
            if (pCVar12 != (CObject *)0x0) {
              pCVar12 = (CObject *)
                        CPaneDivider::FindTabbedPane((CPaneDivider *)pCVar12,(uint)local_60);
              goto LAB_0046b120;
            }
          }
          else {
            pcVar2 = *(code **)(*(int *)this + 0x24);
            guard_check_icall(local_60,1);
            pCVar12 = (CObject *)(*pcVar2)();
            pCVar12 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,pCVar12);
LAB_0046b120:
            local_68 = pCVar12;
            if (pCVar12 != (CObject *)0x0) {
              pcVar2 = *(code **)(*(int *)pCVar12 + 0x1dc);
              guard_check_icall();
              iVar5 = (*pcVar2)();
              if (iVar5 != 0) {
                pcVar2 = *(code **)(*(int *)pCVar12 + 0x368);
                guard_check_icall(0,0xf000,0,1);
                (*pcVar2)();
              }
              if (local_70 != (CObject *)0x0) {
                *(int *)(pCVar12 + 0x354) = *(int *)(local_70 + 0x20);
                iVar5 = *(int *)pCVar12;
                pcVar2 = *(code **)(*(int *)local_70 + 0x194);
                guard_check_icall();
                uVar16 = (*pcVar2)();
                guard_check_icall(uVar16);
                (**(code **)(iVar5 + 0x1e0))();
                pCVar12 = local_68;
              }
              CObList::AddHead((CObList *)(this + 0x58),pCVar12);
              p_Var15 = local_6c;
              goto LAB_0046b2ca;
            }
          }
          CList<unsigned_int,unsigned_int&>::AddTail
                    ((CList<unsigned_int,unsigned_int&> *)&local_a4,(uint *)&local_60);
          p_Var15 = local_6c;
        }
LAB_0046b2ca:
        local_6c = p_Var15;
        local_64 = local_64 + -1;
        param_1 = local_74;
      } while (local_64 != (CPaneFrameWnd *)0x0);
    }
    local_64 = (CPaneFrameWnd *)0x0;
    FUN_00450090(&local_64);
    pCVar14 = local_64;
    if (0 < (int)local_64) {
      do {
        DAT_00615f68 = *(int *)(this + 0xe4);
        local_64 = (CPaneFrameWnd *)0x0;
        operator>>(param_1,&local_64);
        CObList::AddTail((CObList *)(this + 0x90),(CObject *)local_64);
        pCVar14 = pCVar14 + -1;
      } while (pCVar14 != (CPaneFrameWnd *)0x0);
    }
    local_64 = (CPaneFrameWnd *)0x0;
    FUN_00450090(&local_64);
    this_00 = local_80;
    pCVar14 = local_64;
    if (0 < (int)local_64) {
      do {
        AFX_AUTOHIDE_DOCKSITE_SAVE_INFO::AFX_AUTOHIDE_DOCKSITE_SAVE_INFO(local_5c);
        local_8._0_1_ = 4;
        FUN_0046a8f6(param_1);
        CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>::AddTail
                  (this_00,local_5c);
        local_8._0_1_ = 5;
        local_40[0] = CList<unsigned_int,unsigned_int&>::vftable;
        CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)local_40);
        local_8._0_1_ = 3;
        pCVar14 = pCVar14 + -1;
        this = local_7c;
      } while (pCVar14 != (CPaneFrameWnd *)0x0);
    }
    local_64 = (CPaneFrameWnd *)0x0;
    FUN_00450090(&local_64);
    if (0 < (int)local_64) {
      do {
        local_68 = (CObject *)0xffffffff;
        FUN_00450090(&local_68);
        if (local_68 != (CObject *)0xffffffff) {
          pcVar2 = *(code **)(*(int *)this + 0x24);
          guard_check_icall(local_68,1);
          pCVar12 = (CObject *)(*pcVar2)();
          local_60 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,pCVar12);
          if (local_60 != (CObject *)0x0) {
            pcVar2 = *(code **)(*(int *)local_60 + 0x170);
            guard_check_icall();
            iVar5 = (*pcVar2)();
            if (iVar5 == 0) {
              pcVar2 = *(code **)(*(int *)local_60 + 0x1dc);
              guard_check_icall();
              iVar5 = (*pcVar2)();
              if (iVar5 == 0) {
                pcVar2 = *(code **)(*(int *)local_60 + 0x16c);
                guard_check_icall();
                iVar5 = (*pcVar2)();
                pCVar12 = local_60;
                if (iVar5 == 0) {
                  pcVar2 = *(code **)(*(int *)local_60 + 0x240);
                  guard_check_icall(0);
                  (*pcVar2)();
                }
                else {
                  pCVar10 = CBasePane::GetParentTabbedPane((CBasePane *)local_60);
                  CWnd::SetParent((CWnd *)pCVar12,*(CWnd **)(this + 0xe4));
                  pcVar2 = *(code **)(*(int *)pCVar10 + 0x3c0);
                  guard_check_icall(pCVar12);
                  (*pcVar2)();
                }
              }
              else {
                pcVar2 = *(code **)(*(int *)local_60 + 0x368);
                guard_check_icall(0,0xf000,0,1);
                (*pcVar2)();
              }
            }
            else {
              pcVar2 = *(code **)(*(int *)local_60 + 0x228);
              guard_check_icall(0);
              local_80 = (CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&> *)
                         (*pcVar2)();
              if (local_80 !=
                  (CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&> *)0x0) {
                pcVar2 = *(code **)(*(int *)local_80 + 0x17c);
                guard_check_icall(local_60,0,0);
                (*pcVar2)();
              }
              CWnd::SetParent((CWnd *)local_60,*(CWnd **)(this + 0xe4));
            }
            CWnd::ShowWindow((CWnd *)local_60,0);
            AddHiddenMDITabbedBar(this,(CDockablePane *)local_60);
            *(undefined4 *)(local_60 + 0x90) = 1;
          }
        }
        local_64 = local_64 + -1;
      } while (local_64 != (CPaneFrameWnd *)0x0);
    }
    local_8 = 6;
    local_a4 = CList<unsigned_int,unsigned_int&>::vftable;
    CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_a4);
  }
  else {
    local_60 = *(CObject **)(this + 0x24);
    while (local_6c = (__POSITION *)local_60, local_60 != (CObject *)0x0) {
      local_70 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_005c7aa4,
                                    *(CObject **)(local_60 + 8));
      p_Var15 = local_6c;
      if (local_70 == (CObject *)0x0) {
LAB_0046ab37:
        if (p_Var15 == (__POSITION *)0x0) break;
      }
      else {
        pcVar2 = *(code **)(*(int *)local_70 + 0x3a4);
        guard_check_icall();
        iVar5 = (*pcVar2)();
        p_Var15 = local_6c;
        if (iVar5 != 0) goto LAB_0046ab37;
        pcVar2 = *(code **)(*(int *)local_70 + 0x1cc);
        guard_check_icall();
        iVar5 = (*pcVar2)();
        p_Var15 = local_6c;
        if (iVar5 == 0) goto LAB_0046ab37;
        FUN_00434304(&local_60);
        pcVar2 = *(code **)(*(int *)local_70 + 0x240);
        guard_check_icall(1);
        (*pcVar2)();
        if (local_60 == (CObject *)0x0) {
          local_60 = *(CObject **)(this + 0x24);
          p_Var15 = (__POSITION *)local_60;
          goto LAB_0046ab37;
        }
      }
      FUN_004ead48(&local_60);
    }
    local_60 = *(CObject **)(this + 0xcc);
    p_Var15 = local_78;
    pCVar12 = local_68;
    while (local_78 = p_Var15, local_68 = pCVar12, local_60 != (CObject *)0x0) {
      puVar4 = (undefined4 *)FUN_004ead48(&local_60);
      local_64 = (CPaneFrameWnd *)
                 AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_0060c5e0,
                                    (CObject *)*puVar4);
      p_Var15 = local_78;
      pCVar12 = local_68;
      if (local_64 != (CPaneFrameWnd *)0x0) {
        pcVar2 = *(code **)(*(int *)local_64 + 0x1f0);
        guard_check_icall();
        (*pcVar2)();
        p_Var15 = local_78;
        pCVar12 = local_68;
      }
    }
    local_60 = *(CObject **)(this + 0x24);
    if (local_60 != (CObject *)0x0) {
      local_64 = (CPaneFrameWnd *)(this + 0x20);
      do {
        puVar4 = (undefined4 *)FUN_004ead48(&local_60);
        p_Var13 = (__POSITION *)*puVar4;
        local_6c = p_Var13;
        iVar5 = FUN_0043970d(&PTR_s_CDockablePane_0060c780);
        if (iVar5 == 0) {
LAB_0046abf5:
          iVar5 = FUN_0043970d(&PTR_s_CPaneDivider_005c46c4);
          if (iVar5 != 0) {
            pcVar2 = *(code **)(*(int *)p_Var13 + 0x298);
            guard_check_icall();
            iVar5 = (*pcVar2)();
            if (iVar5 != 0) goto LAB_0046ac1d;
          }
          iVar5 = FUN_0043970d(&PTR_s_CBaseTabbedPane_005c7aa4);
          if (iVar5 != 0) {
            p_Var15 = p_Var15 + 1;
          }
        }
        else {
          pcVar2 = *(code **)(*(int *)p_Var13 + 0x1cc);
          guard_check_icall();
          iVar5 = (*pcVar2)();
          p_Var13 = local_6c;
          if (iVar5 == 0) goto LAB_0046abf5;
LAB_0046ac1d:
          pCVar12 = pCVar12 + 1;
        }
        this = local_7c;
      } while (local_60 != (CObject *)0x0);
    }
    local_68 = pCVar12;
    local_78 = p_Var15;
    FUN_0043e915(local_78);
    pCVar3 = local_74;
    local_60 = *(CObject **)(this + 0x24);
    if (local_60 != (CObject *)0x0) {
      local_64 = (CPaneFrameWnd *)(this + 0x20);
      do {
        puVar4 = (undefined4 *)FUN_004ead48(&local_60);
        pCVar12 = (CObject *)*puVar4;
        pcVar2 = *(code **)(*(int *)pCVar12 + 0x1cc);
        guard_check_icall();
        iVar5 = (*pcVar2)();
        if (((iVar5 == 0) && (iVar5 = FUN_0043970d(&PTR_s_CBaseTabbedPane_005c7aa4), iVar5 != 0)) &&
           (pCVar12 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_005c7aa4,pCVar12),
           pCVar12 != (CObject *)0x0)) {
          iVar5 = CWnd::GetDlgCtrlID((CWnd *)pCVar12);
          FUN_0043e915(iVar5);
          pcVar2 = *(code **)(*(int *)pCVar12 + 0x3a0);
          guard_check_icall();
          piVar6 = (int *)(*pcVar2)();
          pcVar2 = *(code **)(*piVar6 + 8);
          guard_check_icall(pCVar3);
          (*pcVar2)();
        }
        this = local_7c;
      } while (local_60 != (CObject *)0x0);
    }
    FUN_0043e915(local_68);
    pCVar3 = local_74;
    local_60 = *(CObject **)(this + 0x28);
    if (local_60 != (CObject *)0x0) {
      local_64 = (CPaneFrameWnd *)(this + 0x20);
      do {
        puVar4 = (undefined4 *)FUN_00434304(&local_60);
        pCVar8 = (CWnd *)*puVar4;
        iVar5 = FUN_0043970d(&PTR_s_CDockablePane_0060c780);
        if (iVar5 == 0) {
LAB_0046adb0:
          iVar5 = FUN_0043970d(&PTR_s_CPaneDivider_005c46c4);
          if (iVar5 != 0) {
            pcVar2 = *(code **)(*(int *)pCVar8 + 0x298);
            guard_check_icall();
            iVar5 = (*pcVar2)();
            if (iVar5 != 0) {
              FUN_0043e915(0);
              pCVar12 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_005c46c4,
                                           (CObject *)pCVar8);
              pcVar2 = *(code **)(*(int *)pCVar12 + 8);
              guard_check_icall(pCVar3);
              (*pcVar2)();
            }
          }
        }
        else {
          pcVar2 = *(code **)(*(int *)pCVar8 + 0x1cc);
          guard_check_icall();
          iVar5 = (*pcVar2)();
          if (iVar5 == 0) goto LAB_0046adb0;
          iVar5 = CWnd::GetDlgCtrlID(pCVar8);
          if (iVar5 == -1) {
            pCVar12 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_005c7aa4,
                                         (CObject *)pCVar8);
            pcVar2 = *(code **)(*(int *)pCVar12 + 0x3cc);
            guard_check_icall(0,0);
            pCVar8 = (CWnd *)(*pcVar2)();
            if (pCVar8 != (CWnd *)0x0) {
              iVar5 = CWnd::GetDlgCtrlID(pCVar8);
              FUN_0043e915(1);
              uVar16 = 0xffffffff;
              goto LAB_0046ad9f;
            }
          }
          else {
            uVar16 = 1;
LAB_0046ad9f:
            FUN_0043e915(uVar16);
            FUN_0043e915(iVar5);
          }
        }
        this = local_7c;
      } while (local_60 != (CObject *)0x0);
    }
    local_60 = *(CObject **)(this + 0xcc);
    pCVar11 = (CObject *)0x0;
    pCVar12 = local_68;
    if (local_60 != (CObject *)0x0) {
      local_64 = (CPaneFrameWnd *)(this + 200);
      pCVar11 = (CObject *)0x0;
      do {
        puVar4 = (undefined4 *)FUN_004ead48(&local_60);
        pCVar12 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_0060c5e0,
                                     (CObject *)*puVar4);
        pcVar2 = *(code **)(*(int *)pCVar12 + 0x1a0);
        guard_check_icall();
        iVar5 = (*pcVar2)();
        if (0 < iVar5) {
          pCVar11 = pCVar11 + 1;
        }
        this = local_7c;
        pCVar12 = pCVar11;
      } while (local_60 != (CObject *)0x0);
    }
    local_68 = pCVar12;
    pCVar3 = local_74;
    FUN_0043e915(pCVar11);
    local_60 = *(CObject **)(this + 0xcc);
    if (local_60 != (CObject *)0x0) {
      local_64 = (CPaneFrameWnd *)(this + 200);
      do {
        puVar4 = (undefined4 *)FUN_004ead48(&local_60);
        local_68 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_0060c5e0,
                                      (CObject *)*puVar4);
        pcVar2 = *(code **)(*(int *)local_68 + 0x1a0);
        guard_check_icall();
        iVar5 = (*pcVar2)();
        if (0 < iVar5) {
          FUN_004e3f8c(local_68);
        }
        this = local_7c;
      } while (local_60 != (CObject *)0x0);
    }
    FUN_0043e915(*(int *)(this + 0x48));
    local_60 = *(CObject **)(this + 0x40);
    if (local_60 != (CObject *)0x0) {
      local_64 = (CPaneFrameWnd *)(this + 0x3c);
      do {
        AFX_AUTOHIDE_DOCKSITE_SAVE_INFO::AFX_AUTOHIDE_DOCKSITE_SAVE_INFO(local_5c);
        local_8 = 0;
        puVar4 = (undefined4 *)FUN_004ead48(&local_60);
        pCVar12 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_005c46c4,
                                     (CObject *)*puVar4);
        if (pCVar12 == (CObject *)0x0) {
          local_8 = 1;
        }
        else {
          pCVar7 = CPaneDivider::GetFirstPane((CPaneDivider *)pCVar12);
          local_18 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,
                                        (CObject *)pCVar7);
          if (local_18 != (CObject *)0x0) {
            FUN_0046a8f6(pCVar3);
          }
          local_8 = 2;
        }
        local_40[0] = CList<unsigned_int,unsigned_int&>::vftable;
        CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)local_40);
        local_8 = 0xffffffff;
        this = local_7c;
      } while (local_60 != (CObject *)0x0);
    }
    FUN_0043e915(*(int *)(this + 0x1a8));
    puVar4 = *(undefined4 **)(this + 0x1a0);
    while (puVar4 != (undefined4 *)0x0) {
      puVar1 = puVar4 + 2;
      puVar4 = (undefined4 *)*puVar4;
      pCVar8 = CWnd::FromHandlePermanent((HWND__ *)*puVar1);
      pCVar12 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,(CObject *)pCVar8)
      ;
      if (pCVar12 == (CObject *)0x0) {
        iVar5 = -1;
      }
      else {
        iVar5 = CWnd::GetDlgCtrlID((CWnd *)pCVar12);
      }
      FUN_0043e915(iVar5);
    }
  }
  FUN_0055bae6();
  return;
}

