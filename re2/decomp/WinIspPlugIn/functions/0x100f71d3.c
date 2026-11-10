// rea decompile_all
// name: CGlobalUtils::GetDockingManager
// address: 0x100f71d3
// body: available
// range: 0x100f71d3-0x100f7307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CDockingManager * __thiscall CGlobalUtils::GetDockingManager(class CWnd *)
   
   Library: Visual Studio 2015 Release */

CDockingManager * __thiscall CGlobalUtils::GetDockingManager(CGlobalUtils *this,CWnd *param_1)

{
  CDockingManager *pCVar1;
  int iVar2;
  CObject *pCVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  int iVar6;
  
  if (param_1 == (CWnd *)0x0) {
    pCVar1 = (CDockingManager *)0x0;
  }
  else {
    iVar2 = FUN_10051e53(&PTR_s_CFrameWndEx_101e90a0);
    if (iVar2 == 0) {
      iVar2 = FUN_10051e53(&PTR_s_CMDIFrameWndEx_101e9630);
      if (iVar2 == 0) {
        iVar2 = FUN_10051e53(&PTR_s_COleIPFrameWndEx_101e9c40);
        if (iVar2 == 0) {
          iVar2 = FUN_10051e53(&PTR_s_COleDocIPFrameWndEx_101e9ff8);
          if (iVar2 == 0) {
            iVar2 = FUN_10051e53(&PTR_s_CMDIChildWndEx_101ea534);
            if (iVar2 == 0) {
              iVar2 = FUN_10051e53(&PTR_s_CDialog_101d7b58);
              if ((iVar2 == 0) && (iVar2 = FUN_10051e53(&PTR_s_CPropertySheet_101d948c), iVar2 == 0)
                 ) {
                iVar2 = FUN_10051e53(&PTR_s_COleCntrFrameWndEx_101eb17c);
                if (iVar2 != 0) {
                  return (CDockingManager *)(param_1 + 0x128);
                }
                iVar2 = FUN_10051e53(&PTR_s_CPaneFrameWnd_1023d8dc);
                if (iVar2 != 0) {
                  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_1023d8dc,
                                              (CObject *)param_1);
                  if (*(CDockingManager **)(pCVar3 + 0x184) != (CDockingManager *)0x0) {
                    return *(CDockingManager **)(pCVar3 + 0x184);
                  }
                  pHVar4 = GetParent(*(HWND *)(param_1 + 0x20));
                  pCVar5 = CWnd::FromHandle(pHVar4);
                  pCVar1 = GetDockingManager(this,pCVar5);
                  return pCVar1;
                }
              }
              else {
                iVar2 = *(int *)(param_1 + 0x20);
                pCVar5 = AfxGetMainWnd();
                iVar6 = 0;
                if (pCVar5 != (CWnd *)0x0) {
                  iVar6 = *(int *)(pCVar5 + 0x20);
                }
                if (iVar2 == iVar6) {
                  *(undefined4 *)(this + 4) = 1;
                }
              }
              pCVar1 = (CDockingManager *)0x0;
            }
            else {
              pCVar1 = (CDockingManager *)(param_1 + 0x254);
            }
          }
          else {
            pCVar1 = (CDockingManager *)(param_1 + 0x2a8);
          }
        }
        else {
          pCVar1 = (CDockingManager *)(param_1 + 0x2ac);
        }
      }
      else {
        pCVar1 = (CDockingManager *)(param_1 + 0x160);
      }
    }
    else {
      pCVar1 = (CDockingManager *)(param_1 + 0x238);
    }
  }
  return pCVar1;
}

