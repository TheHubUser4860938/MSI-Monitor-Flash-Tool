// rea decompile_all
// name: FUN_1013f1b3
// address: 0x1013f1b3
// body: available
// range: 0x1013f1b3-0x1013f377 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_1013f1b3(CDC *param_1,undefined4 param_2,int param_3,LONG param_4,int param_5,int param_6)

{
  double dVar1;
  code *pcVar2;
  CDC *this;
  AFX_GLOBAL_DATA *pAVar3;
  int iVar4;
  int *in_ECX;
  ulong uVar5;
  CDrawingManager local_38 [8];
  undefined **local_30;
  HBRUSH local_2c;
  CDC *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x1013f1bf;
  local_28 = param_1;
  if (in_ECX[0xf5] == 0) {
    local_24.left = param_3;
    local_24.top = param_4;
    local_24.right = param_5;
    local_24.bottom = param_6;
    iVar4 = 5;
    pAVar3 = GetGlobalData();
    if (*(int *)(pAVar3 + 0x1e8) == 0) {
      dVar1 = 1.0;
    }
    else {
      dVar1 = *(double *)(pAVar3 + 0x1e0);
    }
    if (dVar1 != 1.0) {
      GetGlobalData();
      iVar4 = FUN_101804f0();
    }
    local_24.top = (local_24.bottom - iVar4) + 1;
    if ((in_ECX[0x1f] - in_ECX[0x1d] & 1U) == 0) {
      local_24.left = local_24.left + 1;
      local_24.right = local_24.right + 1;
    }
    OffsetRect((LPRECT)&param_3,0,-1);
    this = local_28;
    FUN_10102fda(local_28,param_2,param_3,param_4,param_5,param_6);
    pcVar2 = *(code **)(*in_ECX + 0xdc);
    guard_check_icall();
    iVar4 = (*pcVar2)();
    if (iVar4 == 0) {
      local_28 = (CDC *)in_ECX[0xde];
      if (local_28 == (CDC *)0xffffffff) {
        local_28 = (CDC *)in_ECX[0xe0];
      }
    }
    else {
      pAVar3 = GetGlobalData();
      local_28 = *(CDC **)(pAVar3 + 0x58);
    }
    uVar5 = 0xffffffff;
    if ((in_ECX[0xf2] != 0) && (in_ECX[0xde] == -1)) {
      uVar5 = 0xc5c5c5;
    }
    if (DAT_10245bb4 == 0) {
      CBrush::CBrush((CBrush *)&local_30,
                     (((uint)local_28 >> 0x10 & 0xff | 0x200) << 8 | (uint)local_28 >> 8 & 0xff) <<
                     8 | (uint)local_28 & 0xff);
      local_8 = 1;
      FillRect(*(HDC *)(this + 4),&local_24,local_2c);
      if (uVar5 != 0xffffffff) {
        CDC::Draw3dRect(this,&local_24,uVar5,uVar5);
      }
      local_30 = CBrush::vftable;
      CImageList::~CImageList((CImageList *)&local_30);
    }
    else {
      CDrawingManager::CDrawingManager(local_38,this);
      local_8 = 0;
      InflateRect(&local_24,-1,-1);
      CDrawingManager::DrawRect(local_38,(CRect *)&local_24,(ulong)local_28,uVar5);
      FUN_100b0b83();
    }
  }
  else {
    FUN_10102fda(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  FUN_1018015d();
  return;
}

