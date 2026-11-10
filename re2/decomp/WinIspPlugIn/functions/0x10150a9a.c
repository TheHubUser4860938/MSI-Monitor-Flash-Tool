// rea decompile_all
// name: CMFCTasksPaneFrameWnd::OnPressButtons
// address: 0x10150a9a
// body: available
// range: 0x10150a9a-0x10150b3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCTasksPaneFrameWnd::OnPressButtons(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTasksPaneFrameWnd::OnPressButtons(CMFCTasksPaneFrameWnd *this,uint param_1)

{
  CObject *pCVar1;
  CMFCCaptionButton *pCVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(int *)this + 0x1a8);
  guard_check_icall();
  pCVar1 = (CObject *)(*pcVar3)();
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTasksPane_1023ddac,pCVar1);
  if (pCVar1 != (CObject *)0x0) {
    if (param_1 == 0x17) {
      pcVar3 = *(code **)(*(int *)pCVar1 + 0x3a0);
    }
    else {
      if (param_1 != 0x18) {
        if (param_1 == 0x19) {
          pCVar2 = CPaneFrameWnd::FindButton((CPaneFrameWnd *)this,0x19);
          if (pCVar2 != (CMFCCaptionButton *)0x0) {
            *(undefined4 *)(this + 400) = 1;
            pcVar3 = *(code **)(*(int *)pCVar1 + 0x3ac);
            guard_check_icall(pCVar2,this);
            (*pcVar3)();
            *(undefined4 *)(this + 400) = 0;
          }
        }
        goto LAB_10150b2c;
      }
      pcVar3 = *(code **)(*(int *)pCVar1 + 0x3a4);
    }
    guard_check_icall();
    (*pcVar3)();
  }
LAB_10150b2c:
  CPaneFrameWnd::OnPressButtons((CPaneFrameWnd *)this,param_1);
  return;
}

