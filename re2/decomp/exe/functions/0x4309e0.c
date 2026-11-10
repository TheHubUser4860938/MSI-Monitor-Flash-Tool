// rea decompile_all
// name: CWnd::OnWndMsg
// address: 0x4309e0
// body: available
// range: 0x4309e0-0x431219 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CWnd::OnWndMsg(unsigned int,unsigned int,long,long *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  AFX_MSGMAP_ENTRY *pAVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  CWnd *pCVar5;
  CHwndRenderTarget *this_00;
  CD2DSizeU *pCVar6;
  CMenu *pCVar7;
  CWnd *pCVar8;
  uint uVar9;
  uint uVar10;
  short sVar11;
  uint uVar12;
  code *pcVar13;
  int iVar14;
  undefined **local_b4 [8];
  HWND__ *local_94;
  int local_40;
  CDC local_34 [4];
  undefined4 local_30;
  CD2DSizeU local_24 [4];
  CWnd *local_20;
  AFX_MSGMAP_ENTRY *local_1c;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa4;
  local_14[0] = 0;
  iVar14 = 0x7fffffff;
  local_18 = 0x7fffffff;
  local_8 = 0;
  if (param_1 == 0x111) {
    pcVar13 = *(code **)(*(int *)this + 0xf4);
    guard_check_icall(param_2,param_3);
    iVar4 = (*pcVar13)();
    if (iVar4 == 0) goto LAB_004311f9;
    goto LAB_00430a2c;
  }
  sVar11 = (short)param_3;
  if (param_1 != 1) {
LAB_00430a86:
    if (param_1 != 0x4e) {
      if (param_1 == 6) {
        pCVar5 = FromHandle((HWND__ *)param_3);
        _AfxHandleActivate(this,param_2,pCVar5);
      }
      if ((param_1 == 0x20) &&
         (iVar4 = _AfxHandleSetCursor(this,(int)sVar11,(uint)param_3 >> 0x10), iVar4 != 0))
      goto LAB_00430a2c;
      goto LAB_00430afa;
    }
    if (*(int *)param_3 == 0) goto LAB_004311f9;
    pcVar13 = *(code **)(*(int *)this + 0xf8);
    guard_check_icall(param_2,param_3,local_14);
    iVar4 = (*pcVar13)();
joined_r0x00430ab4:
    if (iVar4 == 0) goto LAB_004311f9;
    goto switchD_00430cae_caseD_3a;
  }
  if (*(int *)(this + 0x58) != 0) {
    iVar4 = CMFCDynamicLayout::Create(*(CMFCDynamicLayout **)(this + 0x58),this);
    if (iVar4 != 0) {
      InitDynamicLayout(this);
      goto LAB_00430a86;
    }
    local_20 = *(CWnd **)(this + 0x58);
    if (local_20 != (CWnd *)0x0) {
      pcVar13 = *(code **)(*(int *)local_20 + 4);
      guard_check_icall(1);
      (*pcVar13)();
    }
    *(undefined4 *)(this + 0x58) = 0;
  }
LAB_00430afa:
  local_20 = *(CWnd **)(this + 0x70);
  if (((local_20 != (CWnd *)0x0) && (0 < *(int *)(local_20 + 0x74))) &&
     (((0x1ff < param_1 && (param_1 < 0x20a)) ||
      (((0xff < param_1 && (param_1 < 0x110)) || (param_1 - 0x281 < 0x11)))))) {
    pcVar13 = *(code **)(*(int *)local_20 + 0x94);
    guard_check_icall(param_1,param_2,param_3,local_14);
    iVar4 = (*pcVar13)();
    if (iVar4 == 0) goto LAB_00430b59;
    goto switchD_00430cae_caseD_3a;
  }
