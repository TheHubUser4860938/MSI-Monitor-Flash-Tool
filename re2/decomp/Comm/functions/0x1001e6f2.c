// rea decompile_all
// name: FUN_1001e6f2
// address: 0x1001e6f2
// body: available
// range: 0x1001e6f2-0x1001e794 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e790 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e6f2(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  CNoTrackObject *pCVar2;
  CMenu *pCVar3;
  int *piVar4;
  CWnd *pCVar5;
  int iVar6;
  int *in_ECX;
  
  if (*param_2 != 1) {
    pCVar5 = CWnd::GetDescendantWindow((HWND__ *)in_ECX[8],param_2[1],1);
    if ((pCVar5 != (CWnd *)0x0) && (iVar6 = FUN_1002009a(0), iVar6 != 0)) {
      return;
    }
LAB_1001e780:
    FUN_1001d029();
    return;
  }
  pCVar2 = CThreadLocalObject::GetData
                     ((CThreadLocalObject *)&DAT_101d88b8,(_func_CNoTrackObject_ptr *)&LAB_10012a8d)
  ;
  if (pCVar2 != (CNoTrackObject *)0x0) {
    if (*(int *)(pCVar2 + 0x74) == in_ECX[8]) {
      pCVar3 = CMenu::FromHandle(*(HMENU__ **)(pCVar2 + 0x78));
    }
    else {
      pcVar1 = *(code **)(*in_ECX + 0x6c);
      guard_check_icall();
      pCVar3 = (CMenu *)(*pcVar1)();
    }
    if (pCVar3 != (CMenu *)0x0) {
      piVar4 = (int *)FUN_10020b00(pCVar3,param_2[2]);
      if (piVar4 != (int *)0x0) {
        pcVar1 = *(code **)(*piVar4 + 0x10);
        guard_check_icall(param_2);
        (*pcVar1)();
      }
      goto LAB_1001e780;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

