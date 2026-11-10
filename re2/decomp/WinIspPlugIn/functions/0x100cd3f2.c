// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawMenuItemButton
// address: 0x100cd3f2
// body: available
// range: 0x100cd3f2-0x100cd502 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawMenuItemButton(class CDC
   *,class CMFCToolBarMenuButton *,class CRect,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawMenuItemButton
          (CMFCVisualManagerOffice2007 *this,int param_1,undefined4 param_2,int param_4,LONG param_5
          ,undefined4 param_6,LONG param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  AFX_GLOBAL_DATA *pAVar2;
  undefined **local_2c;
  HBRUSH local_28;
  undefined4 local_24;
  CMFCVisualManagerOffice2007 *local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_1c = param_1;
  local_24 = param_2;
  local_20 = this;
  iVar1 = CanDrawImage(this);
  if ((iVar1 == 0) || (*(int *)(this + 0x3024) == 0)) {
    CMFCVisualManager::OnDrawMenuItemButton
              ((CMFCVisualManager *)this,local_1c,local_24,param_4,param_5,param_6,param_7,param_8,
               param_9);
  }
  else {
    local_18.right = param_4 + 1;
    local_18.top = param_5;
    local_18.bottom = param_7;
    local_18.left = param_4 + -1;
    InflateRect(&local_18,0,-1);
    if (param_8 == 0) {
      pAVar2 = GetGlobalData();
      CBrush::CBrush((CBrush *)&local_2c,*(ulong *)(pAVar2 + 0x20));
      InflateRect(&local_18,0,-3);
      local_18.right = local_18.right + -1;
      FillRect(*(HDC *)(local_1c + 4),&local_18,local_28);
      local_2c = CBrush::vftable;
      CImageList::~CImageList((CImageList *)&local_2c);
    }
    else {
      iVar1 = *(int *)(this + 0x2f90);
      guard_check_icall(local_1c,local_18.left,local_18.top,local_18.right,local_18.bottom,0,0xff);
      (**(code **)(iVar1 + 0x10))();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

