// rea decompile_all
// name: CMFCRibbonCategory::OnScrollHorz
// address: 0x100d8555
// body: available
// range: 0x100d8555-0x100d865d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonCategory::OnScrollHorz(int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCRibbonCategory::OnScrollHorz(CMFCRibbonCategory *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  CFont *pCVar3;
  CPen *pCVar4;
  CWnd *pCVar5;
  int iVar6;
  bool bVar7;
  RECT *lprcUpdate;
  CClientDC local_30 [20];
  int local_1c;
  CMFCRibbonCategory *local_18;
  CWnd *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x100d8561;
  local_1c = *(int *)(this + 0x538);
  if (param_2 == 0) {
    param_2 = 0x32;
  }
  if (param_1 != 0) {
    param_2 = -param_2;
  }
  iVar2 = local_1c + param_2;
  *(int *)(this + 0x538) = iVar2;
  iVar6 = iVar2;
  if (iVar2 < 0) {
    iVar6 = 0;
  }
  if ((*(int *)(this + 0x544) - *(int *)(this + 0x84)) + *(int *)(this + 0x7c) < iVar6) {
    iVar2 = (*(int *)(this + 0x544) - *(int *)(this + 0x84)) + *(int *)(this + 0x7c);
  }
  else if (iVar2 < 0) {
    iVar2 = 0;
  }
  pCVar5 = *(CWnd **)(this + 0x53c);
  *(int *)(this + 0x538) = iVar2;
  local_18 = this;
  local_14 = pCVar5;
  CClientDC::CClientDC(local_30,pCVar5);
  local_8 = 0;
  pCVar3 = CWnd::GetFont(pCVar5);
  pCVar4 = CDC::SelectObject((CDC *)local_30,(CPen *)pCVar3);
  pcVar1 = *(code **)(*(int *)this + 0xe4);
  guard_check_icall(local_30);
  (*pcVar1)();
  CDC::SelectObject((CDC *)local_30,pCVar4);
  UpdateScrollButtons(this);
  if (*(CWnd **)(this + 0x540) == (CWnd *)0x0) {
    lprcUpdate = (RECT *)(this + 0x7c);
    pCVar5 = local_14;
  }
  else {
    lprcUpdate = (RECT *)0x0;
    pCVar5 = *(CWnd **)(this + 0x540);
  }
  RedrawWindow(*(HWND *)(pCVar5 + 0x20),lprcUpdate,(HRGN)0x0,0x105);
  bVar7 = local_1c != *(int *)(local_18 + 0x538);
  CClientDC::~CClientDC(local_30);
  return (uint)bVar7;
}

