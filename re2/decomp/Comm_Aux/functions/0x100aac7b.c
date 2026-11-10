// rea decompile_all
// name: CScrollView::OnScrollBy
// address: 0x100aac7b
// body: available
// range: 0x100aac7b-0x100aad8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CScrollView::OnScrollBy(class CSize,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CScrollView::OnScrollBy(CScrollView *this,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  ulong uVar2;
  CWnd *pCVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  pcVar1 = *(code **)(*(int *)this + 0x78);
  guard_check_icall(1);
  pCVar3 = (CWnd *)(*pcVar1)();
  if (pCVar3 == (CWnd *)0x0) {
    uVar4 = uVar2 & 0x200000;
  }
  else {
    uVar4 = CWnd::IsWindowEnabled(pCVar3);
  }
  if (uVar4 == 0) {
    param_3 = 0;
  }
  pcVar1 = *(code **)(*(int *)this + 0x78);
  guard_check_icall(0);
  pCVar3 = (CWnd *)(*pcVar1)();
  if (pCVar3 == (CWnd *)0x0) {
    uVar4 = uVar2 & 0x100000;
  }
  else {
    uVar4 = CWnd::IsWindowEnabled(pCVar3);
  }
  if (uVar4 == 0) {
    param_2 = 0;
  }
  iVar5 = CWnd::GetScrollPos((CWnd *)this,0);
  iVar6 = CWnd::GetScrollLimit((CWnd *)this,0);
  param_2 = iVar5 + param_2;
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (iVar6 < param_2) {
    param_2 = iVar6;
  }
  iVar6 = CWnd::GetScrollPos((CWnd *)this,1);
  iVar7 = CWnd::GetScrollLimit((CWnd *)this,1);
  param_3 = iVar6 + param_3;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (iVar7 < param_3) {
    param_3 = iVar7;
  }
  if ((param_2 == iVar5) && (param_3 == iVar6)) {
    iVar5 = 0;
  }
  else {
    if (param_4 != 0) {
      CWnd::ScrollWindow((CWnd *)this,iVar5 - param_2,iVar6 - param_3,(tagRECT *)0x0,(tagRECT *)0x0)
      ;
      if (param_2 != iVar5) {
        CWnd::SetScrollPos((CWnd *)this,0,param_2,1);
      }
      if (param_3 != iVar6) {
        CWnd::SetScrollPos((CWnd *)this,1,param_3,1);
      }
    }
    iVar5 = 1;
  }
  return iVar5;
}

