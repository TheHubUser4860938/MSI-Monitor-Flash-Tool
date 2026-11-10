// rea decompile_all
// name: common_gmtime_s<__int64>
// address: 0x101b4a8c
// body: available
// range: 0x101b4a8c-0x101b4bd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl common_gmtime_s<__int64>(struct tm * const,__int64 const * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_gmtime_s<__int64>(tm *param_1,__int64 *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  tm *ptVar8;
  uint local_10;
  uint local_c;
  bool local_5;
  
  if (param_1 == (tm *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1019ab61();
  }
  else {
    ptVar8 = param_1;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      ptVar8->tm_sec = -1;
      ptVar8 = (tm *)&ptVar8->tm_min;
    }
    if (param_2 == (__int64 *)0x0) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      FUN_1019ab61();
    }
    else {
      local_c = *(uint *)((int)param_2 + 4);
      local_10 = (uint)*param_2;
      if (((local_c < 0x80000000) || ((-2 < (int)local_c && (0xffff573f < local_10)))) &&
         (((int)local_c < 7 || (((int)local_c < 8 && (local_10 < 0x934126d0)))))) {
        local_5 = false;
        iVar5 = compute_year((__int64 *)&local_10,&local_5);
        uVar1 = local_10;
        param_1->tm_year = iVar5;
        iVar5 = __alldiv(local_10,local_c,0x15180,0);
        param_1->tm_yday = iVar5;
        uVar3 = (uint)((longlong)iVar5 * 0x15180);
        puVar6 = (undefined4 *)&DAT_10206820;
        uVar7 = uVar1 - uVar3;
        local_c = (local_c - (int)((ulonglong)((longlong)iVar5 * 0x15180) >> 0x20)) -
                  (uint)(uVar1 < uVar3);
        if (local_5 == false) {
          puVar6 = &DAT_102067ec;
        }
        iVar4 = 1;
        iVar5 = puVar6[1];
        while (iVar5 < param_1->tm_yday) {
          iVar4 = iVar4 + 1;
          iVar5 = puVar6[iVar4];
        }
        param_1->tm_mon = iVar4 + -1;
        param_1->tm_mday = param_1->tm_yday - puVar6[iVar4 + -1];
        iVar5 = __alldiv((int)*param_2,*(undefined4 *)((int)param_2 + 4),0x15180,0);
        uVar1 = local_c;
        param_1->tm_wday = (iVar5 + 4) % 7;
        iVar5 = __alldiv(uVar7,local_c,0xe10,0);
        param_1->tm_hour = iVar5;
        uVar3 = (uint)((longlong)iVar5 * 0xe10);
        iVar4 = uVar7 - uVar3;
        iVar5 = __alldiv(iVar4,(uVar1 - (int)((ulonglong)((longlong)iVar5 * 0xe10) >> 0x20)) -
                               (uint)(uVar7 < uVar3),0x3c,0);
        param_1->tm_isdst = 0;
        param_1->tm_min = iVar5;
        param_1->tm_sec = iVar4 + iVar5 * -0x3c;
        return 0;
      }
      piVar2 = __errno();
      *piVar2 = 0x16;
    }
  }
  return 0x16;
}

