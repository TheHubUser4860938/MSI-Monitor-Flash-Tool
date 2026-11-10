// rea decompile_all
// name: CMFCButton::OnFillBackground
// address: 0x1006ca62
// body: available
// range: 0x1006ca62-0x1006cb17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCButton::OnFillBackground(class CDC *,class CRect const &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCButton::OnFillBackground(CMFCButton *this,CDC *param_1,CRect *param_2)

{
  AFX_GLOBAL_DATA *pAVar1;
  CMFCButton *pCVar2;
  CDC *pCVar3;
  tagRECT *ptVar4;
  CDrawingManager local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1006ca6e;
  if (*(int *)(this + 0x90) == 0) {
    if (*(int *)(this + 0x7a0) == -1) {
      pAVar1 = GetGlobalData();
      CDC::FillRect(param_1,(tagRECT *)param_2,(CBrush *)(pAVar1 + 0x98));
    }
    else {
      FUN_10067f3a(param_2,*(int *)(this + 0x7a0));
    }
  }
  else {
    ptVar4 = (tagRECT *)0x0;
    pCVar2 = this;
    pCVar3 = param_1;
    pAVar1 = GetGlobalData();
    AFX_GLOBAL_DATA::DrawParentBackground(pAVar1,(CWnd *)pCVar2,pCVar3,ptVar4);
  }
  if (((*(int *)(this + 0xc0) != 0) && (*(int *)(this + 0x98) != 0)) &&
     ((*(int *)(this + 0xac) == 0 || (*(int *)(this + 0xb4) == 0)))) {
    CDrawingManager::CDrawingManager(local_18,param_1);
    local_8 = 0;
    FUN_100b396e(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                 *(undefined4 *)(param_2 + 0xc),0xffffffff,0xffffffff,0,0xffffffff);
    FUN_100b0b83();
  }
  return;
}