LAB_00430b59:
  if (param_1 == 5) {
    pcVar13 = *(code **)(*(int *)this + 0x148);
    guard_check_icall();
    (*pcVar13)();
    this_00 = GetRenderTarget(this);
    if ((this_00 != (CHwndRenderTarget *)0x0) && (*(int *)(this_00 + 4) != 0)) {
      pCVar6 = (CD2DSizeU *)CD2DSizeU::CD2DSizeU(local_24,param_3 & 0xffff,(uint)param_3 >> 0x10);
      CHwndRenderTarget::Resize(this_00,pCVar6);
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
    }
  }
  else {
    if (param_1 == 0xf) {
      iVar4 = DoD2DPaint(this);
    }
    else {
      if ((param_1 != 0x14) || (*(int *)(this + 0x7c) == 0)) goto LAB_00430bdc;
      iVar4 = *(int *)(*(int *)(this + 0x7c) + 4);
    }
    if (iVar4 != 0) goto LAB_00430a2c;
  }
LAB_00430bdc:
  pcVar13 = *(code **)(*(int *)this + 0x28);
  guard_check_icall();
  local_20 = (CWnd *)(*pcVar13)();
  uVar12 = (uint)local_20 ^ param_1;
  FUN_0042fad9(7);
  iVar4 = (uVar12 & 0x1ff) * 0xc;
  if ((param_1 != *(uint *)(&DAT_00613268 + iVar4)) ||
     (local_20 != *(CWnd **)(&DAT_00613270 + iVar4))) {
    *(uint *)(&DAT_00613268 + iVar4) = param_1;
    *(CWnd **)(&DAT_00613270 + iVar4) = local_20;
    iVar2 = *(int *)local_20;
    iVar14 = local_18;
    while (local_18 = iVar14, iVar2 != 0) {
      if (param_1 < 0xc000) {
        local_1c = AfxFindMessageEntry(*(AFX_MSGMAP_ENTRY **)(local_20 + 4),param_1,0,0);
        if (local_1c != (AFX_MSGMAP_ENTRY *)0x0) {
          *(AFX_MSGMAP_ENTRY **)(&DAT_0061326c + iVar4) = local_1c;
          if (local_18 != 0x7fffffff) {
            FUN_004cfb5e(local_18);
            local_18 = 0x7fffffff;
          }
          goto LAB_00430c9c;
        }
      }
      else {
        for (local_1c = AfxFindMessageEntry(*(AFX_MSGMAP_ENTRY **)(local_20 + 4),0xc000,0,0);
            local_1c != (AFX_MSGMAP_ENTRY *)0x0;
            local_1c = AfxFindMessageEntry(local_1c + 0x18,0xc000,0,0)) {
          if (**(uint **)(local_1c + 0x10) == param_1) {
            *(AFX_MSGMAP_ENTRY **)(&DAT_0061326c + iVar4) = local_1c;
            if (local_18 != 0x7fffffff) {
              FUN_004cfb5e(local_18);
              local_18 = 0x7fffffff;
            }
            goto LAB_004311b9;
          }
        }
      }
      pcVar13 = *(code **)local_20;
      guard_check_icall();
      local_20 = (CWnd *)(*pcVar13)();
      iVar14 = local_18;
      iVar2 = *(int *)local_20;
    }
    *(undefined4 *)(&DAT_0061326c + iVar4) = 0;
    if (iVar14 != 0x7fffffff) {
      FUN_004cfb5e(iVar14);
      iVar14 = 0x7fffffff;
    }
LAB_004311f9:
    iVar4 = 0;
    goto LAB_004311fb;
  }
  local_1c = *(AFX_MSGMAP_ENTRY **)(&DAT_0061326c + iVar4);
  if (local_18 != 0x7fffffff) {
    FUN_004cfb5e(local_18);
    local_18 = 0x7fffffff;
  }
  iVar14 = local_18;
  if (local_1c == (AFX_MSGMAP_ENTRY *)0x0) goto LAB_004311f9;
  if (0xbfff < param_1) {
LAB_004311b9:
    pcVar13 = *(code **)(local_1c + 0x14);
switchD_00430cae_caseD_e:
    iVar14 = local_18;
    goto LAB_004311c2;
  }
