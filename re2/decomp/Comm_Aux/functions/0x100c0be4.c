// rea decompile_all
// name: CMFCColorBar::OpenColorDialog
// address: 0x100c0be4
// body: available
// range: 0x100c0be4-0x100c0cfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCColorBar::OpenColorDialog(unsigned long,unsigned long &)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCColorBar::OpenColorDialog(CMFCColorBar *this,ulong param_1,ulong *param_2)

{
  code *pcVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  int iVar5;
  undefined **local_adc [45];
  ulong local_a28;
  CMFCColorBar *local_a0c;
  ulong local_a08;
  CMFCColorDialog local_a04 [228];
  ulong local_920;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xacc;
  local_8 = 0x100c0bf3;
  local_a08 = param_1;
  local_a0c = this;
  pHVar2 = GetParent(*(HWND *)(this + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10205bec,(CObject *)pCVar3);
  if ((pCVar4 == (CObject *)0x0) ||
     (pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCColorMenuButton_1020608c,
                                  *(CObject **)(pCVar4 + 0x158)), param_1 = local_a08,
     pCVar4 == (CObject *)0x0)) {
    if (*(int *)(local_a0c + 0xdf0) == 0) {
      CMFCColorDialog::CMFCColorDialog(local_a04,param_1,0,(CWnd *)0x0,(HPALETTE__ *)0x0);
      local_8 = 1;
      iVar5 = FUN_1004d03c();
      if (iVar5 == 1) {
        *param_2 = local_920;
      }
      CMFCColorDialog::~CMFCColorDialog(local_a04);
    }
    else {
      CColorDialog::CColorDialog((CColorDialog *)local_adc,param_1,0x102,(CWnd *)0x0);
      local_8 = 0;
      iVar5 = CColorDialog::DoModal((CColorDialog *)local_adc);
      if (iVar5 == 1) {
        *param_2 = local_a28;
      }
      local_adc[0] = CCommonDialog::vftable;
      CDialog::~CDialog((CDialog *)local_adc);
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x100);
    guard_check_icall(local_a08,param_2);
    (*pcVar1)();
  }
  iVar5 = FUN_1017f5f4();
  return iVar5;
}

