// rea decompile_all
// name: CDockablePane::ConvertToTabbedDocument
// address: 0x4a589f
// body: available
// range: 0x4a589f-0x4a5949 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockablePane::ConvertToTabbedDocument(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockablePane::ConvertToTabbedDocument(CDockablePane *this,int param_1)

{
  int iVar1;
  CObject *pCVar2;
  CBaseTabbedPane *pCVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(*(int *)this + 0x1dc);
  guard_check_icall();
  iVar1 = (*pcVar4)();
  if (iVar1 == 0) {
    pcVar4 = *(code **)(*(int *)this + 0x19c);
    guard_check_icall();
    pCVar2 = (CObject *)(*pcVar4)();
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_005bad18,pCVar2);
    if (pCVar2 != (CObject *)0x0) {
      pcVar4 = *(code **)(*(int *)this + 0x16c);
      guard_check_icall();
      iVar1 = (*pcVar4)();
      if (iVar1 == 0) {
        pcVar4 = *(code **)(*(int *)pCVar2 + 0x1d4);
        guard_check_icall(this);
      }
      else {
        pCVar3 = CBasePane::GetParentTabbedPane((CBasePane *)this);
        pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CTabbedPane_0060c64c,(CObject *)pCVar3);
        if (pCVar2 == (CObject *)0x0) {
          return;
        }
        pcVar4 = *(code **)(*(int *)pCVar2 + 0x2e0);
        guard_check_icall(param_1);
      }
      (*pcVar4)();
    }
  }
  return;
}

