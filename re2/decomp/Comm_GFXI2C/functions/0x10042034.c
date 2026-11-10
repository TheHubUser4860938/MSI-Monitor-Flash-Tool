// rea decompile_all
// name: CWnd::OnWndMsg
// address: 0x10042034
// body: available
// range: 0x10042034-0x100425f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CWnd::OnWndMsg(unsigned int,unsigned int,long,long *)
   
   Library: Visual Studio 2008 Release */

int __thiscall CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  undefined4 uVar1;
  int iVar2;
  CWnd *pCVar3;
  int *piVar4;
  void *pvVar5;
  CWnd *pCVar6;
  uint uVar7;
  uint uVar8;
  CWnd *pCVar9;
  uint uVar10;
  CMenu *pCVar11;
  AFX_MSGMAP_ENTRY *pAVar12;
  code *pcVar13;
  short sVar14;
  short sVar15;
  CWnd local_80 [32];
  HWND__ *local_60;
  void *local_30;
  CDC local_2c [4];
  undefined4 local_28;
  uint *local_1c;
  undefined4 local_18;
  int local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  pCVar6 = (CWnd *)param_3;
  uStack_4 = 0x70;
  local_14[0] = 0;
  local_18 = 0x7fffffff;
  local_8 = 0;
  if (param_1 == 0x111) {
    iVar2 = (**(code **)(*(int *)this + 0xf0))(param_2,param_3);
    if (iVar2 == 0) goto LAB_10042244;
    goto LAB_10042072;
  }
  if (param_1 == 0x4e) {
    if (*(int *)param_3 == 0) goto LAB_10042244;
    iVar2 = (**(code **)(*(int *)this + 0xf4))(param_2,param_3,local_14);
LAB_100420a0:
    if (iVar2 == 0) {
LAB_10042244:
      local_8 = 0xffffffff;
      CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
      return 0;
    }
    goto switchD_100421e7_caseD_39;
  }
  if (param_1 == 6) {
    pCVar3 = FromHandle((HWND__ *)param_3);
    _AfxHandleActivate(this,param_2,pCVar3);
  }
  sVar14 = (short)param_3;
  if ((param_1 == 0x20) &&
     (iVar2 = _AfxHandleSetCursor(this,(int)sVar14,(uint)param_3 >> 0x10), iVar2 != 0))
  goto LAB_10042072;
  if ((((*(int *)(this + 0x4c) != 0) && (0 < *(int *)(*(int *)(this + 0x4c) + 0x74))) &&
      ((((0x1ff < param_1 && (param_1 < 0x20a)) || ((0xff < param_1 && (param_1 < 0x110)))) ||
       (param_1 - 0x281 < 0x11)))) &&
     (iVar2 = (**(code **)(**(int **)(this + 0x4c) + 0x94))(param_1,param_2,param_3,local_14),
     iVar2 != 0)) goto switchD_100421e7_caseD_39;
  piVar4 = (int *)(**(code **)(*(int *)this + 0x28))();
  CInternalGlobalLock::Lock((CInternalGlobalLock *)&local_18,7);
  iVar2 = (((uint)piVar4 ^ param_1) & 0x1ff) * 0xc;
  local_1c = (uint *)(&DAT_10066d80 + iVar2);
  if ((param_1 != *local_1c) || (piVar4 != *(int **)(&DAT_10066d88 + iVar2))) {
    *local_1c = param_1;
    *(int **)(&DAT_10066d88 + iVar2) = piVar4;
    for (; *piVar4 != 0; piVar4 = (int *)(*(code *)*piVar4)()) {
      if (param_1 < 0xc000) {
        param_3 = (long)AfxFindMessageEntry((AFX_MSGMAP_ENTRY *)piVar4[1],param_1,0,0);
        if ((AFX_MSGMAP_ENTRY *)param_3 != (AFX_MSGMAP_ENTRY *)0x0) {
          local_1c[1] = param_3;
          CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
          goto LAB_100421d2;
        }
      }
      else {
        pAVar12 = (AFX_MSGMAP_ENTRY *)piVar4[1];
        while (param_3 = (long)AfxFindMessageEntry(pAVar12,0xc000,0,0),
              (AFX_MSGMAP_ENTRY *)param_3 != (AFX_MSGMAP_ENTRY *)0x0) {
          if (**(uint **)(param_3 + 0x10) == param_1) {
            local_1c[1] = param_3;
            CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
            goto LAB_100425c8;
          }
          pAVar12 = (AFX_MSGMAP_ENTRY *)(param_3 + 0x18);
        }
      }
    }
    local_1c[1] = 0;
    CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
    goto LAB_10042244;
  }
  param_3 = *(long *)(&DAT_10066d84 + iVar2);
  CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
  if ((AFX_MSGMAP_ENTRY *)param_3 == (AFX_MSGMAP_ENTRY *)0x0) goto LAB_10042244;
  if (0xbfff < param_1) {
LAB_100425c8:
    pcVar13 = *(code **)(param_3 + 0x14);
switchD_100421e7_caseD_e:
    goto LAB_100425cf;
  }
