// rea decompile_all
// name: __write_nolock
// address: 0x10186de2
// body: available
// range: 0x10186de2-0x10186fed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __write_nolock
   
   Library: Visual Studio 2015 Release */

int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  DWORD DVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  int *piVar5;
  DWORD *pDVar6;
  BOOL BVar7;
  int iVar8;
  int unaff_EBX;
  int iVar9;
  DWORD local_18 [3];
  uint local_c;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_c = _MaxCharCount;
  if (_MaxCharCount == 0) goto LAB_10186fde;
  if (_Buf == (void *)0x0) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_1016ec41();
    goto LAB_10186fde;
  }
  iVar9 = _FileHandle >> 6;
  iVar8 = (_FileHandle & 0x3fU) * 0x30;
  cVar2 = *(char *)((&DAT_1020d928)[iVar9] + 0x29 + iVar8);
  if (((cVar2 == '\x02') || (cVar2 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_1016ec41();
    goto LAB_10186fde;
  }
  if ((*(byte *)((&DAT_1020d928)[iVar9] + 0x28 + iVar8) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EBX);
  }
  bVar3 = write_requires_double_translation_nolock(_FileHandle);
  if (bVar3) {
    if (cVar2 == '\0') {
      pDVar6 = (DWORD *)write_double_translated_ansi_nolock
                                  ((int)local_18,(char *)_FileHandle,(uint)_Buf);
      goto LAB_10186f6a;
    }
    if ((byte)(cVar2 - 1U) < 2) {
      pDVar6 = (DWORD *)write_double_translated_unicode_nolock((char *)local_18,(uint)_Buf);
      goto LAB_10186f6a;
    }
  }
  else {
    if ((*(byte *)((&DAT_1020d928)[iVar9] + 0x28 + iVar8) & 0x80) == 0) {
      local_18[0] = 0;
      local_18[1] = 0;
      local_18[2] = 0;
      BVar7 = WriteFile(*(HANDLE *)((&DAT_1020d928)[iVar9] + 0x18 + iVar8),_Buf,local_c,local_18 + 1
                        ,(LPOVERLAPPED)0x0);
      if (BVar7 == 0) {
        local_18[0] = GetLastError();
      }
      pDVar6 = local_18;
    }
    else if (cVar2 == '\0') {
      pDVar6 = (DWORD *)write_text_ansi_nolock((int)local_18,(char *)_FileHandle,(uint)_Buf);
    }
    else if (cVar2 == '\x01') {
      pDVar6 = (DWORD *)write_text_utf8_nolock((int)local_18,(char *)_FileHandle,(uint)_Buf);
    }
    else {
      if (cVar2 != '\x02') goto LAB_10186fa5;
      pDVar6 = (DWORD *)write_text_utf16le_nolock((int)local_18,(char *)_FileHandle,(uint)_Buf);
    }
LAB_10186f6a:
    DVar1 = *pDVar6;
    if (pDVar6[1] != 0) goto LAB_10186fde;
    if (DVar1 != 0) {
      if (DVar1 == 5) {
        piVar5 = __errno();
        *piVar5 = 9;
        puVar4 = ___doserrno();
        *puVar4 = 5;
      }
      else {
        ___acrt_errno_map_os_error(DVar1);
      }
      goto LAB_10186fde;
    }
  }
LAB_10186fa5:
  if (((*(byte *)((&DAT_1020d928)[iVar9] + 0x28 + iVar8) & 0x40) == 0) || (*(char *)_Buf != '\x1a'))
  {
    piVar5 = __errno();
    *piVar5 = 0x1c;
    puVar4 = ___doserrno();
    *puVar4 = 0;
  }
LAB_10186fde:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}

