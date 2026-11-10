// rea decompile_all
// name: FUN_10048b40
// address: 0x10048b40
// body: available
// range: 0x10048b40-0x10048c87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10048b40(undefined4 *param_1,LPCWSTR param_2)

{
  char cVar1;
  undefined4 *puVar2;
  LPCWSTR lpWideCharStr;
  int iVar3;
  char *pcVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  undefined4 uVar6;
  char local_2814 [10240];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c4242;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[5] = 0xf;
  param_1[4] = 0;
  puVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  *(undefined1 *)puVar2 = 0;
  local_8 = 0;
  uVar6 = 1;
  param_1[4] = 0;
  puVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  *(undefined1 *)puVar2 = 0;
  _memset(local_2814,0,0x2800);
  lpWideCharStr = param_2;
  if (7 < *(uint *)(param_2 + 10)) {
    lpWideCharStr = *(LPCWSTR *)param_2;
  }
  iVar3 = WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  uVar5 = extraout_EDX;
  if (iVar3 != 0) {
    if (7 < *(uint *)(param_2 + 10)) {
      param_2 = *(LPCWSTR *)param_2;
    }
    WideCharToMultiByte(0xfde9,0,param_2,-1,local_2814,iVar3,(LPCSTR)0x0,(LPBOOL)0x0);
    if (local_2814[0] == '\0') {
      iVar3 = 0;
    }
    else {
      pcVar4 = local_2814;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar3 = (int)pcVar4 - (int)(local_2814 + 1);
    }
    FUN_1000aa60(local_2814,iVar3);
    uVar5 = extraout_EDX_00;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,uVar5,param_1,uVar6);
  return;
}

