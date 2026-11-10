// rea decompile_all
// name: GetInPlaceActiveItem
// address: 0x100b20ac
// body: available
// range: 0x100b20ac-0x100b2116 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  if ((((iVar2 != 0) && (iVar2 = FUN_10084f4b(), iVar2 != 0)) &&
      (iVar3 = FUN_10019d4f(&PTR_s_CPreviewViewEx_101a2158), iVar3 == 0)) &&
     (pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocument_101a1ccc,
                                  *(CObject **)(iVar2 + 0x80)), pCVar4 != (CObject *)0x0)) {
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x110);
    guard_check_icall(iVar2);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  return 0;
}

