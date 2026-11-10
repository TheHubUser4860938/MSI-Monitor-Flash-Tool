// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawHeaderCtrlBorder
// address: 0x100ccf68
// body: available
// range: 0x100ccf68-0x100cd0db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawHeaderCtrlBorder(class
   CMFCHeaderCtrl *,class CDC *,class CRect &,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawHeaderCtrlBorder
          (CMFCVisualManagerOffice2007 *this,CMFCHeaderCtrl *param_1,CDC *param_2,CRect *param_3,
          int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  CPen *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CDrawingManager local_28 [8];
  undefined **local_20 [2];
  undefined1 local_18 [4];
  ulong local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x100ccf74;
  iVar2 = CanDrawImage(this);
  if (iVar2 == 0) {
    CMFCVisualManagerOffice2003::OnDrawHeaderCtrlBorder
              ((CMFCVisualManagerOffice2003 *)this,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    local_14 = *(ulong *)(this + 0x9010);
    uVar5 = *(undefined4 *)(this + 0x9008);
    uVar4 = *(undefined4 *)(this + 0x900c);
    if (param_4 == 0) {
      if (param_5 != 0) {
        uVar5 = *(undefined4 *)(this + 0x9014);
        uVar4 = *(undefined4 *)(this + 0x9018);
        local_14 = *(ulong *)(this + 0x901c);
      }
    }
    else {
      uVar5 = *(undefined4 *)(this + 0x9020);
      uVar4 = *(undefined4 *)(this + 0x9024);
      local_14 = *(ulong *)(this + 0x9028);
    }
    CDrawingManager::CDrawingManager(local_28,param_2);
    local_8 = 0;
    CDrawingManager::FillGradient
              (local_28,*(undefined4 *)param_3,*(undefined4 *)(param_3 + 4),
               *(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc),uVar4,uVar5,1,0,0);
    local_8 = 0xffffffff;
    FUN_100b0b83();
    CPen::CPen((CPen *)local_20,0,0,local_14);
    local_8 = 1;
    pCVar3 = CDC::SelectObject(param_2,(CPen *)local_20);
    if ((param_4 == 0) && (param_5 == 0)) {
      CDC::MoveTo(param_2,(int)local_18,*(int *)(param_3 + 8) + -1);
      CDC::LineTo(param_2,*(int *)(param_3 + 8) + -1,*(int *)(param_3 + 0xc) + -1);
      iVar1 = *(int *)(param_3 + 0xc);
      iVar2 = *(int *)param_3 + -1;
    }
    else {
      CDC::MoveTo(param_2,(int)local_28,*(int *)(param_3 + 8) + -1);
      CDC::LineTo(param_2,*(int *)(param_3 + 8) + -1,*(int *)(param_3 + 0xc) + -1);
      CDC::LineTo(param_2,*(int *)param_3,*(int *)(param_3 + 0xc) + -1);
      iVar1 = *(int *)(param_3 + 4);
      iVar2 = *(int *)param_3;
    }
    CDC::LineTo(param_2,iVar2,iVar1 + -1);
    CDC::SelectObject(param_2,pCVar3);
    local_20[0] = CPen::vftable;
    CImageList::~CImageList((CImageList *)local_20);
  }
  return;
}

