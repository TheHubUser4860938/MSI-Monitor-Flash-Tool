// rea decompile_all
// name: __setmode_nolock
// address: 0x101bff3c
// body: available
// range: 0x101bff3c-0x101c000c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __setmode_nolock
   
   Library: Visual Studio 2015 Release */

int __cdecl __setmode_nolock(int _FileHandle,int _Mode)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = _FileHandle >> 6;
  iVar4 = (_FileHandle & 0x3fU) * 0x30;
  iVar3 = (&DAT_102498c8)[iVar5];
  bVar1 = *(byte *)(iVar3 + 0x28 + iVar4);
  cVar2 = *(char *)(iVar3 + 0x29 + iVar4);
  if (_Mode == 0x4000) {
    *(byte *)(iVar3 + 0x28 + iVar4) = bVar1 | 0x80;
    *(undefined1 *)((&DAT_102498c8)[iVar5] + 0x29 + iVar4) = 0;
  }
  else if (_Mode == 0x8000) {
    *(byte *)(iVar3 + 0x28 + iVar4) = bVar1 & 0x7f;
  }
  else if ((_Mode == 0x10000) || (_Mode == 0x20000)) {
    *(byte *)(iVar3 + 0x28 + iVar4) = bVar1 | 0x80;
    *(undefined1 *)((&DAT_102498c8)[iVar5] + 0x29 + iVar4) = 2;
  }
  else if (_Mode == 0x40000) {
    *(byte *)(iVar3 + 0x28 + iVar4) = bVar1 | 0x80;
    *(undefined1 *)((&DAT_102498c8)[iVar5] + 0x29 + iVar4) = 1;
  }
  if ((bVar1 & 0x80) == 0) {
    iVar3 = 0x8000;
  }
  else if (cVar2 == '\0') {
    iVar3 = 0x4000;
  }
  else {
    iVar3 = ((cVar2 != '\x01') - 1 & 0x30000) + 0x10000;
  }
  return iVar3;
}

