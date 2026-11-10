// rea decompile_all
// name: CMFCVisualManager::OnDrawTabResizeBar
// address: 0x10091345
// body: available
// range: 0x10091345-0x100913af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawTabResizeBar(class CDC *,class
   CMFCBaseTabCtrl *,int,class CRect,class CBrush *,class CPen *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawTabResizeBar
          (undefined4 param_1_00,CDC *param_1,undefined4 param_2,int param_3,int param_5,int param_6
          ,int param_7,int param_8,int param_9,CPen *param_10)

{
  HBRUSH hbr;
  CPen *pCVar1;
  int iVar2;
  int iVar3;
  undefined1 local_c [8];
  
  pCVar1 = param_10;
  hbr = (HBRUSH)0x0;
  if (param_9 != 0) {
    hbr = *(HBRUSH *)(param_9 + 4);
  }
  FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_5,hbr);
  pCVar1 = CDC::SelectObject(param_1,pCVar1);
  CDC::MoveTo(param_1,(int)local_c,param_5);
  iVar2 = param_7;
  iVar3 = param_6;
  if (param_3 != 0) {
    iVar2 = param_5;
    iVar3 = param_8;
  }
  CDC::LineTo(param_1,iVar2,iVar3);
  CDC::SelectObject(param_1,pCVar1);
  return;
}

