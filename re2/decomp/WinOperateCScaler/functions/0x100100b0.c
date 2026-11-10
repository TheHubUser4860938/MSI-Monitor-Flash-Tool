// rea decompile_all
// name: FUN_100100b0
// address: 0x100100b0
// body: available
// range: 0x100100b0-0x1001014e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100100b0(char *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  int iVar2;
  undefined4 *in_ECX;
  undefined4 *puVar3;
  void *_Buf;
  uint uVar4;
  size_t _MaxCount;
  
  if ((param_3 == 0) && (param_2 <= (uint)in_ECX[4])) {
    return param_2;
  }
  if ((param_2 < (uint)in_ECX[4]) && (uVar4 = in_ECX[4] - param_2, param_3 <= uVar4)) {
    _MaxCount = uVar4 + (1 - param_3);
    puVar3 = in_ECX;
    if (0xf < (uint)in_ECX[5]) {
      puVar3 = (undefined4 *)*in_ECX;
    }
    _Buf = (void *)((int)puVar3 + param_2);
    while (_MaxCount != 0) {
      pvVar1 = _memchr(_Buf,(int)*param_1,_MaxCount);
      if (pvVar1 == (void *)0x0) {
        return 0xffffffff;
      }
      iVar2 = FUN_1000fcb0(pvVar1,param_1,param_3);
      if (iVar2 == 0) {
        if (0xf < (uint)in_ECX[5]) {
          in_ECX = (undefined4 *)*in_ECX;
        }
        return (int)pvVar1 - (int)in_ECX;
      }
      _MaxCount = (int)_Buf + _MaxCount + (-1 - (int)pvVar1);
      _Buf = (void *)((int)pvVar1 + 1);
    }
  }
  return 0xffffffff;
}

