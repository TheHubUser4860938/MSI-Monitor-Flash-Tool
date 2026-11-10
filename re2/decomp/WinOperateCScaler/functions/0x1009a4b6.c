// rea decompile_all
// name: CMFCHeaderCtrl::OnDrawItem
// address: 0x1009a4b6
// body: available
// range: 0x1009a4b6-0x1009a82f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCHeaderCtrl::OnDrawItem(class CDC *,int,class
   CRect,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCHeaderCtrl::OnDrawItem
          (CMFCHeaderCtrl *this,CDC *param_1,WPARAM param_2,CGdiObject *param_4,int param_5,
          CGdiObject *param_6,int param_7,int param_8,undefined4 param_9)

{
  code *pcVar1;
  tagPOINT tVar2;
  CMFCVisualManager *pCVar3;
  int iVar4;
  LRESULT LVar5;
  CImageList *this_00;
  undefined4 uVar6;
  CGdiObject *pCVar7;
  CDC *pCVar8;
  CGdiObject *pCVar9;
  undefined1 local_298 [4];
  int local_294;
  int local_290;
  undefined4 local_280 [2];
  undefined1 *local_278;
  void *local_274;
  undefined4 local_270;
  uint local_26c;
  int local_264;
  double local_250;
  int local_248;
  int local_244;
  int local_240;
  CGdiObject *local_23c;
  CDC *local_238;
  tagRECT local_234;
  tagRECT local_224;
  undefined1 local_214 [524];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x288;
  local_8 = 0x1009a4c5;
  local_238 = param_1;
  pCVar3 = CMFCVisualManager::GetInstance();
  pcVar1 = *(code **)(*(int *)pCVar3 + 0x158);
  guard_check_icall(this,local_238,&param_4,param_8,param_9);
  (*pcVar1)();
  if (-1 < (int)param_2) {
    local_244 = 0;
    iVar4 = CMap<int,int,int,int>::Lookup((CMap<int,int,int,int> *)(this + 0x80),param_2,&local_244)
    ;
    if ((iVar4 != 0) && (local_244 != 0)) {
      local_224.left = (LONG)param_4;
      local_224.top = param_5;
      local_224.right = (LONG)param_6;
      local_224.bottom = param_7;
      InflateRect(&local_224,-5,-5);
      local_224.left = local_224.right + (local_224.top - local_224.bottom);
      if (param_8 != 0) {
        local_224.right = local_224.right + 1;
        local_224.bottom = local_224.bottom + 1;
      }
      local_240 = local_224.right - local_224.left;
      param_6 = (CGdiObject *)(local_224.left + -1);
      local_250 = (double)local_240;
      iVar4 = FUN_101548f0();
      InflateRect(&local_224,0,-iVar4);
      *(uint *)(this + 0xa4) = (uint)(0 < local_244);
      pcVar1 = *(code **)(*(int *)this + 0x178);
      guard_check_icall(local_238,local_224.left,local_224.top,local_224.right,local_224.bottom);
      (*pcVar1)();
    }
    _memset(local_280,0,0x30);
    local_280[0] = 0x36;
    local_278 = local_214;
    local_270 = 0xff;
    LVar5 = SendMessageW(*(HWND *)(this + 0x20),0x120b,param_2,(LPARAM)local_280);
    if (LVar5 != 0) {
      pCVar8 = local_238;
      if ((((local_26c & 0x800) != 0) && (-1 < local_264)) &&
         (this_00 = CHeaderCtrl::GetImageList((CHeaderCtrl *)this,0), pCVar8 = local_238,
         this_00 != (CImageList *)0x0)) {
        local_23c = (CGdiObject *)0x0;
        local_248 = 0;
        _IsolationAwareImageList_GetIconSize_12(*(undefined4 *)(this_00 + 4),&local_23c,&local_248);
        pCVar8 = local_238;
        tVar2.y = ((param_7 - local_248) + param_5) / 2;
        tVar2.x = (LONG)(param_4 + 1);
        CImageList::Draw(this_00,local_238,local_264,tVar2,0);
        param_4 = param_4 + (int)local_23c;
      }
      if (((local_26c & 0x3000) != 0) && (local_274 != (void *)0x0)) {
        local_23c = CGdiObject::FromHandle(local_274);
        GetObjectW(*(HANDLE *)(local_23c + 4),0x18,local_298);
        local_224.left = (LONG)param_4;
        local_224.top = param_5;
        local_224.right = (LONG)param_6;
        local_224.bottom = param_7;
        if ((local_26c & 0x1000) == 0) {
          pCVar7 = param_4 + 1;
          pCVar9 = pCVar7 + local_294;
          param_4 = pCVar9;
        }
        else {
          pCVar9 = param_6 + -1;
          pCVar7 = pCVar9 + -local_294;
          param_6 = pCVar7;
        }
        iVar4 = ((param_7 - param_5) - local_290) / 2;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        CDC::DrawState(pCVar8,pCVar7,param_5 + iVar4,(int)pCVar9 - (int)pCVar7,local_290,local_23c,0
                       ,0);
      }
      if (((local_26c & 0x4000) != 0) && (local_278 != (undefined1 *)0x0)) {
        local_234.left = (LONG)param_4;
        local_234.top = param_5;
        local_234.right = (LONG)param_6;
        local_234.bottom = param_7;
        InflateRect(&local_234,-5,0);
        FUN_100185a0(local_278);
        local_8 = 0;
        uVar6 = 0x8824;
        if ((local_26c & 2) == 0) {
          if ((local_26c & 1) != 0) {
            uVar6 = 0x8826;
          }
        }
        else {
          uVar6 = 0x8825;
        }
        iVar4 = *(int *)pCVar8;
        guard_check_icall(local_240,*(undefined4 *)(local_240 + -0xc),&local_234,uVar6);
        (**(code **)(iVar4 + 0x68))();
        ATL::CStringData::Release((CStringData *)(local_240 + -0x10));
      }
    }
  }
  FUN_10154478();
  return;
}

