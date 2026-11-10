// rea decompile_all
// name: FUN_1000b550
// address: 0x1000b550
// body: available
// range: 0x1000b550-0x1000b5cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b550(void)

{
  char cVar1;
  int *piVar2;
  int *_Memory;
  void **ppvVar3;
  uint uVar4;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_101c0ff0;
  uVar4 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  cVar1 = *(char *)((int)*(int **)(*in_ECX + 4) + 0xd);
  ppvVar3 = &local_10;
  _Memory = *(int **)(*in_ECX + 4);
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar3, cVar1 == '\0') {
    FUN_1000baf0(_Memory[2]);
    piVar2 = (int *)*_Memory;
    FUN_10048130(uVar4);
    FID_conflict__free(_Memory);
    ppvVar3 = ExceptionList;
    _Memory = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  *(int *)(*in_ECX + 4) = *in_ECX;
  *(int *)*in_ECX = *in_ECX;
  *(int *)(*in_ECX + 8) = *in_ECX;
  in_ECX[1] = 0;
  ExceptionList = local_10;
  return;
}

