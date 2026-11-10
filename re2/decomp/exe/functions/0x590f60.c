// rea decompile_all
// name: _strncmp
// address: 0x590f60
// body: available
// range: 0x590f60-0x590fca inclusive
// range: 0x590fd0-0x590fd7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _strncmp
   
   Library: Visual Studio 2015 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if (_MaxCount != 0) {
    iVar3 = (int)_Str1 - (int)_Str2;
    do {
      if (((uint)_Str2 & 3) == 0) {
        while ((((uint)((int)_Str2 + iVar3) & 0xfff) < 0xffd &&
               (uVar2 = *(uint *)((int)_Str2 + iVar3), uVar2 == *(uint *)_Str2))) {
          bVar4 = _MaxCount < 4;
          _MaxCount = _MaxCount - 4;
          if (bVar4 || _MaxCount == 0) {
            return 0;
          }
          _Str2 = (char *)((int)_Str2 + 4);
          if ((~uVar2 & uVar2 + 0xfefefeff & 0x80808080) != 0) {
            return 0;
          }
        }
      }
      bVar1 = *(byte *)((int)_Str2 + iVar3);
      if (bVar1 != (byte)*(uint *)_Str2) {
        return -(uint)(bVar1 < (byte)*(uint *)_Str2) | 1;
      }
      if (bVar1 == 0) {
        return 0;
      }
      _Str2 = (char *)((int)_Str2 + 1);
      bVar4 = _MaxCount != 0;
      _MaxCount = _MaxCount - 1;
    } while (bVar4 && _MaxCount != 0);
  }
  return 0;
}