LAB_00430c9c:
  iVar14 = local_18;
  pAVar1 = local_1c + 0x10;
  pcVar13 = *(code **)(local_1c + 0x14);
  sVar3 = (short)((uint)param_3 >> 0x10);
  pCVar5 = (CWnd *)param_3;
  switch(*(int *)pAVar1) {
  case 1:
    param_3 = (long)CDC::FromHandle((HDC__ *)param_2);
    goto LAB_00430d2b;
  case 2:
  case 3:
  case 4:
  case 0x1c:
  case 0x1d:
    param_3 = param_2;
    goto LAB_00430d2b;
  case 5:
  case 0xc:
    pCVar7 = (CMenu *)((uint)param_3 >> 0x10);
    pCVar8 = (CWnd *)(param_3 & 0xffff);
    pCVar5 = FromHandle((HWND__ *)param_2);
    goto LAB_00430d92;
  case 6:
  case 0x48:
    param_2 = (uint)FromHandle((HWND__ *)param_2);
    goto LAB_004311c2;
  case 7:
  case 0xd:
  case 0x4b:
  case 0x57:
LAB_00430d2b:
    guard_check_icall(param_3);
    local_14[0] = (*pcVar13)();
    break;
  case 8:
    CDC::CDC(local_34);
    local_8._0_1_ = 5;
    local_30 = *(undefined4 *)(param_3 + 4);
    CWnd((CWnd *)local_b4,(HWND__ *)0x0);
    local_b4[0] = vftable;
    local_8 = CONCAT31(local_8._1_3_,6);
    local_94 = *(HWND__ **)param_3;
    local_20 = *(CWnd **)(param_3 + 8);
    pCVar5 = FromHandlePermanent(local_94);
    if (pCVar5 == (CWnd *)0x0) {
      if ((*(int *)(this + 0x70) != 0) && (iVar4 = FUN_004c859b(local_94), iVar4 != 0)) {
        local_40 = iVar4;
      }
      pCVar5 = (CWnd *)local_b4;
    }
    guard_check_icall(local_34,pCVar5,local_20);
    local_14[0] = (*pcVar13)();
    local_30 = 0;
    local_94 = (HWND__ *)0x0;
    ~CWnd((CWnd *)local_b4);
    goto LAB_00430e51;
  case 9:
    CDC::CDC(local_34);
    local_8 = CONCAT31(local_8._1_3_,7);
    local_30 = *(undefined4 *)(param_3 + 4);
    guard_check_icall(local_34,*(undefined4 *)(param_3 + 8));
    local_14[0] = (*pcVar13)();
    local_30 = 0;
LAB_00430e51:
    CDC::~CDC(local_34);
    break;
  case 10:
    pCVar7 = (CMenu *)(param_2 >> 0x10);
    pCVar8 = FromHandle((HWND__ *)param_3);
    pCVar5 = (CWnd *)(param_2 & 0xffff);
    goto LAB_00430d92;
  case 0xb:
    param_3 = param_2 >> 0x10;
    param_2 = param_2 & 0xffff;
    goto LAB_004311c2;
  case 0xe:
  case 0x30:
  case 0x50:
  case 0x5a:
  case 0x5c:
  case 0x5e:
    goto switchD_00430cae_caseD_e;
  case 0xf:
    pCVar7 = CMenu::FromHandle((HMENU__ *)param_3);
    pCVar8 = (CWnd *)(param_2 >> 0x10);
    pCVar5 = (CWnd *)(param_2 & 0xffff);
LAB_00430d92:
    guard_check_icall(pCVar5,pCVar8,pCVar7);
    local_14[0] = (*pcVar13)();
    break;
  case 0x10:
  case 0x12:
  case 0x16:
  case 0x1f:
  case 0x2e:
  case 0x33:
  case 0x4d:
  case 0x54:
  case 0x55:
    goto LAB_00430d6d;
  case 0x11:
  case 0x14:
  case 0x15:
    param_3 = param_2;
    goto LAB_00430ef4;
  case 0x13:
    guard_check_icall();
    (*pcVar13)();
    break;
  case 0x17:
    pCVar5 = (CWnd *)(param_2 >> 0x10);
    param_2 = param_2 & 0xffff;
    goto LAB_00430d6d;
  case 0x18:
    param_2 = (uint)sVar11;
    pCVar5 = (CWnd *)(int)sVar3;
    goto LAB_00430d6d;
  case 0x19:
  case 0x1a:
    pCVar8 = (CWnd *)((uint)param_3 >> 0x10);
    pCVar5 = (CWnd *)(param_3 & 0xffff);
    goto LAB_00430f41;
  case 0x1b:
    pCVar5 = FromHandle((HWND__ *)param_3);
    goto LAB_00430d6d;
  case 0x1e:
  case 0x29:
  case 0x32:
  case 0x59:
    guard_check_icall();
    local_14[0] = (*pcVar13)();
    break;
  case 0x20:
    pCVar8 = FromHandle((HWND__ *)param_2);
    pCVar5 = FromHandle((HWND__ *)param_3);
    param_2 = (uint)(*(int *)(this + 0x20) == param_3);
    goto LAB_00430f41;
  case 0x21:
    param_3 = (long)CDC::FromHandle((HDC__ *)param_2);
    goto LAB_00430ef4;
  case 0x22:
    param_3 = (long)CMenu::FromHandle((HMENU__ *)param_2);
    goto LAB_00430ef4;
  case 0x23:
    pCVar8 = (CWnd *)(int)sVar3;
    pCVar5 = (CWnd *)(int)sVar11;
    param_2 = (uint)CMenu::FromHandle((HMENU__ *)param_2);
    goto LAB_00430f41;
  case 0x24:
    param_3 = param_2;
    goto LAB_00430fb4;
  case 0x25:
LAB_00430fb4:
    param_3 = (long)FromHandle((HWND__ *)param_3);
    goto LAB_00430ef4;
  case 0x26:
    pCVar8 = (CWnd *)((uint)param_3 >> 0x10);
    pCVar5 = (CWnd *)(param_3 & 0xffff);
    goto LAB_00430fcd;
  case 0x27:
    pCVar5 = (CWnd *)(int)sVar11;
    pCVar8 = (CWnd *)(int)sVar3;
LAB_00430fcd:
    param_2 = (uint)FromHandle((HWND__ *)param_2);
    goto LAB_00430f41;
  case 0x28:
  case 0x5d:
    param_2 = (uint)FromHandle((HWND__ *)param_2);
    pCVar5 = (CWnd *)param_3;
    goto LAB_00430d6d;
  case 0x2a:
    pCVar8 = (CWnd *)(param_2 >> 0x10);
    pCVar5 = FromHandle((HWND__ *)param_3);
    param_2 = param_2 & 0xffff;
    goto LAB_00430f41;
  case 0x2b:
  case 0x2c:
    local_1c = (AFX_MSGMAP_ENTRY *)(int)(short)param_2;
    local_20 = (CWnd *)(int)(short)(param_2 >> 0x10);
    param_2 = (uint)local_1c;
    pCVar5 = local_20;
    if (*(int *)pAVar1 == 0x2b) {
      pCVar8 = FromHandle((HWND__ *)param_3);
      param_2 = (uint)local_1c;
      pCVar5 = local_20;
      goto LAB_00430f41;
    }
    goto LAB_00430d6d;
  case 0x2d:
  case 0x34:
LAB_00430ef4:
    guard_check_icall(param_3);
    (*pcVar13)();
    break;
  case 0x2f:
  case 0x37:
  case 0x53:
    guard_check_icall(param_2,param_3);
    (*pcVar13)();
    goto LAB_00430a2c;
  case 0x31:
  case 0x47:
    param_2 = (uint)sVar11;
    param_3 = (long)sVar3;
    goto LAB_004311c2;
  case 0x35:
    pCVar5 = (CWnd *)(param_2 >> 0x10);
    param_2 = param_2 & 0xffff;
    pCVar8 = (CWnd *)param_3;
    goto LAB_00430f41;
  case 0x36:
    pCVar5 = (CWnd *)(int)sVar11;
    pCVar8 = (CWnd *)(int)sVar3;
LAB_00430f41:
    guard_check_icall(param_2,pCVar5,pCVar8);
    (*pcVar13)();
    break;
  case 0x38:
    guard_check_icall(param_2 & 0xffff,param_2 >> 0x10,(int)sVar11,(int)sVar3);
    local_14[0] = (*pcVar13)();
    iVar4 = local_14[0];
    goto joined_r0x00430ab4;
  case 0x39:
    guard_check_icall(param_2 & 0xffff,param_2 >> 0x10,(int)sVar11,(int)sVar3);
    (*pcVar13)();
    break;
  case 0x46:
    guard_check_icall();
    local_14[0] = (*pcVar13)();
    if (local_14[0] != 0) goto LAB_004311f9;
    break;
  case 0x49:
    pCVar5 = (CWnd *)CMenu::FromHandle((HMENU__ *)param_3);
    goto LAB_00430d6d;
  case 0x4a:
    param_3 = (long)CMenu::FromHandle((HMENU__ *)param_3);
    goto LAB_004311c2;
  case 0x4c:
    param_2 = (uint)CMenu::FromHandle((HMENU__ *)param_2);
    pCVar5 = (CWnd *)param_3;
    goto LAB_00430d6d;
  case 0x4e:
    uVar9 = param_3 & 0xffff;
    uVar10 = (uint)param_3 >> 0x10 & 0xfff;
    uVar12 = (uint)param_3 >> 0x10 & 0xf000;
    param_2 = (uint)FromHandle((HWND__ *)param_2);
    goto LAB_0043113a;
  case 0x4f:
    param_2 = param_2 & 0xff;
    goto LAB_00430d6d;
  case 0x51:
    uVar12 = (uint)sVar11;
    uVar9 = (uint)sVar3;
    uVar10 = param_2 >> 0x10;
    param_2 = param_2 & 0xffff;
    goto LAB_0043113a;
  case 0x52:
    uVar12 = (uint)sVar11;
    uVar9 = (uint)sVar3;
    uVar10 = param_2 >> 0x10;
LAB_0043113a:
    guard_check_icall(param_2,uVar10,uVar12,uVar9);
    (*pcVar13)();
LAB_00430a2c:
    local_14[0] = 1;
    goto LAB_004311d3;
  case 0x56:
    param_2 = (uint)CDC::FromHandle((HDC__ *)param_2);
    goto LAB_004311c2;
  case 0x58:
    pCVar5 = (CWnd *)(param_3 & 0xffff);
    param_2 = (uint)CGdiObject::FromHandle((void *)param_2);
LAB_00430d6d:
    guard_check_icall(param_2,pCVar5);
    (*pcVar13)();
    break;
  case 0x5b:
    param_3 = (long)sVar11;
    param_2 = (uint)sVar3;
LAB_004311c2:
    guard_check_icall(param_2,param_3);
    local_14[0] = (*pcVar13)();
  }
switchD_00430cae_caseD_3a:
LAB_004311d3:
  iVar4 = 1;
  if (param_4 != (long *)0x0) {
    *param_4 = local_14[0];
  }
LAB_004311fb:
  local_8 = 10;
  if (iVar14 != 0x7fffffff) {
    FUN_004cfb5e(iVar14);
  }
  return iVar4;
}

