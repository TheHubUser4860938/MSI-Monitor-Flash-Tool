// rea decompile_all
// name: __read_nolock
// address: 0x1018b9c9
// body: available
// range: 0x1018b9c9-0x1018bd7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __read_nolock
   
   Library: Visual Studio 2015 Release */

int __cdecl __read_nolock(int _FileHandle,void *_DstBuf,uint _MaxCharCount)

{
  ulong *puVar1;
  int *piVar2;
  wchar_t *pwVar3;
  int iVar4;
  BOOL BVar5;
  DWORD DVar6;
  uint uVar7;
  int unaff_ESI;
  wchar_t *_Memory;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  DWORD local_2c;
  wchar_t *local_28;
  uint local_24;
  HANDLE local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  wchar_t *local_c;
  char local_6;
  byte local_5;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    return -1;
  }
  if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1020db28)) {
    local_18 = 1;
    iVar8 = _FileHandle >> 6;
    local_1c = (_FileHandle & 0x3fU) * 0x30;
    iVar4 = (&DAT_1020d928)[iVar8];
    local_5 = *(byte *)(local_1c + 0x28 + iVar4);
    local_14 = iVar8;
    if ((local_5 & 1) != 0) {
      if (_MaxCharCount < 0x80000000) {
        if ((_MaxCharCount == 0) || ((local_5 & 2) != 0)) {
          return 0;
        }
        if (_DstBuf != (void *)0x0) {
          local_20 = *(HANDLE *)(local_1c + 0x18 + iVar4);
          local_5 = *(char *)(local_1c + 0x29 + iVar4);
          if (local_5 == '\x01') {
            if ((~(byte)_MaxCharCount & 1) == 0) goto LAB_1018bab2;
            local_10 = 4;
            if (3 < _MaxCharCount >> 1) {
              local_10 = _MaxCharCount >> 1;
            }
            pwVar3 = (wchar_t *)__malloc_base(local_10);
            FID_conflict__free((void *)0x0);
            FID_conflict__free((void *)0x0);
            local_c = pwVar3;
            if (pwVar3 != (wchar_t *)0x0) {
              lVar10 = __lseeki64_nolock(_FileHandle,(ulonglong)local_18 << 0x20,unaff_ESI);
              iVar4 = (&DAT_1020d928)[iVar8];
              *(int *)(local_1c + 0x20 + iVar4) = (int)lVar10;
              *(int *)(local_1c + 0x24 + iVar4) = (int)((ulonglong)lVar10 >> 0x20);
              _Memory = pwVar3;
              goto LAB_1018bb43;
            }
            piVar2 = __errno();
            *piVar2 = 0xc;
            puVar1 = ___doserrno();
            *puVar1 = 8;
          }
          else if ((local_5 == '\x02') && ((~_MaxCharCount & 1) == 0)) {
LAB_1018bab2:
            puVar1 = ___doserrno();
            *puVar1 = 0;
            piVar2 = __errno();
            *piVar2 = 0x16;
            FUN_1016ec41();
            pwVar3 = (wchar_t *)0x0;
          }
          else {
            local_10 = _MaxCharCount;
            local_c = _DstBuf;
            pwVar3 = _DstBuf;
            _Memory = (wchar_t *)0x0;
LAB_1018bb43:
            uVar9 = 0;
            local_24 = (&DAT_1020d928)[local_14];
            uVar7 = local_10;
            if ((((*(byte *)(local_1c + 0x28 + local_24) & 0x48) != 0) &&
                (local_6 = *(char *)(local_1c + 0x2a + local_24), local_6 != '\n')) &&
               (local_10 != 0)) {
              *(char *)pwVar3 = local_6;
              local_c = (wchar_t *)((int)pwVar3 + 1);
              uVar7 = local_10 - 1;
              *(undefined1 *)(local_1c + 0x2a + (&DAT_1020d928)[local_14]) = 10;
              uVar9 = local_18;
              if (((local_5 != '\0') &&
                  (local_6 = *(char *)(local_1c + 0x2b + (&DAT_1020d928)[local_14]), local_6 != '\n'
                  )) && (uVar7 != 0)) {
                uVar9 = 2;
                *(char *)local_c = local_6;
                local_c = pwVar3 + 1;
                uVar7 = local_10 - 2;
                *(undefined1 *)(local_1c + 0x2b + (&DAT_1020d928)[local_14]) = 10;
                if (((local_5 == (char)local_18) &&
                    (local_6 = *(char *)(local_1c + 0x2c + (&DAT_1020d928)[local_14]),
                    local_6 != '\n')) && (uVar7 != 0)) {
                  uVar9 = 3;
                  *(char *)local_c = local_6;
                  local_c = (wchar_t *)((int)pwVar3 + 3);
                  *(undefined1 *)(local_1c + 0x2c + (&DAT_1020d928)[local_14]) = 10;
                  uVar7 = local_10 - 3;
                }
              }
            }
            local_10 = uVar7;
            local_28 = pwVar3;
            iVar4 = __isatty(_FileHandle);
            pwVar3 = _Memory;
            if (((iVar4 == 0) ||
                ((*(byte *)(local_1c + 0x28 + (&DAT_1020d928)[local_14]) & 0x80) == 0)) ||
               (BVar5 = GetConsoleMode(local_20,&local_2c), BVar5 == 0)) {
              local_18 = local_18 & 0xffffff00;
LAB_1018bcb1:
              BVar5 = ReadFile(local_20,local_c,local_10,&local_24,(LPOVERLAPPED)0x0);
              if ((BVar5 != 0) && (uVar7 = local_24, local_24 <= _MaxCharCount)) {
LAB_1018bcd6:
                uVar9 = uVar9 + uVar7;
                if ((*(byte *)(local_1c + 0x28 + (&DAT_1020d928)[local_14]) & 0x80) != 0) {
                  if (local_5 == '\x02') {
                    if ((char)local_18 == '\0') {
                      uVar9 = translate_text_mode_nolock<wchar_t>(_FileHandle,local_28,uVar9 >> 1);
                    }
                    else {
                      uVar9 = translate_utf16_from_console_nolock(_FileHandle,local_28,uVar9 >> 1);
                    }
                  }
                  else {
                    uVar9 = translate_ansi_or_utf8_nolock
                                      (_FileHandle,(char *)local_c,uVar9,_DstBuf,_MaxCharCount >> 1)
                    ;
                  }
                }
                goto LAB_1018bc93;
              }
              DVar6 = GetLastError();
              if (DVar6 != 5) {
                if (DVar6 == 0x6d) {
                  uVar9 = 0;
                  goto LAB_1018bc93;
                }
                goto LAB_1018bc89;
              }
              piVar2 = __errno();
              *piVar2 = 9;
              puVar1 = ___doserrno();
              *puVar1 = 5;
            }
            else {
              if (local_5 != '\x02') goto LAB_1018bcb1;
              BVar5 = ReadConsoleW(local_20,local_c,local_10 >> 1,&local_24,
                                   (PCONSOLE_READCONSOLE_CONTROL)0x0);
              if (BVar5 != 0) {
                uVar7 = local_24 * 2;
                goto LAB_1018bcd6;
              }
              DVar6 = GetLastError();
LAB_1018bc89:
              ___acrt_errno_map_os_error(DVar6);
            }
          }
          uVar9 = 0xffffffff;
          _Memory = pwVar3;
LAB_1018bc93:
          FID_conflict__free(_Memory);
          return uVar9;
        }
      }
      puVar1 = ___doserrno();
      *puVar1 = 0;
      piVar2 = __errno();
      *piVar2 = 0x16;
      goto LAB_1018bd70;
    }
  }
  puVar1 = ___doserrno();
  *puVar1 = 0;
  piVar2 = __errno();
  *piVar2 = 9;
LAB_1018bd70:
  FUN_1016ec41();
  return -1;
}

