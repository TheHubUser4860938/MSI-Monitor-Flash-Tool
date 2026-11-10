// rea decompile_all
// name: __ungetwc_nolock
// address: 0x57acda
// body: available
// range: 0x57acda-0x57ad8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __ungetwc_nolock
   
   Library: Visual Studio 2015 Release */

wint_t __cdecl __ungetwc_nolock(wint_t _Ch,FILE *_File)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined2 in_stack_00000006;
  
  uVar1 = 0xffff;
  if (_Ch == 0xffff) {
    uVar1 = 0xffff;
  }
  else if (((_File->_flag & 1U) != 0) ||
          ((((uint)_File->_flag >> 2 & 1) != 0 && (((uint)_File->_flag >> 1 & 1) == 0)))) {
    if (_File->_cnt == 0) {
      ___acrt_stdio_allocate_buffer_nolock(_File);
    }
    if (((uint)_File->_flag >> 0xc & 1) == 0) {
      iVar2 = __fileno(_File);
      if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
        puVar4 = &DAT_0060d298;
      }
      else {
        iVar2 = __fileno(_File);
        uVar3 = __fileno(_File);
        puVar4 = (undefined *)((uVar3 & 0x3f) * 0x30 + (&DAT_006190a0)[iVar2 >> 6]);
      }
      if ((puVar4[0x28] & 0x80) != 0) {
        uVar1 = ungetwc_text_mode_nolock(__Ch,_File);
        return uVar1;
      }
    }
    uVar1 = ungetwc_binary_mode_nolock(__Ch,_File);
  }
  return uVar1;
}

