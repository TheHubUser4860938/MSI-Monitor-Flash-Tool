// rea decompile_all
// name: CSmartDockingGroupGuidesManager::DrawCentralGroupGuides
// address: 0x54b362
// body: available
// range: 0x54b362-0x54b543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CSmartDockingGroupGuidesManager::DrawCentralGroupGuides(class CDC
   &,class CBrush &,class CBrush &,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CSmartDockingGroupGuidesManager::DrawCentralGroupGuides
          (CSmartDockingGroupGuidesManager *this,CDC *param_1,CBrush *param_2,CBrush *param_3,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  CRgn *pCVar1;
  code *pcVar2;
  AFX_SMARTDOCK_THEME AVar3;
  HDC pHVar4;
  HBRUSH pHVar5;
  int iVar6;
  CSmartDockingGroupGuidesManager *pCVar7;
  CDC local_50 [16];
  CSmartDockingGroupGuidesManager *local_40;
  undefined **local_3c;
  HBRUSH local_38;
  undefined **local_34;
  CBrush *local_30;
  int local_2c;
  CBrush *local_28;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x54b36e;
  local_30 = param_2;
  local_28 = param_3;
  local_40 = this;
  if (DAT_00616094 == 0) {
    AVar3 = GetVMTheme();
    if (AVar3 != 2) {
      iVar6 = 0;
      goto LAB_0054b39c;
    }
  }
  iVar6 = 1;
LAB_0054b39c:
  local_2c = iVar6;
  CDC::CDC(local_50);
  local_8 = 0;
  if (param_1 == (CDC *)0x0) {
    pHVar4 = (HDC)0x0;
  }
  else {
    pHVar4 = *(HDC *)(param_1 + 4);
  }
  pHVar4 = CreateCompatibleDC(pHVar4);
  CDC::Attach(local_50,pHVar4);
  if (iVar6 == 0) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetBoundsRect(*(HDC *)(param_1 + 8),&local_24,0);
    local_38 = (HBRUSH)0x0;
    local_3c = CBrush::vftable;
    local_8._0_1_ = 1;
    pHVar5 = CreateSolidBrush(DAT_00616050);
    CMenu::Attach((CMenu *)&local_3c,(HMENU__ *)pHVar5);
    FillRect(*(HDC *)(param_1 + 4),&local_24,local_38);
    local_8 = (uint)local_8._1_3_ << 8;
    local_3c = CBrush::vftable;
    FUN_0040ee80();
  }
  pCVar7 = local_40;
  if (*(int *)(this + 0x10a4) == 0) {
    pCVar1 = (CRgn *)(this + 0x1130);
    CDC::FillRgn(param_1,pCVar1,local_30);
    if ((((*(int *)(this + 0x113c) == 0) || (DAT_00616064 != 0)) || (*(int *)(this + 0x1010) == 0))
       || (*(int *)(this + 0xfe0) == 0)) {
      CDC::FrameRgn(param_1,pCVar1,local_28,1,1);
    }
    else {
      CBrush::CBrush((CBrush *)&local_34,0xca7041);
      CDC::FrameRgn(param_1,pCVar1,(CBrush *)&local_34,1,1);
      local_34 = CBrush::vftable;
      FUN_0040ee80();
    }
  }
  else {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    CMFCToolBarImages::DrawEx
              ((CMFCToolBarImages *)(local_40 + 0x1018),param_1,param_5,param_6,param_7,param_8,0,1,
               1,0,0,0,0,((iVar6 == 0) - 1U & 0xc1) - 1);
    this = pCVar7;
  }
  pCVar7 = this + 0xa0;
  local_28 = (CBrush *)((*(int *)(this + 0x113c) != 0) + 4);
  do {
    if (*(int *)(pCVar7 + 0x310) != 0) {
      pcVar2 = *(code **)(*(int *)pCVar7 + 0x30);
      guard_check_icall(param_1,local_2c);
      (*pcVar2)();
    }
    pCVar7 = pCVar7 + 0x318;
    local_28 = (CBrush *)((int)local_28 + -1);
  } while (local_28 != (CBrush *)0x0);
  CDC::~CDC(local_50);
  FUN_0055bae6();
  return;
}

