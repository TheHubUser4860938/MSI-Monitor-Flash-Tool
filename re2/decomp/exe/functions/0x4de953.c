// rea decompile_all
// name: CBasePane::OnIdleUpdateCmdUI
// address: 0x4de953
// body: available
// range: 0x4de953-0x4de9cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CBasePane::OnIdleUpdateCmdUI(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall CBasePane::OnIdleUpdateCmdUI(CBasePane *this,uint param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  CWnd *pCVar3;
  int iVar4;
  
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar2 & 0x10000000) == 0) {
    return 0;
  }
  if ((*(CWnd **)(this + 0xb8) != (CWnd *)0x0) &&
     (uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 0xb8)), (uVar2 & 0x10000000) == 0)) {
    return 0;
  }
  pCVar3 = CWnd::GetOwner((CWnd *)this);
  if (pCVar3 != (CWnd *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x150);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 != 0) goto LAB_004de9a9;
  }
  pCVar3 = (CWnd *)AFXGetParentFrame((CWnd *)this);
LAB_004de9a9:
  if (pCVar3 != (CWnd *)0x0) {
    pcVar1 = *(code **)(*(int *)this + 0x244);
    guard_check_icall(pCVar3,param_1);
    (*pcVar1)();
  }
  return 0;
}

