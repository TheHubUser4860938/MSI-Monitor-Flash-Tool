// rea decompile_all
// name: __CxxThrowException@8
// address: 0x574396
// body: available
// range: 0x574396-0x574403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __CxxThrowException@8
   
   Library: Visual Studio 2015 Release */

void __CxxThrowException_8(int *param_1,byte *param_2)

{
  code *pcVar1;
  int iVar2;
  DWORD *pDVar3;
  DWORD *pDVar4;
  DWORD local_24 [4];
  DWORD local_14;
  ULONG_PTR local_10;
  int *local_c;
  byte *local_8;
  
  pDVar3 = &DAT_005de900;
  pDVar4 = local_24;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pDVar4 = *pDVar3;
    pDVar3 = pDVar3 + 1;
    pDVar4 = pDVar4 + 1;
  }
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0x10) != 0)) {
    iVar2 = *(int *)(*param_1 + -4);
    pcVar1 = *(code **)(iVar2 + 0x20);
    param_2 = *(byte **)(iVar2 + 0x18);
    guard_check_icall((int *)(*param_1 + -4));
    (*pcVar1)();
  }
  local_c = param_1;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 8) != 0)) {
    local_10 = 0x1994000;
  }
  local_8 = param_2;
  RaiseException(local_24[0],local_24[1],local_14,&local_10);
  return;
}

