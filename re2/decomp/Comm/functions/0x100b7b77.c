// rea decompile_all
// name: CMDIChildWndEx::UnregisterTaskbarTab
// address: 0x100b7b77
// body: available
// range: 0x100b7b77-0x100b7c33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMDIChildWndEx::UnregisterTaskbarTab(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIChildWndEx::UnregisterTaskbarTab(CMDIChildWndEx *this,int param_1)

{
  CMDIChildWndEx *pCVar1;
  code *pcVar2;
  AFX_GLOBAL_DATA *pAVar3;
  ITaskbarList3 *pIVar4;
  CFrameWnd *pCVar5;
  CObject *this_00;
  int iVar6;
  undefined4 uVar7;
  
  pCVar1 = this + 0x450;
  if ((pCVar1 != (CMDIChildWndEx *)0x0) && (*(int *)(this + 0x470) != 0)) {
    pAVar3 = GetGlobalData();
    pIVar4 = AFX_GLOBAL_DATA::GetITaskbarList3(pAVar3);
    if (pIVar4 != (ITaskbarList3 *)0x0) {
      if (pCVar1 == (CMDIChildWndEx *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(this + 0x470);
      }
      pcVar2 = *(code **)(*(int *)pIVar4 + 0x30);
      guard_check_icall(pIVar4,uVar7);
      (*pcVar2)();
    }
    if ((pCVar1 != (CMDIChildWndEx *)0x0) && (*(int *)(this + 0x470) != 0)) {
      pcVar2 = *(code **)(*(int *)pCVar1 + 0x60);
      guard_check_icall();
      (*pcVar2)();
    }
    if (param_1 != 0) {
      pCVar5 = CWnd::GetTopLevelFrame((CWnd *)this);
      this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10192540,(CObject *)pCVar5
                                  );
      if ((this_00 != (CObject *)0x0) &&
         (iVar6 = CMDIFrameWndEx::GetRegisteredWithTaskBarMDIChildCount((CMDIFrameWndEx *)this_00),
         iVar6 == 0)) {
        pAVar3 = GetGlobalData();
        pIVar4 = AFX_GLOBAL_DATA::GetITaskbarList3(pAVar3);
        if (pIVar4 != (ITaskbarList3 *)0x0) {
          pcVar2 = *(code **)(*(int *)pIVar4 + 0x50);
          guard_check_icall(pIVar4,*(undefined4 *)(this_00 + 0x20),0);
          (*pcVar2)();
        }
      }
    }
  }
  return;
}

