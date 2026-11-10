// rea decompile_all
// name: CDockingManager::ResortMiniFramesForZOrder
// address: 0x100b988b
// body: available
// range: 0x100b988b-0x100b9939 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CDockingManager::ResortMiniFramesForZOrder(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingManager::ResortMiniFramesForZOrder(CDockingManager *this)

{
  CObject *pCVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  __POSITION *p_Var4;
  UINT uCmd;
  CObList local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100b9897;
  if (*(int *)(this + 0xd4) != 0) {
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_DAT_101aae40,
                                *(CObject **)(*(int *)(this + 0xcc) + 8));
    if (pCVar1 != (CObject *)0x0) {
      pHVar2 = GetParent(*(HWND *)(pCVar1 + 0x20));
      pCVar3 = CWnd::FromHandle(pHVar2);
      if (pCVar3 != (CWnd *)0x0) {
        CObList::CObList(local_2c,10);
        local_8 = 0;
        uCmd = 0;
        while( true ) {
          pHVar2 = GetWindow(*(HWND *)(pCVar3 + 0x20),uCmd);
          pCVar3 = CWnd::FromHandle(pHVar2);
          if (pCVar3 == (CWnd *)0x0) break;
          p_Var4 = CObList::Find((CObList *)(this + 200),(CObject *)pCVar3,(__POSITION *)0x0);
          if (p_Var4 != (__POSITION *)0x0) {
            CObList::AddTail(local_2c,(CObject *)pCVar3);
          }
          uCmd = 2;
        }
        CObList::RemoveAll((CObList *)(this + 200));
        FUN_10039da7(local_2c);
        CObList::~CObList(local_2c);
      }
    }
  }
  return;
}

