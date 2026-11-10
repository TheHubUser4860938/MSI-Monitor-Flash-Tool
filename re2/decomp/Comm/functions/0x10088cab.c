// rea decompile_all
// name: FUN_10088cab
// address: 0x10088cab
// body: available
// range: 0x10088cab-0x10088eca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10088ec6 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10088cab(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  undefined1 local_2c [8];
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if ((in_ECX == (int *)0x0) || (in_ECX[8] == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect((HWND)in_ECX[8],&local_18);
  pcVar1 = *(code **)(*in_ECX + 0x2a4);
  guard_check_icall(local_2c,1);
  iVar2 = (*pcVar1)();
  local_1c = *(int *)(iVar2 + 4);
  local_20 = local_18.bottom - local_18.top;
  iVar2 = (uint)(local_1c < local_20) * 2 + -1;
  while( true ) {
    pcVar1 = *(code **)(*in_ECX + 0x2a4);
    guard_check_icall(local_2c,1);
    iVar3 = (*pcVar1)();
    iVar3 = *(int *)(iVar3 + 4);
    iVar4 = local_18.bottom - local_18.top;
    if (iVar3 == iVar4) break;
    if (local_1c < local_20) {
      if (iVar4 < iVar3) {
        in_ECX[0x38f] = in_ECX[0x38f] - iVar2;
        in_ECX[0x379] = (in_ECX[0x38f] * 3) / 2;
        break;
      }
    }
    else if (iVar3 < iVar4) break;
    in_ECX[0x38f] = in_ECX[0x38f] + iVar2;
    in_ECX[0x379] = (in_ECX[0x38f] * 3) / 2;
  }
  pcVar1 = *(code **)(*in_ECX + 0x2a4);
  guard_check_icall(local_2c,1);
  piVar5 = (int *)(*pcVar1)();
  local_20 = *piVar5;
  local_1c = local_18.right - local_18.left;
  iVar2 = (uint)(local_20 < local_1c) * 2 + -1;
  do {
    pcVar1 = *(code **)(*in_ECX + 0x2a4);
    guard_check_icall(local_2c,1);
    piVar5 = (int *)(*pcVar1)();
    iVar3 = *piVar5;
    iVar4 = local_18.right - local_18.left;
    if (iVar3 == iVar4) {
LAB_10088e0b:
      in_ECX[0x38e] = in_ECX[0x38e] + -1;
      in_ECX[0x38f] = in_ECX[0x38f] + -1;
      if (param_1 != 0) {
        iVar2 = in_ECX[0x38e];
        if (in_ECX[0x38f] <= in_ECX[0x38e]) {
          iVar2 = in_ECX[0x38f];
        }
        in_ECX[0x38f] = iVar2;
        in_ECX[0x38e] = iVar2;
        in_ECX[0x379] = (iVar2 * 3) / 2;
      }
      if (param_2 == 0) {
        in_ECX[0x378] = 0;
        in_ECX[0x377] = 0;
      }
      else {
        pcVar1 = *(code **)(*in_ECX + 0x2a4);
        guard_check_icall(&local_24,1);
        (*pcVar1)();
        in_ECX[0x377] = ((local_18.right - local_18.left) - local_24) / 2;
        in_ECX[0x378] = ((local_18.bottom - local_18.top) - local_20) / 2;
      }
      pcVar1 = *(code **)(*in_ECX + 0x3e4);
      guard_check_icall();
      (*pcVar1)();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (local_20 < local_1c) {
      if (iVar4 < iVar3) {
        in_ECX[0x38f] = in_ECX[0x38f] - iVar2;
        goto LAB_10088e0b;
      }
    }
    else if (iVar3 < iVar4) goto LAB_10088e0b;
    in_ECX[0x38e] = in_ECX[0x38e] + iVar2;
  } while( true );
}

