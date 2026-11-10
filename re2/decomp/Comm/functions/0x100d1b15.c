// rea decompile_all
// name: CMFCRibbonPanel::MouseButtonDown
// address: 0x100d1b15
// body: available
// range: 0x100d1b15-0x100d1c20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual class CMFCRibbonBaseElement * __thiscall
   CMFCRibbonPanel::MouseButtonDown(class CPoint)
   
   Library: Visual Studio 2015 Release */

CMFCRibbonBaseElement * __thiscall
CMFCRibbonPanel::MouseButtonDown(CMFCRibbonPanel *this,LONG param_2,LONG param_3)

{
  code *pcVar1;
  POINT pt;
  int iVar2;
  CObject *pCVar3;
  BOOL BVar4;
  HWND hWnd;
  CMFCRibbonBaseElement *pCVar5;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(this + 0xa0) = 1;
  if (*(int **)(this + 0x2dc) == (int *)0x0) goto LAB_100d1c0f;
  pcVar1 = *(code **)(**(int **)(this + 0x2dc) + 0x138);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if ((iVar2 == 0) ||
     (pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonButton_101963ec,
                                  *(CObject **)(this + 0x2dc)), pCVar3 == (CObject *)0x0)) {
LAB_100d1b9e:
    *(undefined4 *)(*(int *)(this + 0x2dc) + 0xd0) = 1;
    pcVar1 = *(code **)(*(int *)this + 0x108);
    guard_check_icall(*(undefined4 *)(this + 0x2dc));
    (*pcVar1)();
  }
  else {
    local_18.left = *(LONG *)(pCVar3 + 0x134);
    local_18.top = *(LONG *)(pCVar3 + 0x138);
    local_18.right = *(LONG *)(pCVar3 + 0x13c);
    local_18.bottom = *(LONG *)(pCVar3 + 0x140);
    BVar4 = IsRectEmpty(&local_18);
    if ((BVar4 == 0) && (pt.y = param_3, pt.x = param_2, BVar4 = PtInRect(&local_18,pt), BVar4 != 0)
       ) goto LAB_100d1b9e;
  }
  hWnd = (HWND)0x0;
  if (*(int *)(this + 0x10c) != 0) {
    hWnd = *(HWND *)(*(int *)(this + 0x10c) + 0x20);
  }
  pcVar1 = *(code **)(**(int **)(this + 0x2dc) + 0x210);
  guard_check_icall(param_2,param_3);
  (*pcVar1)();
  if (hWnd != (HWND)0x0) {
    IsWindow(hWnd);
  }
LAB_100d1c0f:
  pCVar5 = (CMFCRibbonBaseElement *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar5;
}

