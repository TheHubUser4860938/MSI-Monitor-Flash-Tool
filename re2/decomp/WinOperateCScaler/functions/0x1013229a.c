// rea decompile_all
// name: CPaneDivider::RepositionPanes
// address: 0x1013229a
// body: available
// range: 0x1013229a-0x101325b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013247a to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CPaneDivider::RepositionPanes(class CRect &,void * &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneDivider::RepositionPanes(CPaneDivider *this,CRect *param_1,void **param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  CPaneDivider *pCVar3;
  void **ppvVar4;
  tagRECT *ptVar5;
  int iVar6;
  HWND pHVar7;
  CWnd *this_00;
  void *pvVar8;
  CObject *pCVar9;
  HRGN pHVar10;
  CObList local_98 [4];
  undefined4 *local_94;
  CObList local_7c [4];
  undefined4 *local_78;
  CPaneDivider *local_60;
  int local_5c;
  int local_58;
  undefined **local_54;
  HRGN local_50;
  void **local_4c;
  tagRECT *local_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x88;
  local_8 = 0x101322a9;
  local_48 = (tagRECT *)param_1;
  local_4c = param_2;
  local_24.left = *(LONG *)param_1;
  local_24.top = *(LONG *)(param_1 + 4);
  local_24.right = *(LONG *)(param_1 + 8);
  local_24.bottom = *(LONG *)(param_1 + 0xc);
  local_44.left = *(LONG *)param_1;
  local_44.top = *(LONG *)(param_1 + 4);
  local_44.right = *(LONG *)(param_1 + 8);
  local_44.bottom = *(LONG *)(param_1 + 0xc);
  pcVar1 = *(code **)(*(int *)this + 0x194);
  local_60 = this;
  guard_check_icall();
  iVar6 = (*pcVar1)();
  ptVar5 = local_48;
  if (iVar6 == 0x1000) {
    local_44.left = local_48->right - *(int *)(this + 0x118);
    local_24.right = local_44.left;
LAB_1013234b:
    local_24.top = local_44.top;
    local_24.bottom = local_44.bottom;
  }
  else {
    if (iVar6 == 0x2000) {
      local_44.top = local_48->bottom - *(int *)(this + 0x118);
      local_24.bottom = local_44.top;
    }
    else {
      if (iVar6 == 0x4000) {
        local_44.right = *(int *)(this + 0x118) + local_48->left;
        local_24.left = local_44.right;
        goto LAB_1013234b;
      }
      if (iVar6 != 0x8000) goto LAB_10132357;
      local_44.bottom = *(int *)(this + 0x118) + local_48->top;
      local_24.top = local_44.bottom;
    }
    local_24.left = local_44.left;
    local_24.right = local_44.right;
  }
LAB_10132357:
  pHVar7 = GetParent(*(HWND *)(this + 0x20));
  this_00 = CWnd::FromHandle(pHVar7);
  local_48 = (tagRECT *)this_00;
  CWnd::ScreenToClient(this_00,ptVar5);
  CWnd::ScreenToClient(this_00,&local_44);
  CWnd::ScreenToClient(this_00,&local_24);
  ppvVar4 = local_4c;
  pcVar1 = *(code **)(*(int *)this + 0x234);
  guard_check_icall(&local_44,1,*local_4c);
  pvVar8 = (void *)(*pcVar1)();
  *ppvVar4 = pvVar8;
  local_4c = *(void ***)(this + 0x168);
  if (local_4c != (void **)0x0) {
    iVar6 = (int)*local_4c;
    guard_check_icall(local_24.left,local_24.top,local_24.right,local_24.bottom,ppvVar4);
    (**(code **)(iVar6 + 0x38))();
    pCVar3 = local_60;
    local_5c = 0;
    local_58 = 0;
    pcVar1 = *(code **)(**(int **)(local_60 + 0x168) + 0x50);
    guard_check_icall(&local_5c);
    (*pcVar1)();
    if (DAT_10209bb0 != 0) {
      CObList::CObList(local_7c,10);
      local_8 = 0;
      CObList::CObList(local_98,10);
      local_8 = CONCAT31(local_8._1_3_,1);
      CPaneContainerManager::AddPanesToList
                (*(CPaneContainerManager **)(pCVar3 + 0x168),local_7c,local_98);
      ptVar5 = local_48;
      if ((local_24.right - local_24.left < local_5c) || (local_24.bottom - local_24.top < local_58)
         ) {
        while (local_78 != (undefined4 *)0x0) {
          if (local_78 == (undefined4 *)0x0) goto LAB_1013247a;
          puVar2 = (undefined4 *)*local_78;
          pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,
                                      (CObject *)local_78[2]);
          local_34.left = 0;
          local_34.top = 0;
          local_34.right = 0;
          local_34.bottom = 0;
          GetWindowRect(*(HWND *)(pCVar9 + 0x20),&local_34);
          CWnd::ScreenToClient((CWnd *)ptVar5,&local_34);
          if (local_24.right < local_34.right) {
            local_34.right = local_24.right;
          }
          if (local_24.bottom < local_34.bottom) {
            local_34.bottom = local_24.bottom;
          }
          OffsetRect(&local_34,-local_34.left,-local_34.top);
          local_50 = (HRGN)0x0;
          local_54 = CRgn::vftable;
          local_8._0_1_ = 2;
          pHVar10 = CreateRectRgn(local_34.left,local_34.top,local_34.right,local_34.bottom);
          CMenu::Attach((CMenu *)&local_54,(HMENU__ *)pHVar10);
          SetWindowRgn(*(HWND *)(pCVar9 + 0x20),local_50,1);
          local_8 = CONCAT31(local_8._1_3_,1);
          local_54 = CRgn::vftable;
          CImageList::~CImageList((CImageList *)&local_54);
          local_78 = puVar2;
        }
        while (local_94 != (undefined4 *)0x0) {
          if (local_94 == (undefined4 *)0x0) goto LAB_1013247a;
          puVar2 = local_94 + 2;
          local_94 = (undefined4 *)*local_94;
          pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_101cc138,
                                      (CObject *)*puVar2);
          pcVar1 = *(code **)(*(int *)pCVar9 + 0x238);
          guard_check_icall(&DAT_10209108,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0x13,0);
          (*pcVar1)();
        }
      }
      else {
        while (local_78 != (undefined4 *)0x0) {
          if (local_78 == (undefined4 *)0x0) {
LAB_1013247a:
                    /* WARNING: Subroutine does not return */
            FUN_1001d023();
          }
          puVar2 = (undefined4 *)*local_78;
          SetWindowRgn(*(HWND *)(local_78[2] + 0x20),(HRGN)0x0,1);
          local_78 = puVar2;
        }
      }
      CObList::~CObList(local_98);
      CObList::~CObList(local_7c);
    }
  }
  FUN_10154478();
  return;
}