LAB_100421d2:
  pcVar13 = *(code **)(param_3 + 0x14);
  sVar15 = (short)((uint)pCVar6 >> 0x10);
  pCVar3 = pCVar6;
  switch(*(int *)(param_3 + 0x10)) {
  case 1:
    param_2 = ::FromHandle((void *)param_2);
    goto LAB_10042273;
  case 2:
  case 3:
  case 4:
  case 0x1b:
  case 0x1c:
    goto LAB_10042273;
  case 5:
  case 0xc:
    pCVar11 = (CMenu *)((uint)pCVar6 >> 0x10);
    pCVar6 = (CWnd *)((uint)pCVar6 & 0xffff);
    pCVar3 = FromHandle((HWND__ *)param_2);
    goto LAB_100422a8;
  case 6:
  case 0x47:
    param_2 = (uint)FromHandle((HWND__ *)param_2);
    goto LAB_100425cf;
  case 7:
  case 0xd:
  case 0x4a:
    param_2 = (uint)pCVar6;
LAB_10042273:
    local_14[0] = (*pcVar13)(param_2);
    break;
  case 8:
    FUN_100447b5((undefined4 *)local_2c);
    local_28 = *(undefined4 *)((int)pCVar6 + 4);
    local_8._0_1_ = 1;
    CWnd(local_80);
    local_60 = *(HWND__ **)pCVar6;
    uVar1 = *(undefined4 *)((int)pCVar6 + 8);
    local_8 = CONCAT31(local_8._1_3_,2);
    pCVar6 = FromHandlePermanent(local_60);
    if (pCVar6 == (CWnd *)0x0) {
      if ((*(int *)(this + 0x4c) != 0) &&
         (pvVar5 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(*(int *)(this + 0x4c) + 0x24),local_60)
         , pvVar5 != (void *)0x0)) {
        local_30 = pvVar5;
      }
      pCVar6 = local_80;
    }
    local_14[0] = (*pcVar13)(local_2c,pCVar6,uVar1);
    local_28 = 0;
    local_60 = (HWND__ *)0x0;
    local_8 = CONCAT31(local_8._1_3_,1);
    ~CWnd(local_80);
    goto LAB_1004232d;
  case 9:
    FUN_100447b5((undefined4 *)local_2c);
    local_28 = *(undefined4 *)((int)pCVar6 + 4);
    local_8 = CONCAT31(local_8._1_3_,3);
    local_14[0] = (*pcVar13)(local_2c,*(undefined4 *)((int)pCVar6 + 8));
    local_28 = 0;
LAB_1004232d:
    local_8 = local_8 & 0xffffff00;
    CDC::~CDC(local_2c);
    break;
  case 10:
    pCVar11 = (CMenu *)(param_2 >> 0x10);
    pCVar6 = FromHandle((HWND__ *)pCVar6);
    goto LAB_10042371;
  case 0xb:
    pCVar6 = (CWnd *)(param_2 >> 0x10);
    param_2 = param_2 & 0xffff;
    goto LAB_100425cf;
  case 0xe:
  case 0x2f:
  case 0x4f:
    goto switchD_100421e7_caseD_e;
  case 0xf:
    pCVar11 = CMenu::FromHandle((HMENU__ *)pCVar6);
    pCVar6 = (CWnd *)(param_2 >> 0x10);
LAB_10042371:
    pCVar3 = (CWnd *)(param_2 & 0xffff);
LAB_100422a8:
    local_14[0] = (*pcVar13)(pCVar3,pCVar6,pCVar11);
    break;
  case 0x10:
  case 0x12:
  case 0x15:
  case 0x1e:
  case 0x2d:
  case 0x32:
  case 0x4c:
  case 0x53:
    goto LAB_100425b4;
  case 0x11:
  case 0x14:
  case 0x54:
    pCVar6 = (CWnd *)param_2;
    goto LAB_1004239d;
  case 0x13:
    (*pcVar13)();
    break;
  case 0x16:
    pCVar3 = (CWnd *)(param_2 >> 0x10);
    param_2 = param_2 & 0xffff;
    goto LAB_100425b4;
  case 0x17:
    param_2 = (uint)sVar14;
    pCVar3 = (CWnd *)(int)sVar15;
    goto LAB_100425b4;
  case 0x18:
  case 0x19:
    pCVar9 = (CWnd *)((uint)pCVar6 >> 0x10);
    pCVar3 = (CWnd *)((uint)pCVar6 & 0xffff);
    goto LAB_100423d9;
  case 0x1a:
    pCVar3 = FromHandle((HWND__ *)pCVar6);
    goto LAB_100425b4;
  case 0x1d:
  case 0x28:
  case 0x31:
    local_14[0] = (*pcVar13)();
    break;
  case 0x1f:
    pCVar9 = FromHandle((HWND__ *)param_2);
    pCVar3 = FromHandle((HWND__ *)pCVar6);
    param_2 = (uint)((CWnd *)*(int *)(this + 0x20) == pCVar6);
    goto LAB_100423d9;
  case 0x20:
    pCVar6 = (CWnd *)::FromHandle((void *)param_2);
    goto LAB_1004239d;
  case 0x21:
    pCVar6 = (CWnd *)CMenu::FromHandle((HMENU__ *)param_2);
    goto LAB_1004239d;
  case 0x22:
    pCVar9 = (CWnd *)(int)sVar15;
    pCVar3 = (CWnd *)(int)sVar14;
    param_2 = (uint)CMenu::FromHandle((HMENU__ *)param_2);
    goto LAB_100423d9;
  case 0x23:
    goto LAB_1004242a;
  case 0x24:
    param_2 = (uint)pCVar6;
