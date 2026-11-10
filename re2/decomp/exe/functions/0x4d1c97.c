// rea decompile_all
// name: CPropertyPage::OnSetActive
// address: 0x4d1c97
// body: available
// range: 0x4d1c97-0x4d1d6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPropertyPage::OnSetActive(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CPropertyPage::OnSetActive(CPropertyPage *this)

{
  CMFCDynamicLayout *this_00;
  code *pcVar1;
  undefined4 uVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  AFX_DYNAMIC_LAYOUT_ITEM *pAVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 local_10 [8];
  CMFCDynamicLayout *local_8;
  
  if (*(int *)(this + 0xb0) != 0) {
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPropertySheet_005c2e70,(CObject *)pCVar4);
    if ((((pCVar5 != (CObject *)0x0) &&
         (this_00 = *(CMFCDynamicLayout **)(pCVar5 + 0x58), local_8 = this_00,
         this_00 != (CMFCDynamicLayout *)0x0)) &&
        (pAVar6 = CMFCDynamicLayout::FindItem(this_00,*(HWND__ **)(this + 0x20)),
        pAVar6 == (AFX_DYNAMIC_LAYOUT_ITEM *)0x0)) && (*(int *)(this_00 + 0x1c) != 0)) {
      pcVar1 = *(code **)(*(int *)pCVar5 + 0x178);
      guard_check_icall();
      iVar7 = (*pcVar1)();
      if (iVar7 != 0) {
        uVar2 = *(undefined4 *)(this + 0x20);
        puVar8 = (undefined4 *)CMFCDynamicLayout::SizeHorizontalAndVertical((int)local_10,100);
        puVar9 = (undefined4 *)CMFCDynamicLayout::MoveNone();
        CMFCDynamicLayout::AddItem(local_8,uVar2,*puVar9,puVar9[1],*puVar8,puVar8[1]);
      }
    }
  }
  pcVar1 = *(code **)(*(int *)this + 0x148);
  guard_check_icall();
  (*pcVar1)();
  if (*(int *)(this + 0xb0) == 0) {
    FUN_00432070(0);
  }
  else {
    *(undefined4 *)(this + 0xb0) = 0;
  }
  return 1;
}

