// rea decompile_all
// name: FUN_10046750
// address: 0x10046750
// body: available
// range: 0x10046750-0x100468ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10046750(void)

{
  WCHAR WVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int iVar4;
  WCHAR *pWVar5;
  undefined4 extraout_ECX;
  HMODULE in_EDX;
  undefined4 local_254;
  undefined1 local_250 [52];
  WCHAR local_21c;
  undefined1 local_21a [518];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c3fd8;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _memset(&local_21c,0,0x208);
  puVar3 = in_ECX + 1;
  in_ECX[6] = 7;
  in_ECX[5] = 0;
  puVar2 = puVar3;
  if (7 < (uint)in_ECX[6]) {
    puVar2 = (undefined4 *)*puVar3;
  }
  *(undefined2 *)puVar2 = 0;
  puVar2 = in_ECX + 7;
  *in_ECX = CCpRsString::vftable;
  in_ECX[0xc] = 0xf;
  in_ECX[0xb] = 0;
  if (0xf < (uint)in_ECX[0xc]) {
    puVar2 = (undefined4 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  local_8 = 0;
  GetModuleFileNameW(in_EDX,&local_21c,0x104);
  if (local_21c == L'\0') {
    iVar4 = 0;
  }
  else {
    pWVar5 = &local_21c;
    do {
      WVar1 = *pWVar5;
      pWVar5 = pWVar5 + 1;
    } while (WVar1 != L'\0');
    iVar4 = (int)pWVar5 - (int)local_21a >> 1;
  }
  FUN_10045540(&local_21c,iVar4);
  local_254 = 0x5c;
  iVar4 = FUN_100453c0(&local_254,extraout_ECX,1);
  puVar2 = (undefined4 *)FUN_100483e0(local_250,iVar4 + 1);
  if (in_ECX != puVar2) {
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = puVar2 + 1;
    }
    if (puVar3 != puVar2) {
      if (7 < (uint)in_ECX[6]) {
        FUN_1000b5d0(*puVar3,in_ECX[6] + 1);
      }
      in_ECX[6] = 7;
      in_ECX[5] = 0;
      if (7 < (uint)in_ECX[6]) {
        puVar3 = (undefined4 *)*puVar3;
      }
      *(undefined2 *)puVar3 = 0;
      FUN_10045640(puVar2);
    }
  }
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

