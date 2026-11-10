// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawRibbonProgressBar
// address: 0x4b8b8b
// body: available
// range: 0x4b8b8b-0x4b8dd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawRibbonProgressBar(class CDC
   *,class CMFCRibbonProgressBar *,class CRect,class CRect,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawRibbonProgressBar
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,int param_2,int param_4,int param_5,
          int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12)

{
  int iVar1;
  CDC *pCVar2;
  int iVar3;
  BOOL BVar4;
  HRGN pHVar5;
  int iVar6;
  int iVar7;
  CMFCVisualManagerOffice2003 *pCVar8;
  CDC *this_00;
  undefined **local_38;
  int local_34;
  int local_30;
  CMFCVisualManagerOffice2003 *local_2c;
  CDC *local_28;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x4b8b97;
  local_28 = param_1;
  local_30 = param_2;
  local_2c = (CMFCVisualManagerOffice2003 *)this;
  iVar3 = CanDrawImage(this);
  if (iVar3 == 0) {
    CMFCVisualManagerOffice2003::OnDrawRibbonProgressBar
              (local_2c,local_28,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12);
  }
  else {
    iVar3 = *(int *)(this + 0x7ee0);
    guard_check_icall(local_28,param_4,param_5,param_6,param_7,0,0xff);
    (**(code **)(iVar3 + 0x10))();
    pCVar8 = local_2c;
    local_38 = *(undefined ***)(local_2c + 0x8020);
    local_34 = *(int *)(local_2c + 0x8024);
    local_24.left = param_4 + *(int *)(local_2c + 0x8018);
    local_24.top = param_5 + *(int *)(local_2c + 0x801c);
    local_24.right = param_6 - (int)local_38;
    local_24.bottom = param_7 - local_34;
    if (param_12 == 0) {
      IntersectRect((LPRECT)&param_8,(LPRECT)&param_8,&local_24);
      BVar4 = IsRectEmpty((RECT *)&param_8);
      if ((BVar4 == 0) || (*(int *)(local_30 + 0x114) != *(int *)(local_30 + 0x10c))) {
        local_38 = CRgn::vftable;
        local_34 = 0;
        local_8 = 0;
        pHVar5 = CreateRectRgnIndirect(&local_24);
        CMenu::Attach((CMenu *)&local_38,(HMENU__ *)pHVar5);
        CDC::SelectClipRgn(local_28,(CRgn *)&local_38);
        BVar4 = IsRectEmpty((RECT *)&param_8);
        this_00 = local_28;
        if (BVar4 == 0) {
          param_8 = (local_24.left - local_24.right) + param_10;
          iVar3 = *(int *)(pCVar8 + 0x8058);
          guard_check_icall(local_28,param_8,param_9,param_10,param_11,0,0xff);
          (**(code **)(iVar3 + 0x10))();
          pCVar8 = local_2c;
        }
        else {
          param_8 = local_24.left;
          param_9 = local_24.top;
          param_11 = local_24.bottom;
          param_10 = local_24.left;
        }
        pCVar2 = local_28;
        iVar3 = param_10;
        if (param_10 != local_24.right) {
          iVar1 = *(int *)(pCVar8 + 0x81d0);
          iVar7 = param_10 + (*(int *)(pCVar8 + 0x8300) - *(int *)(pCVar8 + 0x82f8));
          param_8 = param_10;
          param_10 = iVar7;
          guard_check_icall(local_28,iVar3,param_9,iVar7,param_11,0,0xff);
          (**(code **)(iVar1 + 0x10))();
          this_00 = pCVar2;
        }
        CDC::SelectClipRgn(this_00,(CRgn *)0x0);
        local_38 = CRgn::vftable;
        FUN_0040ee80();
      }
    }
    else {
      iVar3 = *(int *)(local_30 + 0x114);
      iVar1 = *(int *)(local_30 + 0x10c);
      if (iVar3 != iVar1) {
        iVar6 = CMFCControlRenderer::GetImageCount((CMFCControlRenderer *)(local_2c + 0x8348));
        iVar7 = *(int *)(pCVar8 + 0x8348);
        guard_check_icall(local_28,local_24.left,local_24.top,local_24.right,local_24.bottom,
                          (iVar3 - iVar1) % iVar6,0xff);
        (**(code **)(iVar7 + 0x10))();
      }
    }
  }
  FUN_0055bae6();
  return;
}

