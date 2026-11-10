// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawRibbonButtonsGroup
// address: 0x100cd272
// body: available
// range: 0x100cd272-0x100cd314 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall
   CMFCVisualManagerOffice2007::OnDrawRibbonButtonsGroup(class CDC *,class CMFCRibbonButtonsGroup
   *,class CRect)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOffice2007::OnDrawRibbonButtonsGroup
          (CMFCVisualManagerOffice2007 *this,undefined4 param_1,int param_2,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  CMFCRibbonBar *this_00;
  int iVar1;
  ulong uVar2;
  
  iVar1 = CanDrawImage(this);
  if (iVar1 == 0) {
    uVar2 = CMFCVisualManagerOffice2003::OnDrawRibbonButtonsGroup
                      ((CMFCVisualManagerOffice2003 *)this,param_1,param_2,param_4,param_5,param_6,
                       param_7);
  }
  else {
    iVar1 = FUN_1004e58b(&PTR_s_CMFCRibbonQuickAccessToolBar_101d2864);
    if ((((iVar1 != 0) && (*(int *)(this + 0x4d84) != 0)) &&
        (this_00 = *(CMFCRibbonBar **)(param_2 + 0x84), this_00 != (CMFCRibbonBar *)0x0)) &&
       (((byte)this_00[0x330] & 2) == 0)) {
      iVar1 = CMFCRibbonBar::IsQuickAccessToolbarOnTop(this_00);
      if (iVar1 == 0) {
        iVar1 = *(int *)(this + 0x4cf0);
        guard_check_icall(param_1,param_4,param_5,param_6,param_7,0,0xff);
        (**(code **)(iVar1 + 0x10))();
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

