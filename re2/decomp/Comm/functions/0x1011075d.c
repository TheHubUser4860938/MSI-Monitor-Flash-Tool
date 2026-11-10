// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnFillMiniFrameCaption
// address: 0x1011075d
// body: available
// range: 0x1011075d-0x10110813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual unsigned long __thiscall
   CMFCVisualManagerOfficeXP::OnFillMiniFrameCaption(class CDC *,class CRect,class CPaneFrameWnd
   *,int)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOfficeXP::OnFillMiniFrameCaption(CMFCVisualManagerOfficeXP *this,int param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  CObject *pCVar4;
  AFX_GLOBAL_DATA *pAVar5;
  HBRUSH pHVar6;
  int *in_stack_00000018;
  int in_stack_0000001c;
  
  piVar2 = in_stack_00000018;
  iVar3 = FUN_10019d4f(&PTR_s_CMFCTasksPaneFrameWnd_101d3cbc);
  pcVar1 = *(code **)(*piVar2 + 0x1a8);
  guard_check_icall();
  pCVar4 = (CObject *)(*pcVar1)();
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseToolBar_10188558,pCVar4);
  if (pCVar4 == (CObject *)0x0) {
    pAVar5 = GetGlobalData();
    if (iVar3 != 0) {
      pHVar6 = (HBRUSH)0x0;
      if (pAVar5 != (AFX_GLOBAL_DATA *)0xffffff30) {
        pHVar6 = *(HBRUSH *)(pAVar5 + 0xd4);
      }
      FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x00000008,pHVar6);
      pAVar5 = GetGlobalData();
      return *(ulong *)(pAVar5 + 0x68);
    }
    if (in_stack_0000001c == 0) {
      pAVar5 = pAVar5 + 0xc0;
    }
    else {
      pAVar5 = pAVar5 + 0xb8;
    }
  }
  else {
    pAVar5 = (AFX_GLOBAL_DATA *)(this + 0x134);
  }
  if (pAVar5 == (AFX_GLOBAL_DATA *)0x0) {
    pHVar6 = (HBRUSH)0x0;
  }
  else {
    pHVar6 = *(HBRUSH *)(pAVar5 + 4);
  }
  FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x00000008,pHVar6);
  pAVar5 = GetGlobalData();
  return *(ulong *)(pAVar5 + 0x74);
}

