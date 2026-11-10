// rea decompile_all
// name: CScrollView::UpdateBars
// address: 0x100ad08f
// body: available
// range: 0x100ad08f-0x100ad262 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CScrollView::UpdateBars(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CScrollView::UpdateBars(CScrollView *this)

{
  tagPOINT tVar1;
  uint uVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  LRESULT LVar5;
  int iVar6;
  UINT UVar7;
  UINT UVar8;
  LONG local_60;
  LONG local_5c;
  int local_58;
  int local_54;
  uint local_50;
  UINT local_4c;
  UINT local_48;
  tagSCROLLINFO local_44;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0xb4) == 0) {
    local_28 = 0;
    uVar2 = 1;
    local_24 = 0;
    *(undefined4 *)(this + 0xb4) = 1;
    local_20 = 0;
    local_1c = 0;
    local_50 = 1;
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    if (pCVar4 != (CWnd *)0x0) {
      LVar5 = SendMessageW(*(HWND *)(pCVar4 + 0x20),0x368,0,(LPARAM)&local_28);
      uVar2 = ~-(uint)(LVar5 != 0) & 1;
      local_50 = uVar2;
    }
    local_4c = 0;
    local_48 = 0;
    local_58 = 0;
    local_54 = 0;
    if (uVar2 == 0) {
      GetScrollBarSizes(this,(CSize *)&local_58);
      UVar7 = local_20 - local_28;
      UVar8 = local_1c - local_24;
    }
    else {
      iVar6 = GetTrueClientSize(this,(CSize *)&local_4c,(CSize *)&local_58);
      UVar7 = local_4c;
      UVar8 = local_48;
      if (iVar6 == 0) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetClientRect(*(HWND *)(this + 0x20),&local_18);
        if ((0 < local_18.right) && (0 < local_18.bottom)) {
          CWnd::EnableScrollBarCtrl((CWnd *)this,3,0);
        }
        *(undefined4 *)(this + 0xb4) = 0;
        goto LAB_100ad253;
      }
    }
    local_18.right = 0;
    local_18.bottom = 0;
    local_60 = 0;
    local_5c = 0;
    local_4c = 0;
    local_48 = 0;
    GetScrollBarState(this,UVar7,UVar8,&local_4c,&local_18.right,&local_60,local_50);
    if (local_4c != 0) {
      UVar8 = UVar8 - local_54;
    }
    if (local_48 != 0) {
      UVar7 = UVar7 - local_58;
    }
    tVar1.y = local_5c;
    tVar1.x = local_60;
    ScrollToDevicePosition(this,tVar1);
    local_44.nMin = 0;
    local_44.fMask = 3;
    CWnd::EnableScrollBarCtrl((CWnd *)this,0,local_4c);
    if (local_4c != 0) {
      local_44.nMax = *(int *)(this + 0x98) + -1;
      local_44.nPage = UVar7;
      iVar6 = CWnd::SetScrollInfo((CWnd *)this,0,&local_44,1);
      if (iVar6 == 0) {
        CWnd::SetScrollRange((CWnd *)this,0,0,local_18.right,1);
      }
    }
    CWnd::EnableScrollBarCtrl((CWnd *)this,1,local_48);
    if (local_48 != 0) {
      local_44.nMax = *(int *)(this + 0x9c) + -1;
      local_44.nPage = UVar8;
      iVar6 = CWnd::SetScrollInfo((CWnd *)this,1,&local_44,1);
      if (iVar6 == 0) {
        CWnd::SetScrollRange((CWnd *)this,1,0,local_18.bottom,1);
      }
    }
    *(undefined4 *)(this + 0xb4) = 0;
  }
LAB_100ad253:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

