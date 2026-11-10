// rea decompile_all
// name: FUN_10011ce0
// address: 0x10011ce0
// body: available
// range: 0x10011ce0-0x10011d9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10011ce0(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  wchar_t *_Source;
  int *piVar4;
  wchar_t *_Dest;
  
  *param_1 = param_2[1];
  if ((uint)param_2[1] < 0x201) {
    piVar4 = *(int **)*param_2;
    if (piVar4 != (int *)*param_2) {
      _Dest = (wchar_t *)(param_1 + 0x203);
      do {
        param_1 = param_1 + 1;
        *param_1 = piVar4[4];
        *(int *)(_Dest + -4) = piVar4[5];
        _Source = (wchar_t *)(piVar4 + 8);
        if (7 < (uint)piVar4[0xd]) {
          _Source = *(wchar_t **)_Source;
        }
        _wcsncpy(_Dest,_Source,0x104);
        *(int *)(_Dest + -2) = piVar4[6];
        if (*(char *)((int)piVar4 + 0xd) == '\0') {
          piVar2 = (int *)piVar4[2];
          if (*(char *)((int)piVar2 + 0xd) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar2 + 0xd);
              piVar4 = piVar2;
              piVar2 = (int *)*piVar2;
            }
          }
          else {
            cVar1 = *(char *)(piVar4[1] + 0xd);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
            while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
              cVar1 = *(char *)(piVar4[1] + 0xd);
              piVar3 = (int *)piVar4[1];
              piVar2 = piVar4;
            }
          }
        }
        _Dest = _Dest + 0x108;
      } while (piVar4 != (int *)*param_2);
    }
    return 1;
  }
  return 0;
}

