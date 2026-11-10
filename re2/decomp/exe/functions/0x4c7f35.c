// rea decompile_all
// name: CMDIChildWndEx::SetTaskbarTabActive
// address: 0x4c7f35
// body: available
// range: 0x4c7f35-0x4c7f96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMDIChildWndEx::SetTaskbarTabActive(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIChildWndEx::SetTaskbarTabActive(CMDIChildWndEx *this)

{
  int iVar1;
  AFX_GLOBAL_DATA *this_00;
  ITaskbarList3 *pIVar2;
  CFrameWnd *pCVar3;
  CObject *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = IsTaskbarTabsSupportEnabled(this);
  if (iVar1 != 0) {
    this_00 = GetGlobalData();
    pIVar2 = AFX_GLOBAL_DATA::GetITaskbarList3(this_00);
    if (pIVar2 != (ITaskbarList3 *)0x0) {
      pCVar3 = CWnd::GetTopLevelFrame((CWnd *)this);
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_005bad18,(CObject *)pCVar3)
      ;
      if (pCVar4 == (CObject *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(pCVar4 + 0x20);
      }
      if (this == (CMDIChildWndEx *)0xfffffbb0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(this + 0x470);
      }
      iVar1 = *(int *)pIVar2;
      guard_check_icall(pIVar2,uVar5,uVar6,0);
      (**(code **)(iVar1 + 0x38))();
    }
  }
  return;
}

