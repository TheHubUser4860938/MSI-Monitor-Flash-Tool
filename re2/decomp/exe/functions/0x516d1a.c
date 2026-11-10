// rea decompile_all
// name: CMDIFrameWnd::OnWindowNew
// address: 0x516d1a
// body: available
// range: 0x516d1a-0x516d90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDIFrameWnd::OnWindowNew(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIFrameWnd::OnWindowNew(CMDIFrameWnd *this)

{
  code *pcVar1;
  int *piVar2;
  CMDIChildWnd *pCVar3;
  int iVar4;
  int iVar5;
  
  pCVar3 = MDIGetActive(this,(int *)0x0);
  if (pCVar3 != (CMDIChildWnd *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x16c);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 != 0) {
      piVar2 = *(int **)(iVar4 + 0x28);
      pcVar1 = *(code **)(*piVar2 + 0x70);
      guard_check_icall(iVar4,pCVar3);
      iVar5 = (*pcVar1)();
      if (iVar5 == 0) {
        return;
      }
      pcVar1 = *(code **)(*piVar2 + 0x74);
      guard_check_icall(iVar5,iVar4,1);
      (*pcVar1)();
      return;
    }
  }
  AfxMessageBox(0xf109,0,0xffffffff);
  return;
}

