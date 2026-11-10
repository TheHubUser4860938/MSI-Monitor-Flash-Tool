// rea decompile_all
// name: CMFCPropertyGridCtrl::OnDrawDescription
// address: 0x100494e5
// body: available
// range: 0x100494e5-0x10049611 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCPropertyGridCtrl::OnDrawDescription(class CDC *,class
   CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCPropertyGridCtrl::OnDrawDescription
          (CMFCPropertyGridCtrl *this,CDC *param_1,LONG param_3,int param_4,LONG param_5,
          LONG param_6)

{
  code *pcVar1;
  int iVar2;
  CDC *pCVar3;
  HBRUSH hbr;
  AFX_GLOBAL_DATA *pAVar4;
  ulong uVar5;
  undefined **local_18;
  HBRUSH local_14;
  int *local_10;
  CDC *local_c;
  int local_8;
  
  local_c = param_1;
  if (*(ulong *)(this + 0x3f0) == 0xffffffff) {
    if (*(int *)(this + 0x394) == 0) {
      pAVar4 = GetGlobalData();
      pAVar4 = pAVar4 + 0x98;
    }
    else {
      pAVar4 = GetGlobalData();
      pAVar4 = pAVar4 + 0xd0;
    }
    if (pAVar4 == (AFX_GLOBAL_DATA *)0x0) {
      hbr = (HBRUSH)0x0;
    }
    else {
      hbr = *(HBRUSH *)(pAVar4 + 4);
    }
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,hbr);
  }
  else {
    CBrush::CBrush((CBrush *)&local_18,*(ulong *)(this + 0x3f0));
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,local_14);
    local_18 = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_18);
  }
  param_4 = param_4 + 4;
  if (*(int *)(this + 0x394) == 0) {
    pAVar4 = GetGlobalData();
    uVar5 = *(ulong *)(pAVar4 + 0x20);
  }
  else {
    pAVar4 = GetGlobalData();
    uVar5 = *(ulong *)(pAVar4 + 0x58);
  }
  CDC::Draw3dRect(param_1,(tagRECT *)&param_3,uVar5,uVar5);
  if (*(int *)(this + 0x3d8) != 0) {
    InflateRect((LPRECT)&param_3,-4,-4);
    local_8 = -1;
    if (*(int *)(this + 0x3f4) != -1) {
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall(*(int *)(this + 0x3f4));
      local_8 = (*pcVar1)();
    }
    pCVar3 = local_c;
    local_10 = *(int **)(this + 0x3d8);
    iVar2 = *local_10;
    guard_check_icall(local_c,param_3,param_4,param_5,param_6);
    (**(code **)(iVar2 + 0x20))();
    if (local_8 == -1) {
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x30);
      guard_check_icall(0xffffffff);
      (*pcVar1)();
    }
  }
  return;
}

