// rea decompile_all
// name: common_fseek_nolock
// address: 0x10172779
// body: available
// range: 0x10172779-0x10172851 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl common_fseek_nolock(class __crt_stdio_stream,__int64,int)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_fseek_nolock(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  int unaff_EDI;
  undefined8 uVar3;
  longlong lVar4;
  
  if (((uint)param_1[3] >> 0xd & 1) == 0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    return -1;
  }
  LOCK();
  param_1[3] = param_1[3] & 0xfffffff7;
  UNLOCK();
  bVar1 = common_fseek_binary_mode_read_only_fast_track_nolock(param_1,param_2,param_3,param_4);
  if (!bVar1) {
    if (param_4 == 1) {
      uVar3 = FUN_1017edbb(param_1);
      param_3 = param_3 + (int)((ulonglong)uVar3 >> 0x20) + (uint)CARRY4(param_2,(uint)uVar3);
      param_4 = 0;
    }
    ___acrt_stdio_flush_nolock(param_1);
    param_1[2] = 0;
    *param_1 = param_1[1];
    if (((uint)param_1[3] >> 2 & 1) == 0) {
      if ((((byte)param_1[3] & 0x41) == 0x41) && (((uint)param_1[3] >> 8 & 1) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      LOCK();
      param_1[3] = param_1[3] & 0xfffffffc;
      UNLOCK();
    }
    lVar4 = __lseeki64_nolock(param_1[4],CONCAT44(param_4,param_3),unaff_EDI);
    if (lVar4 == -1) {
      return -1;
    }
  }
  return 0;
}

