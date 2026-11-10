// rea decompile_all
// name: ___acrt_lowio_create_handle_array
// address: 0x585ee3
// body: available
// range: 0x585ee3-0x585f5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_lowio_create_handle_array
   
   Library: Visual Studio 2015 Release */

undefined4 * ___acrt_lowio_create_handle_array(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)__calloc_base(0x40,0x30);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else if (puVar2 != puVar2 + 0x300) {
    puVar3 = puVar2 + 8;
    do {
      ___acrt_InitializeCriticalSectionEx_12(puVar3 + -8,4000,0);
      puVar3[-2] = 0xffffffff;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar1 = puVar3 + 4;
      puVar3[2] = 0xa0a0000;
      *(undefined1 *)(puVar3 + 3) = 10;
      *(byte *)((int)puVar3 + 0xd) = *(byte *)((int)puVar3 + 0xd) & 0xf8;
      *(undefined1 *)((int)puVar3 + 0xe) = 0;
      puVar3 = puVar3 + 0xc;
    } while (puVar1 != puVar2 + 0x300);
  }
  FID_conflict__free((void *)0x0);
  return puVar2;
}

