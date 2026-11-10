// rea decompile_all
// name: CDockingManager::LockUpdate
// address: 0x100ad72a
// body: available
// range: 0x100ad72a-0x100ad81d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDockingManager::LockUpdate(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingManager::LockUpdate(CDockingManager *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  CObject *pCVar3;
  int *piVar4;
  HWND pHVar5;
  int local_8;
  
  if ((((param_1 == 0) || (iVar1 = *(int *)(this + 0x1b8), iVar1 == 0)) ||
      (*(int *)(iVar1 + 8) == 0)) || (*(int *)(iVar1 + 4) == 0)) {
    *(int *)(this + 8) = param_1;
    if (param_1 == 0) {
      pHVar5 = (HWND)0x0;
    }
    else {
      pHVar5 = *(HWND *)(*(int *)(this + 0xe4) + 0x20);
    }
    LockWindowUpdate(pHVar5);
    local_8 = *(int *)(this + 0xcc);
    while (local_8 != 0) {
      puVar2 = (undefined4 *)FUN_1002466e(&local_8);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101d38dc,(CObject *)*puVar2)
      ;
      ValidateRect(*(HWND *)(pCVar3 + 0x20),(RECT *)0x0);
      UpdateWindow(*(HWND *)(pCVar3 + 0x20));
      if (param_1 == 0) {
        pHVar5 = (HWND)0x0;
      }
      else {
        pHVar5 = *(HWND *)(pCVar3 + 0x20);
      }
      LockWindowUpdate(pHVar5);
    }
    local_8 = *(int *)(this + 0x24);
    while (local_8 != 0) {
      piVar4 = (int *)FUN_1002466e(&local_8);
      iVar1 = *piVar4;
      ValidateRect(*(HWND *)(iVar1 + 0x20),(RECT *)0x0);
      UpdateWindow(*(HWND *)(iVar1 + 0x20));
      if (param_1 == 0) {
        pHVar5 = (HWND)0x0;
      }
      else {
        pHVar5 = *(HWND *)(iVar1 + 0x20);
      }
      LockWindowUpdate(pHVar5);
    }
  }
  return;
}

