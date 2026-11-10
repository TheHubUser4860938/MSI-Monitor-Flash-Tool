// rea decompile_all
// name: OnCommand
// address: 0x4c50e1
// body: available
// range: 0x4c50e1-0x4c514c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual int __thiscall CFrameWndEx::OnCommand(unsigned int,long)
    protected: virtual int __thiscall CMDIFrameWndEx::OnCommand(unsigned int,long)
    protected: virtual int __thiscall COleDocIPFrameWndEx::OnCommand(unsigned int,long)
    protected: virtual int __thiscall COleIPFrameWndEx::OnCommand(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

undefined4 OnCommand(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((short)(param_1 >> 0x10) == 1) {
    CMFCToolBar::AddCommandUsage(param_1 & 0xffff);
    iVar1 = FUN_0049408f(0x1b,0);
    if ((iVar1 != 0) ||
       ((DAT_00616ad0 != (CUserToolsManager *)0x0 &&
        (iVar1 = CUserToolsManager::InvokeTool(DAT_00616ad0,param_1 & 0xffff), iVar1 != 0)))) {
      return 1;
    }
  }
  if (DAT_00614ed8 == 0) {
    uVar2 = FUN_004d5ddf(param_1,param_2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

