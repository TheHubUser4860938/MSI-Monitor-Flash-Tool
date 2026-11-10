// rea decompile_all
// name: CMultiPaneFrameWnd::PaneFromPoint
// address: 0x100f8986
// body: available
// range: 0x100f8986-0x100f89db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CBasePane * __thiscall CMultiPaneFrameWnd::PaneFromPoint(class
   CPoint,int,int)
   
   Library: Visual Studio 2015 Release */

CBasePane * __thiscall
CMultiPaneFrameWnd::PaneFromPoint
          (CMultiPaneFrameWnd *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          int param_5)

{
  int iVar1;
  BOOL BVar2;
  CBasePane *pCVar3;
  CMultiPaneFrameWnd *local_c;
  CMultiPaneFrameWnd *local_8;
  
  if ((param_5 != 0) &&
     (local_c = this, local_8 = this, BVar2 = IsWindowVisible(*(HWND *)(this + 0x20)), BVar2 == 0))
  {
    return (CBasePane *)0x0;
  }
  local_c = (CMultiPaneFrameWnd *)0x0;
  local_8 = (CMultiPaneFrameWnd *)0x0;
  iVar1 = *(int *)(this + 400);
  guard_check_icall(param_2,param_3,param_4,1,&local_c,&local_8);
  pCVar3 = (CBasePane *)(**(code **)(iVar1 + 0x68))();
  return pCVar3;
}

