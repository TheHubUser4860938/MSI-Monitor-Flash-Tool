// rea decompile_all
// name: common_ftell_read_mode_nolock
// address: 0x1018aa87
// body: available
// range: 0x1018aa87-0x1018ac0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __int64 __cdecl common_ftell_read_mode_nolock(class __crt_stdio_stream,__int64,__int64)
   
   Library: Visual Studio 2015 Release */

__int64 __cdecl
common_ftell_read_mode_nolock
          (FILE *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int unaff_ESI;
  char *pcVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  uint local_10;
  undefined4 local_c;
  
  lVar1 = CONCAT44(param_3,param_2);
  uVar2 = __fileno(param_1);
  local_c = 2;
  iVar3 = (uVar2 & 0x3f) * 0x30;
  if (*(char *)((&DAT_10211ab0)[(int)uVar2 >> 6] + 0x29 + iVar3) != '\x01') {
    local_c = 1;
  }
  pcVar5 = param_1->_base;
  if (pcVar5 != (char *)0x0) {
    uVar4 = (int)param_1->_ptr - param_1->_cnt;
    pcVar7 = pcVar5 + uVar4;
    iVar6 = ((int)uVar4 >> 0x1f) + ((int)pcVar5 >> 0x1f) + (uint)CARRY4(uVar4,(uint)pcVar5);
    if ((*(byte *)((&DAT_10211ab0)[(int)uVar2 >> 6] + 0x28 + iVar3) & 0x80) != 0) {
      lVar9 = __lseeki64(uVar2,0x200000000,unaff_ESI);
      if (lVar9 == lVar1) {
        local_10 = 0;
        uVar2 = ~-(uint)(pcVar7 + param_1->_cnt < (char *)param_1->_cnt) &
                (int)(pcVar7 + param_1->_cnt) - param_1->_cnt;
        if (uVar2 != 0) {
          pcVar5 = (char *)param_1->_cnt;
          do {
            if (*pcVar5 == '\n') {
              bVar8 = (char *)0xfffffffe < pcVar7;
              pcVar7 = pcVar7 + 1;
              iVar6 = iVar6 + (uint)bVar8;
            }
            pcVar5 = pcVar5 + 1;
            local_10 = local_10 + 1;
          } while (local_10 != uVar2);
        }
        bVar8 = ((uint)param_1->_flag >> 5 & 1) == 0;
      }
      else {
        lVar9 = __lseeki64(uVar2,(ulonglong)param_3,unaff_ESI);
        if (lVar9 == -1) {
          return -1;
        }
        if (((iVar6 < 1) &&
            (((iVar6 < 0 || (pcVar7 < (char *)0x201)) && (((uint)param_1->_flag >> 6 & 1) != 0))))
           && (((uint)param_1->_flag >> 8 & 1) == 0)) {
          pcVar7 = (char *)0x200;
          iVar6 = 0;
        }
        else {
          pcVar7 = (char *)param_1->_bufsiz;
          iVar6 = (int)pcVar7 >> 0x1f;
        }
        bVar8 = (*(byte *)((&DAT_10211ab0)[(int)uVar2 >> 6] + 0x28 + iVar3) & 4) == 0;
      }
      if (!bVar8) {
        bVar8 = (char *)0xfffffffe < pcVar7;
        pcVar7 = pcVar7 + 1;
        iVar6 = iVar6 + (uint)bVar8;
      }
    }
    lVar9 = __alldiv(pcVar7,iVar6,local_c,0);
    lVar10 = __alldiv(param_4,param_5,local_c,0);
    lVar1 = (lVar10 - lVar9) + lVar1;
  }
  return lVar1;
}

