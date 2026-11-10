// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnFillTab
// address: 0x100d31c7
// body: available
// range: 0x100d31c7-0x100d332a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnFillTab(class CDC *,class
   CRect,class CBrush *,int,int,class CMFCBaseTabCtrl const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnFillTab
          (CMFCVisualManagerOffice2007 *this,undefined4 param_1,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,
          int param_9,int *param_10)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = CanDrawImage(this);
  if ((iVar3 == 0) || (param_10[0x4d] != 0)) {
LAB_100d3302:
    CMFCVisualManagerOffice2003::OnFillTab
              ((CMFCVisualManagerOffice2003 *)this,param_1,param_3,param_4,param_5,param_6,param_7,
               param_8,param_9,param_10);
    return;
  }
  pcVar1 = *(code **)(*param_10 + 0x280);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) goto LAB_100d3302;
  pcVar1 = *(code **)(*param_10 + 0x288);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) goto LAB_100d3302;
  pcVar1 = *(code **)(*param_10 + 0x2a8);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) goto LAB_100d3302;
  pcVar1 = *(code **)(*param_10 + 0x28c);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) goto LAB_100d3302;
  pcVar1 = *(code **)(*param_10 + 0x290);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) goto LAB_100d3302;
  iVar3 = *(int *)(this + 0xc000);
  if (iVar3 < 0x14) {
    if (param_9 == 0) {
      if (param_8 != param_10[0x45]) {
        return;
      }
      goto LAB_100d329f;
    }
  }
  else {
LAB_100d329f:
    if (param_9 == 0) {
      iVar3 = (0x13 < iVar3) - 1;
      goto LAB_100d32b9;
    }
  }
  iVar3 = (0x13 < iVar3) + 2;
LAB_100d32b9:
  if (param_8 == param_10[0x45]) {
    iVar3 = iVar3 + 1;
  }
  iVar2 = *(int *)(this + (-(uint)(param_10[0x24] != 0) & 0xfffffe88) + 0x3860);
  guard_check_icall(param_1,param_3,param_4,param_5,param_6,iVar3,0xff);
  (**(code **)(iVar2 + 0x10))();
  return;
}

