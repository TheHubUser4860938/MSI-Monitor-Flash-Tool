// rea decompile_all
// name: CMFCColorPickerCtrl::DrawHex
// address: 0x101741a0
// body: available
// range: 0x101741a0-0x1017422c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCColorPickerCtrl::DrawHex(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCColorPickerCtrl::DrawHex(CMFCColorPickerCtrl *this,CDC *param_1)

{
  CCellObj *this_00;
  AFX_GLOBAL_DATA *this_01;
  undefined4 *puVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  int iVar4;
  CCellObj *this_02;
  CMFCColorPickerCtrl *pCVar5;
  CDC *pCVar6;
  tagRECT *ptVar7;
  
  this_02 = (CCellObj *)0x0;
  ptVar7 = (tagRECT *)0x0;
  pCVar5 = this;
  pCVar6 = param_1;
  this_01 = GetGlobalData();
  AFX_GLOBAL_DATA::DrawParentBackground(this_01,(CWnd *)pCVar5,pCVar6,ptVar7);
  iVar4 = 0;
  if (0 < *(int *)(this + 0xc0)) {
    do {
      puVar1 = (undefined4 *)FUN_100efaed(iVar4);
      this_00 = (CCellObj *)*puVar1;
      CCellObj::Draw(this_00,param_1);
      if (*(int *)(this_00 + 0x34) == *(int *)(this + 0xa0)) {
        this_02 = this_00;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this + 0xc0));
    if (this_02 != (CCellObj *)0x0) {
      pHVar2 = GetFocus();
      pCVar3 = CWnd::FromHandle(pHVar2);
      CCellObj::DrawSelected(this_02,param_1,(uint)(pCVar3 == (CWnd *)this));
    }
  }
  return;
}

