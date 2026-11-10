// rea decompile_all
// name: CMFCDragFrameImpl::DrawDragFrame
// address: 0x100d00a9
// body: available
// range: 0x100d00a9-0x100d0135 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCDragFrameImpl::DrawDragFrame(struct tagRECT const *,struct
   tagRECT const *,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCDragFrameImpl::DrawDragFrame
          (CMFCDragFrameImpl *this,tagRECT *param_1,tagRECT *param_2,int param_3,int param_4,
          int param_5)

{
  CSmartDockingManager *pCVar1;
  tagSIZE tVar2;
  tagSIZE tVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CWindowDC local_28 [32];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x100d00b5;
  pHVar4 = GetDesktopWindow();
  pCVar5 = CWnd::FromHandle(pHVar4);
  CWindowDC::CWindowDC(local_28,pCVar5);
  local_8 = 0;
  if ((((*(int *)(this + 0x48) == 0) ||
       (pCVar1 = *(CSmartDockingManager **)(*(int *)(this + 0x48) + 0x1b8),
       pCVar1 == (CSmartDockingManager *)0x0)) || (*(int *)(pCVar1 + 8) == 0)) ||
     (*(int *)(pCVar1 + 4) == 0)) {
    if (param_3 != 0) {
      param_1 = (tagRECT *)0x0;
    }
    tVar2.cy = param_4;
    tVar2.cx = param_4;
    tVar3.cy = param_5;
    tVar3.cx = param_5;
    CDC::DrawDragRect((CDC *)local_28,param_2,tVar2,param_1,tVar3,(CBrush *)0x0,(CBrush *)0x0);
  }
  else {
    CopyRect((LPRECT)&stack0xffffffb8,param_2);
    CSmartDockingManager::ShowPlaceAt(pCVar1);
  }
  CWindowDC::~CWindowDC(local_28);
  return;
}

