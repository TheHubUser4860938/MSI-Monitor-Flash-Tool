// rea decompile_all
// name: CMFCVisualManager::OnDrawSpinButtons
// address: 0x41d8b0
// body: available
// range: 0x41d8b0-0x41dab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawSpinButtons(class CDC *,class
   CRect,int,int,class CMFCSpinButtonCtrl *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawSpinButtons
          (undefined4 param_1_00,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          uint param_7,int param_8)

{
  int iVar1;
  LONG *pLVar2;
  AFX_GLOBAL_DATA *pAVar3;
  HBRUSH hbr;
  int iVar4;
  tagRECT *ptVar5;
  IMAGES_IDS *pIVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 local_60;
  undefined4 local_5c;
  IMAGE_STATE local_58;
  CDrawingManager local_54 [8];
  int local_4c;
  int local_48;
  IMAGES_IDS local_44 [4];
  tagRECT local_34;
  int local_24;
  int local_20;
  int local_1c;
  int iStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x41d8bc;
  local_48 = param_8;
  InflateRect((LPRECT)&param_3,-1,-1);
  iVar1 = local_48;
  iVar4 = 2;
  pLVar2 = &local_34.right;
  do {
    ((tagRECT *)(pLVar2 + -2))->left = 0;
    pLVar2[-1] = 0;
    *pLVar2 = 0;
    pLVar2[1] = 0;
    iVar4 = iVar4 + -1;
    pLVar2 = pLVar2 + 4;
  } while (iVar4 != 0);
  local_24 = param_3;
  local_1c = param_5;
  iStack_18 = param_6;
  local_34.left = param_3;
  local_34.right = param_5;
  local_34.bottom = param_6;
  if (local_48 == 0) {
    local_34.bottom = param_6 - (param_6 - param_4) / 2;
    local_20 = local_34.bottom + 1;
  }
  else {
    local_20 = param_4;
    local_34.left = param_5 - (param_5 - param_3) / 2;
    local_1c = local_34.left;
  }
  local_34.top = param_4;
  if (DAT_00614e28 == 0) {
    pAVar3 = GetGlobalData();
    hbr = (HBRUSH)0x0;
    if (pAVar3 != (AFX_GLOBAL_DATA *)0xffffff30) {
      hbr = *(HBRUSH *)(pAVar3 + 0xd4);
    }
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,hbr);
    pAVar3 = GetGlobalData();
    uVar8 = *(ulong *)(pAVar3 + 0x5c);
    pAVar3 = GetGlobalData();
    CDC::Draw3dRect(param_1,(tagRECT *)&param_3,*(ulong *)(pAVar3 + 0x5c),uVar8);
  }
  else {
    CDrawingManager::CDrawingManager(local_54,param_1);
    local_8 = 0;
    pAVar3 = GetGlobalData();
    uVar8 = *(ulong *)(pAVar3 + 0x5c);
    pAVar3 = GetGlobalData();
    CDrawingManager::DrawRect(local_54,(CRect *)&param_3,*(ulong *)(pAVar3 + 0x54),uVar8);
    local_8 = 0xffffffff;
    FUN_00461ef9();
  }
  ptVar5 = &local_34;
  local_44[1] = 0;
  local_44[0] = 7;
  local_48 = (param_7 & 3) - 1;
  local_44[2] = 1;
  local_44[3] = 9;
  local_58 = (IMAGE_STATE)((param_7 & 0x10) != 0);
  local_4c = 0;
  pIVar6 = local_44 + (-(uint)(iVar1 != 0) & 2);
  do {
    if (DAT_00614e28 == 0) {
      if (local_48 == local_4c) {
        pAVar3 = GetGlobalData();
        uVar8 = *(ulong *)(pAVar3 + 0x5c);
        pAVar3 = GetGlobalData();
        uVar7 = *(ulong *)(pAVar3 + 0x58);
      }
      else {
        pAVar3 = GetGlobalData();
        uVar8 = *(ulong *)(pAVar3 + 0x58);
        pAVar3 = GetGlobalData();
        uVar7 = *(ulong *)(pAVar3 + 0x5c);
      }
      CDC::Draw3dRect(param_1,ptVar5,uVar7,uVar8);
    }
    else {
      CDrawingManager::CDrawingManager(local_54,param_1);
      local_8 = 1;
      if (local_48 == local_4c) {
        pAVar3 = GetGlobalData();
        uVar8 = *(ulong *)(pAVar3 + 0x58);
      }
      else {
        pAVar3 = GetGlobalData();
        uVar8 = *(ulong *)(pAVar3 + 0x5c);
      }
      CDrawingManager::DrawRect(local_54,(CRect *)ptVar5,0xffffffff,uVar8);
      local_8 = 0xffffffff;
      FUN_00461ef9();
    }
    local_60 = 0;
    local_5c = 0;
    CMenuImages::Draw(param_1,*pIVar6,(CRect *)ptVar5,local_58,(CSize *)&local_60);
    pIVar6 = pIVar6 + 1;
    local_4c = local_4c + 1;
    ptVar5 = ptVar5 + 1;
  } while (local_4c < 2);
  FUN_0055bae6();
  return;
}

