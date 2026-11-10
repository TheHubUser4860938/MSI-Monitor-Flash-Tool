// rea decompile_all
// name: AFX_GLOBAL_DATA::UpdateTextMetrics
// address: 0x426fc6
// body: available
// range: 0x426fc6-0x427085 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x426ff7 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall AFX_GLOBAL_DATA::UpdateTextMetrics(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall AFX_GLOBAL_DATA::UpdateTextMetrics(AFX_GLOBAL_DATA *this)

{
  CPen *pCVar1;
  int iVar2;
  CWindowDC local_64 [8];
  HDC local_5c;
  tagTEXTMETRICW local_50;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x426fd2;
  CWindowDC::CWindowDC(local_64,(CWnd *)0x0);
  local_8 = 0;
  pCVar1 = CDC::SelectObject((CDC *)local_64,(CPen *)(this + 0x11c));
  if (pCVar1 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  GetTextMetricsW(local_5c,&local_50);
  iVar2 = ((0xe < local_50.tmHeight) - 1 & 0xfffffffd) + 5;
  *(LONG *)(this + 0x1cc) = local_50.tmHeight + iVar2;
  *(LONG *)(this + 0x1d4) = local_50.tmMaxCharWidth + iVar2;
  CDC::SelectObject((CDC *)local_64,(CPen *)(this + 0x14c));
  GetTextMetricsW(local_5c,&local_50);
  iVar2 = ((0xe < local_50.tmHeight) - 1 & 0xfffffffd) + 5;
  *(LONG *)(this + 0x1d0) = local_50.tmHeight + iVar2;
  *(LONG *)(this + 0x1d8) = local_50.tmMaxCharWidth + iVar2;
  CDC::SelectObject((CDC *)local_64,pCVar1);
  CWindowDC::~CWindowDC(local_64);
  FUN_0055bae6();
  return;
}

