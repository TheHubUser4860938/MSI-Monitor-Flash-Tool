// rea decompile_all
// name: CMDIClientAreaWnd::OnMDISetMenu
// address: 0x10131978
// body: available
// range: 0x10131978-0x101319ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: struct HMENU__ * __thiscall CMDIClientAreaWnd::OnMDISetMenu(struct HMENU__ *,struct
   HMENU__ *)
   
   Library: Visual Studio 2015 Release */

HMENU__ * __thiscall
CMDIClientAreaWnd::OnMDISetMenu(CMDIClientAreaWnd *this,HMENU__ *param_1,HMENU__ *param_2)

{
  code *pcVar1;
  CFrameWnd *pCVar2;
  CObject *pCVar3;
  BOOL BVar4;
  int iVar5;
  HMENU__ *pHVar6;
  
  pCVar2 = CWnd::GetParentFrame((CWnd *)this);
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101e9630,(CObject *)pCVar2);
  if (pCVar3 != (CObject *)0x0) {
    BVar4 = IsWindow(*(HWND *)(pCVar3 + 0x20));
    if (BVar4 != 0) {
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x1e0);
      guard_check_icall(param_1);
      iVar5 = (*pcVar1)();
      if (iVar5 == 0) goto LAB_101319c6;
    }
  }
  param_1 = (HMENU__ *)0x0;
LAB_101319c6:
  pcVar1 = *(code **)(*(int *)this + 0x11c);
  guard_check_icall(0x230,param_1,param_2);
  pHVar6 = (HMENU__ *)(*pcVar1)();
  return pHVar6;
}

