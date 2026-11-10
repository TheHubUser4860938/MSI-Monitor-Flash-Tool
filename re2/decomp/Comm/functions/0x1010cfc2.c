// rea decompile_all
// name: FUN_1010cfc2
// address: 0x1010cfc2
// body: available
// range: 0x1010cfc2-0x1010d153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1010d14f to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1010cfc2(CDC *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,int param_6,int param_7)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  int *in_ECX;
  int local_28;
  int local_24;
  CDC *local_20;
  int *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  pcVar1 = *(code **)(*param_2 + 0xc);
  local_1c = in_ECX;
  guard_check_icall(&local_18);
  (*pcVar1)();
  if (param_2[1] == 0) {
LAB_1010d053:
    if ((param_2[2] == 0) && (param_2[5] == 0)) {
      local_1c = (int *)param_3;
    }
    else {
LAB_1010d065:
      if (param_6 == 0) {
        pcVar1 = *(code **)(*in_ECX + 0x314);
        guard_check_icall(local_20,local_18.left,local_18.top,local_18.right,local_18.bottom,
                          in_ECX + 0x47,0);
        (*pcVar1)();
        in_ECX = local_1c;
      }
      local_1c = (int *)0x0;
    }
  }
  else {
    if (((param_2[2] == 0) && (param_2[5] == 0)) || (param_6 != 0)) {
      if (param_2[1] == 0) goto LAB_1010d053;
      goto LAB_1010d065;
    }
    pcVar1 = *(code **)(*in_ECX + 0x314);
    guard_check_icall(local_20,local_18.left,local_18.top,local_18.right,local_18.bottom,
                      in_ECX + 0x49,0);
    in_ECX = local_1c;
    (*pcVar1)();
    local_1c = (int *)0x1;
  }
  if (param_7 == -1) {
    pcVar1 = *(code **)(*param_2 + 0x14);
    guard_check_icall(param_4,param_5);
    param_7 = (*pcVar1)();
    if (param_7 == -1) goto LAB_1010d110;
  }
  FUN_100796e6(&local_28);
  pcVar1 = *(code **)(*in_ECX + 0x304);
  guard_check_icall(local_20,param_2,param_7,local_1c,param_6,
                    ((local_18.right - local_28) - local_18.left) / 2 + local_18.left,
                    ((local_18.bottom - local_24) - local_18.top) / 2 + local_18.top);
  (*pcVar1)();
LAB_1010d110:
  if ((((param_2[1] != 0) || (param_2[2] != 0)) || (param_2[5] != 0)) && (param_6 == 0)) {
    pAVar2 = GetGlobalData();
    CDC::Draw3dRect(local_20,&local_18,*(ulong *)(pAVar2 + 0x60),*(ulong *)(pAVar2 + 0x60));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

