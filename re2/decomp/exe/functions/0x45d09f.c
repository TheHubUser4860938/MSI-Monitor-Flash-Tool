// rea decompile_all
// name: CPaneFrameWnd::GetPaneList
// address: 0x45d09f
// body: available
// range: 0x45d09f-0x45d15e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: static void __stdcall CPaneFrameWnd::GetPaneList(class CObList &,struct CRuntimeClass
   *,int)
   
   Library: Visual Studio 2015 Release */

void CPaneFrameWnd::GetPaneList(CObList *param_1,CRuntimeClass *param_2,int param_3)

{
  code *pcVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  CRuntimeClass *pCVar4;
  undefined1 local_10 [4];
  int local_c;
  HWND__ *local_8;
  
  local_c = -(uint)(DAT_0060c5b4 != 0);
joined_r0x0045d0b1:
  do {
    if (local_c == 0) {
      return;
    }
    local_8 = (HWND__ *)0x0;
    FUN_0045cffa(&local_c,local_10,&local_8);
    if (param_3 != 0) {
      pCVar2 = CWnd::FromHandle(local_8);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_005c7aa4,(CObject *)pCVar2
                                 );
      if (pCVar3 != (CObject *)0x0) {
        pcVar1 = *(code **)(*(int *)pCVar3 + 1000);
        guard_check_icall(param_1,param_2);
        (*pcVar1)();
        goto joined_r0x0045d0b1;
      }
    }
    pCVar2 = CWnd::FromHandle(local_8);
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_005c4284,(CObject *)pCVar2);
  } while (pCVar3 == (CObject *)0x0);
  if (param_2 != (CRuntimeClass *)0x0) {
    pcVar1 = (code *)**(undefined4 **)pCVar3;
    guard_check_icall();
    pCVar4 = (CRuntimeClass *)(*pcVar1)();
    if (pCVar4 != param_2) goto joined_r0x0045d0b1;
  }
  CObList::AddTail(param_1,pCVar3);
  goto joined_r0x0045d0b1;
}

