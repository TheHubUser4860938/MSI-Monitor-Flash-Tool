// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawOutlookBarSplitter
// address: 0x100cda6f
// body: available
// range: 0x100cda6f-0x100cdb9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawOutlookBarSplitter(class CDC
   *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawOutlookBarSplitter
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,int param_3,int param_4,int param_5,
          int param_6)

{
  CDC *this_00;
  int iVar1;
  CPen *pCVar2;
  undefined4 local_28;
  undefined4 local_24;
  CDrawingManager local_20 [8];
  undefined1 local_18 [4];
  CDC *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x100cda7b;
  local_14 = param_1;
  iVar1 = CanDrawImage(this);
  if (iVar1 == 0) {
    CMFCVisualManagerOffice2003::OnDrawOutlookBarSplitter
              ((CMFCVisualManagerOffice2003 *)this,local_14,param_3,param_4,param_5,param_6);
  }
  else {
    CDrawingManager::CDrawingManager(local_20,param_1);
    local_8 = 0;
    CDrawingManager::FillGradient
              (local_20,param_3,param_4,param_5,param_6,*(undefined4 *)(this + 0x1b0),
               *(undefined4 *)(this + 0x1ac),1,0,0);
    OffsetRect((LPRECT)&param_3,0,1);
    this_00 = local_14;
    local_28 = 0;
    local_24 = 0;
    CMFCToolBarImages::DrawEx
              ((CMFCToolBarImages *)(this + 0x348),local_14,param_3,param_4,param_5,param_6,0,1,1,0,
               0,0,0,0xff);
    OffsetRect((LPRECT)&param_3,0,-1);
    pCVar2 = CDC::SelectObject(this_00,(CPen *)(this + 0x1e0));
    CDC::MoveTo(this_00,(int)local_18,param_3);
    CDC::LineTo(this_00,param_5,param_4);
    CDC::MoveTo(this_00,(int)&local_28,param_3);
    CDC::LineTo(this_00,param_5,param_6 + -1);
    CDC::SelectObject(this_00,pCVar2);
    FUN_100b0b83();
  }
  return;
}

