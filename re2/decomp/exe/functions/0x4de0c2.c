// rea decompile_all
// name: CBasePane::DockPaneUsingRTTI
// address: 0x4de0c2
// body: available
// range: 0x4de0c2-0x4de1a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CBasePane::DockPaneUsingRTTI(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CBasePane::DockPaneUsingRTTI(CBasePane *this,int param_1)

{
  CFrameWndEx *this_00;
  int iVar1;
  
  if (param_1 == 0) {
    this_00 = (CFrameWndEx *)AFXGetParentFrame((CWnd *)this);
  }
  else {
    this_00 = *(CFrameWndEx **)(this + 0xa4);
  }
  if ((this_00 != (CFrameWndEx *)0x0) && (DAT_0060c460 == 0)) {
    iVar1 = FUN_0043970d(&PTR_s_CFrameWndEx_005ba788);
    if (iVar1 == 0) {
      iVar1 = FUN_0043970d(&PTR_s_CMDIFrameWndEx_005bad18);
      if (iVar1 == 0) {
        iVar1 = FUN_0043970d(&PTR_s_COleIPFrameWndEx_005c15c4);
        if (iVar1 == 0) {
          iVar1 = FUN_0043970d(&PTR_s_COleDocIPFrameWndEx_005c1980);
          if (iVar1 == 0) {
            iVar1 = FUN_0043970d(&PTR_s_CMDIChildWndEx_005c1ebc);
            if (iVar1 == 0) {
              iVar1 = FUN_0043970d(&PTR_s_COleCntrFrameWndEx_005c5008);
              if (iVar1 != 0) {
                COleCntrFrameWndEx::DockPane((COleCntrFrameWndEx *)this_00,this,0,(tagRECT *)0x0);
              }
            }
            else {
              CMDIChildWndEx::DockPane((CMDIChildWndEx *)this_00,this,0,(tagRECT *)0x0);
            }
          }
          else {
            COleDocIPFrameWndEx::DockPane((COleDocIPFrameWndEx *)this_00,this,0,(tagRECT *)0x0);
          }
        }
        else {
          COleIPFrameWndEx::DockPane((COleIPFrameWndEx *)this_00,this,0,(tagRECT *)0x0);
        }
      }
      else {
        CMDIFrameWndEx::DockPane((CMDIFrameWndEx *)this_00,this,0,(tagRECT *)0x0);
      }
    }
    else {
      CFrameWndEx::DockPane(this_00,this,0,(tagRECT *)0x0);
    }
  }
  return;
}

