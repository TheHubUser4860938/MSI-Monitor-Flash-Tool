// rea decompile_all
// name: CPreviewView::OnDraw
// address: 0x101519b8
// body: available
// range: 0x101519b8-0x10151ed5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CPreviewView::OnDraw(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPreviewView::OnDraw(CPreviewView *this,CDC *param_1)

{
  uint uVar1;
  code *pcVar2;
  tagPOINT tVar3;
  tagRECT *ptVar4;
  CDC *pCVar5;
  DWORD DVar6;
  HPEN pHVar7;
  int xRight;
  int *piVar8;
  HBRUSH hbr;
  int iVar9;
  undefined4 uVar10;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined **local_64;
  undefined4 local_60;
  undefined **local_5c;
  undefined4 local_58;
  int local_54;
  tagRECT *local_50;
  int local_4c;
  LONG local_48;
  tagPOINT local_44;
  CDC *local_3c;
  uint local_38;
  RECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x80;
  local_8 = 0x101519c7;
  local_3c = param_1;
  if ((*(int *)(this + 0xbc) != 0) && (*(int *)(this + 200) != 0)) {
    CDC::GetViewportOrg(param_1);
    local_60 = 0;
    local_64 = CPen::vftable;
    local_8 = 0;
    DVar6 = GetSysColor(6);
    pHVar7 = CreatePen(0,2,DVar6);
    CMenu::Attach((CMenu *)&local_64,(HMENU__ *)pHVar7);
    local_58 = 0;
    local_5c = CPen::vftable;
    local_8 = CONCAT31(local_8._1_3_,1);
    DVar6 = GetSysColor(0x10);
    pHVar7 = CreatePen(0,3,DVar6);
    CMenu::Attach((CMenu *)&local_5c,(HMENU__ *)pHVar7);
    local_38 = 0;
    *(undefined4 *)(*(int *)(this + 0x164) + 0x10) = 1;
    if (*(int *)(this + 0x148) != 0) {
      local_4c = local_44.y;
      local_54 = 0;
      local_48 = local_44.x;
      do {
        pcVar2 = *(code **)(*(int *)(this + 0xc4) + 0x1c);
        guard_check_icall();
        local_68 = (*pcVar2)();
        if (param_1 == (CDC *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(param_1 + 4);
        }
        pcVar2 = *(code **)(**(int **)(this + 0xc0) + 0x10);
        guard_check_icall(iVar9);
        (*pcVar2)();
        *(uint *)(*(int *)(this + 0x164) + 0x14) = *(int *)(this + 0x144) + local_38;
        uVar1 = *(uint *)(this + 0x144) + local_38;
        if (((*(uint *)(this + 0x144) <= uVar1) && (local_38 <= uVar1)) &&
           (uVar1 <= *(ushort *)(*(int *)(**(int **)(this + 0x164) + 0xa8) + 0x1e))) {
          pcVar2 = *(code **)(**(int **)(this + 0xbc) + 0x188);
          guard_check_icall(*(undefined4 *)(this + 0xc0),*(int **)(this + 0x164));
          (*pcVar2)();
        }
        uVar1 = local_38;
        iVar9 = GetDeviceCaps(*(HDC *)(*(int *)(this + 0xc0) + 8),10);
        xRight = GetDeviceCaps(*(HDC *)(*(int *)(this + 0xc0) + 8),8);
        SetRect((LPRECT)(*(int *)(this + 0x164) + 0x24),0,0,xRight,iVar9);
        DPtoLP(*(HDC *)(*(int *)(this + 0xc0) + 8),(LPPOINT)(*(int *)(this + 0x164) + 0x24),2);
        pcVar2 = *(code **)(*(int *)local_3c + 0x1c);
        guard_check_icall();
        (*pcVar2)();
        local_50 = (tagRECT *)(*(int *)(this + 0xe0) + local_54);
        if (local_50[1].right == 0) {
          pcVar2 = *(code **)(*(int *)this + 0x1bc);
          guard_check_icall(uVar1);
          (*pcVar2)();
          if (*(int *)(this + 0x13c) != 0) {
            piVar8 = (int *)CScrollView::GetDeviceScrollPosition((CScrollView *)this);
            local_48 = -*piVar8;
            local_4c = -piVar8[1];
            if (*(int *)(this + 0xb0) != 0) {
              local_24.left = 0;
              local_24.top = 0;
              local_24.right = 0;
              local_24.bottom = 0;
              GetClientRect(*(HWND *)(this + 0x20),&local_24);
              if (*(int *)(this + 0x98) < local_24.right - local_24.left) {
                local_48 = ((local_24.right - local_24.left) - *(int *)(this + 0x98)) / 2;
              }
              if (*(int *)(this + 0x9c) < local_24.bottom - local_24.top) {
                local_4c = ((local_24.bottom - local_24.top) - *(int *)(this + 0x9c)) / 2;
              }
            }
          }
        }
        pCVar5 = local_3c;
        pcVar2 = *(code **)(*(int *)local_3c + 0x34);
        guard_check_icall(1);
        (*pcVar2)();
        tVar3.y = local_48;
        tVar3.x = (LONG)local_78;
        CDC::SetViewportOrg(pCVar5,tVar3);
        CDC::SetWindowOrg(pCVar5,(int)local_80,0);
        pcVar2 = *(code **)(*(int *)pCVar5 + 0x24);
        guard_check_icall(5);
        (*pcVar2)();
        CDC::SelectObject(pCVar5,(CPen *)&local_64);
        ptVar4 = local_50;
        CDC::Rectangle(pCVar5,local_50);
        CDC::SelectObject(pCVar5,(CPen *)&local_5c);
        CDC::MoveTo(pCVar5,(int)local_88,ptVar4->right + 1);
        CDC::LineTo(pCVar5,ptVar4->right + 1,ptVar4->bottom + 1);
        CDC::MoveTo(pCVar5,(int)local_90,ptVar4->left + 3);
        CDC::LineTo(pCVar5,ptVar4->right + 1,ptVar4->bottom + 1);
        local_34.left = ptVar4->left + 1;
        local_34.top = ptVar4->top + 1;
        local_34.right = ptVar4->right + -2;
        local_34.bottom = ptVar4->bottom + -2;
        hbr = GetStockObject(0);
        pCVar5 = local_3c;
        FillRect(*(HDC *)(local_3c + 4),&local_34,hbr);
        uVar10 = 0xffffffff;
        pcVar2 = *(code **)(*(int *)pCVar5 + 0x20);
        guard_check_icall(0xffffffff);
        (*pcVar2)();
        if (((*(int **)(this + 0x164))[4] == 0) ||
           ((uint)*(ushort *)(*(int *)(**(int **)(this + 0x164) + 0xa8) + 0x1e) <
            *(int *)(this + 0x144) + local_38)) {
          pcVar2 = *(code **)(**(int **)(this + 0xc0) + 0x18);
          guard_check_icall(uVar10);
          (*pcVar2)();
          pcVar2 = *(code **)(*(int *)(this + 0xc4) + 0x20);
          guard_check_icall(local_68);
          (*pcVar2)();
          if ((local_38 == 0) && (1 < *(uint *)(this + 0x144))) {
            SetCurrentPage(this,*(uint *)(this + 0x144) - 1,1);
          }
          break;
        }
        local_38 = local_38 + 1;
        pcVar2 = *(code **)(*(int *)this + 0x1c0);
        guard_check_icall(*(int *)(this + 0x144),local_38);
        (*pcVar2)();
        CPreviewDC::SetScaleRatio
                  (*(CPreviewDC **)(this + 0xc0),local_50[1].right,local_50[1].bottom);
        local_44.x = 0;
        local_44.y = 0;
        iVar9 = **(int **)(this + 0xc0);
        guard_check_icall(0xd,0,0,&local_44);
        (**(code **)(iVar9 + 0x74))();
        CPreviewDC::PrinterDPtoScreenDP(*(CPreviewDC **)(this + 0xc0),&local_44);
        local_44.y = local_44.y + 1 + local_50->top + local_4c;
        local_44.x = local_44.x + 1 + local_50->left + local_48;
        CPreviewDC::SetTopLeftOffset(*(CPreviewDC **)(this + 0xc0),local_44.x,local_44.y);
        CPreviewDC::ClipToPage(*(CPreviewDC **)(this + 0xc0));
        pcVar2 = *(code **)(**(int **)(this + 0xbc) + 0x1a8);
        guard_check_icall(*(undefined4 *)(this + 0xc0),*(undefined4 *)(this + 0x164));
        (*pcVar2)();
        pcVar2 = *(code **)(**(int **)(this + 0xc0) + 0x18);
        guard_check_icall();
        (*pcVar2)();
        pcVar2 = *(code **)(*(int *)(this + 0xc4) + 0x20);
        guard_check_icall(local_68);
        (*pcVar2)();
        local_54 = local_54 + 0x28;
        param_1 = local_3c;
      } while (local_38 < *(uint *)(this + 0x148));
    }
    CGdiObject::DeleteObject((CGdiObject *)&local_64);
    CGdiObject::DeleteObject((CGdiObject *)&local_5c);
    local_5c = CPen::vftable;
    CImageList::~CImageList((CImageList *)&local_5c);
    local_64 = CPen::vftable;
    CImageList::~CImageList((CImageList *)&local_64);
  }
  FUN_10154478();
  return;
}

