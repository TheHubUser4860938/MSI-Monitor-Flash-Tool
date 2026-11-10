// rea decompile_all
// name: initialize_inherited_file_handles_nolock
// address: 0x58d512
// body: available
// range: 0x58d512-0x58d5c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl initialize_inherited_file_handles_nolock(void)
   
   Library: Visual Studio 2015 Release */

void __cdecl initialize_inherited_file_handles_nolock(void)

{
  HANDLE hFile;
  DWORD DVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  _STARTUPINFOW local_4c;
  byte *local_8;
  
  GetStartupInfoW(&local_4c);
  if ((local_4c.cbReserved2 != 0) && ((uint *)local_4c.lpReserved2 != (uint *)0x0)) {
    uVar4 = *(uint *)local_4c.lpReserved2;
    puVar3 = (uint *)((int)local_4c.lpReserved2 + 4);
    local_8 = (byte *)((int)puVar3 + uVar4);
    if (0x1fff < (int)uVar4) {
      uVar4 = 0x2000;
    }
    ___acrt_lowio_ensure_fh_exists(uVar4);
    if ((int)DAT_006192a0 < (int)uVar4) {
      uVar4 = DAT_006192a0;
    }
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        hFile = *(HANDLE *)local_8;
        if ((((hFile != (HANDLE)0xffffffff) && (hFile != (HANDLE)0xfffffffe)) &&
            ((*puVar3 & 1) != 0)) &&
           (((*puVar3 & 8) != 0 || (DVar1 = GetFileType(hFile), DVar1 != 0)))) {
          iVar2 = (uVar5 & 0x3f) * 0x30 + (&DAT_006190a0)[(int)uVar5 >> 6];
          *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)local_8;
          *(byte *)(iVar2 + 0x28) = (byte)*puVar3;
        }
        uVar5 = uVar5 + 1;
        local_8 = local_8 + 4;
        puVar3 = (uint *)((int)puVar3 + 1);
      } while (uVar5 != uVar4);
    }
  }
  return;
}

