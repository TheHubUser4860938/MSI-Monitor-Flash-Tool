// rea decompile_all
// name: CMFCVisualManager::OnDrawStatusBarProgress
// address: 0x10063bdd
// body: available
// range: 0x10063bdd-0x10063d9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawStatusBarProgress(class CDC *,class
   CMFCStatusBar *,class CRect,int,int,unsigned long,unsigned long,unsigned long,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawStatusBarProgress
          (undefined4 param_1_00,CDC *param_1,undefined4 param_2,int param_4,LONG param_5,
          int param_6,LONG param_7,int param_8,int param_9,ulong param_10,int param_11,int param_12,
          int param_13)

{
  code *pcVar1;
  ulong uVar2;
  undefined4 uVar3;
  AFX_GLOBAL_DATA *pAVar4;
  HRGN pHVar5;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  int iVar6;
  undefined **local_40;
  HBRUSH local_3c;
  CDrawingManager local_38 [4];
  undefined4 local_34;
  undefined **local_30;
  undefined4 local_2c;
  ulong local_28;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar6 = param_9;
  uStack_4 = 0x30;
  local_8 = 0x10063be9;
  local_28 = param_10;
  if (param_8 != 0) {
    local_24.left = param_4;
    local_24.top = param_5;
    local_24.bottom = param_7;
    local_24.right = ((param_6 - param_4) * param_9) / param_8 + param_4;
    if (param_11 == -1) {
      CBrush::CBrush((CBrush *)&local_40,param_10);
      FillRect(*(HDC *)(param_1 + 4),&local_24,local_3c);
      local_40 = CBrush::vftable;
      CImageList::~CImageList((CImageList *)&local_40);
    }
    else {
      CDrawingManager::CDrawingManager(local_38,param_1);
      local_8 = 0;
      CDrawingManager::FillGradient
                (local_38,local_24.left,local_24.top,local_24.right,local_24.bottom,local_28,
                 param_11,0,0,0);
      local_8 = 0xffffffff;
      FUN_10084c54();
      iVar6 = param_9;
    }
    if (param_13 != 0) {
      uVar3 = FUN_1001e20a();
      FUN_1001d224(uVar3);
      local_8 = 1;
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this,(wchar_t *)&local_28,L"%d%%",(iVar6 * 100) / param_8);
      iVar6 = *(int *)param_1;
      pAVar4 = GetGlobalData();
      guard_check_icall(*(undefined4 *)(pAVar4 + 0x68));
      local_34 = (**(code **)(iVar6 + 0x30))();
      uVar2 = local_28;
      iVar6 = *(int *)param_1;
      guard_check_icall(local_28,*(undefined4 *)(local_28 - 0xc),&param_4,0x825);
      (**(code **)(iVar6 + 0x68))();
      local_2c = 0;
      local_30 = CRgn::vftable;
      local_8 = CONCAT31(local_8._1_3_,2);
      pHVar5 = CreateRectRgnIndirect(&local_24);
      CMenu::Attach((CMenu *)&local_30,(HMENU__ *)pHVar5);
      CDC::SelectClipRgn(param_1,(CRgn *)&local_30);
      iVar6 = param_12;
      if (param_12 == -1) {
        pAVar4 = GetGlobalData();
        iVar6 = *(int *)(pAVar4 + 0x40);
      }
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall(iVar6);
      (*pcVar1)();
      iVar6 = *(int *)param_1;
      guard_check_icall(uVar2,*(undefined4 *)(uVar2 - 0xc),&param_4,0x825);
      (**(code **)(iVar6 + 0x68))();
      CDC::SelectClipRgn(param_1,(CRgn *)0x0);
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall(local_34);
      (*pcVar1)();
      local_30 = CRgn::vftable;
      CImageList::~CImageList((CImageList *)&local_30);
      ATL::CStringData::Release((CStringData *)(uVar2 - 0x10));
    }
  }
  FUN_10154478();
  return;
}

