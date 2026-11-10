// rea decompile_all
// name: FUN_10045730
// address: 0x10045730
// body: available
// range: 0x10045730-0x10045816 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10045730(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  char *in_ECX;
  char *_Buf;
  char *_MaxCount;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(in_ECX + 0x10);
  if ((uVar1 != 0) && (param_3 <= uVar1)) {
    _MaxCount = (char *)(uVar1 + (1 - param_3));
    _Buf = in_ECX;
    if (0xf < *(uint *)(in_ECX + 0x14)) {
      _Buf = *(char **)in_ECX;
    }
    while ((_MaxCount != (char *)0x0 &&
           (piVar5 = _memchr(_Buf,(int)(char)*param_1,(size_t)_MaxCount), piVar3 = piVar5,
           piVar4 = param_1, uVar1 = param_3, piVar5 != (int *)0x0))) {
      while (uVar2 = uVar1 - 4, 3 < uVar1) {
        if (*piVar3 != *piVar4) goto LAB_100457b6;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
        uVar1 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_100457f3:
        if (0xf < *(uint *)(in_ECX + 0x14)) {
          in_ECX = *(char **)in_ECX;
        }
        return (int)piVar5 - (int)in_ECX;
      }
LAB_100457b6:
      if (((char)*piVar3 == (char)*piVar4) &&
         ((uVar2 == 0xfffffffd ||
          ((*(char *)((int)piVar3 + 1) == *(char *)((int)piVar4 + 1) &&
           ((uVar2 == 0xfffffffe ||
            ((*(char *)((int)piVar3 + 2) == *(char *)((int)piVar4 + 2) &&
             ((uVar2 == 0xffffffff || (*(char *)((int)piVar3 + 3) == *(char *)((int)piVar4 + 3))))))
            ))))))) goto LAB_100457f3;
      _MaxCount = _Buf + (int)(_MaxCount + (-1 - (int)piVar5));
      _Buf = (char *)((int)piVar5 + 1);
    }
  }
  return -1;
}