LAB_1004242a:
    pCVar6 = FromHandle((HWND__ *)param_2);
    goto LAB_1004239d;
  case 0x25:
    pCVar9 = (CWnd *)((uint)pCVar6 >> 0x10);
    pCVar3 = (CWnd *)((uint)pCVar6 & 0xffff);
    goto LAB_1004243d;
  case 0x26:
    pCVar3 = (CWnd *)(int)sVar14;
    pCVar9 = (CWnd *)(int)sVar15;
LAB_1004243d:
    param_2 = (uint)FromHandle((HWND__ *)param_2);
    goto LAB_100423d9;
  case 0x27:
    param_2 = (uint)FromHandle((HWND__ *)param_2);
    pCVar3 = pCVar6;
    goto LAB_100425b4;
  case 0x29:
    pCVar9 = (CWnd *)(param_2 >> 0x10);
    pCVar3 = FromHandle((HWND__ *)pCVar6);
    goto LAB_1004246f;
  case 0x2a:
  case 0x2b:
    pCVar11 = (CMenu *)(int)(short)param_2;
    pCVar3 = (CWnd *)(int)(short)(param_2 >> 0x10);
    param_2 = (uint)pCVar11;
    if (*(int *)(param_3 + 0x10) == 0x2a) {
      pCVar9 = FromHandle((HWND__ *)pCVar6);
      goto LAB_100423d9;
    }
    goto LAB_100425b4;
  case 0x2c:
  case 0x33:
LAB_1004239d:
    (*pcVar13)(pCVar6);
    break;
  case 0x2e:
  case 0x36:
  case 0x52:
    (*pcVar13)(param_2,pCVar6);
    goto LAB_10042072;
  case 0x30:
  case 0x46:
    param_2 = (uint)sVar14;
    pCVar6 = (CWnd *)(int)sVar15;
    goto LAB_100425cf;
  case 0x34:
    pCVar3 = (CWnd *)(param_2 >> 0x10);
    pCVar9 = pCVar6;
LAB_1004246f:
    param_2 = param_2 & 0xffff;
    goto LAB_100423d9;
  case 0x35:
    pCVar3 = (CWnd *)(int)sVar14;
    pCVar9 = (CWnd *)(int)sVar15;
LAB_100423d9:
    (*pcVar13)(param_2,pCVar3,pCVar9);
    break;
  case 0x37:
    iVar2 = (*pcVar13)(param_2 & 0xffff,param_2 >> 0x10,(int)sVar14,(int)sVar15);
    local_14[0] = iVar2;
    goto LAB_100420a0;
  case 0x38:
    (*pcVar13)(param_2 & 0xffff,param_2 >> 0x10,(int)sVar14,(int)sVar15);
    break;
  case 0x45:
    local_14[0] = (*pcVar13)();
    if (local_14[0] != 0) goto LAB_10042244;
    break;
  case 0x48:
    pCVar3 = (CWnd *)CMenu::FromHandle((HMENU__ *)pCVar6);
    goto LAB_100425b4;
  case 0x49:
    pCVar6 = (CWnd *)CMenu::FromHandle((HMENU__ *)pCVar6);
LAB_100425cf:
    local_14[0] = (*pcVar13)(param_2,pCVar6);
    break;
  case 0x4b:
    param_2 = (uint)CMenu::FromHandle((HMENU__ *)param_2);
    pCVar3 = pCVar6;
    goto LAB_100425b4;
  case 0x4d:
    uVar10 = (uint)pCVar6 & 0xffff;
    uVar7 = (uint)pCVar6 >> 0x10 & 0xf000;
    uVar8 = (uint)pCVar6 >> 0x10 & 0xfff;
    param_2 = (uint)FromHandle((HWND__ *)param_2);
    goto LAB_1004256e;
  case 0x4e:
    param_2 = param_2 & 0xff;
LAB_100425b4:
    (*pcVar13)(param_2,pCVar3);
    break;
  case 0x50:
    uVar7 = (uint)sVar14;
    uVar10 = (uint)sVar15;
    uVar8 = param_2 >> 0x10;
    param_2 = param_2 & 0xffff;
    goto LAB_1004256e;
  case 0x51:
    uVar7 = (uint)sVar14;
    uVar10 = (uint)sVar15;
    uVar8 = param_2 >> 0x10;
LAB_1004256e:
    (*pcVar13)(param_2,uVar8,uVar7,uVar10);
LAB_10042072:
    local_14[0] = 1;
  }
switchD_100421e7_caseD_39:
  if (param_4 != (long *)0x0) {
    *param_4 = local_14[0];
  }
  local_8 = 0xffffffff;
  CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
  return 1;
}

