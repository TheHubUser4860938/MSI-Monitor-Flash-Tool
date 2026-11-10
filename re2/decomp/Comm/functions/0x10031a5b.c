// rea decompile_all
// name: FUN_10031a5b
// address: 0x10031a5b
// body: available
// range: 0x10031a5b-0x10031b44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10031b40 to 0x10012a73 FUN_10012a73 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10031a5b(HWND__ *param_1,ushort param_2,CWnd *param_3)

{
  code *pcVar1;
  int *piVar2;
  HWND__ *pHVar3;
  undefined4 *puVar4;
  CObject *this;
  CMFCControlContainer *in_ECX;
  int iVar5;
  uchar *local_c;
  ulong local_8;
  
  if ((param_1 != (HWND__ *)0x0) && (iVar5 = 0, 0 < *(int *)(in_ECX + 0x10))) {
    do {
      piVar2 = (int *)FUN_100d7168(iVar5);
      pHVar3 = (HWND__ *)0x0;
      if (*piVar2 != 0) {
        pHVar3 = *(HWND__ **)(*piVar2 + 0x20);
      }
      if (pHVar3 == param_1) {
        if (iVar5 == -1) {
          return 0;
        }
        puVar4 = (undefined4 *)FUN_100d7168(iVar5);
        this = AfxDynamicDownCast((CRuntimeClass *)&PTR_DAT_1017ff90,(CObject *)*puVar4);
        if (this == (CObject *)0x0) {
          return 0;
        }
        if (*(int *)(this + 0x20) == 0) {
          return 0;
        }
        local_8 = 0;
        local_c = (uchar *)0x0;
        CMFCControlContainer::GetControlData(in_ECX,param_2,&local_8,&local_c);
        puVar4 = (undefined4 *)FUN_100d7168(iVar5);
        *puVar4 = 0;
        CMFCControlContainer::PreUnsubclassControl(in_ECX,(CWnd *)this);
        CWnd::UnsubclassWindow((CWnd *)this);
        pcVar1 = *(code **)(*(int *)this + 4);
        guard_check_icall(1);
        (*pcVar1)();
        iVar5 = CWnd::SubclassWindow(param_3,param_1);
        if (iVar5 != 0) {
          if (local_8 != 0) {
            SendMessageW(*(HWND *)(param_3 + 0x20),0x37c,local_8,(LPARAM)local_c);
          }
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_10012a73();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x10));
  }
  return 0;
}

