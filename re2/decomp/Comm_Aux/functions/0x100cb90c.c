// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawCaptionBarInfoArea
// address: 0x100cb90c
// body: available
// range: 0x100cb90c-0x100cb9a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawCaptionBarInfoArea(class CDC
   *,class CMFCCaptionBar *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawCaptionBarInfoArea
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,undefined4 param_2,LONG param_4,
          LONG param_5,LONG param_6,LONG param_7)

{
  int iVar1;
  AFX_GLOBAL_DATA *pAVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  CDrawingManager local_20 [8];
  undefined4 local_18;
  CDC *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x100cb918;
  local_14 = param_1;
  local_18 = param_2;
  iVar1 = CanDrawImage(this);
  if (iVar1 == 0) {
    CMFCVisualManagerOfficeXP::OnDrawCaptionBarInfoArea
              ((CMFCVisualManagerOfficeXP *)this,local_14,local_18,param_4,param_5,param_6,param_7);
  }
  else {
    CDrawingManager::CDrawingManager(local_20,param_1);
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 1;
    uVar3 = 0xffffff;
    local_8 = 0;
    pAVar2 = GetGlobalData();
    CDrawingManager::FillGradient
              (local_20,param_4,param_5,param_6,param_7,*(undefined4 *)(pAVar2 + 0x54),uVar3,uVar4,
               uVar5,uVar6);
    pAVar2 = GetGlobalData();
    uVar7 = *(ulong *)(pAVar2 + 0x60);
    pAVar2 = GetGlobalData();
    CDC::Draw3dRect(local_14,(tagRECT *)&param_4,*(ulong *)(pAVar2 + 0x60),uVar7);
    FUN_100afd36();
  }
  return;
}

