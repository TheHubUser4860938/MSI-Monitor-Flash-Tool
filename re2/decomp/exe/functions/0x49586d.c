// rea decompile_all
// name: GetInPlaceActiveItem
// address: 0x49586d
// body: available
// range: 0x49586d-0x4958d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class COleClientItem * __thiscall CFrameWndEx::GetInPlaceActiveItem(void)
    protected: virtual class COleClientItem * __thiscall CMDIFrameWndEx::GetInPlaceActiveItem(void)
   
   Library: Visual Studio 2015 Release */

undefined4 GetInPlaceActiveItem(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  CObject *pCVar4;
  undefined4 uVar5;
  int *in_ECX;
  
  pcVar1 = *(code **)(*in_ECX + 0x170);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if ((((iVar2 != 0) && (iVar2 = FUN_004d4de7(), iVar2 != 0)) &&
      (iVar3 = FUN_0043970d(&PTR_s_CPreviewViewEx_005cc9c4), iVar3 == 0)) &&
     (pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocument_005cced8,
                                  *(CObject **)(iVar2 + 0x80)), pCVar4 != (CObject *)0x0)) {
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x110);
    guard_check_icall(iVar2);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  return 0;
}

