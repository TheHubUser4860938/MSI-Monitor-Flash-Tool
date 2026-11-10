// rea decompile_all
// name: OnCreate
// address: 0x1013844e
// body: available
// range: 0x1013844e-0x101384c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMFCToolTipCtrl::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMFCToolTipCtrl::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2015 Release */

undefined4 OnCreate(int param_1)

{
  int iVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  undefined4 uVar4;
  CWnd *in_ECX;
  
  iVar1 = FUN_100509af();
  if (iVar1 == -1) {
    uVar4 = 0xffffffff;
  }
  else {
    pCVar2 = CWnd::FromHandlePermanent(*(HWND__ **)(param_1 + 0xc));
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10205ab0,(CObject *)pCVar2);
    *(CObject **)(in_ECX + 0xa0) = pCVar3;
    if (pCVar3 != (CObject *)0x0) {
      iVar1 = FUN_1004e58b(&PTR_s_CMFCOutlookBarPane_10205af4);
      if (iVar1 != 0) {
        *(undefined4 *)(in_ECX + 0xa0) = 0;
      }
    }
    CWnd::ModifyStyle(in_ECX,0x800000,0,0);
    if (*(int *)(in_ECX + 0xb0) != 0) {
      CWnd::ModifyStyle(in_ECX,0,0x40,0);
    }
    uVar4 = 0;
  }
  return uVar4;
}

