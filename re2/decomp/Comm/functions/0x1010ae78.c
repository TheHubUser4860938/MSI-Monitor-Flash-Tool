// rea decompile_all
// name: FUN_1010ae78
// address: 0x1010ae78
// body: available
// range: 0x1010ae78-0x1010b01c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1010b018 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_1010ae78(undefined4 param_1,undefined4 param_2,uint param_3,int *param_4,int *param_5,
            undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  HWND hWnd;
  CWnd *in_ECX;
  undefined4 *puVar4;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  HWND local_8;
  
  if ((param_5 == (int *)0x0) &&
     ((iVar2 = FUN_10016f44(), iVar2 == 0 ||
      (param_5 = *(int **)(iVar2 + 0x20), param_5 == (int *)0x0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  pcVar1 = *(code **)(*param_5 + 0x178);
  guard_check_icall(1);
  (*pcVar1)();
  local_30 = 0;
  local_34 = param_1;
  local_40 = *param_4;
  local_44 = param_4[1];
  local_38 = param_2;
  local_3c = param_3;
  local_48 = param_4[2] - local_40;
  local_4c = param_4[3] - local_44;
  local_50 = param_5[8];
  local_54 = 0;
  pAVar3 = AfxGetModuleState();
  puVar4 = &local_5c;
  local_58 = *(undefined4 *)(pAVar3 + 8);
  local_5c = param_6;
  pcVar1 = *(code **)(*(int *)in_ECX + 100);
  guard_check_icall(puVar4);
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x120);
    guard_check_icall(puVar4);
    (*pcVar1)();
  }
  else {
    local_2c = local_34;
    local_28 = local_38;
    local_24 = local_58;
    local_20 = local_40;
    local_1c = local_44;
    local_18 = local_48;
    local_14 = local_4c;
    local_10 = local_3c & 0xeeffffff;
    local_c = local_5c;
    FUN_1001bd03(in_ECX);
    hWnd = (HWND)SendMessageW((HWND)param_5[0x48],0x220,0,(LPARAM)&local_2c);
    local_8 = hWnd;
    iVar2 = FUN_1001c053();
    if (iVar2 == 0) {
      pcVar1 = *(code **)(*(int *)in_ECX + 0x120);
      guard_check_icall();
      (*pcVar1)();
      hWnd = local_8;
    }
    if (hWnd != (HWND)0x0) {
      if ((local_3c & 0x10000000) != 0) {
        BringWindowToTop(hWnd);
        if ((local_3c & 0x20000000) == 0) {
          if ((local_3c & 0x1000000) == 0) {
            iVar2 = 1;
          }
          else {
            iVar2 = 3;
          }
        }
        else {
          iVar2 = 2;
        }
        CWnd::ShowWindow(in_ECX,iVar2);
        FUN_1010b443(in_ECX);
        SendMessageW((HWND)param_5[0x48],0x234,0,0);
      }
      return 1;
    }
  }
  return 0;
}

