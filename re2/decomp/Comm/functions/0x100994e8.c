// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawTab
// address: 0x100994e8
// body: available
// range: 0x100994e8-0x100998b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawTab(class CDC *,class
   CRect,int,int,class CMFCBaseTabCtrl const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawTab
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,LONG param_3,int param_4,int param_5,
          int param_6,CPen *param_7,int param_8,int *param_9)

{
  code *pcVar1;
  CDC *this_00;
  int iVar2;
  HRGN pHVar3;
  int iVar4;
  AFX_GLOBAL_DATA *pAVar5;
  byte bVar6;
  CMFCVisualManagerOffice2007 *pCVar7;
  int *piVar8;
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined **local_5c;
  undefined4 local_58;
  int *local_54;
  CDC *local_50;
  undefined1 local_4c [4];
  int local_48;
  CPen *local_44;
  int local_40;
  int local_3c;
  CMFCVisualManagerOffice2007 *local_38;
  POINT local_34;
  LONG local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_8 = 0x100994f4;
  local_50 = param_1;
  local_3c = param_8;
  local_54 = param_9;
  local_38 = this;
  iVar2 = CanDrawImage(this);
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*param_9 + 0x288);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    param_8 = local_3c;
    if (iVar2 == 0) {
      pcVar1 = *(code **)(*param_9 + 0x2a8);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      param_8 = local_3c;
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*param_9 + 0x28c);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        param_8 = local_3c;
        if (iVar2 == 0) {
          pcVar1 = *(code **)(*param_9 + 0x290);
          guard_check_icall();
          iVar2 = (*pcVar1)();
          param_8 = local_3c;
          if (iVar2 == 0) {
            local_40 = param_9[0x24];
            local_44 = (CPen *)param_9[0x45];
            pcVar1 = *(code **)(*param_9 + 0x1e4);
            guard_check_icall(param_7);
            local_48 = (*pcVar1)();
            pcVar1 = *(code **)(*param_9 + 0x280);
            guard_check_icall();
            iVar2 = (*pcVar1)();
            if (iVar2 == 0) {
              if (local_48 == -1) {
                if (local_3c == 0) {
                  local_48 = *(int *)(local_38 + 0x8f84);
                }
                else {
                  local_48 = *(int *)(local_38 + 0x8f88);
                }
              }
              bVar6 = -(local_3c != 0) & 3;
              if (param_7 == local_44) {
                bVar6 = bVar6 + 1;
              }
              local_40 = (-(uint)(local_40 != 0) & 0xfffffe88) + 0x3860;
              iVar2 = *(int *)(local_38 + local_40);
              guard_check_icall(local_50,param_3,param_4,param_5,param_6,bVar6,0xff);
              (**(code **)(iVar2 + 0x10))();
              piVar8 = local_54;
              pCVar7 = local_38;
              if (local_54[0x4d] != 0) {
                pAVar5 = GetGlobalData();
                local_48 = *(int *)(pAVar5 + 0x28);
                pCVar7 = local_38;
              }
            }
            else {
              if ((local_3c != 0) || (local_48 = 1, param_7 == local_44)) {
                local_48 = 2;
              }
              local_58 = 0;
              local_5c = CRgn::vftable;
              local_8 = 0;
              local_34.x = param_3;
              local_2c = param_3;
              local_28 = param_4;
              local_20 = param_4;
              if (local_40 == 0) {
                local_24 = param_5 + 1;
                local_1c = param_4 + 1 + (param_5 - (param_6 + 1));
                param_4 = param_4 + 1;
                local_18 = param_6 + 2;
                param_6 = param_6 + 1;
              }
              else {
                local_24 = (param_5 - param_6) + 1 + param_4;
                local_18 = param_6 + 1;
                local_1c = param_5 + 1;
              }
              local_34.y = local_18;
              pHVar3 = CreatePolygonRgn(&local_34,4,2);
              CMenu::Attach((CMenu *)&local_5c,(HMENU__ *)pHVar3);
              pcVar1 = *(code **)(*(int *)param_1 + 0x1c);
              guard_check_icall();
              local_60 = (*pcVar1)();
              CDC::SelectClipRgn(param_1,(CRgn *)&local_5c,1);
              this_00 = local_50;
              local_44 = (CPen *)(local_38 + (-(uint)(local_40 != 0) & 0xfffffe88) + 0x3b50);
              iVar2 = *(int *)local_44;
              guard_check_icall(local_50,param_3,param_4,param_5,param_6,local_48,0xff);
              (**(code **)(iVar2 + 0x10))();
              pCVar7 = local_38;
              local_44 = CDC::SelectObject(this_00,(CPen *)(local_38 +
                                                           ((local_3c != 0) + 0x11e3) * 8));
              iVar2 = local_40;
              if (local_40 == 0) {
                CDC::MoveTo(this_00,(int)local_4c,local_24);
                iVar4 = local_1c;
              }
              else {
                CDC::MoveTo(this_00,(int)local_4c,local_24 + -1);
                iVar4 = local_1c + -1;
              }
              CDC::LineTo(this_00,iVar4,local_18 + -1);
              CDC::SelectObject(this_00,(CPen *)(pCVar7 + ((local_3c != 0) + 0x11e1) * 8));
              if (iVar2 == 0) {
                CDC::MoveTo(this_00,(int)local_4c,local_24 + -2);
                iVar4 = local_18 + -2;
                iVar2 = local_1c;
              }
              else {
                CDC::MoveTo(this_00,(int)local_68,local_24 + -1);
                iVar4 = local_18 + -1;
                iVar2 = local_1c + -2;
              }
              CDC::LineTo(this_00,iVar2,iVar4);
              CDC::SelectObject(this_00,local_44);
              CDC::SelectClipRgn(this_00,(CRgn *)0x0);
              pAVar5 = GetGlobalData();
              local_48 = *(int *)(pAVar5 + 0x68);
              pcVar1 = *(code **)(*(int *)this_00 + 0x20);
              guard_check_icall(local_60);
              (*pcVar1)();
              local_8 = 0xffffffff;
              local_5c = CRgn::vftable;
              CImageList::~CImageList((CImageList *)&local_5c);
              piVar8 = local_54;
            }
            pcVar1 = *(code **)(*(int *)pCVar7 + 0xfc);
            guard_check_icall(local_50,param_3,param_4,param_5,param_6,param_7,local_3c,piVar8,
                              local_48);
            (*pcVar1)();
            goto LAB_100998b1;
          }
        }
      }
    }
  }
  CMFCVisualManagerOffice2003::OnDrawTab
            ((CMFCVisualManagerOffice2003 *)local_38,param_1,param_3,param_4,param_5,param_6,param_7
             ,param_8,param_9);
LAB_100998b1:
  FUN_101490fe();
  return;
}

