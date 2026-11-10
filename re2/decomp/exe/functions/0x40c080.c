// rea decompile_all
// name: FUN_0040c080
// address: 0x40c080
// body: available
// range: 0x40c080-0x40c0fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040c080(void *param_1,uint param_2,size_t param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  if ((param_3 != 0) && (uVar1 = in_ECX[4], param_2 < uVar1)) {
    puVar4 = in_ECX;
    if (0xf < (uint)in_ECX[5]) {
      puVar4 = (undefined4 *)*in_ECX;
    }
    puVar3 = in_ECX;
    if (0xf < (uint)in_ECX[5]) {
      puVar3 = (undefined4 *)*in_ECX;
    }
    for (pcVar5 = (char *)((int)puVar3 + param_2); pcVar5 < (char *)(uVar1 + (int)puVar4);
        pcVar5 = pcVar5 + 1) {
      if ((param_3 != 0) && (pvVar2 = _memchr(param_1,(int)*pcVar5,param_3), pvVar2 != (void *)0x0))
      {
        if (0xf < (uint)in_ECX[5]) {
          in_ECX = (undefined4 *)*in_ECX;
        }
        return (int)pcVar5 - (int)in_ECX;
      }
    }
  }
  return -1;
}

