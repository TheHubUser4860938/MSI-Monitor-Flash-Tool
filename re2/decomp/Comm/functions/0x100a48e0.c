// rea decompile_all
// name: CPaneFrameWnd::CalcBorderSize
// address: 0x100a48e0
// body: available
// range: 0x100a48e0-0x100a4943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneFrameWnd::CalcBorderSize(class CRect &)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::CalcBorderSize(CPaneFrameWnd *this,CRect *param_1)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  
  pcVar1 = *(code **)(*(int *)this + 0x1a8);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if ((iVar2 != 0) || (*(int *)(this + 0x9c) == 0)) {
    pcVar1 = *(code **)(*(int *)this + 0x1a8);
    guard_check_icall();
    pCVar3 = (CObject *)(*pcVar1)();
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_101d3640,pCVar3);
    if (pCVar3 == (CObject *)0x0) {
      iVar2 = 4;
      goto LAB_100a4930;
    }
  }
  iVar2 = 3;
LAB_100a4930:
  SetRect((LPRECT)param_1,iVar2,iVar2,iVar2,iVar2);
  return;
}

