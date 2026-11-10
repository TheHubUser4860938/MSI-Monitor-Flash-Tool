// rea decompile_all
// name: CMFCLinkCtrl::SizeToContent
// address: 0x1006f8ef
// body: available
// range: 0x1006f8ef-0x1006faa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006f931 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCLinkCtrl::SizeToContent(int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCLinkCtrl::SizeToContent(CMFCLinkCtrl *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  int in_stack_0000000c;
  int iVar9;
  uint uVar10;
  int local_54 [5];
  int *local_40;
  CPen *local_3c;
  int local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x1006f8fb;
  local_40 = (int *)param_1;
  iVar2 = CSize::operator!=((CSize *)(this + 0xe0),(tagSIZE)0x0);
  if (iVar2 != 0) {
    CMFCButton::SizeToContent((CMFCButton *)this,param_1);
LAB_1006fa9e:
    FUN_1017f5f4();
    return;
  }
  iVar2 = 0;
  if (this != (CMFCLinkCtrl *)0x0) {
    iVar2 = *(int *)(this + 0x20);
  }
  if (iVar2 != 0) {
    CClientDC::CClientDC((CClientDC *)local_54,(CWnd *)this);
    local_8 = 0;
    pAVar3 = GetGlobalData();
    local_3c = CDC::SelectObject((CDC *)local_54,(CPen *)(pAVar3 + 0x144));
    if (local_3c != (CPen *)0x0) {
      uVar4 = FUN_10048e90();
      FUN_10034c30(uVar4);
      local_8 = CONCAT31(local_8._1_3_,1);
      CWnd::GetWindowTextW
                ((CWnd *)this,
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_38);
      local_34.left = 0;
      local_34.top = 0;
      local_34.right = 0;
      local_34.bottom = 0;
      GetClientRect(*(HWND *)(this + 0x20),&local_34);
      local_24.left = local_34.left;
      local_24.top = local_34.top;
      local_24.right = local_34.right;
      local_24.bottom = local_34.bottom;
      pcVar1 = *(code **)(local_54[0] + 0x68);
      guard_check_icall(local_38,*(undefined4 *)(local_38 + -0xc),&local_24,0x420);
      (*pcVar1)();
      InflateRect(&local_24,3,3);
      if ((param_2 == 0) && (in_stack_0000000c == 0)) {
        iVar5 = local_24.bottom - local_24.top;
        uVar10 = 0x16;
        iVar6 = local_24.right - local_24.left;
        iVar9 = -1;
        iVar2 = -1;
      }
      else {
        pHVar7 = GetParent(*(HWND *)(this + 0x20));
        pCVar8 = CWnd::FromHandle(pHVar7);
        pHVar7 = (HWND)0x0;
        if (pCVar8 != (CWnd *)0x0) {
          pHVar7 = *(HWND *)(pCVar8 + 0x20);
        }
        MapWindowPoints(*(HWND *)(this + 0x20),pHVar7,(LPPOINT)&local_34,2);
        if (in_stack_0000000c == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (((local_34.right - local_24.right) - local_34.left) + local_24.left) / 2;
        }
        if (param_2 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = (((local_24.top - local_24.bottom) - local_34.top) + local_34.bottom) / 2;
        }
        iVar5 = local_24.bottom - local_24.top;
        iVar6 = local_24.right - local_24.left;
        iVar9 = iVar9 + local_34.top;
        uVar10 = 0x14;
        iVar2 = local_34.left + iVar2;
      }
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,iVar2,iVar9,iVar6,iVar5,uVar10);
      CDC::SelectObject((CDC *)local_54,local_3c);
      *local_40 = local_24.right - local_24.left;
      local_40[1] = local_24.bottom - local_24.top;
      FUN_10034f00();
      CClientDC::~CClientDC((CClientDC *)local_54);
      goto LAB_1006fa9e;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

