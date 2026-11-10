// rea decompile_all
// name: common_ftell_nolock<__int64>
// address: 0x1017e8fc
// body: available
// range: 0x1017e8fc-0x1017ea90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __int64 __cdecl common_ftell_nolock<__int64>(class __crt_stdio_stream)
   
   Library: Visual Studio 2015 Release */

__int64 __cdecl common_ftell_nolock<__int64>(FILE *param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int unaff_EDI;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  longlong lVar11;
  __int64 _Var12;
  longlong lVar13;
  
  if (param_1 == (FILE *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1016ec41();
    return -1;
  }
  uVar3 = __fileno(param_1);
  if ((int)param_1->_base < 0) {
    param_1->_base = (char *)0x0;
  }
  lVar11 = __lseeki64(uVar3,0x100000000,unaff_EDI);
  if (((int)((ulonglong)lVar11 >> 0x20) != 0 && -1 < lVar11) || (-1 < lVar11)) {
    if ((param_1->_flag & 0xc0U) == 0) {
      return lVar11 - (int)param_1->_base;
    }
    iVar4 = (int)uVar3 >> 6;
    iVar5 = (uVar3 & 0x3f) * 0x30;
    cVar1 = *(char *)(iVar5 + 0x29 + (&DAT_1020d928)[iVar4]);
    uVar3 = (int)param_1->_ptr - param_1->_cnt;
    iVar7 = (int)uVar3 >> 0x1f;
    if ((param_1->_flag & 3U) == 0) {
      if (((uint)param_1->_flag >> 2 & 1) == 0) {
        piVar2 = __errno();
        *piVar2 = 0x16;
        goto LAB_1017ea49;
      }
    }
    else {
      if ((cVar1 == '\x01') && ((*(byte *)(iVar5 + 0x2d + (&DAT_1020d928)[iVar4]) & 2) != 0)) {
        _Var12 = common_ftell_translated_utf8_nolock(param_1,lVar11);
        return _Var12;
      }
      if (((*(byte *)(iVar5 + 0x28 + (&DAT_1020d928)[iVar4]) & 0x80) != 0) &&
         (uVar8 = ~-(uint)(param_1->_ptr < (char *)param_1->_cnt) &
                  (int)param_1->_ptr - param_1->_cnt, uVar8 != 0)) {
        pcVar6 = (char *)param_1->_cnt;
        uVar9 = 0;
        do {
          if (*pcVar6 == '\n') {
            bVar10 = 0xfffffffe < uVar3;
            uVar3 = uVar3 + 1;
            iVar7 = iVar7 + (uint)bVar10;
          }
          pcVar6 = pcVar6 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar8);
      }
    }
    lVar13 = CONCAT44(iVar7,uVar3);
    if (lVar11 != 0) {
      if ((param_1->_flag & 1U) == 0) {
        if (cVar1 == '\x01') {
          lVar13 = __alldiv(uVar3,iVar7,2,0);
        }
        lVar13 = lVar11 + lVar13;
      }
      else {
        lVar13 = common_ftell_read_mode_nolock(param_1,lVar11,uVar3,iVar7);
      }
    }
  }
  else {
LAB_1017ea49:
    lVar13 = -1;
  }
  return lVar13;
}

