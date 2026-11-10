// rea decompile_all
// name: FUN_100a0f33
// address: 0x100a0f33
// body: available
// range: 0x100a0f33-0x100a0fd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a0fd3 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a0f33(_IMAGELIST *param_1)

{
  code *pcVar1;
  CImageList *pCVar2;
  int *in_ECX;
  undefined1 local_38 [16];
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if (param_1 != (_IMAGELIST *)0x0) {
    if (((CImageList *)(in_ECX + 0x32) != (CImageList *)0x0) && (in_ECX[0x33] != 0)) {
      CImageList::DeleteImageList((CImageList *)(in_ECX + 0x32));
    }
    pCVar2 = CImageList::FromHandle(param_1);
    if (pCVar2 != (CImageList *)0x0) {
      _IsolationAwareImageList_GetImageInfo_12(*(undefined4 *)(pCVar2 + 4),0,local_38);
      CopyRect(&local_18,&local_28);
      in_ECX[0x36] = local_18.bottom - local_18.top;
      in_ECX[0x34] = (int)param_1;
      in_ECX[0x35] = local_18.right - local_18.left;
      pcVar1 = *(code **)(*in_ECX + 0x178);
      guard_check_icall();
      (*pcVar1)();
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

