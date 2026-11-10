// rea decompile_all
// name: CMFCSpinButtonCtrl::OnDraw
// address: 0x100c69cb
// body: available
// range: 0x100c69cb-0x100c6ae2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCSpinButtonCtrl::OnDraw(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCSpinButtonCtrl::OnDraw(CMFCSpinButtonCtrl *this,CDC *param_1)

{
  uint uVar1;
  AFX_GLOBAL_DATA *pAVar2;
  HBRUSH hbr;
  int iVar3;
  ulong uVar4;
  CDrawingManager local_38 [8];
  CMFCVisualManager *local_30;
  CDC *local_2c;
  uint local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x100c69d7;
  local_2c = param_1;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_24);
  if (DAT_1020e40c == 0) {
    pAVar2 = GetGlobalData();
    if (pAVar2 == (AFX_GLOBAL_DATA *)0xffffff38) {
      hbr = (HBRUSH)0x0;
    }
    else {
      hbr = *(HBRUSH *)(pAVar2 + 0xcc);
    }
    FillRect(*(HDC *)(param_1 + 4),&local_24,hbr);
  }
  else {
    CDrawingManager::CDrawingManager(local_38,param_1);
    uVar4 = 0xffffffff;
    local_8 = 0;
    pAVar2 = GetGlobalData();
    CDrawingManager::DrawRect(local_38,(CRect *)&local_24,*(ulong *)(pAVar2 + 0x6c),uVar4);
    local_8 = 0xffffffff;
    FUN_100afd36();
  }
  local_28 = (uint)(*(int *)(this + 0x80) != 0);
  if (*(int *)(this + 0x84) != 0) {
    local_28 = local_28 | 2;
  }
  if (*(int *)(this + 0x88) != 0) {
    local_28 = local_28 | 4;
  }
  if (*(int *)(this + 0x8c) != 0) {
    local_28 = local_28 | 8;
  }
  uVar1 = local_28;
  iVar3 = CWnd::IsWindowEnabled((CWnd *)this);
  if (iVar3 == 0) {
    local_28 = uVar1 | 0x10;
  }
  local_30 = CMFCVisualManager::GetInstance();
  iVar3 = *(int *)local_30;
  uVar4 = CWnd::GetExStyle((CWnd *)this);
  guard_check_icall(local_2c,local_24.left,local_24.top,local_24.right,local_24.bottom,local_28,
                    uVar4 >> 6 & 1,this);
  (**(code **)(iVar3 + 0x1c0))();
  FUN_1017f5f4();
  return;
}

