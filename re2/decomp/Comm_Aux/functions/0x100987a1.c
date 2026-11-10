// rea decompile_all
// name: FUN_100987a1
// address: 0x100987a1
// body: available
// range: 0x100987a1-0x100988ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100987a1(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  WPARAM wParam;
  undefined4 uVar4;
  int *in_ECX;
  tagPOINT local_40;
  undefined4 local_38 [9];
  void *local_14;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_1020eec0) &&
     (FUN_1017f1aa(&DAT_1020eec0), DAT_1020eec0 == -1)) {
    uVar4 = FUN_10048e90();
    FUN_10034c30(uVar4);
    _atexit((_func_4879 *)&LAB_101aebda);
    FUN_1017f16b(&DAT_1020eec0);
  }
  iVar2 = in_ECX[0x342];
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x20) != 0)) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x20);
    }
    if (*param_2 == iVar2) {
      local_40.x = 0;
      local_40.y = 0;
      GetCursorPos(&local_40);
      ScreenToClient((HWND)in_ECX[8],&local_40);
      _memset(local_38,0,0x30);
      local_38[0] = 0x2c;
      pcVar1 = *(code **)(*in_ECX + 0x74);
      guard_check_icall(local_40.x,local_40.y,local_38);
      iVar2 = (*pcVar1)();
      if (((-1 < iVar2) && (local_14 != (void *)0x0)) && (local_14 != (void *)0xffffffff)) {
        FUN_100352a0(local_14);
        FID_conflict__free(local_14);
        param_2[3] = DAT_1020eebc;
        pAVar3 = GetGlobalData();
        if (pAVar3 == (AFX_GLOBAL_DATA *)0xfffffee4) {
          wParam = 0;
        }
        else {
          wParam = *(WPARAM *)(pAVar3 + 0x120);
        }
        SendMessageW(*(HWND *)(in_ECX[0x342] + 0x20),0x30,wParam,0);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

