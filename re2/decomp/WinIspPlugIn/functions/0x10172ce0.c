// rea decompile_all
// name: CCheckListBox::PreDrawItemNonThemed
// address: 0x10172ce0
// body: available
// range: 0x10172ce0-0x10172ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10172d0d to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CCheckListBox::PreDrawItemNonThemed(class CDC *,struct
   tagDRAWITEMSTRUCT &,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CCheckListBox::PreDrawItemNonThemed
          (CCheckListBox *this,CDC *param_1,tagDRAWITEMSTRUCT *param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  tagDRAWITEMSTRUCT *ptVar3;
  CNoTrackObject *this_00;
  HDC pHVar4;
  int iVar5;
  CSize *pCVar6;
  CCheckListBox *pCVar7;
  uint uVar8;
  int iVar9;
  RECT *lprcSrc;
  undefined **local_78;
  HBRUSH local_74;
  RECT *local_70;
  HGDIOBJ local_6c;
  ulong local_68;
  int local_64;
  CDC local_60 [4];
  HDC local_5c;
  tagDRAWITEMSTRUCT *local_50;
  int local_4c;
  CCheckListBox *local_48;
  int local_44;
  int local_40;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_8 = 0x10172cec;
  local_50 = param_2;
  local_48 = this;
  this_00 = CProcessLocalObject::GetData
                      ((CProcessLocalObject *)&DAT_10248858,
                       (_func_CNoTrackObject_ptr *)&LAB_10171f18);
  if (this_00 != (CNoTrackObject *)0x0) {
    CDC::CDC(local_60);
    local_8 = 0;
    if (param_1 == (CDC *)0x0) {
      pHVar4 = (HDC)0x0;
    }
    else {
      pHVar4 = *(HDC *)(param_1 + 4);
    }
    pHVar4 = CreateCompatibleDC(pHVar4);
    iVar5 = CDC::Attach(local_60,pHVar4);
    if (iVar5 != 0) {
      local_68 = FUN_1005f6a5();
      CDC::SetLayout(local_60,0);
      local_6c = SelectObject(local_5c,*(HGDIOBJ *)(this_00 + 4));
      pCVar6 = _AFX_CHECKLIST_STATE::GetCheckBoxSize
                         ((_AFX_CHECKLIST_STATE *)this_00,(CWnd *)local_48);
      lprcSrc = (RECT *)(param_2 + 0x1c);
      iVar5 = *(int *)pCVar6;
      local_4c = *(int *)(pCVar6 + 4);
      local_70 = lprcSrc;
      local_64 = iVar5;
      CopyRect(&local_24,lprcSrc);
      local_24.left = local_24.left + 1;
      iVar9 = (param_4 - local_4c) / 2;
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      local_24.top = iVar9 + local_24.top + 1;
      local_24.right = local_24.left + iVar5;
      local_24.bottom = local_4c + local_24.top;
      CopyRect(&local_34,lprcSrc);
      local_34.right = local_34.left + 2 + iVar5;
      pcVar1 = *(code **)(*(int *)local_48 + 0x180);
      guard_check_icall(&local_44,local_34.left,local_34.top,local_34.right,local_34.bottom,
                        local_24.left,local_24.top,local_24.right,local_24.bottom);
      pCVar7 = local_48;
      (*pcVar1)();
      local_48 = (CCheckListBox *)GetSysColor(5);
      iVar5 = CWnd::IsWindowEnabled((CWnd *)pCVar7);
      ptVar3 = local_50;
      if ((iVar5 == 0) || (iVar5 = IsEnabled(pCVar7,*(int *)(local_50 + 8)), iVar5 == 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      pCVar7 = local_48;
      if ((((byte)ptVar3[0x10] & 1) != 0) && (!bVar2)) {
        pCVar7 = (CCheckListBox *)GetSysColor(0xd);
      }
      CBrush::CBrush((CBrush *)&local_78,(ulong)pCVar7);
      local_8 = CONCAT31(local_8._1_3_,1);
      FillRect(*(HDC *)(param_1 + 4),&local_34,local_74);
      uVar8 = FUN_1005f6a5();
      CDC::SetLayout(param_1,uVar8 | 8);
      iVar5 = local_64;
      BitBlt(*(HDC *)(param_1 + 4),local_44,local_40,local_64,local_4c,local_5c,local_64 * param_3,0
             ,0xcc0020);
      CDC::SetLayout(param_1,uVar8);
      CDC::SetLayout(local_60,local_68);
      SelectObject(local_5c,local_6c);
      local_78 = CBrush::vftable;
      local_70->left = local_70->left + iVar5 + 3;
      CImageList::~CImageList((CImageList *)&local_78);
    }
    CDC::~CDC(local_60);
    FUN_1018015d();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004a383();
}

