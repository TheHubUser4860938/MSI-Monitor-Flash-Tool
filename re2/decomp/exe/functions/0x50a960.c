// rea decompile_all
// name: CControlBar::OnIdleUpdateCmdUI
// address: 0x50a960
// body: available
// range: 0x50a960-0x50aa25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: long __thiscall CControlBar::OnIdleUpdateCmdUI(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall CControlBar::OnIdleUpdateCmdUI(CControlBar *this,uint param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  CWnd *pCVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = CWnd::GetExStyle((CWnd *)this);
  uVar1 = *(uint *)(this + 0xac);
  uVar6 = 0;
  if (((uVar1 & 1) == 0) || ((uVar3 & 0x10000000) == 0)) {
    if (((uVar1 & 2) != 0) && ((uVar3 & 0x10000000) == 0)) {
      uVar6 = 0x40;
    }
  }
  else {
    uVar6 = 0x80;
  }
  *(uint *)(this + 0xac) = uVar1 & 0xfffffffc;
  if (uVar6 != 0) {
    CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,0,0,0,0,uVar6 | 0x17);
  }
  uVar3 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar3 & 0x10000000) == 0) {
    return 0;
  }
  if ((*(CWnd **)(this + 0xbc) != (CWnd *)0x0) &&
     (uVar3 = CWnd::GetExStyle(*(CWnd **)(this + 0xbc)), (uVar3 & 0x10000000) == 0)) {
    return 0;
  }
  pCVar4 = CWnd::GetOwner((CWnd *)this);
  if (pCVar4 != (CWnd *)0x0) {
    pcVar2 = *(code **)(*(int *)pCVar4 + 0x150);
    guard_check_icall();
    iVar5 = (*pcVar2)();
    if (iVar5 != 0) goto LAB_0050aa02;
  }
  pCVar4 = (CWnd *)CWnd::GetParentFrame((CWnd *)this);
LAB_0050aa02:
  if (pCVar4 != (CWnd *)0x0) {
    pcVar2 = *(code **)(*(int *)this + 0x16c);
    guard_check_icall(pCVar4,param_1);
    (*pcVar2)();
  }
  return 0;
}

