// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawBrowseButton
// address: 0x523be6
// body: available
// range: 0x523be6-0x523cfc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCVisualManagerOffice2003::OnDrawBrowseButton(class CDC *,class
   CRect,class CMFCEditBrowseCtrl *,enum CMFCVisualManager::AFX_BUTTON_STATE,unsigned long &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCVisualManagerOffice2003::OnDrawBrowseButton
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,LONG param_3,int param_4,int param_5,
          int param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  CDrawingManager local_30 [8];
  CDC *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x523bf2;
  local_24.left = param_3;
  local_24.top = param_4 + -1;
  local_28 = param_1;
  local_24.right = param_5 + 1;
  local_24.bottom = param_6 + 1;
  if (param_8 == 1) {
    pcVar1 = *(code **)(*(int *)this + 0x314);
    guard_check_icall(param_1,param_3,param_4,param_5,param_6,this + 0x124,0);
    (*pcVar1)();
    uVar8 = *(ulong *)(this + 0x164);
  }
  else {
    if (param_8 != 2) {
      CDrawingManager::CDrawingManager(local_30,param_1);
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 1;
      local_8 = 0;
      pAVar2 = GetGlobalData();
      uVar4 = *(undefined4 *)(pAVar2 + 0x24);
      pAVar2 = GetGlobalData();
      CDrawingManager::FillGradient
                (local_30,param_3,param_4,param_5,param_6,*(undefined4 *)(pAVar2 + 0x1c),uVar4,uVar5
                 ,uVar6,uVar7);
      pAVar2 = GetGlobalData();
      uVar8 = *(ulong *)(pAVar2 + 0x5c);
      pAVar2 = GetGlobalData();
      CDC::Draw3dRect(local_28,(tagRECT *)&param_3,*(ulong *)(pAVar2 + 0x5c),uVar8);
      FUN_00461ef9();
      goto LAB_00523cf2;
    }
    pcVar1 = *(code **)(*(int *)this + 0x314);
    guard_check_icall(param_1,param_3,param_4,param_5,param_6,this + 0x11c,0);
    (*pcVar1)();
    uVar8 = *(ulong *)(this + 0x164);
  }
  CDC::Draw3dRect(local_28,&local_24,uVar8,uVar8);
LAB_00523cf2:
  iVar3 = FUN_0055bae6();
  return iVar3;
}

