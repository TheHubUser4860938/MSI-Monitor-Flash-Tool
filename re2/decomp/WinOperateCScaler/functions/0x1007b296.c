// rea decompile_all
// name: CMFCTabCtrl::DrawResizeDragRect
// address: 0x1007b296
// body: available
// range: 0x1007b296-0x1007b30d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCTabCtrl::DrawResizeDragRect(class CRect &,class CRect &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTabCtrl::DrawResizeDragRect(CMFCTabCtrl *this,CRect *param_1,CRect *param_2)

{
  tagSIZE tVar1;
  tagSIZE tVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  int iVar5;
  CWindowDC local_24 [28];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x1007b2a2;
  pHVar3 = GetDesktopWindow();
  pCVar4 = CWnd::FromHandle(pHVar3);
  CWindowDC::CWindowDC(local_24,pCVar4);
  local_8 = 0;
  if (*(int *)(this + 0x29f8) == 1) {
    iVar5 = *(int *)(this + 0x314) - *(int *)(this + 0x30c);
  }
  else {
    iVar5 = *(int *)(this + 0x318) - *(int *)(this + 0x310);
  }
  iVar5 = iVar5 / 2 + 1;
  tVar1.cy = iVar5;
  tVar1.cx = iVar5;
  tVar2.cy = iVar5;
  tVar2.cx = iVar5;
  CDC::DrawDragRect((CDC *)local_24,(tagRECT *)param_1,tVar1,(tagRECT *)param_2,tVar2,(CBrush *)0x0,
                    (CBrush *)0x0);
  CWindowDC::~CWindowDC(local_24);
  return;
}

